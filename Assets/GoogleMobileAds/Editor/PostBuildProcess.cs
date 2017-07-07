using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using System.Collections;
using System.IO;
using System.Collections.Generic;

public class PostBuildProcess
{
	internal static void CopyAndReplaceDirectory (string srcPath, string dstPath)
	{
		if (Directory.Exists (dstPath))
			Directory.Delete (dstPath);
		if (File.Exists (dstPath))
			File.Delete (dstPath);

		Directory.CreateDirectory (dstPath);

		foreach (var file in Directory.GetFiles(srcPath))
			File.Copy (file, Path.Combine (dstPath, Path.GetFileName (file)));

		foreach (var dir in Directory.GetDirectories(srcPath))
			CopyAndReplaceDirectory (dir, Path.Combine (dstPath, Path.GetFileName (dir)));
	}

	[PostProcessBuild]
	public static void OnPostProcessBuild (BuildTarget buildTarget, string path)
	{
		if (buildTarget == BuildTarget.iOS) {
			ProcessForiOS (path);
		}
	}

	private static void ProcessForiOS (string path)
	{
		string pjPath = PBXProject.GetPBXProjectPath (path);
		PBXProject pj = new PBXProject ();
		pj.ReadFromString (File.ReadAllText (pjPath));
		string target = pj.TargetGuidByName ("Unity-iPhone");

		// Enable BitCode -> NO
		pj.SetBuildProperty (target, "ENABLE_BITCODE", "NO");
		pj.SetBuildProperty (target, "CLANG_ENABLE_MODULES", "YES");

		File.WriteAllText (pjPath, pj.WriteToString ());

		//フレームワーク追加
		List<string> frameworks = new List<string> () {
			"CoreData.framework",
			"libz.tbd",
			"libsqlite3.tbd"
		};

		foreach (var framework in frameworks) {
			pj.AddFrameworkToProject (target, framework, false);
		}
	}

}