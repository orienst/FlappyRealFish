using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

/// <summary>
/// Game controller.
/// </summary>
public class GameController : MonoBehaviour
{
	//デフォルトライフ定数
	const int DefaultLife = 3;

	/**
	 * 画面ステータス
	 */
	enum State
	{
		Ready,
		Play,
		GameOver,
	}

	State state;

	//Fish controller
	public FishController fish;

	//Camera controller
	public CameraController camera;

	//Life panel controller
	public LifePanelController lifePanel;

	//AdMob広告表示コントローラ
	public AdMob adMob;

	//ステータスラベル
	public Text statusLabel;

	//スコアラベル
	public Text scoreLabel;

	//ハイスコアラベル
	public Text highScoreLabel;

	//ハイスコア通知ラベル
	public Text highScoreInfoLabel;

	//ステージNoラベル
	public Text stageNoLabel;

	//死亡時1つ先にある障害物オブジェクト位置格納
	private List<int> Obstacles1 = new List<int> ();

	//死亡時2つ先にある障害物オブジェクト位置格納
	private List<int> Obstacles2 = new List<int> ();

	//ライフ
	static int life;

	//ステージ番号
	int stageNo;

	//スコア
	float score;

	//クリアスコア
	static float clearScore;

	//現在のスコア
	float nowScore = 0.0f;

	//スコア初期化フラグ
	bool isInitScore;

	//広告表示フラグ
	static bool isAdShow;

	//タイトルに戻るボタン
	public GameObject BackToTitleButton;

	//リスタートボタン
	public GameObject ReStartButton;

	//ゲームスタートボタン
	public GameObject StartButton;

	//一時停止ボタン
	public GameObject PauseButton;

	//再開ボタン
	public GameObject ResumeButton;

	//次のステージに遷移するボタン
	public GameObject GoToNextStageButton;

	//Shareボタン
	public GameObject ShareButton;

	//音楽
	public AudioClip bgmSound;
	public AudioClip crash;
	public AudioClip clear;
	public AudioClip allclear;
	public AudioClip gameover;
	AudioSource audioSource;

	/// <summary>
	/// 開始処理
	/// </summary>
	void Start ()
	{
		audioSource = GetComponent<AudioSource> ();
		Regex re = new Regex (@"[^0-9]");
		//Scene名から数値を抽出
		String sn = re.Replace (Application.loadedLevelName, "");
		stageNo = sn != "" ? int.Parse (sn) : 0;
		Ready ();
	}

	/// <summary>
	/// 更新後処理
	/// </summary>
	void LateUpdate ()
	{
		try {
			if (state == State.Play) {
				if ((stageNo == 1 && fish.transform.position.x > 328 && fish.transform.position.x < 430) || (stageNo == 2 && fish.transform.position.x > 127 && fish.transform.position.x < 182) || (stageNo == 3 && fish.transform.position.x > 166 && fish.transform.position.x < 242)) {
					//移動スピードアップと大きさを2倍に
					fish.SetSpeed2 (6.0f);
					fish.transform.localScale = new Vector3 (1, 1, 1);
				} else {
					//デフォルトスピード・元の大きさに
					fish.SetSpeed2 (fish.GetDefaultSpeed ());
					fish.transform.localScale = new Vector3 (0.5f, 0.5f, 1);
				}
				if (fish.GetIsDead ()) {
					CameraCrash ();
				}
				if (fish.GetIsClear ()) {
					GameClear ();
				}
				CalcScore ();
			}
		} catch (NullReferenceException ex) {
		}
	}

	/// <summary>
	/// ゲームスタート前処理
	/// </summary>
	public void Ready ()
	{
		try {
			//ステータス更新
			state = State.Ready;
			//動作OFF
			fish.InitParam (false);
			camera.SetIsPlay (false);
			//各ラベル表示初期化
			InitLabel ();
			//ボタン表示非表示設定
			StartButton.gameObject.SetActive (true);
			ReStartButton.gameObject.SetActive (false);
			BackToTitleButton.gameObject.SetActive (false);

			//時間停止
			Time.timeScale = 0;
			if (clearScore == 0) {
				//ゲームスタートorリロード時は初期ライフをセット
				life = DefaultLife;
			} else {
				//ゲームステージ遷移の場合、保持しているライフをセット
				lifePanel.UpdateLife (life);
			}
		} catch (NullReferenceException ex) {
		}
	}

