using UnityEngine;
using System.Collections;

/// <summary>
/// Camera controller.
/// </summary>
public class CameraController : MonoBehaviour
{
	//Fish controller
	public FishController fish;

	//動作フラグ
	bool isPlay = true;

	/// <summary>
	/// 毎フレーム更新処理
	/// </summary>
	void Update ()
	{
		if (!fish.GetIsDead () && isPlay) {
			//カメラ位置のxにFishControllerのスピード×フレーム間の経過時間で位置をセット
			Debug.Log (fish.GetSpeed2 ());
			transform.Translate (1 * fish.GetSpeed2 () * Time.deltaTime, 0, 0);
		}
	}

	/// <summary>
	/// 動作フラグのオンオフ切り替え
	/// </summary>
	/// <param name="active">If set to <c>true</c> active.</param>
	public void SetIsPlay (bool active)
	{
		isPlay = active;
	}

	/// <summary>
	/// 死亡時に画面を揺らす
	/// </summary>
	public void Shake ()
	{
		iTween.ShakePosition (gameObject, iTween.Hash ("x", 0.3f, "y", 0.3f, "time", 0.5f));
	}
}
