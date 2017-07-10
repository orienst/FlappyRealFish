struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAds();
	RegisterModule_UnityAds();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 81 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//4. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//5. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//8. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//12. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//13. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//14. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//15. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//16. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//19. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//23. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//24. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//25. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//26. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//27. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//28. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//29. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//30. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//31. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//32. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//33. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//34. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//35. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//36. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//37. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//38. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//39. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//40. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//41. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//42. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//43. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//44. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//45. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//46. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//47. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//48. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//49. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//50. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//51. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//52. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//53. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//54. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//55. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//56. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//57. EdgeCollider2D
	void RegisterClass_EdgeCollider2D();
	RegisterClass_EdgeCollider2D();

	//58. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//59. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//60. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//61. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//62. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//63. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//64. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//65. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//66. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//67. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//68. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//69. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//70. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//71. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//72. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//73. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//74. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//75. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//76. UnityAdsSettings
	void RegisterClass_UnityAdsSettings();
	RegisterClass_UnityAdsSettings();

	//77. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//78. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//79. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//80. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
