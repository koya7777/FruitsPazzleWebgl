#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`2<Fruits.Fruit,System.Boolean>
struct Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB;
// System.Func`2<Fruits.Fruit,UnityEngine.Vector3>
struct Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,UnityEngine.Vector3>
struct Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<Fruits.Fruit>
struct IEnumerable_1_t70AB263E5F669378A90E86877A144DCAFD43E271;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Fruits.Fruit>
struct List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// Fruits.Fruit[]
struct FruitU5BU5D_t72D7F2B3F7457A6048D433D6A2CA770A8466E6B2;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Fruits.AddPlayTimeButton
struct AddPlayTimeButton_tDF1DAB125F5886A9725ADDA3C5D12187F825C584;
// Fruits.AddScoreButton
struct AddScoreButton_tD668A0B6CEDC1ABF6E08F173DD33131F5EB455D3;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// AspectKeeper
struct AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Fruits.Bom
struct Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Fruits.Fruit
struct Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8;
// Fruits.GameManager
struct GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Advertisements.IUnityAdsListener
struct IUnityAdsListener_t5F539BD30864A79A3CF8AED5367DBB29BAF3837F;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// Fruits.InterstitialButton
struct InterstitialButton_t48D595C1B1B98680EBF54CDDB753F2F8F23E28DD;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Fruits.LevelManager
struct LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Fruits.RetryButton
struct RetryButton_tE53673328CBED6CD41B1DEC04A97BCBFBCFC705A;
// Fruits.RewardButton
struct RewardButton_tE248A38FF904B3A23918142DD236046D3D06EF4F;
// Fruits.RewardedButton
struct RewardedButton_tBE83B0DF542893FE94104669EE7389EC53E2474E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Fruits.SaveManager
struct SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// Fruits.SoundManager
struct SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// Fruits.StartButton
struct StartButton_t7537901AFF5056FC680A86367A7C128D3FC25B3F;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Fruits.TitleButton
struct TitleButton_tFDFA122028918033C4582866B8DB9339AAEEF381;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityAdsExampleUI
struct UnityAdsExampleUI_t2752939846DDB66D200CCAC8AD219A73D93DADB5;
// UnityAdsManager
struct UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2;
// Fruits.UnityAdsManager
struct UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Fruits.AddPlayTimeButton/<>c
struct U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201;
// Fruits.AddScoreButton/<>c
struct U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Fruits.InterstitialButton/<>c
struct U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C;
// Fruits.LevelManager/<>c
struct U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8;
// Fruits.LevelManager/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295;
// Fruits.LevelManager/<BomDown>d__48
struct U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52;
// Fruits.LevelManager/<DisplayPoint>d__47
struct U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7;
// Fruits.LevelManager/<FruitUp>d__43
struct U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Fruits.RetryButton/<>c
struct U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D;
// Fruits.RewardButton/<>c
struct U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47;
// Fruits.RewardedButton/<>c
struct U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588;
// Fruits.TitleButton/<>c
struct U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5;
// UnityAdsManager/DebugEvent
struct DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD;
// Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10
struct U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral2EFC90CFC1FCD1551C3D587AE8469FCDDF6511A0;
IL2CPP_EXTERN_C String_t* _stringLiteral343ACCF9B9AFB7B39888BF5EED15A36245E14A87;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral4AC54D5F66A93D5633CF8DF141696B95A5A4ABD1;
IL2CPP_EXTERN_C String_t* _stringLiteral4F3E9D79FA480C202AF88723FCDFD6765C086AFC;
IL2CPP_EXTERN_C String_t* _stringLiteral526E236B0FD9DFE6CFBF7245E8ECF57744DDA402;
IL2CPP_EXTERN_C String_t* _stringLiteral5526B938A00612D29E66301BA0C863AC54685826;
IL2CPP_EXTERN_C String_t* _stringLiteral553CC46752F215A9D6CB449FC472773C02F30BCA;
IL2CPP_EXTERN_C String_t* _stringLiteral5D353536F16ADB6F7267DE607A4EB5EC58EDE27A;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB6F6556559265DD425D8088060D94F24D2B4DE;
IL2CPP_EXTERN_C String_t* _stringLiteral600E399E3327568B09839214B99D217391A18D11;
IL2CPP_EXTERN_C String_t* _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral7C00530E4A7690C2C9671EA521514A6C849590DD;
IL2CPP_EXTERN_C String_t* _stringLiteral803807B9C7FDA22A2B17F528409CF9158B28CD2D;
IL2CPP_EXTERN_C String_t* _stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D;
IL2CPP_EXTERN_C String_t* _stringLiteral868F9CF16F105E66D076A3110A6DE3A38A58DA0E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F07CFBBDA40C542D4605E2A39F686185F29E858;
IL2CPP_EXTERN_C String_t* _stringLiteral9C2722840A5EA0D714B6F9153DA150FA956948CA;
IL2CPP_EXTERN_C String_t* _stringLiteralABB4FE46964149A8B76D92A377B9869566EEEA07;
IL2CPP_EXTERN_C String_t* _stringLiteralB7E7FD4278227D469ABDF36BAC489175054413D9;
IL2CPP_EXTERN_C String_t* _stringLiteralD15046C593C67293D72BB326F6167E506502D0F8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE20989D15EEF079E1A2EDC4396ED9BF9AA99CAD4;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC7F986C7A7A979DA0887CABFB7DF21BA016E4C;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
IL2CPP_EXTERN_C String_t* _stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralF608EA91E59D48E4F094374F02A0EA5BD5C97708;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3D6023ED7494BB9BE6020421380A31F5599250D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m477FC4B568CDE257CCE837F4CE0D9CA48EFAB70A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m760870D76E0536DC20A89ADB915D41A4DA011733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m5355461B9D5DA9F41ED7956A8BF8E79F105E57DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8B8A9D3E25393887DE337900C7A09A91F2B1B2EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_mD1947658008EDF11B5A331B8D3B4C35B0D7ACDD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StartButton_U3CStartU3Eb__0_0_m03205E0C31288E5E1B9BDB793F471EA3B2AA72C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBomDownU3Ed__48_System_Collections_IEnumerator_Reset_mB03291DFA3BDF09332918D86A9E16CC5503757D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayPointU3Ed__47_System_Collections_IEnumerator_Reset_m6D7873CEEEDBA5EDE3E0BF960D9113FD3E11EA37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFruitUpU3Ed__43_System_Collections_IEnumerator_Reset_m4CB82B87556EC34BF6F97F0BC0C2E6105FA7C2DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowBannerWhenReadyU3Ed__10_System_Collections_IEnumerator_Reset_m08B5E7F20E75268F04172C99E4D8C0B4A4B22007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLineRendererUpdateU3Eb__39_0_mF8234E69F3651F03991C73C72DADDF0AE7C3E523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_m2CB8EDD2EB5D29D54C1ECCAE478801D73BAF1E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_m34288593C03700685CBEC481F538853866838986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_m46A890168FAC77E2782F240540C9FDECC5E553D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_m5562A9299F771B37923C059A84A7871229E7F5DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_mAE76AF7B0E61261A7FDC5EB92C48621A853774FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_mCBD1C43857473CF458937D710B48BE93080B08FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_1_m16B1C7D07439571CD78A7D08A74E7C8D5219100D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_1_m2DAE063A294D1B1EF859CADFF75575865A49B043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_1_m83BDA4B72DACA2EAC77650EBCF76C654985DA4C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_0_m21BED3032D45EF4FC4CEE5967E64F8B491006859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_1_m05AA119C3D6AFC5BD6DBD943EA59BEA2A394C9B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass48_0_U3CBomDownU3Eb__0_mE03290D14FFDBA4A753AAB3744D5C95401EC2C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsExampleUI_HandleDebugLog_m40E72C3C06461D414CEE3CBDE9166BEBEB70A980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsExampleUI_U3CStartU3Eb__10_0_m0D4956FA509D3FD912477332B66E444B92AC25FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsManager_Initialize_m03888258F02883CB31A7B11D5B6CD80362C05AD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsManager_LoadNonRewardedAd_m5EF7602DCC2DC4845C29CE639AC5F967D9D8BAE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsManager_LoadRewardedAd_m8D9D3CF4BCC1563DCD2BAAF3D24D417FE7E74C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsManager_ShowNonRewardedAd_mBC4EB65A873E6A2ED2623F4969408F03EC4A5D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsManager_ShowRewardedAd_m51855F10AE06FCAEF2366EFFFC4A1AE8F50039F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsManager_ToggleBanner_m1BB5C3E04FEE7279008C623FC2BA568D500E0185_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<Fruits.Fruit>
struct List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FruitU5BU5D_t72D7F2B3F7457A6048D433D6A2CA770A8466E6B2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FruitU5BU5D_t72D7F2B3F7457A6048D433D6A2CA770A8466E6B2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};
struct Il2CppArrayBounds;

// Fruits.DefineData
struct DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA  : public RuntimeObject
{
};

struct DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields
{
	// System.Int32 Fruits.DefineData::DefaultPlayTime
	int32_t ___DefaultPlayTime_0;
	// System.Int32 Fruits.DefineData::DefaultHighScore
	int32_t ___DefaultHighScore_1;
	// System.Int32 Fruits.DefineData::DefaultRetryCount
	int32_t ___DefaultRetryCount_2;
	// System.Int32 Fruits.DefineData::DefaultBaseScore
	int32_t ___DefaultBaseScore_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Fruits.AddPlayTimeButton/<>c
struct U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201  : public RuntimeObject
{
};

struct U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_StaticFields
{
	// Fruits.AddPlayTimeButton/<>c Fruits.AddPlayTimeButton/<>c::<>9
	U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201* ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction Fruits.AddPlayTimeButton/<>c::<>9__0_0
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__0_0_1;
};

// Fruits.AddScoreButton/<>c
struct U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02  : public RuntimeObject
{
};

struct U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_StaticFields
{
	// Fruits.AddScoreButton/<>c Fruits.AddScoreButton/<>c::<>9
	U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02* ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction Fruits.AddScoreButton/<>c::<>9__0_0
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__0_0_1;
};

// Fruits.InterstitialButton/<>c
struct U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C  : public RuntimeObject
{
};

struct U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields
{
	// Fruits.InterstitialButton/<>c Fruits.InterstitialButton/<>c::<>9
	U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C* ___U3CU3E9_0;
	// System.Action`1<UnityEngine.Advertisements.ShowResult> Fruits.InterstitialButton/<>c::<>9__0_1
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* ___U3CU3E9__0_1_1;
	// UnityEngine.Events.UnityAction Fruits.InterstitialButton/<>c::<>9__0_0
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__0_0_2;
};

// Fruits.LevelManager/<>c
struct U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8  : public RuntimeObject
{
};

struct U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_StaticFields
{
	// Fruits.LevelManager/<>c Fruits.LevelManager/<>c::<>9
	U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8* ___U3CU3E9_0;
	// System.Func`2<Fruits.Fruit,UnityEngine.Vector3> Fruits.LevelManager/<>c::<>9__39_0
	Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059* ___U3CU3E9__39_0_1;
};

// Fruits.LevelManager/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295  : public RuntimeObject
{
	// Fruits.Bom Fruits.LevelManager/<>c__DisplayClass48_0::bom
	Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* ___bom_0;
	// Fruits.LevelManager Fruits.LevelManager/<>c__DisplayClass48_0::<>4__this
	LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* ___U3CU3E4__this_1;
};

// Fruits.LevelManager/<BomDown>d__48
struct U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52  : public RuntimeObject
{
	// System.Int32 Fruits.LevelManager/<BomDown>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fruits.LevelManager/<BomDown>d__48::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fruits.Bom Fruits.LevelManager/<BomDown>d__48::bom
	Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* ___bom_2;
	// Fruits.LevelManager Fruits.LevelManager/<BomDown>d__48::<>4__this
	LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* ___U3CU3E4__this_3;
	// Fruits.LevelManager/<>c__DisplayClass48_0 Fruits.LevelManager/<BomDown>d__48::<>8__1
	U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295* ___U3CU3E8__1_4;
	// System.Collections.Generic.List`1<Fruits.Fruit> Fruits.LevelManager/<BomDown>d__48::<removeFruit>5__2
	List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* ___U3CremoveFruitU3E5__2_5;
};

// Fruits.LevelManager/<FruitUp>d__43
struct U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF  : public RuntimeObject
{
	// System.Int32 Fruits.LevelManager/<FruitUp>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fruits.LevelManager/<FruitUp>d__43::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fruits.LevelManager Fruits.LevelManager/<FruitUp>d__43::<>4__this
	LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* ___U3CU3E4__this_2;
};

// Fruits.RetryButton/<>c
struct U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D  : public RuntimeObject
{
};

struct U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields
{
	// Fruits.RetryButton/<>c Fruits.RetryButton/<>c::<>9
	U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D* ___U3CU3E9_0;
	// System.Action`1<UnityEngine.Advertisements.ShowResult> Fruits.RetryButton/<>c::<>9__1_1
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* ___U3CU3E9__1_1_1;
	// UnityEngine.Events.UnityAction Fruits.RetryButton/<>c::<>9__1_0
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__1_0_2;
};

// Fruits.RewardButton/<>c
struct U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47  : public RuntimeObject
{
};

struct U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields
{
	// Fruits.RewardButton/<>c Fruits.RewardButton/<>c::<>9
	U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47* ___U3CU3E9_0;
	// System.Action`1<UnityEngine.Advertisements.ShowResult> Fruits.RewardButton/<>c::<>9__0_1
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* ___U3CU3E9__0_1_1;
	// UnityEngine.Events.UnityAction Fruits.RewardButton/<>c::<>9__0_0
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__0_0_2;
};

// Fruits.RewardedButton/<>c
struct U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588  : public RuntimeObject
{
};

struct U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields
{
	// Fruits.RewardedButton/<>c Fruits.RewardedButton/<>c::<>9
	U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588* ___U3CU3E9_0;
	// System.Action`1<UnityEngine.Advertisements.ShowResult> Fruits.RewardedButton/<>c::<>9__0_1
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* ___U3CU3E9__0_1_1;
	// UnityEngine.Events.UnityAction Fruits.RewardedButton/<>c::<>9__0_0
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__0_0_2;
};

// Fruits.TitleButton/<>c
struct U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5  : public RuntimeObject
{
};

struct U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_StaticFields
{
	// Fruits.TitleButton/<>c Fruits.TitleButton/<>c::<>9
	U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5* ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction Fruits.TitleButton/<>c::<>9__0_0
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__0_0_1;
};

// Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10
struct U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265  : public RuntimeObject
{
	// System.Int32 Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// System.Collections.Generic.List`1/Enumerator<Fruits.Fruit>
struct Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// Fruits.LevelManager/<DisplayPoint>d__47
struct U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7  : public RuntimeObject
{
	// System.Int32 Fruits.LevelManager/<DisplayPoint>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fruits.LevelManager/<DisplayPoint>d__47::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fruits.LevelManager Fruits.LevelManager/<DisplayPoint>d__47::<>4__this
	LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Fruits.LevelManager/<DisplayPoint>d__47::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// System.Int32 Fruits.LevelManager/<DisplayPoint>d__47::point
	int32_t ___point_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B  : public MulticastDelegate_t
{
};

// System.Func`2<Fruits.Fruit,System.Boolean>
struct Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB  : public MulticastDelegate_t
{
};

// System.Func`2<Fruits.Fruit,UnityEngine.Vector3>
struct Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityAdsManager/DebugEvent
struct DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// Fruits.AddPlayTimeButton
struct AddPlayTimeButton_tDF1DAB125F5886A9725ADDA3C5D12187F825C584  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fruits.AddScoreButton
struct AddScoreButton_tD668A0B6CEDC1ABF6E08F173DD33131F5EB455D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AspectKeeper
struct AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera AspectKeeper::targetCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___targetCamera_4;
	// UnityEngine.Vector2 AspectKeeper::aspectVec
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___aspectVec_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Fruits.Bom
struct Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fruits.Fruit
struct Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Fruits.Fruit::ID
	String_t* ___ID_4;
	// UnityEngine.GameObject Fruits.Fruit::SelectObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SelectObj_5;
	// UnityEngine.GameObject Fruits.Fruit::ExplosionObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ExplosionObj_6;
	// UnityEngine.GameObject Fruits.Fruit::BodyObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BodyObj_7;
	// System.Boolean Fruits.Fruit::<IsSelect>k__BackingField
	bool ___U3CIsSelectU3Ek__BackingField_8;
};

// Fruits.GameManager
struct GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Fruits.GameManager/GameState Fruits.GameManager::<CurrentState>k__BackingField
	int32_t ___U3CCurrentStateU3Ek__BackingField_5;
};

struct GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD_StaticFields
{
	// Fruits.GameManager Fruits.GameManager::Instance
	GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* ___Instance_4;
};

// Fruits.InterstitialButton
struct InterstitialButton_t48D595C1B1B98680EBF54CDDB753F2F8F23E28DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fruits.LevelManager
struct LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Fruits.Fruit> Fruits.LevelManager::_allFruits
	List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* ____allFruits_4;
	// System.Collections.Generic.List`1<Fruits.Fruit> Fruits.LevelManager::_selectFruits
	List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* ____selectFruits_5;
	// System.String Fruits.LevelManager::_selectID
	String_t* ____selectID_6;
	// System.Int32 Fruits.LevelManager::_baseScore
	int32_t ____baseScore_7;
	// System.Int32 Fruits.LevelManager::_score
	int32_t ____score_8;
	// System.Int32 Fruits.LevelManager::_highScore
	int32_t ____highScore_9;
	// System.Int32 Fruits.LevelManager::_playTime
	int32_t ____playTime_10;
	// System.Single Fruits.LevelManager::_currentTime
	float ____currentTime_11;
	// System.Boolean Fruits.LevelManager::_isPlaying
	bool ____isPlaying_12;
	// System.Boolean Fruits.LevelManager::_isExplosion
	bool ____isExplosion_13;
	// System.Int32 Fruits.LevelManager::_retryCount
	int32_t ____retryCount_14;
	// System.Int32 Fruits.LevelManager::_fruitSpawnNum
	int32_t ____fruitSpawnNum_15;
	// System.Int32 Fruits.LevelManager::_additionalPlayTime
	int32_t ____additionalPlayTime_16;
	// System.Int32 Fruits.LevelManager::_additionalBaseScore
	int32_t ____additionalBaseScore_17;
	// Fruits.SaveManager Fruits.LevelManager::saveManager
	SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* ___saveManager_18;
	// UnityEngine.GameObject[] Fruits.LevelManager::FruitPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___FruitPrefabs_20;
	// UnityEngine.GameObject Fruits.LevelManager::BomPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BomPrefab_21;
	// UnityEngine.GameObject Fruits.LevelManager::PointText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PointText_22;
	// System.Int32 Fruits.LevelManager::BomSpawnCount
	int32_t ___BomSpawnCount_23;
	// System.Single Fruits.LevelManager::BomDestroyRange
	float ___BomDestroyRange_24;
	// UnityEngine.LineRenderer Fruits.LevelManager::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_25;
	// System.Int32 Fruits.LevelManager::FruitDestroyCount
	int32_t ___FruitDestroyCount_26;
	// System.Single Fruits.LevelManager::FruitConnectRange
	float ___FruitConnectRange_27;
	// TMPro.TextMeshProUGUI Fruits.LevelManager::HighScoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___HighScoreText_28;
	// TMPro.TextMeshProUGUI Fruits.LevelManager::ScoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___ScoreText_29;
	// TMPro.TextMeshProUGUI Fruits.LevelManager::TimerText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TimerText_30;
	// UnityEngine.GameObject Fruits.LevelManager::FinishDialog
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FinishDialog_31;
	// System.Single Fruits.LevelManager::ExplosionTime
	float ___ExplosionTime_32;
	// System.Single Fruits.LevelManager::SelectScale
	float ___SelectScale_33;
};

