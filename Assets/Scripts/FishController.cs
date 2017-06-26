using UnityEngine;
using System.Collections;

/// <summary>
/// Fish controller.
/// </summary>
public class FishController : MonoBehaviour
{
	//デフォルトスピード定数
	const float DefaultSpeed = 3.0f;

	//重力
	Rigidbody2D rb2d;

	//アニメーション
	Animator animator;

	//アニメーションスプライトオブジェクト
	public GameObject sprite;

	//カメラ
	public Camera camera;

	//移動スピード
	public float speed;

	//上昇速度
	public float flapVelocity;

	//上昇出来る最大の高さ
	public float maxHeight;

	//X軸方向の相対速度
	public float relativeVelocityX;

	//ボタン押下判定
	bool upPush = false;
	bool downPush = false;
	bool leftPush = false;
	bool rightPush = false;

	//死亡判定
	public bool isDead;

	//クリア判定
	public bool isClear;

	//重力値
	float gravity;

	/// <summary>
	/// 前処理
	/// </summary>
	void Awake ()
	{
		//重力コンポーネント取得
		rb2d = GetComponent<Rigidbody2D> ();
		//Animatorコンポーネント取得
		animator = sprite.GetComponent<Animator> ();
	}

	/// <summary>
	/// 開始処理
	/// </summary>
	public void Start ()
	{
		gravity = rb2d.gravityScale;
		//カメラオブジェクト取得
		camera = camera.GetComponent<Camera> ();
	}

	/// <summary>
	/// 毎フレーム更新処理
	/// </summary>
	void Update ()
	{
		if (Application.isEditor) {
			//キーボード対応
			if (Input.GetKey (KeyCode.UpArrow)) {
				UpPushDown ();
			} else if (Input.GetKeyUp (KeyCode.UpArrow)) {
				UpPushUp ();
			} else if (Input.GetKey (KeyCode.DownArrow)) {
				DownPushDown ();
			} else if (Input.GetKeyUp (KeyCode.DownArrow)) {
				DownPushUp ();
			} else if (Input.GetKey (KeyCode.LeftArrow)) {
				LeftPushDown ();
			} else if (Input.GetKeyUp (KeyCode.LeftArrow)) {
				LeftPushUp ();
			} else if (Input.GetKey (KeyCode.RightArrow)) {
				RightPushDown ();
			} else if (Input.GetKeyUp (KeyCode.RightArrow)) {
				RightPushUp ();
			}
		}
		if (transform.position.y < maxHeight) {
			Move ();
		}

	}

	/// <summary>
	/// 移動処理
	/// </summary>
	public void Move ()
	{
		//死亡時は処理を中止
		if (isDead) {
			return;
		}
		//準備時は処理を中止
		if (rb2d.isKinematic) {
			return;
		}
		//アニメーション実行
		animator.SetBool ("flap", true);
		rb2d.gravityScale = gravity;
		if (upPush) {
			//上昇
			if (GetScreenBottomRight ().x > transform.position.x) {
				rb2d.velocity = new Vector2 (speed, flapVelocity);
			}
		} else if (downPush) {
			//下降
			if (GetScreenBottomRight ().x > transform.position.x) {
				rb2d.gravityScale = 2.0f;
			}
		} else if (leftPush) {
			//左
			if (GetScreenTopLeft ().x < transform.position.x) {
				MovementRestriction (-1.0f);
			} else {
				MovementRestriction (1.0f);
			}
		} else if (rightPush) {
			//右
			if (GetScreenBottomRight ().x > transform.position.x) {
				speed = speed * 2;
				MovementRestriction (1.0f);
			} else {
				MovementRestriction (0.0f);
			}
		} else {
			if (GetScreenTopLeft ().x > transform.position.x) {
				speed = speed * 2;
				MovementRestriction (1.0f);
			} else if (GetScreenBottomRight ().x < transform.position.x) {
				MovementRestriction (0.0f);
			}
		}
	}

	/// <summary>
	/// 移動制御
	/// 押下されたボタンによって移動方向を変更
	/// また、左右の枠からはみ出ないように制御
	/// </summary>
	/// <param name="moveSpeed">移動速度</param>
	void MovementRestriction (float moveSpeed)
	{
		Vector2 direction = new Vector2 (moveSpeed, 0).normalized;
		rb2d.velocity = direction * speed;
	}

