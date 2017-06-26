//=========================================================================== 
//! 
//! @file   GradientColor.cs 
//! @brief  uGUI用グラデーション コンポーネント. 
//! 
//=========================================================================== 

namespace UnityEngine.UI
{
	[AddComponentMenu ("UI/Effects/Custom/Gradient", 14)] 
	public class GradientColor : BaseMeshEffect
	{
		[SerializeField] 
		[Range (-1.5f, 1.5f)] 
		public float Offset = 0f;

		[SerializeField] 
		private Color32 TopColor = Color.white;

		[SerializeField] 
		private Color32 BottomColor = Color.black;

		protected GradientColor ()
		{
		}

		//-------------------------------------------------------------
		//! エフェクト計算.
		//-------------------------------------------------------------
		private void ModifyVertices (VertexHelper vh)
		{ 
			UIVertex v = new UIVertex (); 

			float fRate = 0.0f; 
			int flipIndex = 0; 
			for (int i = 0; i < vh.currentVertCount; i++) { 
				vh.PopulateUIVertex (ref v, i); 

				if (flipIndex == 0 || flipIndex == 1) { 
					fRate = 1.0f; 
				} else { 
					fRate = 0.0f; 
				} 
				if (++flipIndex >= 4) { 
					flipIndex = 0; 
				} 
				v.color = Color32.Lerp (
					BottomColor, 
					TopColor, 
					fRate + Offset); 
				vh.SetUIVertex (v, i); 

			} 
		}

		//-------------------------------------------------------------
		//! エフェクト適用.
		//-------------------------------------------------------------
		public override void ModifyMesh (VertexHelper vh)
		{ 
			if (!IsActive ())
				return; 

			ModifyVertices (vh); 
		}
	}
} 