struct LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_StaticFields
{
	// Fruits.LevelManager Fruits.LevelManager::<Instance>k__BackingField
	LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* ___U3CInstanceU3Ek__BackingField_19;
};

// Fruits.RetryButton
struct RetryButton_tE53673328CBED6CD41B1DEC04A97BCBFBCFC705A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fruits.RewardButton
struct RewardButton_tE248A38FF904B3A23918142DD236046D3D06EF4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fruits.RewardedButton
struct RewardedButton_tBE83B0DF542893FE94104669EE7389EC53E2474E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fruits.SaveManager
struct SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_StaticFields
{
	// Fruits.SaveManager Fruits.SaveManager::Instance
	SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* ___Instance_4;
};

// Fruits.SoundManager
struct SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip Fruits.SoundManager::touchSE
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___touchSE_4;
	// UnityEngine.AudioClip Fruits.SoundManager::explosionSE
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___explosionSE_5;
	// UnityEngine.AudioClip Fruits.SoundManager::bomSE
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___bomSE_6;
	// UnityEngine.AudioClip Fruits.SoundManager::titleBGM
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___titleBGM_7;
	// UnityEngine.AudioClip Fruits.SoundManager::mainBGM
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___mainBGM_8;
	// UnityEngine.AudioSource Fruits.SoundManager::audioSourceBGM
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceBGM_9;
	// UnityEngine.AudioSource Fruits.SoundManager::audioSourceSE
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSourceSE_10;
};

struct SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_StaticFields
{
	// Fruits.SoundManager Fruits.SoundManager::Instance
	SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* ___Instance_11;
};

// Fruits.StartButton
struct StartButton_t7537901AFF5056FC680A86367A7C128D3FC25B3F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fruits.TitleButton
struct TitleButton_tFDFA122028918033C4582866B8DB9339AAEEF381  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityAdsExampleUI
struct UnityAdsExampleUI_t2752939846DDB66D200CCAC8AD219A73D93DADB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityAdsManager UnityAdsExampleUI::unityAdsManager
	UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* ___unityAdsManager_4;
	// UnityEngine.UI.Button UnityAdsExampleUI::initBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___initBtn_5;
	// UnityEngine.UI.Button UnityAdsExampleUI::loadRewardedBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___loadRewardedBtn_6;
	// UnityEngine.UI.Button UnityAdsExampleUI::showRewardedBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___showRewardedBtn_7;
	// UnityEngine.UI.Button UnityAdsExampleUI::loadInterstitialBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___loadInterstitialBtn_8;
	// UnityEngine.UI.Button UnityAdsExampleUI::showInterstitialBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___showInterstitialBtn_9;
	// UnityEngine.UI.Button UnityAdsExampleUI::toggleBannerBtn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___toggleBannerBtn_10;
	// UnityEngine.UI.Text UnityAdsExampleUI::debugLogText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___debugLogText_11;
	// System.String UnityAdsExampleUI::textLog
	String_t* ___textLog_12;
};

// UnityAdsManager
struct UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityAdsManager::GAME_ID
	String_t* ___GAME_ID_4;
	// UnityEngine.Advertisements.BannerPosition UnityAdsManager::bannerPosition
	int32_t ___bannerPosition_8;
	// System.Boolean UnityAdsManager::testMode
	bool ___testMode_9;
	// System.Boolean UnityAdsManager::showBanner
	bool ___showBanner_10;
};

struct UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_StaticFields
{
	// UnityAdsManager/DebugEvent UnityAdsManager::OnDebugLog
	DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* ___OnDebugLog_11;
};

// Fruits.UnityAdsManager
struct UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.Advertisements.ShowResult> Fruits.UnityAdsManager::_Finish
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* ____Finish_8;
};

