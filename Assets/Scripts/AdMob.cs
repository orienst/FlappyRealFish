using UnityEngine;
using System.Collections;
using GoogleMobileAds.Api;

/// <summary>
/// Ad mob.
/// </summary>
public class AdMob : MonoBehaviour
{

	private BannerView bannerView;

	/// <summary>
	/// 表示
	/// </summary>
	public void RequestBanner ()
	{
		// 広告ユニット ID を記述します
		string adUnitId = "ca-app-pub-5607397605442311/2752154186";

		// Create a 320x50 banner at the top of the screen.
		bannerView = new BannerView (adUnitId, AdSize.Banner, AdPosition.Bottom);
		// Create an empty ad request.
		AdRequest request = new AdRequest.Builder ().Build ();
		// Load the banner with the request.
		bannerView.LoadAd (request);
	}

	/// <summary>
	/// 削除
	/// </summary>
	public void OnDestroy ()
	{
		if (bannerView != null) {
			bannerView.Hide ();
			bannerView.Destroy ();
			bannerView = null;
		}
	}
}