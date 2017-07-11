using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/**
 * タイトルコントローラ
 */
public class TitleController : MonoBehaviour
{
	//Game controller
	public GameController gameController;

	//AdMob広告表示コントローラ
	public AdMob adMob;

	//ハイスコアラベル
	public Text highScoreLabel;

	//Stage2 Startボタン
	public GameObject Stage2Button;

	//Stage3 Startボタン
	public GameObject Stage3Button;

	//ロードラベル
	public Text loadingText;

	/// <summary>
	/// 開始処理
	/// </summary>
	public void Start ()
	{
		//AdMob表示
//		adMob.RequestBanner ();
		//保存データ初期化(デバッグ時使用)
//		PlayerPrefs.DeleteAll ();
		gameController.ClearScore ();
		//ハイスコア表示
		highScoreLabel.text = "High Score : " + PlayerPrefs.GetFloat ("HighScore").ToString ("F1") + "m";
		//ステージ1をクリアしていたらステージ2を表示
		if (PlayerPrefs.GetInt ("Stage") < 2) {
			Stage2Button.SetActive (false);
		}
		//ステージ2をクリアしていたらステージ3を表示
		if (PlayerPrefs.GetInt ("Stage") < 3) {
			Stage3Button.SetActive (false);
		}
	}

	/// <summary>
	/// Stage1 Start押下
	/// </summary>
	public void OnStage1StartButtonClicked ()
	{
		if (!gameController.IsAdShow ()) {
			//広告非表示時にStage1に遷移
			StartCoroutine (LoadScene ("Stage1"));
		}
	}

	/// <summary>
	/// Stage2 Start押下
	/// </summary>
	public void OnStage2StartButtonClicked ()
	{
		if (!gameController.IsAdShow ()) {
			//広告非表示時にStage2に遷移
			StartCoroutine (LoadScene ("Stage2"));
		}
	}

	/// <summary>
	/// Stage3 Start押下
	/// </summary>
	public void OnStage3StartButtonClicked ()
	{
		if (!gameController.IsAdShow ()) {
			//広告非表示時にStage3に遷移
			StartCoroutine (LoadScene ("Stage3"));
		}
	}

	/// <summary>
	/// シーン読み込み時のローディング
	/// </summary>
	/// <param name="SceneName">シーン名</param>
	IEnumerator LoadScene (string SceneName)
	{
		AsyncOperation async = Application.LoadLevelAsync (SceneName);
		loadingText.gameObject.SetActive (true);
		while (async.progress < 0.9f) {
			loadingText.text = (async.progress * 100).ToString ("F0") + "%";
			yield return new WaitForEndOfFrame ();
		}

		loadingText.text = "100%";

		yield return null;
	}
}