	/**
	 * ゲームスタート
	 */
	public void GameStart ()
	{
		//BGM再生
		audioSource.clip = bgmSound;
		audioSource.Play ();
		//PauseButton表示
		PauseButton.gameObject.SetActive (true);
		//ステータス更新
		state = State.Play;
		//スコアを初期化しない
		isInitScore = false;
		//時間カウント開始
		Time.timeScale = 1;
		//動作ON
		fish.InitParam (true);
		fish.SetSpeed ();
		camera.SetIsPlay (true);
		//ラベル更新
		statusLabel.gameObject.SetActive (false);
		statusLabel.text = "";
		scoreLabel.gameObject.SetActive (true);
		StartButton.gameObject.SetActive (false);
		ReStartButton.gameObject.SetActive (false);
		BackToTitleButton.gameObject.SetActive (false);
	}

	/// <summary>
	/// 死亡時のエフェクト
	/// </summary>
	void CameraCrash ()
	{
		//BGMストップ
		audioSource.Stop ();
		//衝撃音再生
		audioSource.clip = crash;
		audioSource.Play ();

		camera.Shake ();
		//ステータス更新
		state = State.Ready;
		//1秒後にGameOverメソッド呼び出し
		Invoke ("GameOver", 1.0f);
	}

	/// <summary>
	/// ゲームオーバー
	/// </summary>
	void GameOver ()
	{
		//衝撃音ストップ
		audioSource.Stop ();
		//Shareボタン表示
		ShareButton.gameObject.SetActive (true);
		//AdMob広告表示
		adMob.RequestBanner ();
		//PauseButton非表示
		PauseButton.gameObject.SetActive (false);
		//ライフ減少
		life--;
		//ライフが残っている場合
		if (life >= 0) {
			//ステータス更新
			state = State.Ready;
			//ライフ表示更新
			lifePanel.UpdateLife (life);

			//blockタグが付いたObject(障害物)の情報を取得
			GameObject[] blocks = GameObject.FindGameObjectsWithTag ("block");
			//FishObjectのX座標を取得
			int fishX = Mathf.RoundToInt (fish.transform.position.x);
			//障害物のXY座標を初期化
			int blockX;
			int blockY;
			foreach (GameObject block in blocks) {
				//障害物のX位置を取得
				blockX = Mathf.RoundToInt (block.transform.position.x);
				//FishObjectが死亡したX座標と、その1つ先にある障害物オブジェクトのX座標が同じ場合
				if ((fishX + 1) == blockX) {
					//障害物のY座標を格納
					Obstacles1.Add (Mathf.RoundToInt (block.transform.position.y));
				}
				//FishObjectが死亡したX座標と、その2つ先にある障害物オブジェクトのX座標が同じ場合
				if ((fishX + 2) == blockX) {
					//障害物のY座標を格納
					Obstacles2.Add (Mathf.RoundToInt (block.transform.position.y));
				}
			}
			//障害物のX座標を昇順で並び替え
			Obstacles1.Sort ();
			Obstacles2.Sort ();

			//FishObjectの位置を初期化
			int setY = 0;
			int setY2 = 0;
			//障害物がない位置の取得フラグ
			bool isEmptyBlock = false;
			//一番下のY座標
			int i = -5;
			//最初に取得した障害物のY座標
			int originalObstacles = 0;
			//FishObjectが死亡したY座標の1つ先にある障害物オブジェクトのY座標を繰り返し、障害物が存在しないY座標を取得
			foreach (int list in Obstacles1) {
				if (i != -5) {
					int differencePosition = Mathf.Abs (originalObstacles - list);
					if (differencePosition > 3) {
						//1つ前に取得したY座標と今回取得したY座標が3つ以上空いている場合、空いている真ん中の座標をセット
						setY = Mathf.FloorToInt ((differencePosition) / 2) + originalObstacles;
						isEmptyBlock = true;
						break;
					} else if (differencePosition > 2) {
						//1つ前に取得したY座標と今回取得したY座標が2つ以上空いている場合、空いている真ん中の座標をセット
						setY2 = Mathf.FloorToInt ((differencePosition) / 2) + originalObstacles;
					}
				}
				originalObstacles = list;

				i++;
			}
			//3つ以上空いているY座標が取得できなかった場合
			if (!isEmptyBlock) {
				if (originalObstacles != 5) {
					//Y座標がMaxの5でない場合、Maxと最初に取得した障害物のY座標を足したものの真ん中の座標をセット
					setY = Mathf.FloorToInt ((5 + originalObstacles) / 2);
				} else {
					//Y座標がMaxの5の場合、2つ以上空いているY座標をセット
					setY = setY2;
				}
			}
			foreach (int list in Obstacles2) {
				//2つ先のY座標の1つ下に障害物がある場合、セットしたY座標を加算
				if (list == (setY - 1)) {
					setY++;
				}
				//2つ先のY座標に障害物がある場合、セットしたY座標を加算
				if (list == setY) {
					setY++;
				}
			}
			//セットしたY座標がMaxの5を超える場合、2つ以上空いているY座標をセット
			if (setY > 5) {
				setY = setY2;
			}
			//取得した障害物座標を初期化
			Obstacles1 = new List<int> ();
			Obstacles2 = new List<int> ();
			//ラベル更新
			StartButton.gameObject.SetActive (true);
			//スタートした際、障害物にすぐ当たらない(埋まらない)位置にFishObjectをセット
			fish.transform.position = new Vector3 (fishX + 1, setY, 0);
			//動作OFF
			fish.InitParam (false);
			camera.SetIsPlay (false);
			fish.isDead = false;
			//時間停止
			Time.timeScale = 0;
			fish.Start ();
		} else {
			//クリア音再生
			audioSource.clip = gameover;
			audioSource.Play ();
			//ゲームオーバー
			//ステータス更新
			state = State.GameOver;
			//ラベル更新
			statusLabel.gameObject.SetActive (true);
			statusLabel.text = "GameOver...";
			ReStartButton.gameObject.SetActive (true);
			//ハイスコア更新
			if (PlayerPrefs.GetFloat ("HighScore") < score) {
				UpdateHighScore ();
			}
		}
		BackToTitleButton.gameObject.SetActive (true);
	}