	/// <summary>
	/// 移動スピードをセット
	/// </summary>
	public void SetSpeed ()
	{
		rb2d.velocity = new Vector2 (speed, 0);
	}

	/// <summary>
	/// 移動スピードをセット
	/// </summary>
	public void SetSpeed2 (float tmpSpeed)
	{
		speed = tmpSpeed;
	}

	/// <summary>
	/// 移動スピードをセット
	/// </summary>
	public float GetSpeed2 ()
	{
		return speed;
	}

	/// <summary>
	/// 上昇ボタンを押下
	/// </summary>
	public void UpPushDown ()
	{
		upPush = true;
	}

	/// <summary>
	/// 上昇ボタンが離された
	/// </summary>
	public void UpPushUp ()
	{
		upPush = false;
	}

	/// <summary>
	/// 下降ボタンを押下
	/// </summary>
	public void DownPushDown ()
	{
		downPush = true;
	}

	/// <summary>
	/// 下降ボタンが離された
	/// </summary>
	public void DownPushUp ()
	{
		downPush = false;
	}

	/// <summary>
	/// 左ボタンを押下
	/// </summary>
	public void LeftPushDown ()
	{
		leftPush = true;
	}

	/// <summary>
	/// 左ボタンが離された
	/// </summary>
	public void LeftPushUp ()
	{
		leftPush = false;
	}

	/// <summary>
	/// 右ボタンを押下
	/// </summary>
	public void RightPushDown ()
	{
		rightPush = true;
	}

	/// <summary>
	/// 右ボタンが離された
	/// </summary>
	public void RightPushUp ()
	{
		rightPush = false;
	}

	/// <summary>
	/// カメラの左枠の座標を取得
	/// </summary>
	/// <returns>The screen top left.</returns>
	private Vector3 GetScreenTopLeft ()
	{
		//画面の左上を取得
		Vector3 topLeft = camera.ScreenToWorldPoint (Vector3.zero);
		//上下反転させる
		topLeft.Scale (new Vector3 (1f, -1f, 1f));
		return topLeft;
	}

	/// <summary>
	/// カメラの右枠の座標を取得
	/// </summary>
	/// <returns>The screen bottom right.</returns>
	private Vector3 GetScreenBottomRight ()
	{
		//画面の右下を取得
		Vector3 bottomRight = camera.ScreenToWorldPoint (new Vector3 (Screen.width, Screen.height, 0.0f));
		//上下反転させる
		bottomRight.Scale (new Vector3 (1f, -1f, 1f));
		return bottomRight;
	}

	/// <summary>
	/// 死亡判定取得
	/// </summary>
	/// <returns><c>true</c> if this instance is dead; otherwise, <c>false</c>.</returns>
	public bool GetIsDead ()
	{
		return isDead;
	}

	/// <summary>
	/// クリア判定取得
	/// <returns><c>true</c> if this instance is clear; otherwise, <c>false</c>.</returns>
	public bool GetIsClear ()
	{
		return isClear;
	}

	/// <summary>
	/// 衝突処理
	/// </summary>
	/// <param name="collision">Collision.</param>
	void OnCollisionEnter2D (Collision2D collision)
	{
		if (isDead) {
			return;
		}
		//移動停止
		rb2d.velocity = new Vector2 (0, flapVelocity);
		//アニメーション停止
		animator.SetBool ("flap", false);

		isDead = true;
	}

	/// <summary>
	/// クリア処理
	/// </summary>
	/// <param name="other">Other.</param>
	void OnTriggerEnter2D (Collider2D other)
	{
		if (isClear) {
			return;
		}

		isClear = true;
	}

	/// <summary>
	/// Rigidbodyのオンオフ切り替え
	/// </summary>
	/// <param name="active">If set to <c>true</c> active.</param>
	public void InitParam (bool active)
	{
		rb2d.isKinematic = !active;
		rb2d.gravityScale = 0.5f;
	}

	/// <summary>
	/// デフォルト速度を取得
	/// </summary>
	/// <returns>The default speed.</returns>
	public float GetDefaultSpeed ()
	{
		return DefaultSpeed;
	}
}
