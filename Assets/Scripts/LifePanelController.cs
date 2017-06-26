using UnityEngine;
using System.Collections;

/// <summary>
/// Life panel controller.
/// </summary>
public class LifePanelController : MonoBehaviour
{
	//ライフ配列
	public GameObject[] icons;

	/// <summary>
	/// ライフ更新
	/// </summary>
	/// <param name="life">Life.</param>
	public void UpdateLife (int life)
	{
		for (int i = 0; i < icons.Length; i++) {
			if (i < life) {
				icons [i].SetActive (true);
			} else {
				icons [i].SetActive (false);
			}
		}
	}
}