struct UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_StaticFields
{
	// Fruits.UnityAdsManager Fruits.UnityAdsManager::<Instance>k__BackingField
	UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* ___U3CInstanceU3Ek__BackingField_9;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m55582D0AF64DBB8F297B71E8B68F40E374CE1910_gshared (Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD5D789F2B8DB62FA788B521C23208C7E5B589ED4_gshared (RuntimeObject* ___source0, Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityAdsManager>()
inline UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* Object_FindObjectOfType_TisUnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_mD1947658008EDF11B5A331B8D3B4C35B0D7ACDD4 (const RuntimeMethod* method)
{
	return ((  UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityAdsManager/DebugEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugEvent__ctor_m00ABAFC2CD4CB0C6E409495A8A06AD464B625952 (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityAdsManager::add_OnDebugLog(UnityAdsManager/DebugEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_add_OnDebugLog_m67FEF3546847B05533D4AC392D0596D01AEBC593 (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* ___value0, const RuntimeMethod* method) ;
// System.Void UnityAdsManager::remove_OnDebugLog(UnityAdsManager/DebugEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_remove_OnDebugLog_m5FDB3E66CEC9347F4DEDEEEDDD99F6BD385CD944 (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isSupported_mB5C493696A3AF825A4CB2EDD59433E41E9F270A9 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityAdsManager::DebugLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m4588F5F94E9D89C77D92EDC0105905F7CAB937B2 (String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_SetPosition_m69680FE1B23F22DC2212F1C37B0890C6833645E8 (int32_t ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_mE9997CF7E601CC299C5B6C11C6CA074E6A57126C (String_t* ___placementId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Hide_mE40A4CE81B2F66D874A0995CEB0BF595D9BE09DC (bool ___destroy0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5 (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void UnityAdsManager/DebugEvent::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_inline (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Fruits.AddPlayTimeButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE147545071839221FA28C1C65508F4DF5E4B406D (U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Fruits.LevelManager Fruits.LevelManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline (const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::AddPlayTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddPlayTime_mD36D9FAD5847C5FE70DB9900CE69CEA738A61328 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void Fruits.AddScoreButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m34118A518F8424CA350C528416A5732247D6A63B (U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02* __this, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::AddBaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddBaseScore_m213AB25D3BA21974502C332662052563E06ECC6B (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Fruits.LevelManager::BomDown(Fruits.Bom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_BomDown_m760D719A751E535085284B1EF630A308EC6195DE (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* ___bom0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::FruitDown(Fruits.Fruit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_FruitDown_mD5C3BD18387E818B1120F2AEFB8C2518650AE1EF (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* ___fruit0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::FruitEnter(Fruits.Fruit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_FruitEnter_mEF1E012EB749A61497011AE0AB955BA52C1AE6F3 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* ___fruit0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Fruits.LevelManager::FruitUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_FruitUp_m7BE5667D2D2CA3D8B8DFB44DE1E2C9FBC92BB646 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) ;
// System.Void Fruits.Fruit::set_IsSelect(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Fruit_set_IsSelect_m722F57952C169641EA16BD8617850199608C99F9_inline (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Fruits.Fruit::get_IsSelect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Fruit_get_IsSelect_m84EDC1314DCFAB497C16E8D507723659803AF3D5_inline (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Fruits.GameManager::set_CurrentState(Fruits.GameManager/GameState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_CurrentState_mE606BD6C9D3267198DFFA336855D70C059891389_inline (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Fruits.GameManager/GameState Fruits.GameManager::get_CurrentState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_CurrentState_m85E9F9FBF63B2CB4B731F7EE7AF4FA9B08697306_inline (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, const RuntimeMethod* method) ;
// System.Void Fruits.InterstitialButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0A1874CD9EACA7DEE045538FFF068EAEED714FA (U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C* __this, const RuntimeMethod* method) ;
// Fruits.UnityAdsManager Fruits.UnityAdsManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* UnityAdsManager_get_Instance_mA165141F90FA49ECACE7F8CC7D250A7C66299D24_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3EB670BC487D5791481B0A42CE3F231B748BFA99 (Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Fruits.UnityAdsManager::ShowInterstitial(System.Action`1<UnityEngine.Advertisements.ShowResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_ShowInterstitial_mC0C8C856B9AB4B3B0020101192A6E106A8603E2E (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* ___finish0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::set_Instance(Fruits.LevelManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LevelManager_set_Instance_m77332D9A4FC416373C348E322D6B2A6F6A5FC2BB_inline (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* ___value0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::FruitSpawn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_FruitSpawn_mAC50B5F08329FB14322DC59919D9A30A6E4281D8 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Int32 Fruits.SaveManager::LoadBaseScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveManager_LoadBaseScore_m452595DA2B7B584C97F9B7A6848FC1B21864A82E (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___defaultBaseScore0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 Fruits.SaveManager::LoadPlayTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveManager_LoadPlayTime_m196A5772FDC80CBF19C22FE008854CEEAE89FAEC (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___defaultPlayTime0, const RuntimeMethod* method) ;
// System.Void Fruits.SoundManager::PlayBGM(Fruits.SoundManager/BGM)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayBGM_mB2A7FBBF49E112BD562CC440D0420919C4439ADF (SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* __this, int32_t ___bgm0, const RuntimeMethod* method) ;
// System.Int32 Fruits.SaveManager::LoadHighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveManager_LoadHighScore_mD82D4DFDA9ACBF503837AF97531914D3C12FC664 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___defaultHighScore0, const RuntimeMethod* method) ;
// System.Int32 Fruits.SaveManager::LoadRetryCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveManager_LoadRetryCount_mFE598EFCFF410B027A1D272182899A2E3CE3C619 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___defaultRetryCount0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::set_RetryCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LevelManager_set_RetryCount_m736C087799457C7248A6F62B2CA9DED1AEF5C09A_inline (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::LineRendererUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LineRendererUpdate_mD6FEF9864B1F0DF220CA5BB825BFC567D79FB547 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::TimeUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_TimeUpdate_m98FA226F660D82EFE58FDBD520FEBE53613B94E5 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void Fruits.SaveManager::SaveHighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SaveHighScore_m479591E6DAB3E67BC359F5D49AD5C463C06E647E (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___score0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Fruits.Fruit>::get_Count()
inline int32_t List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Fruits.Fruit,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m786F35F3CEE400F73D62259C6CF40056D8A45636 (Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m55582D0AF64DBB8F297B71E8B68F40E374CE1910_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Fruits.Fruit,UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3D6023ED7494BB9BE6020421380A31F5599250D6 (RuntimeObject* ___source0, Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD5D789F2B8DB62FA788B521C23208C7E5B589ED4_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_gshared)(___source0, method);
}
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<Fruits.Fruit>()
inline Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* GameObject_GetComponent_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m5355461B9D5DA9F41ED7956A8BF8E79F105E57DB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Fruits.Fruit>::Add(T)
inline void List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_inline (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* __this, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Fruits.Fruit::SetSelect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_SetSelect_mE4F2E6D6D4E969B5E290B80F7812C1D0E3D2BA89 (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___isSelect0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// System.Void Fruits.SoundManager::PlaySE(Fruits.SoundManager/SE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySE_mFC04C74983594CE48006C83AB5BC1766188CC058 (SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* __this, int32_t ___se0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Fruits.Fruit>::get_Item(System.Int32)
inline Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* (*) (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<Fruits.Fruit>::Remove(T)
inline bool List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275 (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* __this, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager/<FruitUp>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFruitUpU3Ed__43__ctor_m4728B152BAA53F26028897CF39CD81A390DB3C9C (U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Fruits.Fruit>::GetEnumerator()
inline Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2 (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 (*) (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Fruits.Fruit>::Dispose()
inline void Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F (Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Fruits.Fruit>::get_Current()
inline Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_inline (Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941* __this, const RuntimeMethod* method)
{
	return ((  Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* (*) (Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Fruits.Fruit::SetExplosion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_SetExplosion_mA3E30EC18F2091751B8095EFF8B4D4247CFD003B (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___isExplosion0, const RuntimeMethod* method) ;
// System.Void Fruits.Fruit::SetActiveBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_SetActiveBody_mEE3ACD63CEA9C669FDE0A712A1B3625370AA29E1 (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Void Fruits.Fruit::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_SetActive_m5527F9FCBC8A9BC0198C16785D0B78FF3C38CCAB (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Fruits.Fruit>::MoveNext()
inline bool Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC (Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 Fruits.LevelManager::CalcPoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelManager_CalcPoint_m579378CD4625A35BE03C840004638B8FD2770D59 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___fruitCount0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Fruits.LevelManager::DisplayPoint(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_DisplayPoint_m07B567367E5144CA44ECB67D575CD65A1A00317C (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddScore_m734F487D6100E8E46B287D6BE1DF98D9DB6F1B3A (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___score0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fruits.Fruit>::.ctor()
inline void List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Fruits.Fruit>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* Enumerable_ToList_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m477FC4B568CDE257CCE837F4CE0D9CA48EFAB70A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void Fruits.LevelManager/<DisplayPoint>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayPointU3Ed__47__ctor_m32BED0DA98156A8275592B832EBBEFC6205B139E (U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager/<BomDown>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBomDownU3Ed__48__ctor_m3AD30AAF7E6F59E3E20A6A9355856164951EE6C6 (U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::DestroyAllFruits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_DestroyAllFruits_m7A7E4951CCEC9C85B4DBE40F0515F307DC79A434 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) ;
// System.Void Fruits.SaveManager::SaveBaseScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SaveBaseScore_mF11053935F924E686024F7D12649619A3C0EDB79 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___score0, const RuntimeMethod* method) ;
// System.Void Fruits.SaveManager::SavePlayTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SavePlayTime_m4B48E4B9874ADD3263F05AFE7CC6AB689E8D2CF6 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___playTime0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3540B9D0758FC7C2F5FE0C5879E6669C4BB1AADB (U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8* __this, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::ExplosionFruits(System.Collections.Generic.List`1<Fruits.Fruit>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_ExplosionFruits_mFAD07822AAA52914B74CF28C4DCFB6A7A801EAF9 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* ___fruits0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager::DestroyFruits(System.Collections.Generic.List`1<Fruits.Fruit>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_DestroyFruits_mA34A373B982AAC45A60A1322E0A00D2E0BF64D15 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* ___fruits0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fruits.Fruit>::Clear()
inline void List_1_Clear_m8B8A9D3E25393887DE337900C7A09A91F2B1B2EE_inline (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMoveY(UnityEngine.Transform,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOLocalMoveY_mA4BDBF3ACA5B305B59551FBF9813D5BF35487CD5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// System.Void Fruits.LevelManager/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m99D0A015A56947DA198A541D25EFD1F124B54F35 (U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Fruits.Fruit,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEDE0DA24A89CE84882E6F7315E39780C6165D91C (Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Fruits.Fruit>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m760870D76E0536DC20A89ADB915D41A4DA011733 (RuntimeObject* ___source0, Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void Fruits.RetryButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD795A547030B77759D385300724E2302688B7DC2 (U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D* __this, const RuntimeMethod* method) ;
// System.Int32 Fruits.LevelManager::get_RetryCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LevelManager_get_RetryCount_m25F0931441810AF8FBFD332D6A2498D57104C5A7_inline (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void Fruits.SaveManager::SaveRetryCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SaveRetryCount_mE65A6AA0A23EC6D7E1B260AC4D818EDD0127F8D3 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___retryCount0, const RuntimeMethod* method) ;
// System.Void Fruits.RewardButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFEB297A453AD04A199B475D07BD5AE3B15A3E152 (U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47* __this, const RuntimeMethod* method) ;
// System.Void Fruits.UnityAdsManager::ShowRewarded(System.Action`1<UnityEngine.Advertisements.ShowResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_ShowRewarded_m76F294C018F127DB1819BBDE677450D44716B4C6 (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* ___finish0, const RuntimeMethod* method) ;
// System.Void Fruits.RewardedButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5D5778BC97F67F2FC6BD48F4F76BB0206BF6CAD (U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void Fruits.StartButton::ResetPlayTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_ResetPlayTime_mD5CD75B0E1282B3B1DDE49E2B3D9763E31B4FE33 (StartButton_t7537901AFF5056FC680A86367A7C128D3FC25B3F* __this, const RuntimeMethod* method) ;
// System.Void Fruits.StartButton::ResetBaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_ResetBaseScore_mB8B4421F36B6624856D81C488FF04B4B808EFAC6 (StartButton_t7537901AFF5056FC680A86367A7C128D3FC25B3F* __this, const RuntimeMethod* method) ;
// System.Void Fruits.TitleButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m39F78DF30E56B6851B6B69555D4FF0D0868C0736 (U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5* __this, const RuntimeMethod* method) ;
// System.Void Fruits.UnityAdsManager::set_Instance(Fruits.UnityAdsManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAdsManager_set_Instance_m288BBC0E55F053B0A084AEAC3FF40B2AF25E4F81_inline (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m65DDA835C7863A3A6F216816F9AD39886DADBFAA (String_t* ___gameId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::AddListener(UnityEngine.Advertisements.IUnityAdsListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_AddListener_m37D566FF394309239A31F0EE00557388ED584568 (RuntimeObject* ___listener0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Fruits.UnityAdsManager::ShowBannerWhenReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsManager_ShowBannerWhenReady_mDFBE37C4193E83BC65504FB6D9505CDEA1EBC0C1 (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, const RuntimeMethod* method) ;
// System.Void Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowBannerWhenReadyU3Ed__10__ctor_m4C4220CE8F8492E49D2D0028516D154313F7A699 (U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m4AEA4270B557DA12017228442169BABD2F95BA8F (String_t* ___placementId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m6D29C6EC0264A8EDB4EFBA4D49282A019CAB3E03 (String_t* ___placementId0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(T)
inline void Action_1_Invoke_m5539ABA100DABBCBCC0B5586FB04D8AA58A6EAA7_inline (Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityAdsExampleUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsExampleUI_Awake_m77D0F276EAF8B1173AD9092CE2F455D199FB7F3B (UnityAdsExampleUI_t2752939846DDB66D200CCAC8AD219A73D93DADB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_mD1947658008EDF11B5A331B8D3B4C35B0D7ACDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (unityAdsManager == null)
		UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* L_0 = __this->___unityAdsManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// unityAdsManager = FindObjectOfType<UnityAdsManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* L_2;
		L_2 = Object_FindObjectOfType_TisUnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_mD1947658008EDF11B5A331B8D3B4C35B0D7ACDD4(Object_FindObjectOfType_TisUnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_mD1947658008EDF11B5A331B8D3B4C35B0D7ACDD4_RuntimeMethod_var);
		__this->___unityAdsManager_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unityAdsManager_4), (void*)L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UnityAdsExampleUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsExampleUI_Start_m2491F4DFD10ECB3DE090D598BE4FB8B102D1FCCA (UnityAdsExampleUI_t2752939846DDB66D200CCAC8AD219A73D93DADB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsExampleUI_U3CStartU3Eb__10_0_m0D4956FA509D3FD912477332B66E444B92AC25FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_Initialize_m03888258F02883CB31A7B11D5B6CD80362C05AD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_LoadNonRewardedAd_m5EF7602DCC2DC4845C29CE639AC5F967D9D8BAE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_LoadRewardedAd_m8D9D3CF4BCC1563DCD2BAAF3D24D417FE7E74C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_ShowNonRewardedAd_mBC4EB65A873E6A2ED2623F4969408F03EC4A5D0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_ShowRewardedAd_m51855F10AE06FCAEF2366EFFFC4A1AE8F50039F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_ToggleBanner_m1BB5C3E04FEE7279008C623FC2BA568D500E0185_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// initBtn.onClick.AddListener(unityAdsManager.Initialize);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___initBtn_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* L_2 = __this->___unityAdsManager_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, L_2, (intptr_t)((void*)UnityAdsManager_Initialize_m03888258F02883CB31A7B11D5B6CD80362C05AD6_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_3, NULL);
		// initBtn.onClick.AddListener(()=> debugLogText.text = "DEBUG LOG: \n");
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___initBtn_5;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)UnityAdsExampleUI_U3CStartU3Eb__10_0_m0D4956FA509D3FD912477332B66E444B92AC25FA_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// loadRewardedBtn.onClick.AddListener(unityAdsManager.LoadRewardedAd);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___loadRewardedBtn_6;
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_7, NULL);
		UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* L_9 = __this->___unityAdsManager_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, L_9, (intptr_t)((void*)UnityAdsManager_LoadRewardedAd_m8D9D3CF4BCC1563DCD2BAAF3D24D417FE7E74C57_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_10, NULL);
		// showRewardedBtn.onClick.AddListener(unityAdsManager.ShowRewardedAd);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___showRewardedBtn_7;
		NullCheck(L_11);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_12;
		L_12 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_11, NULL);
		UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* L_13 = __this->___unityAdsManager_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, L_13, (intptr_t)((void*)UnityAdsManager_ShowRewardedAd_m51855F10AE06FCAEF2366EFFFC4A1AE8F50039F6_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_12, L_14, NULL);
		// loadInterstitialBtn.onClick.AddListener(unityAdsManager.LoadNonRewardedAd);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = __this->___loadInterstitialBtn_8;
		NullCheck(L_15);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_16;
		L_16 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_15, NULL);
		UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* L_17 = __this->___unityAdsManager_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_18 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_18, L_17, (intptr_t)((void*)UnityAdsManager_LoadNonRewardedAd_m5EF7602DCC2DC4845C29CE639AC5F967D9D8BAE9_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_16, L_18, NULL);
		// showInterstitialBtn.onClick.AddListener(unityAdsManager.ShowNonRewardedAd);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = __this->___showInterstitialBtn_9;
		NullCheck(L_19);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_20;
		L_20 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_19, NULL);
		UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* L_21 = __this->___unityAdsManager_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_22 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_22, L_21, (intptr_t)((void*)UnityAdsManager_ShowNonRewardedAd_mBC4EB65A873E6A2ED2623F4969408F03EC4A5D0F_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_20, L_22, NULL);
		// toggleBannerBtn.onClick.AddListener(unityAdsManager.ToggleBanner);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___toggleBannerBtn_10;
		NullCheck(L_23);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_24;
		L_24 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_23, NULL);
		UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* L_25 = __this->___unityAdsManager_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_26 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_26, L_25, (intptr_t)((void*)UnityAdsManager_ToggleBanner_m1BB5C3E04FEE7279008C623FC2BA568D500E0185_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsExampleUI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsExampleUI_OnEnable_m00E2BBB90F4527F5C476ADDE176993D1689BE57E (UnityAdsExampleUI_t2752939846DDB66D200CCAC8AD219A73D93DADB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsExampleUI_HandleDebugLog_m40E72C3C06461D414CEE3CBDE9166BEBEB70A980_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityAdsManager.OnDebugLog += HandleDebugLog;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_0 = (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*)il2cpp_codegen_object_new(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DebugEvent__ctor_m00ABAFC2CD4CB0C6E409495A8A06AD464B625952(L_0, __this, (intptr_t)((void*)UnityAdsExampleUI_HandleDebugLog_m40E72C3C06461D414CEE3CBDE9166BEBEB70A980_RuntimeMethod_var), NULL);
		UnityAdsManager_add_OnDebugLog_m67FEF3546847B05533D4AC392D0596D01AEBC593(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsExampleUI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsExampleUI_OnDisable_m4FFE859424758A500ABE50D2AC969A71A723B795 (UnityAdsExampleUI_t2752939846DDB66D200CCAC8AD219A73D93DADB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsExampleUI_HandleDebugLog_m40E72C3C06461D414CEE3CBDE9166BEBEB70A980_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityAdsManager.OnDebugLog -= HandleDebugLog;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_0 = (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*)il2cpp_codegen_object_new(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DebugEvent__ctor_m00ABAFC2CD4CB0C6E409495A8A06AD464B625952(L_0, __this, (intptr_t)((void*)UnityAdsExampleUI_HandleDebugLog_m40E72C3C06461D414CEE3CBDE9166BEBEB70A980_RuntimeMethod_var), NULL);
		UnityAdsManager_remove_OnDebugLog_m5FDB3E66CEC9347F4DEDEEEDDD99F6BD385CD944(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsExampleUI::HandleDebugLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsExampleUI_HandleDebugLog_m40E72C3C06461D414CEE3CBDE9166BEBEB70A980 (UnityAdsExampleUI_t2752939846DDB66D200CCAC8AD219A73D93DADB5* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textLog += "\n" + msg + "\n";
		String_t* L_0 = __this->___textLog_12;
		String_t* L_1 = ___msg0;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_1, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___textLog_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textLog_12), (void*)L_2);
		// debugLogText.text = textLog;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___debugLogText_11;
		String_t* L_4 = __this->___textLog_12;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void UnityAdsExampleUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsExampleUI__ctor_m644EB80EADDF46880281BC7CA211CD80853BC0BE (UnityAdsExampleUI_t2752939846DDB66D200CCAC8AD219A73D93DADB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D353536F16ADB6F7267DE607A4EB5EC58EDE27A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string textLog = "DEBUG LOG: \n";
		__this->___textLog_12 = _stringLiteral5D353536F16ADB6F7267DE607A4EB5EC58EDE27A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textLog_12), (void*)_stringLiteral5D353536F16ADB6F7267DE607A4EB5EC58EDE27A);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityAdsExampleUI::<Start>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsExampleUI_U3CStartU3Eb__10_0_m0D4956FA509D3FD912477332B66E444B92AC25FA (UnityAdsExampleUI_t2752939846DDB66D200CCAC8AD219A73D93DADB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D353536F16ADB6F7267DE607A4EB5EC58EDE27A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// initBtn.onClick.AddListener(()=> debugLogText.text = "DEBUG LOG: \n");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___debugLogText_11;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral5D353536F16ADB6F7267DE607A4EB5EC58EDE27A);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityAdsManager::add_OnDebugLog(UnityAdsManager/DebugEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_add_OnDebugLog_m67FEF3546847B05533D4AC392D0596D01AEBC593 (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* V_0 = NULL;
	DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* V_1 = NULL;
	DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* V_2 = NULL;
	{
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_0 = ((UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_il2cpp_TypeInfo_var))->___OnDebugLog_11;
		V_0 = L_0;
	}

IL_0006:
	{
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_1 = V_0;
		V_1 = L_1;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_2 = V_1;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*)CastclassSealed((RuntimeObject*)L_4, DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD_il2cpp_TypeInfo_var));
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_5 = V_2;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_6 = V_1;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_7;
		L_7 = InterlockedCompareExchangeImpl<DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*>((&((UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_il2cpp_TypeInfo_var))->___OnDebugLog_11), L_5, L_6);
		V_0 = L_7;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_8 = V_0;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_9 = V_1;
		if ((!(((RuntimeObject*)(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*)L_8) == ((RuntimeObject*)(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityAdsManager::remove_OnDebugLog(UnityAdsManager/DebugEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_remove_OnDebugLog_m5FDB3E66CEC9347F4DEDEEEDDD99F6BD385CD944 (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* V_0 = NULL;
	DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* V_1 = NULL;
	DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* V_2 = NULL;
	{
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_0 = ((UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_il2cpp_TypeInfo_var))->___OnDebugLog_11;
		V_0 = L_0;
	}

IL_0006:
	{
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_1 = V_0;
		V_1 = L_1;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_2 = V_1;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*)CastclassSealed((RuntimeObject*)L_4, DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD_il2cpp_TypeInfo_var));
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_5 = V_2;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_6 = V_1;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_7;
		L_7 = InterlockedCompareExchangeImpl<DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*>((&((UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_il2cpp_TypeInfo_var))->___OnDebugLog_11), L_5, L_6);
		V_0 = L_7;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_8 = V_0;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_9 = V_1;
		if ((!(((RuntimeObject*)(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*)L_8) == ((RuntimeObject*)(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityAdsManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_Initialize_m03888258F02883CB31A7B11D5B6CD80362C05AD6 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AC54D5F66A93D5633CF8DF141696B95A5A4ABD1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Advertisement.isSupported)
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_get_isSupported_mB5C493696A3AF825A4CB2EDD59433E41E9F270A9(NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// DebugLog(Application.platform + " supported by Advertisement");
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_0 = L_1;
		Il2CppFakeBox<int32_t> L_2(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral4AC54D5F66A93D5633CF8DF141696B95A5A4ABD1, NULL);
		UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D(__this, L_4, NULL);
	}

IL_002a:
	{
		// Advertisement.Initialize(GAME_ID, testMode, this);
		String_t* L_5 = __this->___GAME_ID_4;
		bool L_6 = __this->___testMode_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m4588F5F94E9D89C77D92EDC0105905F7CAB937B2(L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::ToggleBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_ToggleBanner_m1BB5C3E04FEE7279008C623FC2BA568D500E0185 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC7F986C7A7A979DA0887CABFB7DF21BA016E4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// showBanner = !showBanner;
		bool L_0 = __this->___showBanner_10;
		__this->___showBanner_10 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (showBanner)
		bool L_1 = __this->___showBanner_10;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// Advertisement.Banner.SetPosition(bannerPosition);
		int32_t L_2 = __this->___bannerPosition_8;
		Banner_SetPosition_m69680FE1B23F22DC2212F1C37B0890C6833645E8(L_2, NULL);
		// Advertisement.Banner.Show(BANNER_PLACEMENT);
		Banner_Show_mE9997CF7E601CC299C5B6C11C6CA074E6A57126C(_stringLiteralEEC7F986C7A7A979DA0887CABFB7DF21BA016E4C, NULL);
		return;
	}

IL_002d:
	{
		// Advertisement.Banner.Hide(false);
		Banner_Hide_mE40A4CE81B2F66D874A0995CEB0BF595D9BE09DC((bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::LoadRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_LoadRewardedAd_m8D9D3CF4BCC1563DCD2BAAF3D24D417FE7E74C57 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF608EA91E59D48E4F094374F02A0EA5BD5C97708);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Load(REWARDED_VIDEO_PLACEMENT, this);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(_stringLiteralF608EA91E59D48E4F094374F02A0EA5BD5C97708, __this, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::ShowRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_ShowRewardedAd_m51855F10AE06FCAEF2366EFFFC4A1AE8F50039F6 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF608EA91E59D48E4F094374F02A0EA5BD5C97708);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Show(REWARDED_VIDEO_PLACEMENT, this);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(_stringLiteralF608EA91E59D48E4F094374F02A0EA5BD5C97708, __this, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::LoadNonRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_LoadNonRewardedAd_m5EF7602DCC2DC4845C29CE639AC5F967D9D8BAE9 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C00530E4A7690C2C9671EA521514A6C849590DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Load(VIDEO_PLACEMENT, this);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(_stringLiteral7C00530E4A7690C2C9671EA521514A6C849590DD, __this, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::ShowNonRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_ShowNonRewardedAd_mBC4EB65A873E6A2ED2623F4969408F03EC4A5D0F (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C00530E4A7690C2C9671EA521514A6C849590DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Show(VIDEO_PLACEMENT, this);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(_stringLiteral7C00530E4A7690C2C9671EA521514A6C849590DD, __this, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnInitializationComplete_mD831FB654FAFF0BF4BF926DB6BFBBA9B2ECBA256 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral803807B9C7FDA22A2B17F528409CF9158B28CD2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog("Init Success");
		UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D(__this, _stringLiteral803807B9C7FDA22A2B17F528409CF9158B28CD2D, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnInitializationFailed_mB2685AF8161A1C71E7B01E3D954AA043AE27636F (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C2722840A5EA0D714B6F9153DA150FA956948CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog($"Init Failed: [{error}]: {message}");
		int32_t L_0 = ___error0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = ___message1;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral9C2722840A5EA0D714B6F9153DA150FA956948CA, L_2, L_3, NULL);
		UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsAdLoaded_m92D66F58691DAF3E249D95142CF03E4633D41684 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD15046C593C67293D72BB326F6167E506502D0F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog($"Load Success: {placementId}");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD15046C593C67293D72BB326F6167E506502D0F8, L_0, NULL);
		UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsFailedToLoad_mF66561EAF3F4D58374F58D70F483E1AE1CAFD672 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral553CC46752F215A9D6CB449FC472773C02F30BCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog($"Load Failed: [{error}:{placementId}] {message}");
		int32_t L_0 = ___error1;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = ___placementId0;
		String_t* L_4 = ___message2;
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral553CC46752F215A9D6CB449FC472773C02F30BCA, L_2, L_3, L_4, NULL);
		UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsShowFailure_mD1BCE27DB851CCBD191D0F29277528421AEF06B2 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE20989D15EEF079E1A2EDC4396ED9BF9AA99CAD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog($"OnUnityAdsShowFailure: [{error}]: {message}");
		int32_t L_0 = ___error1;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = ___message2;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE20989D15EEF079E1A2EDC4396ED9BF9AA99CAD4, L_2, L_3, NULL);
		UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsShowStart_m5BF1FA311271E16AD6B2ED342052BB9E9BA2D972 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5526B938A00612D29E66301BA0C863AC54685826);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog($"OnUnityAdsShowStart: {placementId}");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5526B938A00612D29E66301BA0C863AC54685826, L_0, NULL);
		UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsShowClick_mEBDC288BA1EDDAFD870AD512F475E9968348C437 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral526E236B0FD9DFE6CFBF7245E8ECF57744DDA402);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog($"OnUnityAdsShowClick: {placementId}");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral526E236B0FD9DFE6CFBF7245E8ECF57744DDA402, L_0, NULL);
		UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsShowComplete_m496AD912DB58B5B0F2C45DDF1DB4A11CC1276612 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, String_t* ___placementId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB6F6556559265DD425D8088060D94F24D2B4DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog($"OnUnityAdsShowComplete: [{showCompletionState}]: {placementId}");
		int32_t L_0 = ___showCompletionState1;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = ___placementId0;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral5DB6F6556559265DD425D8088060D94F24D2B4DE, L_2, L_3, NULL);
		UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::OnGameIDFieldChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnGameIDFieldChanged_mF1E9A024E20AC68D63C5B470949AE26106876781 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, String_t* ___newInput0, const RuntimeMethod* method) 
{
	{
		// GAME_ID = newInput;
		String_t* L_0 = ___newInput0;
		__this->___GAME_ID_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GAME_ID_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityAdsManager::ToggleTestMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_ToggleTestMode_m15104494A1E08D27B613ACAD581ED30BD22FB185 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, bool ___isOn0, const RuntimeMethod* method) 
{
	{
		// testMode = isOn;
		bool L_0 = ___isOn0;
		__this->___testMode_9 = L_0;
		// }
		return;
	}
}
// System.Void UnityAdsManager::DebugLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_DebugLog_m04D767FDDC0103EE422B5F514764E8DE7FC61F8D (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* G_B2_0 = NULL;
	DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* G_B1_0 = NULL;
	{
		// OnDebugLog?.Invoke(msg);
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_0 = ((UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2_il2cpp_TypeInfo_var))->___OnDebugLog_11;
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		String_t* L_2 = ___msg0;
		NullCheck(G_B2_0);
		DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_inline(G_B2_0, L_2, NULL);
	}

IL_0011:
	{
		// Debug.Log(msg);
		String_t* L_3 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityAdsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager__ctor_m1651B267CCC38EF31A56265580508BF97C776733 (UnityAdsManager_t25479092C4158739C6A068E5B38D6F86F151FFE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EFC90CFC1FCD1551C3D587AE8469FCDDF6511A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string GAME_ID = "3003911"; //replace with your gameID from dashboard. note: will be different for each platform.
		__this->___GAME_ID_4 = _stringLiteral2EFC90CFC1FCD1551C3D587AE8469FCDDF6511A0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GAME_ID_4), (void*)_stringLiteral2EFC90CFC1FCD1551C3D587AE8469FCDDF6511A0);
		// [SerializeField] private BannerPosition bannerPosition = BannerPosition.BOTTOM_CENTER;
		__this->___bannerPosition_8 = 4;
		// private bool testMode = true;
		__this->___testMode_9 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_Multicast(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* currentDelegate = reinterpret_cast<DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___msg0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_OpenInst(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, const RuntimeMethod* method)
{
	NullCheck(___msg0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___msg0, method);
}
void DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_OpenStatic(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___msg0, method);
}
void DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_OpenStaticInvoker(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___msg0);
}
void DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_ClosedStaticInvoker(DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___msg0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___msg0' to native representation
	char* ____msg0_marshaled = NULL;
	____msg0_marshaled = il2cpp_codegen_marshal_string(___msg0);

	// Native function invocation
	il2cppPInvokeFunc(____msg0_marshaled);

	// Marshaling cleanup of parameter '___msg0' native representation
	il2cpp_codegen_marshal_free(____msg0_marshaled);
	____msg0_marshaled = NULL;

}
// System.Void UnityAdsManager/DebugEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugEvent__ctor_m00ABAFC2CD4CB0C6E409495A8A06AD464B625952 (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_Multicast;
}
// System.Void UnityAdsManager/DebugEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___msg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityAdsManager/DebugEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DebugEvent_BeginInvoke_m99029F047D563419D99DAF94BADD67FD2A0B4742 (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___msg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityAdsManager/DebugEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugEvent_EndInvoke_mAE0B066EC763A7DE4D826FCE576FAD6A24757FE9 (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AspectKeeper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectKeeper_Start_m4C834763FF53D4F77283A0CE61A2A0A4C847AA4D (AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!targetCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___targetCamera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// targetCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___targetCamera_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetCamera_4), (void*)L_2);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void AspectKeeper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectKeeper_Update_mD550F5E79AA45A9F14F135ED6FF1FF3DA4D4ABEF (AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var screenAspect = Screen.width / (float)Screen.height; //????A?X?y?N?g??
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_0 = ((float)(((float)L_0)/((float)L_1)));
		// var targetAspect = aspectVec.x / aspectVec.y; //??I??A?X?y?N?g??
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___aspectVec_5);
		float L_3 = L_2->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___aspectVec_5);
		float L_5 = L_4->___y_1;
		// var magRate = targetAspect / screenAspect; //??I?A?X?y?N?g?????????{??
		float L_6 = V_0;
		V_1 = ((float)(((float)(L_3/L_5))/L_6));
		// var viewportRect = new Rect(0, 0, 1, 1); //Viewport?????l??Rect????
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_2), (0.0f), (0.0f), (1.0f), (1.0f), NULL);
		// if (magRate < 1)
		float L_7 = V_1;
		if ((!(((float)L_7) < ((float)(1.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		// viewportRect.width = magRate; //?g?p?????????X
		float L_8 = V_1;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_2), L_8, NULL);
		// viewportRect.x = 0.5f - viewportRect.width * 0.5f;//??????
		float L_9;
		L_9 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406((&V_2), ((float)il2cpp_codegen_subtract((0.5f), ((float)il2cpp_codegen_multiply(L_9, (0.5f))))), NULL);
		goto IL_0097;
	}

IL_006f:
	{
		// viewportRect.height = 1 / magRate; //?g?p????c?????X
		float L_10 = V_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_2), ((float)((1.0f)/L_10)), NULL);
		// viewportRect.y = 0.5f - viewportRect.height * 0.5f;//?????]??
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629((&V_2), ((float)il2cpp_codegen_subtract((0.5f), ((float)il2cpp_codegen_multiply(L_11, (0.5f))))), NULL);
	}

IL_0097:
	{
		// targetCamera.rect = viewportRect; //?J??????Viewport??K?p
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___targetCamera_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = V_2;
		NullCheck(L_12);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void AspectKeeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectKeeper__ctor_m0D8EE00986B14A9392C6004ACA7631B55DF76836 (AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.AddPlayTimeButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayTimeButton_Start_mCA115054630F800EBBB7A183AC6C1E33DC7D1BFF (AddPlayTimeButton_tDF1DAB125F5886A9725ADDA3C5D12187F825C584* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_m46A890168FAC77E2782F240540C9FDECC5E553D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B2_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B1_1 = NULL;
	{
		// GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     var manager = LevelManager.Instance;
		//     manager.AddPlayTime();
		//     SceneManager.LoadScene("GameScene");
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ((U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var);
		U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201* L_4 = ((U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_m46A890168FAC77E2782F240540C9FDECC5E553D4_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		((U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.AddPlayTimeButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayTimeButton__ctor_mAEF0ACFBF0AD2AA130A08B503341BBB83BAAFE13 (AddPlayTimeButton_tDF1DAB125F5886A9725ADDA3C5D12187F825C584* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.AddPlayTimeButton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m647DCA0A2CFB181486B0211E1A5DB67D7653C727 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201* L_0 = (U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201*)il2cpp_codegen_object_new(U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE147545071839221FA28C1C65508F4DF5E4B406D(L_0, NULL);
		((U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Fruits.AddPlayTimeButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE147545071839221FA28C1C65508F4DF5E4B406D (U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fruits.AddPlayTimeButton/<>c::<Start>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_m46A890168FAC77E2782F240540C9FDECC5E553D4 (U3CU3Ec_t7E68AFAD673BCB9B1B5AFCE421F735EAF0EA8201* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var manager = LevelManager.Instance;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0;
		L_0 = LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline(NULL);
		// manager.AddPlayTime();
		NullCheck(L_0);
		LevelManager_AddPlayTime_mD36D9FAD5847C5FE70DB9900CE69CEA738A61328(L_0, NULL);
		// SceneManager.LoadScene("GameScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.AddScoreButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScoreButton_Start_mC6CBB268C7407BD9FF58102637243B2F76E80DB4 (AddScoreButton_tD668A0B6CEDC1ABF6E08F173DD33131F5EB455D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_m5562A9299F771B37923C059A84A7871229E7F5DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B2_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B1_1 = NULL;
	{
		// GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     var manager = LevelManager.Instance;
		//     manager.AddBaseScore();
		//     SceneManager.LoadScene("GameScene");
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ((U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var);
		U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02* L_4 = ((U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_m5562A9299F771B37923C059A84A7871229E7F5DB_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		((U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.AddScoreButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScoreButton__ctor_m1902702B59614F2F43795AB07392A0F13AE6A292 (AddScoreButton_tD668A0B6CEDC1ABF6E08F173DD33131F5EB455D3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.AddScoreButton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m96EBE6F7458B568363167A1A93F307855F309963 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02* L_0 = (U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02*)il2cpp_codegen_object_new(U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m34118A518F8424CA350C528416A5732247D6A63B(L_0, NULL);
		((U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Fruits.AddScoreButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m34118A518F8424CA350C528416A5732247D6A63B (U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fruits.AddScoreButton/<>c::<Start>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_m5562A9299F771B37923C059A84A7871229E7F5DB (U3CU3Ec_t651EA5F263AB8EDCEE5E7E9DCD54C23073F18E02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var manager = LevelManager.Instance;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0;
		L_0 = LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline(NULL);
		// manager.AddBaseScore();
		NullCheck(L_0);
		LevelManager_AddBaseScore_m213AB25D3BA21974502C332662052563E06ECC6B(L_0, NULL);
		// SceneManager.LoadScene("GameScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.Bom::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bom_OnMouseDown_m0F24A4ECFF64E83BF2C20B9FA31B0C1BA4B912E0 (Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LevelManager.Instance.BomDown(this));
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0;
		L_0 = LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LevelManager_BomDown_m760D719A751E535085284B1EF630A308EC6195DE(L_0, __this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Fruits.Bom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bom__ctor_mFF75DD7AB0465B6E21E9C937C8E2268BB56DFD4D (Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.DefineData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefineData__cctor_m9CE26A8E37587E0E18EC3F72E3749F7A989C01DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int DefaultPlayTime = 60;
		((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultPlayTime_0 = ((int32_t)60);
		// public static int DefaultHighScore = 0;
		((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultHighScore_1 = 0;
		// public static int DefaultRetryCount = 0;
		((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultRetryCount_2 = 0;
		// public static int DefaultBaseScore = 0;
		((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultBaseScore_3 = 0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Fruits.Fruit::get_IsSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fruit_get_IsSelect_m84EDC1314DCFAB497C16E8D507723659803AF3D5 (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSelect { get; private set; }
		bool L_0 = __this->___U3CIsSelectU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Fruits.Fruit::set_IsSelect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_set_IsSelect_m722F57952C169641EA16BD8617850199608C99F9 (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsSelect { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsSelectU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void Fruits.Fruit::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_OnMouseDown_m285103344C5C80E6D5D24D081B32DC27DF79B284 (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, const RuntimeMethod* method) 
{
	{
		// LevelManager.Instance.FruitDown(this);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0;
		L_0 = LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline(NULL);
		NullCheck(L_0);
		LevelManager_FruitDown_mD5C3BD18387E818B1120F2AEFB8C2518650AE1EF(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Fruits.Fruit::OnMouseEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_OnMouseEnter_m7F9CE22C1ED4D5F6334ED9DF915D444ECE0BC277 (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, const RuntimeMethod* method) 
{
	{
		// LevelManager.Instance.FruitEnter(this);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0;
		L_0 = LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline(NULL);
		NullCheck(L_0);
		LevelManager_FruitEnter_mEF1E012EB749A61497011AE0AB955BA52C1AE6F3(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Fruits.Fruit::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_OnMouseUp_m45F6ECD83E284644723850907255CD09C00D7532 (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LevelManager.Instance.FruitUp());
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0;
		L_0 = LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LevelManager_FruitUp_m7BE5667D2D2CA3D8B8DFB44DE1E2C9FBC92BB646(L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Fruits.Fruit::SetSelect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_SetSelect_mE4F2E6D6D4E969B5E290B80F7812C1D0E3D2BA89 (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___isSelect0, const RuntimeMethod* method) 
{
	{
		// IsSelect = isSelect;
		bool L_0 = ___isSelect0;
		Fruit_set_IsSelect_m722F57952C169641EA16BD8617850199608C99F9_inline(__this, L_0, NULL);
		// SelectObj.SetActive(IsSelect);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___SelectObj_5;
		bool L_2;
		L_2 = Fruit_get_IsSelect_m84EDC1314DCFAB497C16E8D507723659803AF3D5_inline(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Fruits.Fruit::SetExplosion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_SetExplosion_mA3E30EC18F2091751B8095EFF8B4D4247CFD003B (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___isExplosion0, const RuntimeMethod* method) 
{
	{
		// ExplosionObj.SetActive(isExplosion);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ExplosionObj_6;
		bool L_1 = ___isExplosion0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Fruits.Fruit::SetActiveBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_SetActiveBody_mEE3ACD63CEA9C669FDE0A712A1B3625370AA29E1 (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		// BodyObj.SetActive(flag);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BodyObj_7;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Fruits.Fruit::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit_SetActive_m5527F9FCBC8A9BC0198C16785D0B78FF3C38CCAB (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<SpriteRenderer>().enabled = flag;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		bool L_2 = ___flag0;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Fruits.Fruit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fruit__ctor_m761359E43013BE5236A1D7AA853CFE77578ECA9F (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Fruits.GameManager/GameState Fruits.GameManager::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_CurrentState_m85E9F9FBF63B2CB4B731F7EE7AF4FA9B08697306 (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, const RuntimeMethod* method) 
{
	{
		// public GameState CurrentState { get; private set; }
		int32_t L_0 = __this->___U3CCurrentStateU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Fruits.GameManager::set_CurrentState(Fruits.GameManager/GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_CurrentState_mE606BD6C9D3267198DFFA336855D70C059891389 (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GameState CurrentState { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CCurrentStateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Fruits.GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m565B81BCB6F8D85EA5AFF64C7BADC8BC244AE40A (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* L_0 = ((GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void Fruits.GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_mAE74A392C821480B21AB337BDCA35FE4DC2640F5 (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, const RuntimeMethod* method) 
{
	{
		// CurrentState = GameState.Title;
		GameManager_set_CurrentState_mE606BD6C9D3267198DFFA336855D70C059891389_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m9768281700107CD314FF43331E34E3650429AB24 (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (CurrentState)
		int32_t L_0;
		L_0 = GameManager_get_CurrentState_m85E9F9FBF63B2CB4B731F7EE7AF4FA9B08697306_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Fruits.GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_m90DBF33AA482C48C76B28E761FCBEE6DFC65C967 (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.InterstitialButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialButton_Start_m97A500E88F770642EB3A0F86007CA6230EFC0C7B (InterstitialButton_t48D595C1B1B98680EBF54CDDB753F2F8F23E28DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_m2CB8EDD2EB5D29D54C1ECCAE478801D73BAF1E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B2_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B1_1 = NULL;
	{
		// GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     UnityAdsManager.Instance.ShowInterstitial(result =>
		//     {
		//         Debug.Log($"result = {result.ToString()}");
		//     });
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var);
		U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C* L_4 = ((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_m2CB8EDD2EB5D29D54C1ECCAE478801D73BAF1E51_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.InterstitialButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialButton_Update_m0FB83E0E1421298F3682850B27B92D7A889E1A01 (InterstitialButton_t48D595C1B1B98680EBF54CDDB753F2F8F23E28DD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fruits.InterstitialButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialButton__ctor_mFFFE797299360C8E2A53D3CA5914202EC67AB598 (InterstitialButton_t48D595C1B1B98680EBF54CDDB753F2F8F23E28DD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.InterstitialButton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9FBBFC030025850216492E550CFB02D79243E633 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C* L_0 = (U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C*)il2cpp_codegen_object_new(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE0A1874CD9EACA7DEE045538FFF068EAEED714FA(L_0, NULL);
		((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Fruits.InterstitialButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0A1874CD9EACA7DEE045538FFF068EAEED714FA (U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fruits.InterstitialButton/<>c::<Start>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_m2CB8EDD2EB5D29D54C1ECCAE478801D73BAF1E51 (U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_1_m83BDA4B72DACA2EAC77650EBCF76C654985DA4C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B2_0 = NULL;
	UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* G_B2_1 = NULL;
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B1_0 = NULL;
	UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* G_B1_1 = NULL;
	{
		// UnityAdsManager.Instance.ShowInterstitial(result =>
		// {
		//     Debug.Log($"result = {result.ToString()}");
		// });
		UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* L_0;
		L_0 = UnityAdsManager_get_Instance_mA165141F90FA49ECACE7F8CC7D250A7C66299D24_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var);
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_1 = ((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var);
		U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C* L_3 = ((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_4 = (Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B*)il2cpp_codegen_object_new(Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m3EB670BC487D5791481B0A42CE3F231B748BFA99(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_1_m83BDA4B72DACA2EAC77650EBCF76C654985DA4C5_RuntimeMethod_var), NULL);
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_5 = L_4;
		((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		NullCheck(G_B2_1);
		UnityAdsManager_ShowInterstitial_mC0C8C856B9AB4B3B0020101192A6E106A8603E2E(G_B2_1, G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Fruits.InterstitialButton/<>c::<Start>b__0_1(UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_1_m83BDA4B72DACA2EAC77650EBCF76C654985DA4C5 (U3CU3Ec_t4765585D326C147B716F04FD03D46BEB46FDA70C* __this, int32_t ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600E399E3327568B09839214B99D217391A18D11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"result = {result.ToString()}");
		Il2CppFakeBox<int32_t> L_0(ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D_il2cpp_TypeInfo_var, (&___result0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral600E399E3327568B09839214B99D217391A18D11, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Fruits.LevelManager Fruits.LevelManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LevelManager Instance { get; private set; }
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0 = ((LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Fruits.LevelManager::set_Instance(Fruits.LevelManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_set_Instance_m77332D9A4FC416373C348E322D6B2A6F6A5FC2BB (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LevelManager Instance { get; private set; }
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0 = ___value0;
		((LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Int32 Fruits.LevelManager::get_RetryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelManager_get_RetryCount_m25F0931441810AF8FBFD332D6A2498D57104C5A7 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	{
		// public int RetryCount { get => _retryCount; set => _retryCount = value; }
		int32_t L_0 = __this->____retryCount_14;
		return L_0;
	}
}
// System.Void Fruits.LevelManager::set_RetryCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_set_RetryCount_m736C087799457C7248A6F62B2CA9DED1AEF5C09A (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int RetryCount { get => _retryCount; set => _retryCount = value; }
		int32_t L_0 = ___value0;
		__this->____retryCount_14 = L_0;
		return;
	}
}
// System.Void Fruits.LevelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Start_m010016E9C1071C3A1758C68B3AC82E7C1333D62E (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		LevelManager_set_Instance_m77332D9A4FC416373C348E322D6B2A6F6A5FC2BB_inline(__this, NULL);
		// saveManager = SaveManager.Instance;
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_0 = ((SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_StaticFields*)il2cpp_codegen_static_fields_for(SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var))->___Instance_4;
		__this->___saveManager_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___saveManager_18), (void*)L_0);
		// FruitSpawn(_fruitSpawnNum);
		int32_t L_1 = __this->____fruitSpawnNum_15;
		LevelManager_FruitSpawn_mAC50B5F08329FB14322DC59919D9A30A6E4281D8(__this, L_1, NULL);
		// _baseScore = saveManager.LoadBaseScore(DefineData.DefaultBaseScore);
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_2 = __this->___saveManager_18;
		il2cpp_codegen_runtime_class_init_inline(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultBaseScore_3;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = SaveManager_LoadBaseScore_m452595DA2B7B584C97F9B7A6848FC1B21864A82E(L_2, L_3, NULL);
		__this->____baseScore_7 = L_4;
		// _score = _baseScore;
		int32_t L_5 = __this->____baseScore_7;
		__this->____score_8 = L_5;
		// ScoreText.text = _score.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___ScoreText_29;
		int32_t* L_7 = (&__this->____score_8);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_8);
		// _playTime = saveManager.LoadPlayTime(DefineData.DefaultPlayTime);
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_9 = __this->___saveManager_18;
		int32_t L_10 = ((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultPlayTime_0;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = SaveManager_LoadPlayTime_m196A5772FDC80CBF19C22FE008854CEEAE89FAEC(L_9, L_10, NULL);
		__this->____playTime_10 = L_11;
		// _currentTime = _playTime;
		int32_t L_12 = __this->____playTime_10;
		__this->____currentTime_11 = ((float)L_12);
		// SoundManager.Instance.PlayBGM(SoundManager.BGM.Main);
		SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* L_13 = ((SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_13);
		SoundManager_PlayBGM_mB2A7FBBF49E112BD562CC440D0420919C4439ADF(L_13, 1, NULL);
		// PointText.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___PointText_22;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// _highScore = saveManager.LoadHighScore(DefineData.DefaultHighScore);
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_15 = __this->___saveManager_18;
		int32_t L_16 = ((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultHighScore_1;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = SaveManager_LoadHighScore_mD82D4DFDA9ACBF503837AF97531914D3C12FC664(L_15, L_16, NULL);
		__this->____highScore_9 = L_17;
		// HighScoreText.text = _highScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = __this->___HighScoreText_28;
		int32_t* L_19 = (&__this->____highScore_9);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_20);
		// RetryCount = saveManager.LoadRetryCount(DefineData.DefaultRetryCount);
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_21 = __this->___saveManager_18;
		int32_t L_22 = ((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultRetryCount_2;
		NullCheck(L_21);
		int32_t L_23;
		L_23 = SaveManager_LoadRetryCount_mFE598EFCFF410B027A1D272182899A2E3CE3C619(L_21, L_22, NULL);
		LevelManager_set_RetryCount_m736C087799457C7248A6F62B2CA9DED1AEF5C09A_inline(__this, L_23, NULL);
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Update_m4B086B529E2EC1E52B353623AA0C0DB18F57DEBD (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	{
		// LineRendererUpdate();
		LevelManager_LineRendererUpdate_mD6FEF9864B1F0DF220CA5BB825BFC567D79FB547(__this, NULL);
		// TimeUpdate();
		LevelManager_TimeUpdate_m98FA226F660D82EFE58FDBD520FEBE53613B94E5(__this, NULL);
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::TimeUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_TimeUpdate_m98FA226F660D82EFE58FDBD520FEBE53613B94E5 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (_isPlaying)
		bool L_0 = __this->____isPlaying_12;
		if (!L_0)
		{
			goto IL_008d;
		}
	}
	{
		// _currentTime -= Time.deltaTime;
		float L_1 = __this->____currentTime_11;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____currentTime_11 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (_currentTime <= 0)
		float L_3 = __this->____currentTime_11;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		// _currentTime = 0;
		__this->____currentTime_11 = (0.0f);
		// _isPlaying = false;
		__this->____isPlaying_12 = (bool)0;
		// FinishDialog.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___FinishDialog_31;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// if (_highScore < _score)
		int32_t L_5 = __this->____highScore_9;
		int32_t L_6 = __this->____score_8;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0062;
		}
	}
	{
		// _highScore = _score;
		int32_t L_7 = __this->____score_8;
		__this->____highScore_9 = L_7;
	}

IL_0062:
	{
		// saveManager.SaveHighScore(_highScore);
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_8 = __this->___saveManager_18;
		int32_t L_9 = __this->____highScore_9;
		NullCheck(L_8);
		SaveManager_SaveHighScore_m479591E6DAB3E67BC359F5D49AD5C463C06E647E(L_8, L_9, NULL);
	}

IL_0073:
	{
		// TimerText.text = ((int)_currentTime).ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___TimerText_30;
		float L_11 = __this->____currentTime_11;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_11);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_12);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::LineRendererUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LineRendererUpdate_mD6FEF9864B1F0DF220CA5BB825BFC567D79FB547 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3D6023ED7494BB9BE6020421380A31F5599250D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLineRendererUpdateU3Eb__39_0_mF8234E69F3651F03991C73C72DADDF0AE7C3E523_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059* G_B4_0 = NULL;
	List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* G_B4_1 = NULL;
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* G_B4_2 = NULL;
	Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059* G_B3_0 = NULL;
	List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* G_B3_1 = NULL;
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* G_B3_2 = NULL;
	{
		// if (_selectFruits.Count >= 2 && !_isExplosion)
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_0 = __this->____selectFruits_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_0, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0078;
		}
	}
	{
		bool L_2 = __this->____isExplosion_13;
		if (L_2)
		{
			goto IL_0078;
		}
	}
	{
		// lineRenderer.positionCount = _selectFruits.Count;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lineRenderer_25;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_4 = __this->____selectFruits_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_4, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		NullCheck(L_3);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_3, L_5, NULL);
		// lineRenderer.SetPositions(_selectFruits.Select(fruit => fruit.transform.position).ToArray());
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->___lineRenderer_25;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_7 = __this->____selectFruits_5;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var);
		Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059* L_8 = ((U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var))->___U3CU3E9__39_0_1;
		Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		G_B3_2 = L_6;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			G_B4_2 = L_6;
			goto IL_0057;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var);
		U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8* L_10 = ((U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059* L_11 = (Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059*)il2cpp_codegen_object_new(Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_m786F35F3CEE400F73D62259C6CF40056D8A45636(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CLineRendererUpdateU3Eb__39_0_mF8234E69F3651F03991C73C72DADDF0AE7C3E523_RuntimeMethod_var), NULL);
		Func_2_tD056C0983711A04FE8D6005484B11E087DEB9059* L_12 = L_11;
		((U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var))->___U3CU3E9__39_0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var))->___U3CU3E9__39_0_1), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0057:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3D6023ED7494BB9BE6020421380A31F5599250D6(G_B4_1, G_B4_0, Enumerable_Select_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3D6023ED7494BB9BE6020421380A31F5599250D6_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14;
		L_14 = Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790(L_13, Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var);
		NullCheck(G_B4_2);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(G_B4_2, L_14, NULL);
		// lineRenderer.gameObject.SetActive(true);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_15 = __this->___lineRenderer_25;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		return;
	}

IL_0078:
	{
		// lineRenderer.gameObject.SetActive(false);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_17 = __this->___lineRenderer_25;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::FruitSpawn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_FruitSpawn_mAC50B5F08329FB14322DC59919D9A30A6E4281D8 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m5355461B9D5DA9F41ED7956A8BF8E79F105E57DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	{
		// var StartX = -2;
		V_0 = ((int32_t)-2);
		// var StartY = 5;
		V_1 = 5;
		// var X = 0;
		V_2 = 0;
		// var Y = 0;
		V_3 = 0;
		// var MaxX = 5;
		V_4 = 5;
		// for (int i = 0; i < count; i++)
		V_5 = 0;
		goto IL_006f;
	}

IL_0011:
	{
		// var Position = new Vector3(StartX + X, StartY + Y, 0);
		int32_t L_0 = V_0;
		int32_t L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), ((float)((int32_t)il2cpp_codegen_add(L_0, L_1))), ((float)((int32_t)il2cpp_codegen_add(L_2, L_3))), (0.0f), NULL);
		// var fruitObject = Instantiate(FruitPrefabs[Random.Range(0, FruitPrefabs.Length)], Position, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___FruitPrefabs_20;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___FruitPrefabs_20;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_7 = L_11;
		// _allFruits.Add(fruitObject.GetComponent<Fruit>());
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_12 = __this->____allFruits_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_7;
		NullCheck(L_13);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_14;
		L_14 = GameObject_GetComponent_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m5355461B9D5DA9F41ED7956A8BF8E79F105E57DB(L_13, GameObject_GetComponent_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m5355461B9D5DA9F41ED7956A8BF8E79F105E57DB_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_inline(L_12, L_14, List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_RuntimeMethod_var);
		// X++;
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		// if (X == MaxX)
		int32_t L_16 = V_2;
		int32_t L_17 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0069;
		}
	}
	{
		// X = 0;
		V_2 = 0;
		// Y++;
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006f:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_20 = V_5;
		int32_t L_21 = ___count0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::FruitDown(Fruits.Fruit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_FruitDown_mD5C3BD18387E818B1120F2AEFB8C2518650AE1EF (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* ___fruit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isPlaying) return;
		bool L_0 = __this->____isPlaying_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_isPlaying) return;
		return;
	}

IL_0009:
	{
		// _selectFruits.Add(fruit);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_1 = __this->____selectFruits_5;
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_2 = ___fruit0;
		NullCheck(L_1);
		List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_inline(L_1, L_2, List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_RuntimeMethod_var);
		// fruit.SetSelect(true);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_3 = ___fruit0;
		NullCheck(L_3);
		Fruit_SetSelect_mE4F2E6D6D4E969B5E290B80F7812C1D0E3D2BA89(L_3, (bool)1, NULL);
		// _selectID = fruit.ID;
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_4 = ___fruit0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___ID_4;
		__this->____selectID_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____selectID_6), (void*)L_5);
		// fruit.transform.DOScale(new Vector3(SelectScale, SelectScale, SelectScale), 0.5f);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_6 = ___fruit0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		float L_8 = __this->___SelectScale_33;
		float L_9 = __this->___SelectScale_33;
		float L_10 = __this->___SelectScale_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_12;
		L_12 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_7, L_11, (0.5f), NULL);
		// SoundManager.Instance.PlaySE(SoundManager.SE.Touch);
		SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* L_13 = ((SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_13);
		SoundManager_PlaySE_mFC04C74983594CE48006C83AB5BC1766188CC058(L_13, 0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::FruitEnter(Fruits.Fruit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_FruitEnter_mEF1E012EB749A61497011AE0AB955BA52C1AE6F3 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* ___fruit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!_isPlaying) return;
		bool L_0 = __this->____isPlaying_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_isPlaying) return;
		return;
	}

IL_0009:
	{
		// if (_selectID != fruit.ID) return;
		String_t* L_1 = __this->____selectID_6;
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_2 = ___fruit0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___ID_4;
		bool L_4;
		L_4 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// if (_selectID != fruit.ID) return;
		return;
	}

IL_001d:
	{
		// if (fruit.IsSelect)
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_5 = ___fruit0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Fruit_get_IsSelect_m84EDC1314DCFAB497C16E8D507723659803AF3D5_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		// if (_selectFruits.Count >= 2 && _selectFruits[_selectFruits.Count - 2] == fruit)
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_7 = __this->____selectFruits_5;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_7, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_010f;
		}
	}
	{
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_9 = __this->____selectFruits_5;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_10 = __this->____selectFruits_5;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_10, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		NullCheck(L_9);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_12;
		L_12 = List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E(L_9, ((int32_t)il2cpp_codegen_subtract(L_11, 2)), List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E_RuntimeMethod_var);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_13 = ___fruit0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_010f;
		}
	}
	{
		// var removeFruit = _selectFruits[_selectFruits.Count - 1];
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_15 = __this->____selectFruits_5;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_16 = __this->____selectFruits_5;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_16, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		NullCheck(L_15);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_18;
		L_18 = List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E_RuntimeMethod_var);
		V_0 = L_18;
		// removeFruit.SetSelect(false);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_19 = V_0;
		NullCheck(L_19);
		Fruit_SetSelect_mE4F2E6D6D4E969B5E290B80F7812C1D0E3D2BA89(L_19, (bool)0, NULL);
		// _selectFruits.Remove(removeFruit);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_20 = __this->____selectFruits_5;
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_21 = V_0;
		NullCheck(L_20);
		bool L_22;
		L_22 = List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275(L_20, L_21, List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275_RuntimeMethod_var);
		return;
	}

IL_0087:
	{
		// var length = (_selectFruits[_selectFruits.Count - 1].transform.position - fruit.transform.position).magnitude;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_23 = __this->____selectFruits_5;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_24 = __this->____selectFruits_5;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_24, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		NullCheck(L_23);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_26;
		L_26 = List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E(L_23, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E_RuntimeMethod_var);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_29 = ___fruit0;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_28, L_31, NULL);
		V_1 = L_32;
		float L_33;
		L_33 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		// if (length < FruitConnectRange)
		float L_34 = __this->___FruitConnectRange_27;
		if ((!(((float)L_33) < ((float)L_34))))
		{
			goto IL_010f;
		}
	}
	{
		// _selectFruits.Add(fruit);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_35 = __this->____selectFruits_5;
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_36 = ___fruit0;
		NullCheck(L_35);
		List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_inline(L_35, L_36, List_1_Add_mAA6EB7D2BFC2105A14EAEFD924C88BDA57B77ADE_RuntimeMethod_var);
		// fruit.SetSelect(true);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_37 = ___fruit0;
		NullCheck(L_37);
		Fruit_SetSelect_mE4F2E6D6D4E969B5E290B80F7812C1D0E3D2BA89(L_37, (bool)1, NULL);
		// fruit.transform.DOScale(new Vector3(SelectScale, SelectScale, SelectScale), 0.5f);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_38 = ___fruit0;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		float L_40 = __this->___SelectScale_33;
		float L_41 = __this->___SelectScale_33;
		float L_42 = __this->___SelectScale_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_40, L_41, L_42, /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_44;
		L_44 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_39, L_43, (0.5f), NULL);
		// SoundManager.Instance.PlaySE(SoundManager.SE.Touch);
		SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* L_45 = ((SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		SoundManager_PlaySE_mFC04C74983594CE48006C83AB5BC1766188CC058(L_45, 0, NULL);
	}

IL_010f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Fruits.LevelManager::FruitUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_FruitUp_m7BE5667D2D2CA3D8B8DFB44DE1E2C9FBC92BB646 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF* L_0 = (U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF*)il2cpp_codegen_object_new(U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFruitUpU3Ed__43__ctor_m4728B152BAA53F26028897CF39CD81A390DB3C9C(L_0, 0, NULL);
		U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Fruits.LevelManager::ExplosionFruits(System.Collections.Generic.List`1<Fruits.Fruit>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_ExplosionFruits_mFAD07822AAA52914B74CF28C4DCFB6A7A801EAF9 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* ___fruits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var fruit in fruits)
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_0 = ___fruits0;
		NullCheck(L_0);
		Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 L_1;
		L_1 = List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2(L_0, List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F((&V_0), Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_0009_1:
			{
				// foreach (var fruit in fruits)
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_2;
				L_2 = Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_inline((&V_0), Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_RuntimeMethod_var);
				// fruit.SetExplosion(true);
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_3 = L_2;
				NullCheck(L_3);
				Fruit_SetExplosion_mA3E30EC18F2091751B8095EFF8B4D4247CFD003B(L_3, (bool)1, NULL);
				// fruit.SetActiveBody(false);
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_4 = L_3;
				NullCheck(L_4);
				Fruit_SetActiveBody_mEE3ACD63CEA9C669FDE0A712A1B3625370AA29E1(L_4, (bool)0, NULL);
				// fruit.SetSelect(false);
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_5 = L_4;
				NullCheck(L_5);
				Fruit_SetSelect_mE4F2E6D6D4E969B5E290B80F7812C1D0E3D2BA89(L_5, (bool)0, NULL);
				// fruit.SetActive(false);
				NullCheck(L_5);
				Fruit_SetActive_m5527F9FCBC8A9BC0198C16785D0B78FF3C38CCAB(L_5, (bool)0, NULL);
			}

IL_002b_1:
			{
				// foreach (var fruit in fruits)
				bool L_6;
				L_6 = Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC((&V_0), Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		// _isExplosion = true;
		__this->____isExplosion_13 = (bool)1;
		// SoundManager.Instance.PlaySE(SoundManager.SE.Explosion);
		SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* L_7 = ((SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_7);
		SoundManager_PlaySE_mFC04C74983594CE48006C83AB5BC1766188CC058(L_7, 1, NULL);
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::DestroyFruits(System.Collections.Generic.List`1<Fruits.Fruit>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_DestroyFruits_mA34A373B982AAC45A60A1322E0A00D2E0BF64D15 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* ___fruits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* V_3 = NULL;
	{
		// var point = CalcPoint(fruits.Count);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_0 = ___fruits0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_0, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		int32_t L_2;
		L_2 = LevelManager_CalcPoint_m579378CD4625A35BE03C840004638B8FD2770D59(__this, L_1, NULL);
		V_0 = L_2;
		// var position = fruits[fruits.Count - 1].transform.position;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_3 = ___fruits0;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_4 = ___fruits0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_4, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		NullCheck(L_3);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_6;
		L_6 = List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E(L_3, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_1 = L_8;
		// StartCoroutine(DisplayPoint(point, position));
		int32_t L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		RuntimeObject* L_11;
		L_11 = LevelManager_DisplayPoint_m07B567367E5144CA44ECB67D575CD65A1A00317C(__this, L_9, L_10, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
		// foreach (var fruit in fruits)
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_13 = ___fruits0;
		NullCheck(L_13);
		Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 L_14;
		L_14 = List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2(L_13, List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2_RuntimeMethod_var);
		V_2 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F((&V_2), Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_003e_1:
			{
				// foreach (var fruit in fruits)
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_15;
				L_15 = Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_inline((&V_2), Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_RuntimeMethod_var);
				V_3 = L_15;
				// Destroy(fruit.gameObject);
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_16 = V_3;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_17, NULL);
				// _allFruits.Remove(fruit);
				List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_18 = __this->____allFruits_4;
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_19 = V_3;
				NullCheck(L_18);
				bool L_20;
				L_20 = List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275(L_18, L_19, List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275_RuntimeMethod_var);
			}

IL_005e_1:
			{
				// foreach (var fruit in fruits)
				bool L_21;
				L_21 = Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC((&V_2), Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		// _isExplosion = false;
		__this->____isExplosion_13 = (bool)0;
		// FruitSpawn(fruits.Count);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_22 = ___fruits0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_22, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		LevelManager_FruitSpawn_mAC50B5F08329FB14322DC59919D9A30A6E4281D8(__this, L_23, NULL);
		// AddScore(point);
		int32_t L_24 = V_0;
		LevelManager_AddScore_m734F487D6100E8E46B287D6BE1DF98D9DB6F1B3A(__this, L_24, NULL);
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::DestroyAllFruits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_DestroyAllFruits_m7A7E4951CCEC9C85B4DBE40F0515F307DC79A434 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m477FC4B568CDE257CCE837F4CE0D9CA48EFAB70A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* V_1 = NULL;
	{
		// var removeFruit = new List<Fruit>();
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_0 = (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*)il2cpp_codegen_object_new(List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B(L_0, List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B_RuntimeMethod_var);
		// removeFruit = _allFruits.ToList();
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_1 = __this->____allFruits_4;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_2;
		L_2 = Enumerable_ToList_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m477FC4B568CDE257CCE837F4CE0D9CA48EFAB70A(L_1, Enumerable_ToList_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m477FC4B568CDE257CCE837F4CE0D9CA48EFAB70A_RuntimeMethod_var);
		// foreach (var fruit in removeFruit)
		NullCheck(L_2);
		Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 L_3;
		L_3 = List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2(L_2, List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F((&V_0), Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_0019_1:
			{
				// foreach (var fruit in removeFruit)
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_4;
				L_4 = Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_inline((&V_0), Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_RuntimeMethod_var);
				V_1 = L_4;
				// Destroy(fruit.gameObject);
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_5 = V_1;
				NullCheck(L_5);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
				L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
				// _allFruits.Remove(fruit);
				List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_7 = __this->____allFruits_4;
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_8 = V_1;
				NullCheck(L_7);
				bool L_9;
				L_9 = List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275(L_7, L_8, List_1_Remove_mF24BF46712EE1929FADCF2B03865707D89037275_RuntimeMethod_var);
			}

IL_0039_1:
			{
				// foreach (var fruit in removeFruit)
				bool L_10;
				L_10 = Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC((&V_0), Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Fruits.LevelManager::DisplayPoint(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_DisplayPoint_m07B567367E5144CA44ECB67D575CD65A1A00317C (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* L_0 = (U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7*)il2cpp_codegen_object_new(U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisplayPointU3Ed__47__ctor_m32BED0DA98156A8275592B832EBBEFC6205B139E(L_0, 0, NULL);
		U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* L_2 = L_1;
		int32_t L_3 = ___point0;
		NullCheck(L_2);
		L_2->___point_4 = L_3;
		U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* L_4 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___position1;
		NullCheck(L_4);
		L_4->___position_3 = L_5;
		return L_4;
	}
}
// System.Collections.IEnumerator Fruits.LevelManager::BomDown(Fruits.Bom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_BomDown_m760D719A751E535085284B1EF630A308EC6195DE (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* ___bom0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* L_0 = (U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52*)il2cpp_codegen_object_new(U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBomDownU3Ed__48__ctor_m3AD30AAF7E6F59E3E20A6A9355856164951EE6C6(L_0, 0, NULL);
		U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* L_2 = L_1;
		Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* L_3 = ___bom0;
		NullCheck(L_2);
		L_2->___bom_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___bom_2), (void*)L_3);
		return L_2;
	}
}
// System.Void Fruits.LevelManager::OnClickShuffleButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_OnClickShuffleButton_mF2BC878F5DEEB0D7B2D38D61FBCC1EFB5C210789 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	{
		// DestroyAllFruits();
		LevelManager_DestroyAllFruits_m7A7E4951CCEC9C85B4DBE40F0515F307DC79A434(__this, NULL);
		// FruitSpawn(40);
		LevelManager_FruitSpawn_mAC50B5F08329FB14322DC59919D9A30A6E4281D8(__this, ((int32_t)40), NULL);
		// }
		return;
	}
}
// System.Int32 Fruits.LevelManager::CalcPoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelManager_CalcPoint_m579378CD4625A35BE03C840004638B8FD2770D59 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___fruitCount0, const RuntimeMethod* method) 
{
	{
		// return (int)(fruitCount * 100 * (1 + (fruitCount - 3) * 1f));
		int32_t L_0 = ___fruitCount0;
		int32_t L_1 = ___fruitCount0;
		return il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)100)))), ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_1, 3))), (1.0f))))))));
	}
}
// System.Void Fruits.LevelManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddScore_m734F487D6100E8E46B287D6BE1DF98D9DB6F1B3A (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	{
		// _score += score;
		int32_t L_0 = __this->____score_8;
		int32_t L_1 = ___score0;
		__this->____score_8 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// ScoreText.text = _score.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___ScoreText_29;
		int32_t* L_3 = (&__this->____score_8);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::AddBaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddBaseScore_m213AB25D3BA21974502C332662052563E06ECC6B (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// saveManager.SaveBaseScore(_baseScore += _additionalBaseScore);
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_0 = __this->___saveManager_18;
		int32_t L_1 = __this->____baseScore_7;
		int32_t L_2 = __this->____additionalBaseScore_17;
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		V_0 = L_3;
		__this->____baseScore_7 = L_3;
		int32_t L_4 = V_0;
		NullCheck(L_0);
		SaveManager_SaveBaseScore_mF11053935F924E686024F7D12649619A3C0EDB79(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::AddPlayTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_AddPlayTime_mD36D9FAD5847C5FE70DB9900CE69CEA738A61328 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// saveManager.SavePlayTime(_playTime += _additionalPlayTime);
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_0 = __this->___saveManager_18;
		int32_t L_1 = __this->____playTime_10;
		int32_t L_2 = __this->____additionalPlayTime_16;
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		V_0 = L_3;
		__this->____playTime_10 = L_3;
		int32_t L_4 = V_0;
		NullCheck(L_0);
		SaveManager_SavePlayTime_m4B48E4B9874ADD3263F05AFE7CC6AB689E8D2CF6(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void Fruits.LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_mB62AFB73C7A5C4DAC6C517025A6DABEE137C25D7 (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Fruit> _allFruits = new List<Fruit>();
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_0 = (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*)il2cpp_codegen_object_new(List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B(L_0, List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B_RuntimeMethod_var);
		__this->____allFruits_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allFruits_4), (void*)L_0);
		// private List<Fruit> _selectFruits = new List<Fruit>();
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_1 = (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*)il2cpp_codegen_object_new(List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B(L_1, List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B_RuntimeMethod_var);
		__this->____selectFruits_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____selectFruits_5), (void*)L_1);
		// private string _selectID = "";
		__this->____selectID_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____selectID_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private bool _isPlaying = true;
		__this->____isPlaying_12 = (bool)1;
		// private int _fruitSpawnNum = 40;
		__this->____fruitSpawnNum_15 = ((int32_t)40);
		// private int _additionalPlayTime = 15;
		__this->____additionalPlayTime_16 = ((int32_t)15);
		// private int _additionalBaseScore = 1000;
		__this->____additionalBaseScore_17 = ((int32_t)1000);
		// public int BomSpawnCount = 5;
		__this->___BomSpawnCount_23 = 5;
		// public float BomDestroyRange = 1.5f;
		__this->___BomDestroyRange_24 = (1.5f);
		// public int FruitDestroyCount = 3;
		__this->___FruitDestroyCount_26 = 3;
		// public float FruitConnectRange = 1f;
		__this->___FruitConnectRange_27 = (1.0f);
		// public float ExplosionTime = 0.1f;
		__this->___ExplosionTime_32 = (0.100000001f);
		// public float SelectScale = 1.5f;
		__this->___SelectScale_33 = (1.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.LevelManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m994126F1881CFBEDF814290C85839679EBA14457 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8* L_0 = (U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8*)il2cpp_codegen_object_new(U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3540B9D0758FC7C2F5FE0C5879E6669C4BB1AADB(L_0, NULL);
		((U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Fruits.LevelManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3540B9D0758FC7C2F5FE0C5879E6669C4BB1AADB (U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 Fruits.LevelManager/<>c::<LineRendererUpdate>b__39_0(Fruits.Fruit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec_U3CLineRendererUpdateU3Eb__39_0_mF8234E69F3651F03991C73C72DADDF0AE7C3E523 (U3CU3Ec_tB4988A428D5FF9F1A9C5D80645358FF5736377F8* __this, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* ___fruit0, const RuntimeMethod* method) 
{
	{
		// lineRenderer.SetPositions(_selectFruits.Select(fruit => fruit.transform.position).ToArray());
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_0 = ___fruit0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.LevelManager/<FruitUp>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFruitUpU3Ed__43__ctor_m4728B152BAA53F26028897CF39CD81A390DB3C9C (U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fruits.LevelManager/<FruitUp>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFruitUpU3Ed__43_System_IDisposable_Dispose_m1703ADE2674826718C91AD6A6082D7BEF9B3B900 (U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fruits.LevelManager/<FruitUp>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFruitUpU3Ed__43_MoveNext_m63875B95F1A119B6EA3A4C8663310C4A151A9603 (U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8B8A9D3E25393887DE337900C7A09A91F2B1B2EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* V_1 = NULL;
	Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0084;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!_isPlaying) yield return null;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = L_3->____isPlaying_12;
		if (L_4)
		{
			goto IL_0048;
		}
	}
	{
		// if (!_isPlaying) yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0041:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0048:
	{
		// if (_selectFruits.Count >= FruitDestroyCount)
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_5 = V_1;
		NullCheck(L_5);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_6 = L_5->____selectFruits_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_6, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___FruitDestroyCount_26;
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_00e2;
		}
	}
	{
		// ExplosionFruits(_selectFruits);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_10 = V_1;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_11 = V_1;
		NullCheck(L_11);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_12 = L_11->____selectFruits_5;
		NullCheck(L_10);
		LevelManager_ExplosionFruits_mFAD07822AAA52914B74CF28C4DCFB6A7A801EAF9(L_10, L_12, NULL);
		// yield return new WaitForSeconds(ExplosionTime);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___ExplosionTime_32;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, L_14, NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0084:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// DestroyFruits(_selectFruits);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_16 = V_1;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_17 = V_1;
		NullCheck(L_17);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_18 = L_17->____selectFruits_5;
		NullCheck(L_16);
		LevelManager_DestroyFruits_mA34A373B982AAC45A60A1322E0A00D2E0BF64D15(L_16, L_18, NULL);
		// if (_selectFruits.Count >= BomSpawnCount)
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_19 = V_1;
		NullCheck(L_19);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_20 = L_19->____selectFruits_5;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_20, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___BomSpawnCount_23;
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_013b;
		}
	}
	{
		// Instantiate(BomPrefab, _selectFruits[_selectFruits.Count - 1].transform.position, Quaternion.identity);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_24 = V_1;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___BomPrefab_21;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_26 = V_1;
		NullCheck(L_26);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_27 = L_26->____selectFruits_5;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_28 = V_1;
		NullCheck(L_28);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_29 = L_28->____selectFruits_5;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_inline(L_29, List_1_get_Count_m4106D07FA5A21ABF45C45CCC8768917DE9D021A5_RuntimeMethod_var);
		NullCheck(L_27);
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_31;
		L_31 = List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E(L_27, ((int32_t)il2cpp_codegen_subtract(L_30, 1)), List_1_get_Item_m39300E3E9389F03C9255D66B5BEEF7B23DBCE38E_RuntimeMethod_var);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_33, L_34, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		goto IL_013b;
	}

IL_00e2:
	{
		// foreach (var fruit in _selectFruits)
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_36 = V_1;
		NullCheck(L_36);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_37 = L_36->____selectFruits_5;
		NullCheck(L_37);
		Enumerator_t70FB94E586F4B157C2130281A6776CAAEB82C941 L_38;
		L_38 = List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2(L_37, List_1_GetEnumerator_m582F91A560A81836E8194229EA709CA820239FF2_RuntimeMethod_var);
		V_2 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F((&V_2), Enumerator_Dispose_m5C8D17A2C4D2C67F5E86760B7879798DB79CFA3F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0122_1;
			}

IL_00f0_1:
			{
				// foreach (var fruit in _selectFruits)
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_39;
				L_39 = Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_inline((&V_2), Enumerator_get_Current_mDCFA3FB51C3214BF2F4D3B22A4F35E410223EE4D_RuntimeMethod_var);
				// fruit.SetSelect(false);
				Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_40 = L_39;
				NullCheck(L_40);
				Fruit_SetSelect_mE4F2E6D6D4E969B5E290B80F7812C1D0E3D2BA89(L_40, (bool)0, NULL);
				// fruit.transform.DOScale(new Vector3(1, 1, 1), 0.5f);
				NullCheck(L_40);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
				L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				memset((&L_42), 0, sizeof(L_42));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
				TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_43;
				L_43 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_41, L_42, (0.5f), NULL);
			}

IL_0122_1:
			{
				// foreach (var fruit in _selectFruits)
				bool L_44;
				L_44 = Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC((&V_2), Enumerator_MoveNext_mEB37913BC351B2FFE29DFDFE3EDB69A95CF819DC_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_00f0_1;
				}
			}
			{
				goto IL_013b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013b:
	{
		// _selectID = "";
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_45 = V_1;
		NullCheck(L_45);
		L_45->____selectID_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->____selectID_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// _selectFruits.Clear();
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_46 = V_1;
		NullCheck(L_46);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_47 = L_46->____selectFruits_5;
		NullCheck(L_47);
		List_1_Clear_m8B8A9D3E25393887DE337900C7A09A91F2B1B2EE_inline(L_47, List_1_Clear_m8B8A9D3E25393887DE337900C7A09A91F2B1B2EE_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Fruits.LevelManager/<FruitUp>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFruitUpU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m44DE372A9FF028AF070DAAA8783FE5D2A2E699F1 (U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fruits.LevelManager/<FruitUp>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFruitUpU3Ed__43_System_Collections_IEnumerator_Reset_m4CB82B87556EC34BF6F97F0BC0C2E6105FA7C2DD (U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFruitUpU3Ed__43_System_Collections_IEnumerator_Reset_m4CB82B87556EC34BF6F97F0BC0C2E6105FA7C2DD_RuntimeMethod_var)));
	}
}
// System.Object Fruits.LevelManager/<FruitUp>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFruitUpU3Ed__43_System_Collections_IEnumerator_get_Current_m8A62A45C84498D42568937F41A2767FAB4CA2DE2 (U3CFruitUpU3Ed__43_t7C24F0DA7C5A26761E0D2F2754312D0943E34EDF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.LevelManager/<DisplayPoint>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayPointU3Ed__47__ctor_m32BED0DA98156A8275592B832EBBEFC6205B139E (U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fruits.LevelManager/<DisplayPoint>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayPointU3Ed__47_System_IDisposable_Dispose_m33E647B64F234360610FF683261BCC709F7C4CE3 (U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fruits.LevelManager/<DisplayPoint>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayPointU3Ed__47_MoveNext_m336B47B696592D5D4C63E7F6D2E063B5CEE306FF (U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0090;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PointText.transform.position = position;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___PointText_22;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___position_3;
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_7, NULL);
		// PointText.GetComponentInChildren<Text>().text = point.ToString();
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___PointText_22;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10;
		L_10 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_9, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		int32_t* L_11 = (&__this->___point_4);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		// PointText.SetActive(true);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___PointText_22;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// PointText.transform.DOLocalMoveY(100f, 1f);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_15 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___PointText_22;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_18;
		L_18 = ShortcutExtensions_DOLocalMoveY_mA4BDBF3ACA5B305B59551FBF9813D5BF35487CD5(L_17, (100.0f), (1.0f), (bool)0, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_19 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_19, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0090:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PointText.SetActive(false);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___PointText_22;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fruits.LevelManager/<DisplayPoint>d__47::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayPointU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEBE040D0A152B8A5DDB128CA0F1C4583595DD098 (U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fruits.LevelManager/<DisplayPoint>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayPointU3Ed__47_System_Collections_IEnumerator_Reset_m6D7873CEEEDBA5EDE3E0BF960D9113FD3E11EA37 (U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayPointU3Ed__47_System_Collections_IEnumerator_Reset_m6D7873CEEEDBA5EDE3E0BF960D9113FD3E11EA37_RuntimeMethod_var)));
	}
}
// System.Object Fruits.LevelManager/<DisplayPoint>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayPointU3Ed__47_System_Collections_IEnumerator_get_Current_mD43643A96C40917A1109546AE6AA4E96A0D8B4CC (U3CDisplayPointU3Ed__47_tE929313B6729634B9524E757B9A15C0E8D99B4F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.LevelManager/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m99D0A015A56947DA198A541D25EFD1F124B54F35 (U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Fruits.LevelManager/<>c__DisplayClass48_0::<BomDown>b__0(Fruits.Fruit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass48_0_U3CBomDownU3Eb__0_mE03290D14FFDBA4A753AAB3744D5C95401EC2C99 (U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295* __this, Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* ___fruit0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// removeFruit = _allFruits.Where(fruit => (fruit.transform.position - bom.transform.position).magnitude < BomDestroyRange).ToList();
		Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* L_0 = ___fruit0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* L_3 = __this->___bom_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_8 = __this->___U3CU3E4__this_1;
		NullCheck(L_8);
		float L_9 = L_8->___BomDestroyRange_24;
		return (bool)((((float)L_7) < ((float)L_9))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.LevelManager/<BomDown>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBomDownU3Ed__48__ctor_m3AD30AAF7E6F59E3E20A6A9355856164951EE6C6 (U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fruits.LevelManager/<BomDown>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBomDownU3Ed__48_System_IDisposable_Dispose_mE56F5DF9B70038CC575E44F44A57C0A675A563CD (U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fruits.LevelManager/<BomDown>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBomDownU3Ed__48_MoveNext_m5E1A3D8223E1C20FBB3ABD1D80933D34F122405C (U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m477FC4B568CDE257CCE837F4CE0D9CA48EFAB70A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m760870D76E0536DC20A89ADB915D41A4DA011733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass48_0_U3CBomDownU3Eb__0_mE03290D14FFDBA4A753AAB3744D5C95401EC2C99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bb;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295* L_4 = (U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass48_0__ctor_m99D0A015A56947DA198A541D25EFD1F124B54F35(L_4, NULL);
		__this->___U3CU3E8__1_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_4);
		U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295* L_5 = __this->___U3CU3E8__1_4;
		Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* L_6 = __this->___bom_2;
		NullCheck(L_5);
		L_5->___bom_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___bom_0), (void*)L_6);
		U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295* L_7 = __this->___U3CU3E8__1_4;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_8 = __this->___U3CU3E4__this_3;
		NullCheck(L_7);
		L_7->___U3CU3E4__this_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___U3CU3E4__this_1), (void*)L_8);
		// if (!_isPlaying) yield break;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->____isPlaying_12;
		if (L_10)
		{
			goto IL_0058;
		}
	}
	{
		// if (!_isPlaying) yield break;
		return (bool)0;
	}

IL_0058:
	{
		// var removeFruit = new List<Fruit>();
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_11 = (List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964*)il2cpp_codegen_object_new(List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B(L_11, List_1__ctor_m197C2FFED8487EF91E08046AB213E558AE94B11B_RuntimeMethod_var);
		__this->___U3CremoveFruitU3E5__2_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CremoveFruitU3E5__2_5), (void*)L_11);
		// removeFruit = _allFruits.Where(fruit => (fruit.transform.position - bom.transform.position).magnitude < BomDestroyRange).ToList();
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_12 = V_1;
		NullCheck(L_12);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_13 = L_12->____allFruits_4;
		U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295* L_14 = __this->___U3CU3E8__1_4;
		Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB* L_15 = (Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB*)il2cpp_codegen_object_new(Func_2_tFAF3AE0D5031B69CF3CF27D3079DF4560BD73DCB_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mEDE0DA24A89CE84882E6F7315E39780C6165D91C(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass48_0_U3CBomDownU3Eb__0_mE03290D14FFDBA4A753AAB3744D5C95401EC2C99_RuntimeMethod_var), NULL);
		RuntimeObject* L_16;
		L_16 = Enumerable_Where_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m760870D76E0536DC20A89ADB915D41A4DA011733(L_13, L_15, Enumerable_Where_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m760870D76E0536DC20A89ADB915D41A4DA011733_RuntimeMethod_var);
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_17;
		L_17 = Enumerable_ToList_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m477FC4B568CDE257CCE837F4CE0D9CA48EFAB70A(L_16, Enumerable_ToList_TisFruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8_m477FC4B568CDE257CCE837F4CE0D9CA48EFAB70A_RuntimeMethod_var);
		__this->___U3CremoveFruitU3E5__2_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CremoveFruitU3E5__2_5), (void*)L_17);
		// ExplosionFruits(removeFruit);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_18 = V_1;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_19 = __this->___U3CremoveFruitU3E5__2_5;
		NullCheck(L_18);
		LevelManager_ExplosionFruits_mFAD07822AAA52914B74CF28C4DCFB6A7A801EAF9(L_18, L_19, NULL);
		// SoundManager.Instance.PlaySE(SoundManager.SE.Bom);
		SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* L_20 = ((SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_20);
		SoundManager_PlaySE_mFC04C74983594CE48006C83AB5BC1766188CC058(L_20, 2, NULL);
		// yield return new WaitForSeconds(ExplosionTime);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->___ExplosionTime_32;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, L_22, NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00bb:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// DestroyFruits(removeFruit);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_24 = V_1;
		List_1_tC061C67D4C30FF14B503F2D20B646998ACE9D964* L_25 = __this->___U3CremoveFruitU3E5__2_5;
		NullCheck(L_24);
		LevelManager_DestroyFruits_mA34A373B982AAC45A60A1322E0A00D2E0BF64D15(L_24, L_25, NULL);
		// Destroy(bom.gameObject);
		U3CU3Ec__DisplayClass48_0_t0EBC79D08889026DEC956B8C347441726B066295* L_26 = __this->___U3CU3E8__1_4;
		NullCheck(L_26);
		Bom_t0FC1EBA6ADD9EC2FF5BB701C3D778EB6A4C02462* L_27 = L_26->___bom_0;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_28, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fruits.LevelManager/<BomDown>d__48::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBomDownU3Ed__48_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m70C0FDA4A9D515C6C499B82EC6E6103A9F441F06 (U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fruits.LevelManager/<BomDown>d__48::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBomDownU3Ed__48_System_Collections_IEnumerator_Reset_mB03291DFA3BDF09332918D86A9E16CC5503757D2 (U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBomDownU3Ed__48_System_Collections_IEnumerator_Reset_mB03291DFA3BDF09332918D86A9E16CC5503757D2_RuntimeMethod_var)));
	}
}
// System.Object Fruits.LevelManager/<BomDown>d__48::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBomDownU3Ed__48_System_Collections_IEnumerator_get_Current_mB6712261A536D7BDF172CC318C09555E3AC142D1 (U3CBomDownU3Ed__48_t544D182DFD6FD751063D0D1EEB09B7AF23714F52* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.RetryButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryButton_Start_m19F0252C55E8F33FA43F64718D79CBB24F381928 (RetryButton_tE53673328CBED6CD41B1DEC04A97BCBFBCFC705A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_0_m21BED3032D45EF4FC4CEE5967E64F8B491006859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B2_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B1_1 = NULL;
	{
		// GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     var manager = LevelManager.Instance;
		//     var saveManager = SaveManager.Instance;
		//     manager.RetryCount++;
		//     if (manager.RetryCount >= AdsNeedCount)
		//     {
		//         manager.RetryCount = 0;
		//         UnityAdsManager.Instance.ShowInterstitial(result =>
		//         {
		//             Debug.Log($"result = {result.ToString()}");
		//             SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		//         });
		//     }
		//     else
		//     {
		//         SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		//     }
		//     saveManager.SaveRetryCount(manager.RetryCount);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var);
		U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D* L_4 = ((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_0_m21BED3032D45EF4FC4CEE5967E64F8B491006859_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.RetryButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryButton__ctor_mFC5B298C2EA5C8F32D431F851B76416F8CBD9FD1 (RetryButton_tE53673328CBED6CD41B1DEC04A97BCBFBCFC705A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.RetryButton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m29BA6C727969C7568968AA4A420BB2315E01428F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D* L_0 = (U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D*)il2cpp_codegen_object_new(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD795A547030B77759D385300724E2302688B7DC2(L_0, NULL);
		((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Fruits.RetryButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD795A547030B77759D385300724E2302688B7DC2 (U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fruits.RetryButton/<>c::<Start>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__1_0_m21BED3032D45EF4FC4CEE5967E64F8B491006859 (U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_1_m05AA119C3D6AFC5BD6DBD943EA59BEA2A394C9B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* V_0 = NULL;
	int32_t V_1 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* G_B4_0 = NULL;
	SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* G_B1_0 = NULL;
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B3_0 = NULL;
	UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* G_B3_1 = NULL;
	SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* G_B3_2 = NULL;
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B2_0 = NULL;
	UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* G_B2_1 = NULL;
	SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* G_B2_2 = NULL;
	SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* G_B5_0 = NULL;
	{
		// var manager = LevelManager.Instance;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0;
		L_0 = LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline(NULL);
		V_0 = L_0;
		// var saveManager = SaveManager.Instance;
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_1 = ((SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_StaticFields*)il2cpp_codegen_static_fields_for(SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var))->___Instance_4;
		// manager.RetryCount++;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_2 = V_0;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = LevelManager_get_RetryCount_m25F0931441810AF8FBFD332D6A2498D57104C5A7_inline(L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		LevelManager_set_RetryCount_m736C087799457C7248A6F62B2CA9DED1AEF5C09A_inline(L_3, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// if (manager.RetryCount >= AdsNeedCount)
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = LevelManager_get_RetryCount_m25F0931441810AF8FBFD332D6A2498D57104C5A7_inline(L_6, NULL);
		G_B1_0 = L_1;
		if ((((int32_t)L_7) < ((int32_t)3)))
		{
			G_B4_0 = L_1;
			goto IL_0056;
		}
	}
	{
		// manager.RetryCount = 0;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_8 = V_0;
		NullCheck(L_8);
		LevelManager_set_RetryCount_m736C087799457C7248A6F62B2CA9DED1AEF5C09A_inline(L_8, 0, NULL);
		// UnityAdsManager.Instance.ShowInterstitial(result =>
		// {
		//     Debug.Log($"result = {result.ToString()}");
		//     SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		// });
		UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* L_9;
		L_9 = UnityAdsManager_get_Instance_mA165141F90FA49ECACE7F8CC7D250A7C66299D24_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var);
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_10 = ((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_1;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_11 = L_10;
		G_B2_0 = L_11;
		G_B2_1 = L_9;
		G_B2_2 = G_B1_0;
		if (L_11)
		{
			G_B3_0 = L_11;
			G_B3_1 = L_9;
			G_B3_2 = G_B1_0;
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var);
		U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D* L_12 = ((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_13 = (Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B*)il2cpp_codegen_object_new(Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m3EB670BC487D5791481B0A42CE3F231B748BFA99(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_1_m05AA119C3D6AFC5BD6DBD943EA59BEA2A394C9B4_RuntimeMethod_var), NULL);
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_14 = L_13;
		((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_1), (void*)L_14);
		G_B3_0 = L_14;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_004f:
	{
		NullCheck(G_B3_1);
		UnityAdsManager_ShowInterstitial_mC0C8C856B9AB4B3B0020101192A6E106A8603E2E(G_B3_1, G_B3_0, NULL);
		G_B5_0 = G_B3_2;
		goto IL_0068;
	}

IL_0056:
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_15;
		L_15 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_2 = L_15;
		String_t* L_16;
		L_16 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_16, NULL);
		G_B5_0 = G_B4_0;
	}

IL_0068:
	{
		// saveManager.SaveRetryCount(manager.RetryCount);
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = LevelManager_get_RetryCount_m25F0931441810AF8FBFD332D6A2498D57104C5A7_inline(L_17, NULL);
		NullCheck(G_B5_0);
		SaveManager_SaveRetryCount_mE65A6AA0A23EC6D7E1B260AC4D818EDD0127F8D3(G_B5_0, L_18, NULL);
		// });
		return;
	}
}
// System.Void Fruits.RetryButton/<>c::<Start>b__1_1(UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__1_1_m05AA119C3D6AFC5BD6DBD943EA59BEA2A394C9B4 (U3CU3Ec_t2AA3AF3B2262D906637CF7BEAC748C159BA6B16D* __this, int32_t ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600E399E3327568B09839214B99D217391A18D11);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log($"result = {result.ToString()}");
		Il2CppFakeBox<int32_t> L_0(ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D_il2cpp_TypeInfo_var, (&___result0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral600E399E3327568B09839214B99D217391A18D11, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_4, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.RewardButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardButton_Start_mCCC042D7A2D2701752888402B3E2738180BB0EC4 (RewardButton_tE248A38FF904B3A23918142DD236046D3D06EF4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_m34288593C03700685CBEC481F538853866838986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B2_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B1_1 = NULL;
	{
		// GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     var manager = LevelManager.Instance;
		//     UnityAdsManager.Instance.ShowRewarded(result =>
		//     {
		//         Debug.Log($"result = {result.ToString()}");
		//         SceneManager.LoadScene("RewardScene");
		//     });
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var);
		U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47* L_4 = ((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_m34288593C03700685CBEC481F538853866838986_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.RewardButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardButton__ctor_m7A97C4EEC11E2A4110CAC55C73A220B928E7686D (RewardButton_tE248A38FF904B3A23918142DD236046D3D06EF4F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.RewardButton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFB54BE1E8EEA9D7987748474C334D36D41E15336 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47* L_0 = (U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47*)il2cpp_codegen_object_new(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFEB297A453AD04A199B475D07BD5AE3B15A3E152(L_0, NULL);
		((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Fruits.RewardButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFEB297A453AD04A199B475D07BD5AE3B15A3E152 (U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fruits.RewardButton/<>c::<Start>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_m34288593C03700685CBEC481F538853866838986 (U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_1_m2DAE063A294D1B1EF859CADFF75575865A49B043_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B2_0 = NULL;
	UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* G_B2_1 = NULL;
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B1_0 = NULL;
	UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* G_B1_1 = NULL;
	{
		// var manager = LevelManager.Instance;
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0;
		L_0 = LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline(NULL);
		// UnityAdsManager.Instance.ShowRewarded(result =>
		// {
		//     Debug.Log($"result = {result.ToString()}");
		//     SceneManager.LoadScene("RewardScene");
		// });
		UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* L_1;
		L_1 = UnityAdsManager_get_Instance_mA165141F90FA49ECACE7F8CC7D250A7C66299D24_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var);
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_2 = ((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var);
		U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47* L_4 = ((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_5 = (Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B*)il2cpp_codegen_object_new(Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m3EB670BC487D5791481B0A42CE3F231B748BFA99(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_1_m2DAE063A294D1B1EF859CADFF75575865A49B043_RuntimeMethod_var), NULL);
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_6 = L_5;
		((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		UnityAdsManager_ShowRewarded_m76F294C018F127DB1819BBDE677450D44716B4C6(G_B2_1, G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Fruits.RewardButton/<>c::<Start>b__0_1(UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_1_m2DAE063A294D1B1EF859CADFF75575865A49B043 (U3CU3Ec_t2D5EE6EF0E89BFE5AEE70C1E90696D54596B4F47* __this, int32_t ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600E399E3327568B09839214B99D217391A18D11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral868F9CF16F105E66D076A3110A6DE3A38A58DA0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"result = {result.ToString()}");
		Il2CppFakeBox<int32_t> L_0(ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D_il2cpp_TypeInfo_var, (&___result0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral600E399E3327568B09839214B99D217391A18D11, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// SceneManager.LoadScene("RewardScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral868F9CF16F105E66D076A3110A6DE3A38A58DA0E, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.RewardedButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedButton_Start_m2033D4D197C48AF281E7A9BD94032D16B71B53EB (RewardedButton_tBE83B0DF542893FE94104669EE7389EC53E2474E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_mCBD1C43857473CF458937D710B48BE93080B08FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B2_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B1_1 = NULL;
	{
		// GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     UnityAdsManager.Instance.ShowRewarded(result =>
		//     {
		//         Debug.Log($"result = {result.ToString()}");
		//     });
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var);
		U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588* L_4 = ((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_mCBD1C43857473CF458937D710B48BE93080B08FB_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.RewardedButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedButton__ctor_m044E8B92DDB7E405D5E70690A7F72F574DD71EB4 (RewardedButton_tBE83B0DF542893FE94104669EE7389EC53E2474E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.RewardedButton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5668A117BF49F0CCE6901409AC74AB01DEC31F55 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588* L_0 = (U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588*)il2cpp_codegen_object_new(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB5D5778BC97F67F2FC6BD48F4F76BB0206BF6CAD(L_0, NULL);
		((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Fruits.RewardedButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5D5778BC97F67F2FC6BD48F4F76BB0206BF6CAD (U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fruits.RewardedButton/<>c::<Start>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_mCBD1C43857473CF458937D710B48BE93080B08FB (U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_1_m16B1C7D07439571CD78A7D08A74E7C8D5219100D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B2_0 = NULL;
	UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* G_B2_1 = NULL;
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B1_0 = NULL;
	UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* G_B1_1 = NULL;
	{
		// UnityAdsManager.Instance.ShowRewarded(result =>
		// {
		//     Debug.Log($"result = {result.ToString()}");
		// });
		UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* L_0;
		L_0 = UnityAdsManager_get_Instance_mA165141F90FA49ECACE7F8CC7D250A7C66299D24_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var);
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_1 = ((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var);
		U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588* L_3 = ((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_4 = (Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B*)il2cpp_codegen_object_new(Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m3EB670BC487D5791481B0A42CE3F231B748BFA99(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_1_m16B1C7D07439571CD78A7D08A74E7C8D5219100D_RuntimeMethod_var), NULL);
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_5 = L_4;
		((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		NullCheck(G_B2_1);
		UnityAdsManager_ShowRewarded_m76F294C018F127DB1819BBDE677450D44716B4C6(G_B2_1, G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Fruits.RewardedButton/<>c::<Start>b__0_1(UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_1_m16B1C7D07439571CD78A7D08A74E7C8D5219100D (U3CU3Ec_t722AAA5497EFDF611158B533C14EC8C308936588* __this, int32_t ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600E399E3327568B09839214B99D217391A18D11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"result = {result.ToString()}");
		Il2CppFakeBox<int32_t> L_0(ShowResult_tBD5B612C9805B548F6BD180E7558B8409B8F4D7D_il2cpp_TypeInfo_var, (&___result0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral600E399E3327568B09839214B99D217391A18D11, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.SaveManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_Awake_m4CC4F35A90556940B75042C628F680D9DF6B4EA8 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_0 = ((SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_StaticFields*)il2cpp_codegen_static_fields_for(SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_StaticFields*)il2cpp_codegen_static_fields_for(SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_StaticFields*)il2cpp_codegen_static_fields_for(SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void Fruits.SaveManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_Start_m8761A47117EBFC5E240DA0B55A6C19D0F6F0BD07 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fruits.SaveManager::SaveHighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SaveHighScore_m479591E6DAB3E67BC359F5D49AD5C463C06E647E (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F07CFBBDA40C542D4605E2A39F686185F29E858);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(HIGH_SCORE_KEY, score);
		int32_t L_0 = ___score0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral8F07CFBBDA40C542D4605E2A39F686185F29E858, L_0, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Int32 Fruits.SaveManager::LoadHighScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveManager_LoadHighScore_mD82D4DFDA9ACBF503837AF97531914D3C12FC664 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___defaultHighScore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F07CFBBDA40C542D4605E2A39F686185F29E858);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(HIGH_SCORE_KEY, defaultHighScore);
		int32_t L_0 = ___defaultHighScore0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral8F07CFBBDA40C542D4605E2A39F686185F29E858, L_0, NULL);
		return L_1;
	}
}
// System.Void Fruits.SaveManager::SaveRetryCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SaveRetryCount_mE65A6AA0A23EC6D7E1B260AC4D818EDD0127F8D3 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___retryCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E7FD4278227D469ABDF36BAC489175054413D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(RETRY_COUNT_KEY, retryCount);
		int32_t L_0 = ___retryCount0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB7E7FD4278227D469ABDF36BAC489175054413D9, L_0, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Int32 Fruits.SaveManager::LoadRetryCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveManager_LoadRetryCount_mFE598EFCFF410B027A1D272182899A2E3CE3C619 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___defaultRetryCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E7FD4278227D469ABDF36BAC489175054413D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(RETRY_COUNT_KEY, defaultRetryCount);
		int32_t L_0 = ___defaultRetryCount0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteralB7E7FD4278227D469ABDF36BAC489175054413D9, L_0, NULL);
		return L_1;
	}
}
// System.Void Fruits.SaveManager::SavePlayTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SavePlayTime_m4B48E4B9874ADD3263F05AFE7CC6AB689E8D2CF6 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___playTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral343ACCF9B9AFB7B39888BF5EED15A36245E14A87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(PLAY_TIME_KEY, playTime);
		int32_t L_0 = ___playTime0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral343ACCF9B9AFB7B39888BF5EED15A36245E14A87, L_0, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Int32 Fruits.SaveManager::LoadPlayTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveManager_LoadPlayTime_m196A5772FDC80CBF19C22FE008854CEEAE89FAEC (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___defaultPlayTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral343ACCF9B9AFB7B39888BF5EED15A36245E14A87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(PLAY_TIME_KEY, defaultPlayTime);
		int32_t L_0 = ___defaultPlayTime0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral343ACCF9B9AFB7B39888BF5EED15A36245E14A87, L_0, NULL);
		return L_1;
	}
}
// System.Void Fruits.SaveManager::SaveBaseScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SaveBaseScore_mF11053935F924E686024F7D12649619A3C0EDB79 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F3E9D79FA480C202AF88723FCDFD6765C086AFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(BASE_SCORE_KEY, score);
		int32_t L_0 = ___score0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral4F3E9D79FA480C202AF88723FCDFD6765C086AFC, L_0, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Int32 Fruits.SaveManager::LoadBaseScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveManager_LoadBaseScore_m452595DA2B7B584C97F9B7A6848FC1B21864A82E (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, int32_t ___defaultBaseScore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F3E9D79FA480C202AF88723FCDFD6765C086AFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(BASE_SCORE_KEY, defaultBaseScore);
		int32_t L_0 = ___defaultBaseScore0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral4F3E9D79FA480C202AF88723FCDFD6765C086AFC, L_0, NULL);
		return L_1;
	}
}
// System.Void Fruits.SaveManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager__ctor_m303D1C778E1888A0A6CC2CE85E55CC9B9E26BD56 (SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mF1AD8F3370B51EC0F779A4045611E316DA5EDC60 (SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* L_0 = ((SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var))->___Instance_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var))->___Instance_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303_il2cpp_TypeInfo_var))->___Instance_11), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void Fruits.SoundManager::PlayBGM(Fruits.SoundManager/BGM)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayBGM_mB2A7FBBF49E112BD562CC440D0420919C4439ADF (SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* __this, int32_t ___bgm0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___bgm0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___bgm0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_002d;
	}

IL_0009:
	{
		// audioSourceBGM.clip = titleBGM;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSourceBGM_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = __this->___titleBGM_7;
		NullCheck(L_2);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_2, L_3, NULL);
		// break;
		goto IL_002d;
	}

IL_001c:
	{
		// audioSourceBGM.clip = mainBGM;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioSourceBGM_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___mainBGM_8;
		NullCheck(L_4);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_5, NULL);
	}

IL_002d:
	{
		// audioSourceBGM.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___audioSourceBGM_9;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// }
		return;
	}
}
// System.Void Fruits.SoundManager::PlaySE(Fruits.SoundManager/SE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySE_mFC04C74983594CE48006C83AB5BC1766188CC058 (SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* __this, int32_t ___se0, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		// AudioClip audioClip = null;
		V_0 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
		int32_t L_0 = ___se0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_002f;
	}

IL_0016:
	{
		// audioClip = touchSE;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___touchSE_4;
		V_0 = L_1;
		// break;
		goto IL_002f;
	}

IL_001f:
	{
		// audioClip = bomSE;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___bomSE_6;
		V_0 = L_2;
		// break;
		goto IL_002f;
	}

IL_0028:
	{
		// audioClip = explosionSE;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = __this->___explosionSE_5;
		V_0 = L_3;
	}

IL_002f:
	{
		// audioSourceSE.PlayOneShot(audioClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioSourceSE_10;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = V_0;
		NullCheck(L_4);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Fruits.SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m1DFB095EDE4ECE114ED0ECE45BEB047B9FB38B45 (SoundManager_t4BA9AAEAB4F11021B19CD900552788BB05827303* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.StartButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_Start_mE40D411FA78EC3E1AD2924F80D785C9E05B3A79C (StartButton_t7537901AFF5056FC680A86367A7C128D3FC25B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartButton_U3CStartU3Eb__0_0_m03205E0C31288E5E1B9BDB793F471EA3B2AA72C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     ResetPlayTime();
		//     ResetBaseScore();
		//     SceneManager.LoadScene("GameScene");
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)StartButton_U3CStartU3Eb__0_0_m03205E0C31288E5E1B9BDB793F471EA3B2AA72C2_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Fruits.StartButton::ResetPlayTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_ResetPlayTime_mD5CD75B0E1282B3B1DDE49E2B3D9763E31B4FE33 (StartButton_t7537901AFF5056FC680A86367A7C128D3FC25B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveManager.Instance.SavePlayTime(DefineData.DefaultPlayTime);
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_0 = ((SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_StaticFields*)il2cpp_codegen_static_fields_for(SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultPlayTime_0;
		NullCheck(L_0);
		SaveManager_SavePlayTime_m4B48E4B9874ADD3263F05AFE7CC6AB689E8D2CF6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Fruits.StartButton::ResetBaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_ResetBaseScore_mB8B4421F36B6624856D81C488FF04B4B808EFAC6 (StartButton_t7537901AFF5056FC680A86367A7C128D3FC25B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveManager.Instance.SaveBaseScore(DefineData.DefaultBaseScore);
		SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720* L_0 = ((SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_StaticFields*)il2cpp_codegen_static_fields_for(SaveManager_t791F99785A1B0817B53A7807A2414EB0AAE7D720_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_StaticFields*)il2cpp_codegen_static_fields_for(DefineData_t093A40ED975C2B9957AC4093957ED43D5EC304EA_il2cpp_TypeInfo_var))->___DefaultBaseScore_3;
		NullCheck(L_0);
		SaveManager_SaveBaseScore_mF11053935F924E686024F7D12649619A3C0EDB79(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Fruits.StartButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton__ctor_m89EB97404EBD71343DCFF0EBDC68900916805955 (StartButton_t7537901AFF5056FC680A86367A7C128D3FC25B3F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Fruits.StartButton::<Start>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_U3CStartU3Eb__0_0_m03205E0C31288E5E1B9BDB793F471EA3B2AA72C2 (StartButton_t7537901AFF5056FC680A86367A7C128D3FC25B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetPlayTime();
		StartButton_ResetPlayTime_mD5CD75B0E1282B3B1DDE49E2B3D9763E31B4FE33(__this, NULL);
		// ResetBaseScore();
		StartButton_ResetBaseScore_mB8B4421F36B6624856D81C488FF04B4B808EFAC6(__this, NULL);
		// SceneManager.LoadScene("GameScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.TitleButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleButton_Start_mAD23101C6DC5A9C078FF948D81F4C2321CFFD87D (TitleButton_tFDFA122028918033C4582866B8DB9339AAEEF381* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_mAE76AF7B0E61261A7FDC5EB92C48621A853774FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B2_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B1_1 = NULL;
	{
		// GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     SceneManager.LoadScene("TitleScene");
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ((U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var);
		U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5* L_4 = ((U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_mAE76AF7B0E61261A7FDC5EB92C48621A853774FE_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		((U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Fruits.TitleButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleButton__ctor_mDCC159A4DB9150B6670A2AFE66068BEA5B4FDE6A (TitleButton_tFDFA122028918033C4582866B8DB9339AAEEF381* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.TitleButton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2E3671BF7B0585ACFE4F31ACBAE687AE2670E3EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5* L_0 = (U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5*)il2cpp_codegen_object_new(U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m39F78DF30E56B6851B6B69555D4FF0D0868C0736(L_0, NULL);
		((U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Fruits.TitleButton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m39F78DF30E56B6851B6B69555D4FF0D0868C0736 (U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fruits.TitleButton/<>c::<Start>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_mAE76AF7B0E61261A7FDC5EB92C48621A853774FE (U3CU3Ec_tC34BFDF1D579D3D29158E3C445460D33661246C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TitleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF236A1A9250568E812F29DFD6996F01C77B70BC3, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Fruits.UnityAdsManager Fruits.UnityAdsManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* UnityAdsManager_get_Instance_mA165141F90FA49ECACE7F8CC7D250A7C66299D24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityAdsManager Instance { get; private set; }
		UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* L_0 = ((UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Fruits.UnityAdsManager::set_Instance(Fruits.UnityAdsManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_set_Instance_m288BBC0E55F053B0A084AEAC3FF40B2AF25E4F81 (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityAdsManager Instance { get; private set; }
		UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* L_0 = ___value0;
		((UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Fruits.UnityAdsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_Start_m5B7E191E6D4E8EC2EE154C31CB2E871E20F92E4C (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABB4FE46964149A8B76D92A377B9869566EEEA07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* L_0;
		L_0 = UnityAdsManager_get_Instance_mA165141F90FA49ECACE7F8CC7D250A7C66299D24_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// Instance = this;
		UnityAdsManager_set_Instance_m288BBC0E55F053B0A084AEAC3FF40B2AF25E4F81_inline(__this, NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// Advertisement.Initialize(gameID);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m65DDA835C7863A3A6F216816F9AD39886DADBFAA(_stringLiteralABB4FE46964149A8B76D92A377B9869566EEEA07, NULL);
		// Advertisement.AddListener(this);
		Advertisement_AddListener_m37D566FF394309239A31F0EE00557388ED584568(__this, NULL);
		// StartCoroutine(ShowBannerWhenReady());
		RuntimeObject* L_3;
		L_3 = UnityAdsManager_ShowBannerWhenReady_mDFBE37C4193E83BC65504FB6D9505CDEA1EBC0C1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Fruits.UnityAdsManager::ShowBannerWhenReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsManager_ShowBannerWhenReady_mDFBE37C4193E83BC65504FB6D9505CDEA1EBC0C1 (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265* L_0 = (U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265*)il2cpp_codegen_object_new(U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShowBannerWhenReadyU3Ed__10__ctor_m4C4220CE8F8492E49D2D0028516D154313F7A699(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void Fruits.UnityAdsManager::ShowInterstitial(System.Action`1<UnityEngine.Advertisements.ShowResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_ShowInterstitial_mC0C8C856B9AB4B3B0020101192A6E106A8603E2E (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* ___finish0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Advertisement.IsReady(InterstitialID))
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_IsReady_m4AEA4270B557DA12017228442169BABD2F95BA8F(_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Advertisement.Show(InterstitialID);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m6D29C6EC0264A8EDB4EFBA4D49282A019CAB3E03(_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642, NULL);
		// _Finish = finish;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_1 = ___finish0;
		__this->____Finish_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Finish_8), (void*)L_1);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Fruits.UnityAdsManager::ShowRewarded(System.Action`1<UnityEngine.Advertisements.ShowResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_ShowRewarded_m76F294C018F127DB1819BBDE677450D44716B4C6 (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* ___finish0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Advertisement.IsReady(RewardedID))
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_IsReady_m4AEA4270B557DA12017228442169BABD2F95BA8F(_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Advertisement.Show(RewardedID);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m6D29C6EC0264A8EDB4EFBA4D49282A019CAB3E03(_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF, NULL);
		// _Finish = finish;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_1 = ___finish0;
		__this->____Finish_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Finish_8), (void*)L_1);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Fruits.UnityAdsManager::OnUnityAdsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsReady_m9F1C5D870C2EC79B4E84EFAD9D25D685D4537906 (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fruits.UnityAdsManager::OnUnityAdsDidError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsDidError_mD7041334007017F9AC4F536880F03CB0EEFFE05C (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fruits.UnityAdsManager::OnUnityAdsDidStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsDidStart_m82B1EC6FDE0C2E163D53CBA4B1CAB094167E0F79 (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fruits.UnityAdsManager::OnUnityAdsDidFinish(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager_OnUnityAdsDidFinish_mD6B70144E025FDC7AE584655372D451D0E629180 (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method) 
{
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B2_0 = NULL;
	Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* G_B1_0 = NULL;
	{
		// _Finish?.Invoke(showResult);
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_0 = __this->____Finish_8;
		Action_1_tF34E0E6B31C64698EF5AE1DDA08020585689041B* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___showResult1;
		NullCheck(G_B2_0);
		Action_1_Invoke_m5539ABA100DABBCBCC0B5586FB04D8AA58A6EAA7_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Fruits.UnityAdsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsManager__ctor_m7553E518C4D7B82317A485DAA217957D730463F8 (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowBannerWhenReadyU3Ed__10__ctor_m4C4220CE8F8492E49D2D0028516D154313F7A699 (U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowBannerWhenReadyU3Ed__10_System_IDisposable_Dispose_m62BBB37B4F5BAA2C233FFEE7A1703A4831E7DAD3 (U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowBannerWhenReadyU3Ed__10_MoveNext_mB3A19E57D73E98E50E174A59D955791D047894B5 (U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0039;
	}

IL_0019:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0039:
	{
		// while (!Advertisement.IsReady(BannerID))
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Advertisement_IsReady_m4AEA4270B557DA12017228442169BABD2F95BA8F(_stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D, NULL);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		// Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
		Banner_SetPosition_m69680FE1B23F22DC2212F1C37B0890C6833645E8(4, NULL);
		// Advertisement.Banner.Show(BannerID);
		Banner_Show_mE9997CF7E601CC299C5B6C11C6CA074E6A57126C(_stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowBannerWhenReadyU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD475E82AEA7294CA18F3C6B4A7F68D3F57BDD3D9 (U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowBannerWhenReadyU3Ed__10_System_Collections_IEnumerator_Reset_m08B5E7F20E75268F04172C99E4D8C0B4A4B22007 (U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowBannerWhenReadyU3Ed__10_System_Collections_IEnumerator_Reset_m08B5E7F20E75268F04172C99E4D8C0B4A4B22007_RuntimeMethod_var)));
	}
}
// System.Object Fruits.UnityAdsManager/<ShowBannerWhenReady>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowBannerWhenReadyU3Ed__10_System_Collections_IEnumerator_get_Current_mD63FFE0770FDDC63C620A880CCA8507EF210DEA0 (U3CShowBannerWhenReadyU3Ed__10_t2DBD1B9B1199661E457B9D9E16F691958FF82265* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DebugEvent_Invoke_mE3B51BB71B0089D3C3C1E40F8D9A146C37710FBB_inline (DebugEvent_t4E090EFC7A3B282BB1F487F6905FAC47DBF01CDD* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___msg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* LevelManager_get_Instance_m876900566A9BA5614705103782ACDF98281B2A63_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LevelManager Instance { get; private set; }
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0 = ((LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Fruit_set_IsSelect_m722F57952C169641EA16BD8617850199608C99F9_inline (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsSelect { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsSelectU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Fruit_get_IsSelect_m84EDC1314DCFAB497C16E8D507723659803AF3D5_inline (Fruit_tE89118C8B8B6BF8D84BD916C8EA827279C558BF8* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSelect { get; private set; }
		bool L_0 = __this->___U3CIsSelectU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_CurrentState_mE606BD6C9D3267198DFFA336855D70C059891389_inline (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GameState CurrentState { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CCurrentStateU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_CurrentState_m85E9F9FBF63B2CB4B731F7EE7AF4FA9B08697306_inline (GameManager_tB73FF4C23272FE4418F5E74DA9AB51FD5EE7C7AD* __this, const RuntimeMethod* method) 
{
	{
		// public GameState CurrentState { get; private set; }
		int32_t L_0 = __this->___U3CCurrentStateU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* UnityAdsManager_get_Instance_mA165141F90FA49ECACE7F8CC7D250A7C66299D24_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityAdsManager Instance { get; private set; }
		UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* L_0 = ((UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LevelManager_set_Instance_m77332D9A4FC416373C348E322D6B2A6F6A5FC2BB_inline (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LevelManager Instance { get; private set; }
		LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* L_0 = ___value0;
		((LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LevelManager_set_RetryCount_m736C087799457C7248A6F62B2CA9DED1AEF5C09A_inline (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int RetryCount { get => _retryCount; set => _retryCount = value; }
		int32_t L_0 = ___value0;
		__this->____retryCount_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LevelManager_get_RetryCount_m25F0931441810AF8FBFD332D6A2498D57104C5A7_inline (LevelManager_t9CCC85516EA095A6F9FA8AC9C670AACEDE4D1CDF* __this, const RuntimeMethod* method) 
{
	{
		// public int RetryCount { get => _retryCount; set => _retryCount = value; }
		int32_t L_0 = __this->____retryCount_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAdsManager_set_Instance_m288BBC0E55F053B0A084AEAC3FF40B2AF25E4F81_inline (UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityAdsManager Instance { get; private set; }
		UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE* L_0 = ___value0;
		((UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_StaticFields*)il2cpp_codegen_static_fields_for(UnityAdsManager_t4C017258242D2C86A083E46AD1B887134F079CCE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
