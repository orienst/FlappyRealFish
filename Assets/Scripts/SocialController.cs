using UnityEngine;
using System.Collections;

namespace SocialConnector
{
	/// <summary>
	/// Social controller.
	/// </summary>
	public class SocialController : MonoBehaviour
	{
		//Game controller
		public GameController gameController;

		//SNS表示テキスト
		string text;

		//アプリURL
		string URL;

		//スコア
		float score;

		//画面キャプチャ保存パス
		string imagePath {
			get {
				return Application.persistentDataPath + "/image.png";
			}
		}

		/// <summary>
		/// Title画面でのShare
		/// </summary>
		public void OnShareForTitle ()
		{
			StartCoroutine (Share ("Title"));
		}

		/// <summary>
		/// ゲーム画面でのShare
		/// </summary>
		public void OnShareForGameOver ()
		{
			StartCoroutine (Share ("GameOver"));
		}

		/// <summary>
		/// SNS連携先を表示
		/// </summary>
		/// <param name="scene">Scene.</param>
		IEnumerator Share (string scene)
		{
			//スクリーンショットをとる
			Application.CaptureScreenshot ("image.png");

			//スクリーンショットが保存されるまで待機
			long filesize = 0;
			float time = 0f;
			while (filesize == 0) {
				yield return null;

				//ファイルのサイズを取得
				System.IO.FileInfo fi = new System.IO.FileInfo (imagePath);
				if (fi != null) {
					filesize = fi.Length;
				}
			}

			//SNS表示テキスト
			if (scene == "Title") {
				//ハイスコアを表示
				if (PlayerPrefs.GetFloat ("HighScore") > 0.0f) {
					score = PlayerPrefs.GetFloat ("HighScore");
				} else {
					score = 0;
				}
			} else if (scene == "GameOver") {
				//ゲーム中のスコアを表示
				score = gameController.GetScore ();
			}
			text = "FlappyRealFishで、スコア：" + score.ToString ("F1") + "m を達成しました！";
			//プラットフォームごとにアプリURLを設定
			if (Application.platform == RuntimePlatform.Android) {
				URL = "https://play.google.com/store/apps/details?id=jp.co.orienst.flappy_real_fish";
			} else if (Application.platform == RuntimePlatform.IPhonePlayer) {
				URL = "https://itunes.apple.com/jp/app/flappyrealfish/id1258427395?mt=8&ign-mpt=uo%3D4";
			} else {
				URL = "OtherURL";
			}

			//social-connectorから共有
			SocialConnector.Share (text, URL, imagePath);
		}
	}
}