	/// <summary>
	/// クリア
	/// </summary>
	void GameClear ()
	{
		//Shareボタン表示
		ShareButton.gameObject.SetActive (true);
		//AdMob広告表示
		adMob.RequestBanner ();
		//PauseButton非表示
		PauseButton.gameObject.SetActive (false);
		//ステータス更新
		state = State.Ready;
		//次ステージNoセット
		stageNo = stageNo + 1;
		//ラベル更新
		statusLabel.gameObject.SetActive (true);
		if (stageNo <= 3) {
			//クリア音再生
			audioSource.clip = clear;
			audioSource.Play ();
			//各ステージクリア
			statusLabel.text = Application.loadedLevelName + " Clear!!!";
		} else {
			//クリア音再生
			audioSource.clip = allclear;
			audioSource.Play ();
			//すべてのステージをクリアした場合、クリア表示
			statusLabel.text = "Game Clear!!!";
		}
		//ハイスコア更新
		if (PlayerPrefs.GetFloat ("HighScore") < score) {
			UpdateHighScore ();
		}
		//動作OFF
		fish.InitParam (false);
		camera.SetIsPlay (false);
		fish.isDead = false;
		//時間停止
		Time.timeScale = 0;
		fish.Start ();
		clearScore = score;
		nowScore = 0.0f;
		//クリアしたステージを更新
		if (PlayerPrefs.GetInt ("Stage") < stageNo) {
			PlayerPrefs.SetInt ("Stage", stageNo);
		}
		//次のシーンに遷移
		if (stageNo <= 3) {
			GoToNextStageButton.gameObject.SetActive (true);
		}
		BackToTitleButton.gameObject.SetActive (true);
	}

	/// <summary>
	/// リスタート
	/// </summary>
	public void ReStart ()
	{
		//広告表示
		ShowAd ();
		//ステータス更新
		state = State.Ready;
		//初期化
		isInitScore = true;
		clearScore = 0.0f;

		life = DefaultLife;
		lifePanel.UpdateLife (life);

		fish.isDead = false;
		Ready ();

		fish.transform.position = new Vector3 (-2.9f, 2.33f, 0);
		camera.transform.position = new Vector3 (0, 0, -10);
	}

	/// <summary>
	/// 得点(距離)計算
	/// カメラのX座標を得点に加算
	/// </summary>
	void CalcScore ()
	{
		if (fish.GetIsClear ()) {
			nowScore = clearScore;
		} else if (isInitScore) {
			nowScore = 0.0f;
		} else {
			nowScore = clearScore + camera.transform.position.x;
		}
		scoreLabel.text = "Score : " + nowScore.ToString ("F1") + "m";
		score = nowScore;
		//ハイスコア表示
		if (PlayerPrefs.GetFloat ("HighScore") > 0.0f && PlayerPrefs.GetFloat ("HighScore") < score) {
			highScoreLabel.gameObject.SetActive (true);
			highScoreLabel.text = "HighScore : " + nowScore.ToString ("F1") + "m";
		}
	}

	/// <summary>
	/// 次のステージに進む
	/// </summary>
	public void GoToNextStage ()
	{
		//広告表示
		ShowAd ();
		SceneManager.LoadScene ("Stage" + stageNo);
	}

	/// <summary>
	/// タイトルに戻る
	/// </summary>
	public void BackToTitle ()
	{
		//広告表示
		ShowAd ();
		SceneManager.LoadScene ("Title");
	}

	/// <summary>
	/// 広告表示
	/// </summary>
	public void ShowAd ()
	{
		if (Advertisement.IsReady ()) {
			isAdShow = true;
			Advertisement.Show ("", new ShowOptions {
				resultCallback = result => {
					switch (result) {
					case ShowResult.Finished:
						//終了
						isAdShow = false;
						break;
					case ShowResult.Skipped:
						//スキップ
						isAdShow = false;
						break;
					case ShowResult.Failed:
						//失敗
						Debug.LogError ("The ad failed to be shown.");
						isAdShow = false;
						Application.Quit ();        //終了処理
						break;
					}
				}
			});
		}
	}

	/// <summary>
	/// スコアクリア
	/// </summary>
	public void ClearScore ()
	{
		clearScore = 0.0f;
	}

	/// <summary>
	/// スコア取得
	/// </summary>
	/// <returns>The score.</returns>
	public float GetScore ()
	{
		return score;
	}

	/// <summary>
	/// スタートボタン押下
	/// </summary>
	public void OnClickButtonStart ()
	{
		//Shareボタン非表示
		ShareButton.gameObject.SetActive (false);
		//AdMob削除
		adMob.OnDestroy ();
		if (!IsAdShow ()) {
			//広告非表示状態のみゲーム動作可能
			Time.timeScale = 1;
			fish.speed = 3.0f;
			StartCoroutine (CountdownCoroutine ());
		}
	}

	/// <summary>
	/// カウントダウンコルーチン
	/// </summary>
	/// <returns>The coroutine.</returns>
	IEnumerator CountdownCoroutine ()
	{
		StartButton.gameObject.SetActive (false);
		statusLabel.gameObject.SetActive (true);
		BackToTitleButton.gameObject.SetActive (false);

		statusLabel.text = "3";
		yield return new WaitForSeconds (1.0f);

		statusLabel.text = "2";
		yield return new WaitForSeconds (1.0f);

		statusLabel.text = "1";
		yield return new WaitForSeconds (1.0f);

		statusLabel.text = "GO!";
		yield return new WaitForSeconds (1.0f);

		GameStart ();
	}

	/// <summary>
	/// Pauseボタン押下
	/// </summary>
	public void OnClickButtonPause ()
	{
		Time.timeScale = 0;
		PauseButton.gameObject.SetActive (false);
		ResumeButton.gameObject.SetActive (true);
	}

	/// <summary>
	/// Resumeボタン押下
	/// </summary>
	public void OnClickButtonResume ()
	{
		Time.timeScale = 1;
		PauseButton.gameObject.SetActive (true);
		ResumeButton.gameObject.SetActive (false);
	}

	/// <summary>
	/// 広告表示判定取得
	/// </summary>
	/// <returns><c>true</c> if this instance is ad show; otherwise, <c>false</c>.</returns>
	public bool IsAdShow ()
	{
		return isAdShow;
	}

	/// <summary>
	/// 各ラベル表示初期化
	/// </summary>
	void InitLabel ()
	{
		//ステージNo
		stageNoLabel.text = Application.loadedLevelName;
		//ステータス
		statusLabel.gameObject.SetActive (false);
		statusLabel.text = "";
		//スコア
		scoreLabel.gameObject.SetActive (false);
		scoreLabel.text = "";
		//ハイスコア
		highScoreLabel.gameObject.SetActive (false);
		highScoreLabel.text = "";
		//ハイスコア通知
		highScoreInfoLabel.gameObject.SetActive (false);
		highScoreInfoLabel.text = "";
	}

	/// <summary>
	/// ハイスコア更新
	/// </summary>
	void UpdateHighScore ()
	{
		PlayerPrefs.SetFloat ("HighScore", score);
		highScoreInfoLabel.gameObject.SetActive (true);
		highScoreInfoLabel.text = "Congratulations! Updated The High Score!";
	}
}
