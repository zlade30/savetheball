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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
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
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
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
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AppFrameRate
struct AppFrameRate_tDEA6F0977901BBFAE8BF191A66A3C119200F59A5;
// Ball
struct Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Border
struct Border_tDA168CEA0F8D24ED88419B94D932105F3990C8A7;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// EdgeCollider
struct EdgeCollider_tD12D7A737148C42690D43D498B311D6F8F7DD033;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Idle
struct Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Jump
struct Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
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
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Utils
struct Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameOver/<FadeIn>d__6
struct U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7;
// GameOver/<FadeOut>d__7
struct U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0831AD467A0C82B005CA8C33E121A2CCB48147F2;
IL2CPP_EXTERN_C String_t* _stringLiteral0E653D6EA138D9DF2FA27D8EB6FC68D2D88FBA65;
IL2CPP_EXTERN_C String_t* _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2222ECCFCC6E02C37F94B4569E83A972AA8F9B5B;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3;
IL2CPP_EXTERN_C String_t* _stringLiteral38FD5D84C71C47871FC8EDFF0FC904DA17CB8DEB;
IL2CPP_EXTERN_C String_t* _stringLiteral3CA0CEB18F456C10BCFED3BA48B6182D688461CC;
IL2CPP_EXTERN_C String_t* _stringLiteral5563685B258BC3652BDB4AE39657869034F72D23;
IL2CPP_EXTERN_C String_t* _stringLiteral60F5B2BF07AA89B2C3CA145FE12D119086BEDC23;
IL2CPP_EXTERN_C String_t* _stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC;
IL2CPP_EXTERN_C String_t* _stringLiteral65640380845C8260B3B384580D2D970A8BD77060;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118;
IL2CPP_EXTERN_C String_t* _stringLiteralC8A60DFF6BD83A1EFDE0CB3F834684C624E14169;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIdle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C_m922165A8D1DC5494AF67000396161095558C71DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m4A9399E65A1DE1E9108DFD81823F8432EFC450F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mE1C3FC013EDA3998EE674BB299A85B801D80E66A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m9D829B5BA7ECCE7BB56ED9EE07F12F66FBD6B7EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInU3Ed__6_System_Collections_IEnumerator_Reset_m02E3132D0951C4C3E92B987676B688696530150D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutU3Ed__7_System_Collections_IEnumerator_Reset_m84812EB9C205B34EA4A594D5E9AE74F99FFED8A7_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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
struct Il2CppArrayBounds;

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

// Utils
struct Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A  : public RuntimeObject
{
};

struct Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields
{
	// System.String Utils::isIdle1
	String_t* ___isIdle1_0;
	// System.String Utils::isIdle2
	String_t* ___isIdle2_1;
	// System.String Utils::isRunning
	String_t* ___isRunning_2;
	// System.String Utils::isJumping
	String_t* ___isJumping_3;
	// System.String Utils::isSliding
	String_t* ___isSliding_4;
	// System.String Utils::isSideRunning
	String_t* ___isSideRunning_5;
	// System.String Utils::isIdleSlide
	String_t* ___isIdleSlide_6;
	// System.String Utils::isCatch1
	String_t* ___isCatch1_7;
	// System.String Utils::isCatch2
	String_t* ___isCatch2_8;
	// System.String[] Utils::animations
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___animations_9;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
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

// GameOver/<FadeIn>d__6
struct U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7  : public RuntimeObject
{
	// System.Int32 GameOver/<FadeIn>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameOver/<FadeIn>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameOver GameOver/<FadeIn>d__6::<>4__this
	GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* ___U3CU3E4__this_2;
	// System.Single GameOver/<FadeIn>d__6::<alphaVal>5__1
	float ___U3CalphaValU3E5__1_3;
	// UnityEngine.Color GameOver/<FadeIn>d__6::<tmp>5__2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CtmpU3E5__2_4;
};

// GameOver/<FadeOut>d__7
struct U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E  : public RuntimeObject
{
	// System.Int32 GameOver/<FadeOut>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameOver/<FadeOut>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameOver GameOver/<FadeOut>d__7::<>4__this
	GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* ___U3CU3E4__this_2;
	// System.Single GameOver/<FadeOut>d__7::<alphaVal>5__1
	float ___U3CalphaValU3E5__1_3;
	// UnityEngine.Color GameOver/<FadeOut>d__7::<tmp>5__2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CtmpU3E5__2_4;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// AppFrameRate
struct AppFrameRate_tDEA6F0977901BBFAE8BF191A66A3C119200F59A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Ball
struct Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Ball::worldWidth
	float ___worldWidth_4;
	// System.Single Ball::worldHeight
	float ___worldHeight_5;
	// System.Single Ball::ballWidth
	float ___ballWidth_6;
	// System.Single Ball::ballHeight
	float ___ballHeight_7;
	// System.Single Ball::toolbarWidth
	float ___toolbarWidth_8;
	// System.Single Ball::toolbarHeight
	float ___toolbarHeight_9;
	// System.Single Ball::bX
	float ___bX_10;
	// System.Single Ball::bY
	float ___bY_11;
	// UnityEngine.GameObject Ball::toolbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___toolbar_12;
	// UnityEngine.GameObject Ball::btmBorder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___btmBorder_13;
	// Enemy Ball::enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy_14;
	// UnityEngine.Vector3 Ball::mousePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mousePosition_15;
	// System.Boolean Ball::following
	bool ___following_16;
	// System.Boolean Ball::isCaught
	bool ___isCaught_17;
	// UnityEngine.CircleCollider2D Ball::col
	CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* ___col_18;
};

// Border
struct Border_tDA168CEA0F8D24ED88419B94D932105F3990C8A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Border::isTop
	bool ___isTop_4;
	// System.Int32 Border::borderHeight
	int32_t ___borderHeight_5;
};

// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// EdgeCollider
struct EdgeCollider_tD12D7A737148C42690D43D498B311D6F8F7DD033  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EdgeCollider::colDepth
	float ___colDepth_4;
	// System.Single EdgeCollider::zPosition
	float ___zPosition_5;
	// UnityEngine.Vector2 EdgeCollider::screenSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenSize_6;
	// UnityEngine.Transform EdgeCollider::leftCollider
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftCollider_7;
	// UnityEngine.Transform EdgeCollider::rightCollider
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightCollider_8;
	// UnityEngine.Vector3 EdgeCollider::cameraPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraPos_9;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Enemy::isJump
	bool ___isJump_4;
	// System.Boolean Enemy::isIdle
	bool ___isIdle_5;
	// System.Single Enemy::jumpDur
	float ___jumpDur_7;
	// UnityEngine.GameObject Enemy::toolbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___toolbar_8;
	// UnityEngine.GameObject Enemy::btmBorder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___btmBorder_9;
	// System.Single Enemy::idleDur
	float ___idleDur_10;
	// System.Single Enemy::worldWidth
	float ___worldWidth_11;
	// System.Single Enemy::worldHeight
	float ___worldHeight_12;
	// System.Single Enemy::enemyWidth
	float ___enemyWidth_13;
	// System.Single Enemy::enemyHeight
	float ___enemyHeight_14;
	// Movement Enemy::movement
	Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* ___movement_15;
	// Jump Enemy::jump
	Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* ___jump_16;
	// Idle Enemy::idle
	Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* ___idle_17;
	// System.Boolean Enemy::isBallCaught
	bool ___isBallCaught_18;
	// UnityEngine.Animator Enemy::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_19;
	// UnityEngine.SpriteRenderer Enemy::sprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sprite_20;
	// UnityEngine.Rigidbody2D Enemy::rBody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rBody_21;
	// GameOver Enemy::gameOver
	GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* ___gameOver_22;
	// Score Enemy::score
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* ___score_23;
	// Score Enemy::yourScore
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* ___yourScore_24;
};

struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields
{
	// System.Single Enemy::maxJumpDur
	float ___maxJumpDur_6;
};

// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer GameOver::gameOverSprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___gameOverSprite_4;
	// UnityEngine.UI.Image GameOver::playSprite
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___playSprite_5;
	// TMPro.TextMeshProUGUI GameOver::highScore
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___highScore_6;
	// TMPro.TextMeshProUGUI GameOver::score
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___score_7;
};

// Idle
struct Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite[] Idle::sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_4;
	// UnityEngine.SpriteRenderer Idle::sp
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sp_5;
	// UnityEngine.Rigidbody2D Idle::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_6;
	// UnityEngine.Animator Idle::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// System.String Idle::currentEdge
	String_t* ___currentEdge_8;
};

// Jump
struct Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Jump::jumpSpeed
	float ___jumpSpeed_4;
	// UnityEngine.GameObject Jump::ball
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ball_5;
	// UnityEngine.Rigidbody2D Jump::rBody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rBody_6;
	// UnityEngine.SpriteRenderer Jump::sprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sprite_7;
	// UnityEngine.Vector2 Jump::lastPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastPos_8;
	// UnityEngine.Animator Jump::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_9;
	// TMPro.TextMeshProUGUI Jump::score
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___score_10;
	// System.String Jump::jumping
	String_t* ___jumping_11;
	// System.Boolean Jump::isInit
	bool ___isInit_12;
	// System.Boolean Jump::isBallCaught
	bool ___isBallCaught_13;
};

// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Movement::edges
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___edges_4;
	// System.String[] Movement::vertPos
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___vertPos_5;
	// System.String[] Movement::horPos
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___horPos_6;
	// System.String Movement::currentEdge
	String_t* ___currentEdge_7;
	// System.String Movement::currentPosition
	String_t* ___currentPosition_8;
	// System.Single Movement::walkSpeed
	float ___walkSpeed_9;
	// System.Single Movement::maxWalkFlipDur
	float ___maxWalkFlipDur_10;
	// System.Single Movement::walkFlipDur
	float ___walkFlipDur_11;
	// UnityEngine.GameObject Movement::toolbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___toolbar_12;
	// UnityEngine.GameObject Movement::btmBorder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___btmBorder_13;
	// System.Single Movement::worldWidth
	float ___worldWidth_14;
	// System.Single Movement::worldHeight
	float ___worldHeight_15;
	// System.Single Movement::enemyWidth
	float ___enemyWidth_16;
	// System.Single Movement::enemyHeight
	float ___enemyHeight_17;
	// System.Int32 Movement::position
	int32_t ___position_18;
	// UnityEngine.Rigidbody2D Movement::rBody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rBody_19;
	// UnityEngine.SpriteRenderer Movement::sprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sprite_20;
	// UnityEngine.Animator Movement::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_21;
	// TMPro.TextMeshProUGUI Movement::score
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___score_22;
};

// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Score::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_4;
	// System.Single Score::score
	float ___score_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
inline CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Movement>()
inline Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Jump>()
inline Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* Component_GetComponent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m4A9399E65A1DE1E9108DFD81823F8432EFC450F0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Idle>()
inline Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* Component_GetComponent_TisIdle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C_m922165A8D1DC5494AF67000396161095558C71DF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GameOver>()
inline GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* GameObject_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mE1C3FC013EDA3998EE674BB299A85B801D80E66A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Score>()
inline Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* GameObject_GetComponent_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m9D829B5BA7ECCE7BB56ED9EE07F12F66FBD6B7EF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Utils::ActivateAnimation(System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588 (String_t* ___anim0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_simulated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_constraints_mBF02A56E20BD497E3D291931E0AABB850952B238 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Jump::HandleSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_HandleSpeed_m8AED6C8EA48E73E17C0C210562B5C1B40914904A (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) ;
// System.Void Jump::HandleJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_HandleJump_mE70132608528D36A5B4EE08C228B2D07C2FC7D95 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Movement::FlipDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_FlipDuration_m399559958A8C00E32CA957D7B0CE0A049B81FCAC (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Void Movement::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_HandleMovement_m9110BE1C7934A78B41A9F23C8FB99FF04A41FFC4 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Void Movement::DisableGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_DisableGravity_m2709749C1733183DD3F3314E7C9562F02C74F8BE (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Void Movement::HandleSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_HandleSpeed_mAD894AF6AD9127910D58D6474C92B318D6728212 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Sprite::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Sprite_get_bounds_m042F847F6C5118E6B14A3F79A1E1C53E7DFBF452 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameOver::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOver_FadeOut_mE9E8FEA0D7CD98E3824053AF15EB36F5D26F8DF4 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GameOver/<FadeIn>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__6__ctor_m91710FEF71644381B677947111FD64F16CAD27BB (U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameOver/<FadeOut>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__7__ctor_m39871F12EA8509BEA71810C182744D32D5EC39CB (U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m0AA090B0D9CF98F4A7E8AE81ABE29459DBE28C9A (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void Ball::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Awake_m044DA5C4B04FE2AD94C704B0705F05361C6EB404 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// worldHeight = Camera.main.orthographicSize * 2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_0, NULL);
		__this->___worldHeight_5 = ((float)il2cpp_codegen_multiply(L_1, (2.0f)));
		// worldWidth = worldHeight * Screen.width / Screen.height;
		float L_2 = __this->___worldHeight_5;
		int32_t L_3;
		L_3 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		__this->___worldWidth_4 = ((float)(((float)il2cpp_codegen_multiply(L_2, ((float)L_3)))/((float)L_4)));
		// ballWidth = transform.lossyScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_5, NULL);
		float L_7 = L_6.___x_2;
		__this->___ballWidth_6 = L_7;
		// ballHeight = transform.lossyScale.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_8, NULL);
		float L_10 = L_9.___y_3;
		__this->___ballHeight_7 = L_10;
		// toolbarHeight = toolbar.transform.lossyScale.y;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___toolbar_12;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_12, NULL);
		float L_14 = L_13.___y_3;
		__this->___toolbarHeight_9 = L_14;
		// col = GetComponent<CircleCollider2D>();
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_15;
		L_15 = Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F(__this, Component_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_m1E30A71856359306D1F0E9E59CE75B25210FE16F_RuntimeMethod_var);
		__this->___col_18 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___col_18), (void*)L_15);
		// }
		return;
	}
}
// System.Void Ball::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Update_mE1E2A0FEFCA0034896BB36FD9C75718E4D14E3B2 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// mousePosition = Camera.main.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, 0.0f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_2, L_4, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_5, NULL);
		__this->___mousePosition_15 = L_6;
		// if (Input.GetMouseButtonDown (0)) {
		bool L_7;
		L_7 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// if (following)
		bool L_9 = __this->___following_16;
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		// following = false;
		__this->___following_16 = (bool)0;
		goto IL_0054;
	}

IL_004d:
	{
		// following = true;
		__this->___following_16 = (bool)1;
	}

IL_0054:
	{
	}

IL_0055:
	{
		// if(Input.GetMouseButtonUp(0))
		bool L_11;
		L_11 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		// following = false;
		__this->___following_16 = (bool)0;
	}

IL_0066:
	{
		// if (following) {
		bool L_13 = __this->___following_16;
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_03c4;
		}
	}
	{
		// if (mousePosition.x > ((worldWidth / 2) - (ballWidth / 2))) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___mousePosition_15);
		float L_16 = L_15->___x_2;
		float L_17 = __this->___worldWidth_4;
		float L_18 = __this->___ballWidth_6;
		V_4 = (bool)((((float)L_16) > ((float)((float)il2cpp_codegen_subtract(((float)(L_17/(2.0f))), ((float)(L_18/(2.0f)))))))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0127;
		}
	}
	{
		// bX = ((worldWidth / 2) - (ballWidth / 2));
		float L_20 = __this->___worldWidth_4;
		float L_21 = __this->___ballWidth_6;
		__this->___bX_10 = ((float)il2cpp_codegen_subtract(((float)(L_20/(2.0f))), ((float)(L_21/(2.0f)))));
		// mousePosition.Set (bX, mousePosition.y, mousePosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___mousePosition_15);
		float L_23 = __this->___bX_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___mousePosition_15);
		float L_25 = L_24->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___mousePosition_15);
		float L_27 = L_26->___z_4;
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline(L_22, L_23, L_25, L_27, NULL);
		// transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___mousePosition_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_31, L_33, (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_34, NULL);
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_35, NULL);
		goto IL_01d7;
	}

IL_0127:
	{
		// } else if(mousePosition.x < -((worldWidth / 2) - (ballWidth / 2))){
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___mousePosition_15);
		float L_37 = L_36->___x_2;
		float L_38 = __this->___worldWidth_4;
		float L_39 = __this->___ballWidth_6;
		V_5 = (bool)((((float)L_37) < ((float)((-((float)il2cpp_codegen_subtract(((float)(L_38/(2.0f))), ((float)(L_39/(2.0f)))))))))? 1 : 0);
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_01d7;
		}
	}
	{
		// bX = -((worldWidth / 2) - (ballWidth / 2));
		float L_41 = __this->___worldWidth_4;
		float L_42 = __this->___ballWidth_6;
		__this->___bX_10 = ((-((float)il2cpp_codegen_subtract(((float)(L_41/(2.0f))), ((float)(L_42/(2.0f)))))));
		// mousePosition.Set (bX, mousePosition.y, mousePosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_43 = (&__this->___mousePosition_15);
		float L_44 = __this->___bX_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&__this->___mousePosition_15);
		float L_46 = L_45->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_47 = (&__this->___mousePosition_15);
		float L_48 = L_47->___z_4;
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline(L_43, L_44, L_46, L_48, NULL);
		// transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_50, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = __this->___mousePosition_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_53, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_52, L_54, (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_55, NULL);
		NullCheck(L_49);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_49, L_56, NULL);
	}

IL_01d7:
	{
		// if (mousePosition.y < -(((worldHeight / 2) - btmBorder.transform.lossyScale.y) - (ballHeight / 2))) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_57 = (&__this->___mousePosition_15);
		float L_58 = L_57->___y_3;
		float L_59 = __this->___worldHeight_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___btmBorder_13;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_60, NULL);
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_61, NULL);
		float L_63 = L_62.___y_3;
		float L_64 = __this->___ballHeight_7;
		V_6 = (bool)((((float)L_58) < ((float)((-((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(L_59/(2.0f))), L_63)), ((float)(L_64/(2.0f)))))))))? 1 : 0);
		bool L_65 = V_6;
		if (!L_65)
		{
			goto IL_02b3;
		}
	}
	{
		// bY = -(((worldHeight / 2) - btmBorder.transform.lossyScale.y) - (ballHeight / 2));
		float L_66 = __this->___worldHeight_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___btmBorder_13;
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_68, NULL);
		float L_70 = L_69.___y_3;
		float L_71 = __this->___ballHeight_7;
		__this->___bY_11 = ((-((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(L_66/(2.0f))), L_70)), ((float)(L_71/(2.0f)))))));
		// mousePosition.Set (mousePosition.x, bY, mousePosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_72 = (&__this->___mousePosition_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_73 = (&__this->___mousePosition_15);
		float L_74 = L_73->___x_2;
		float L_75 = __this->___bY_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_76 = (&__this->___mousePosition_15);
		float L_77 = L_76->___z_4;
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline(L_72, L_74, L_75, L_77, NULL);
		// transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_79, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		L_81 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = __this->___mousePosition_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		L_83 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_82, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84;
		L_84 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_81, L_83, (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_84, NULL);
		NullCheck(L_78);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_78, L_85, NULL);
	}

IL_02b3:
	{
		// if (mousePosition.y > (((worldHeight / 2) - toolbar.transform.lossyScale.y) - (ballHeight / 2))) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_86 = (&__this->___mousePosition_15);
		float L_87 = L_86->___y_3;
		float L_88 = __this->___worldHeight_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___toolbar_12;
		NullCheck(L_89);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_89, NULL);
		NullCheck(L_90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_90, NULL);
		float L_92 = L_91.___y_3;
		float L_93 = __this->___ballHeight_7;
		V_7 = (bool)((((float)L_87) > ((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(L_88/(2.0f))), L_92)), ((float)(L_93/(2.0f)))))))? 1 : 0);
		bool L_94 = V_7;
		if (!L_94)
		{
			goto IL_038d;
		}
	}
	{
		// bY = (((worldHeight / 2) - toolbar.transform.lossyScale.y) - (ballHeight / 2));
		float L_95 = __this->___worldHeight_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = __this->___toolbar_12;
		NullCheck(L_96);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_96, NULL);
		NullCheck(L_97);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_97, NULL);
		float L_99 = L_98.___y_3;
		float L_100 = __this->___ballHeight_7;
		__this->___bY_11 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(L_95/(2.0f))), L_99)), ((float)(L_100/(2.0f)))));
		// mousePosition.Set (mousePosition.x, bY, mousePosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_101 = (&__this->___mousePosition_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_102 = (&__this->___mousePosition_15);
		float L_103 = L_102->___x_2;
		float L_104 = __this->___bY_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_105 = (&__this->___mousePosition_15);
		float L_106 = L_105->___z_4;
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline(L_101, L_103, L_104, L_106, NULL);
		// transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_108);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_108, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110;
		L_110 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_109, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = __this->___mousePosition_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112;
		L_112 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_111, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		L_113 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_110, L_112, (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_113, NULL);
		NullCheck(L_107);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_107, L_114, NULL);
	}

IL_038d:
	{
		// transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_115;
		L_115 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_116, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118;
		L_118 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_117, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = __this->___mousePosition_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120;
		L_120 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_119, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_121;
		L_121 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_118, L_120, (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_121, NULL);
		NullCheck(L_115);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_115, L_122, NULL);
	}

IL_03c4:
	{
		// if (isCaught) {
		bool L_123 = __this->___isCaught_17;
		V_8 = L_123;
		bool L_124 = V_8;
		if (!L_124)
		{
			goto IL_03d2;
		}
	}
	{
	}

IL_03d2:
	{
		// }
		return;
	}
}
// System.Void Ball::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_OnCollisionEnter2D_m1131B78FD5EDA408DAA8B3615E0636BEC07C0A11 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (collider.gameObject.name == "Enemy") {
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collider0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// col.enabled = false;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_5 = __this->___col_18;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// isCaught = true;
		__this->___isCaught_17 = (bool)1;
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_003d:
	{
		// Debug.Log(collider.gameObject.name);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_7 = ___collider0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
		// }
		return;
	}
}
// System.Void Ball::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball__ctor_mDFF93D8FA13BD70DF4F2FA2B9B402E3B10BD6EDC (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	{
		// private bool following = false;
		__this->___following_16 = (bool)0;
		// private bool isCaught = false;
		__this->___isCaught_17 = (bool)0;
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIdle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C_m922165A8D1DC5494AF67000396161095558C71DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m4A9399E65A1DE1E9108DFD81823F8432EFC450F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mE1C3FC013EDA3998EE674BB299A85B801D80E66A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m9D829B5BA7ECCE7BB56ED9EE07F12F66FBD6B7EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FD5D84C71C47871FC8EDFF0FC904DA17CB8DEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement = GetComponent<Movement>();
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_0;
		L_0 = Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E(__this, Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E_RuntimeMethod_var);
		__this->___movement_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movement_15), (void*)L_0);
		// jump = GetComponent<Jump>();
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_1;
		L_1 = Component_GetComponent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m4A9399E65A1DE1E9108DFD81823F8432EFC450F0(__this, Component_GetComponent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m4A9399E65A1DE1E9108DFD81823F8432EFC450F0_RuntimeMethod_var);
		__this->___jump_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jump_16), (void*)L_1);
		// idle = GetComponent<Idle>();
		Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* L_2;
		L_2 = Component_GetComponent_TisIdle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C_m922165A8D1DC5494AF67000396161095558C71DF(__this, Component_GetComponent_TisIdle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C_m922165A8D1DC5494AF67000396161095558C71DF_RuntimeMethod_var);
		__this->___idle_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___idle_17), (void*)L_2);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_19), (void*)L_3);
		// sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___sprite_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprite_20), (void*)L_4);
		// rBody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5;
		L_5 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rBody_21 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rBody_21), (void*)L_5);
		// gameOver = GameObject.Find("Main Camera").GetComponent<GameOver>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, NULL);
		NullCheck(L_6);
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_7;
		L_7 = GameObject_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mE1C3FC013EDA3998EE674BB299A85B801D80E66A(L_6, GameObject_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mE1C3FC013EDA3998EE674BB299A85B801D80E66A_RuntimeMethod_var);
		__this->___gameOver_22 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameOver_22), (void*)L_7);
		// score = GameObject.Find("Score").GetComponent<Score>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, NULL);
		NullCheck(L_8);
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_9;
		L_9 = GameObject_GetComponent_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m9D829B5BA7ECCE7BB56ED9EE07F12F66FBD6B7EF(L_8, GameObject_GetComponent_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m9D829B5BA7ECCE7BB56ED9EE07F12F66FBD6B7EF_RuntimeMethod_var);
		__this->___score_23 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_23), (void*)L_9);
		// yourScore = GameObject.Find("YourScore").GetComponent<Score>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral38FD5D84C71C47871FC8EDFF0FC904DA17CB8DEB, NULL);
		NullCheck(L_10);
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_11;
		L_11 = GameObject_GetComponent_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m9D829B5BA7ECCE7BB56ED9EE07F12F66FBD6B7EF(L_10, GameObject_GetComponent_TisScore_t190877D354724EB1BD99FA27F906E19CB8F0C88A_m9D829B5BA7ECCE7BB56ED9EE07F12F66FBD6B7EF_RuntimeMethod_var);
		__this->___yourScore_24 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___yourScore_24), (void*)L_11);
		// worldHeight = Camera.main.orthographicSize * 2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_12);
		float L_13;
		L_13 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_12, NULL);
		__this->___worldHeight_12 = ((float)il2cpp_codegen_multiply(L_13, (2.0f)));
		// worldWidth = worldHeight * Screen.width / Screen.height;
		float L_14 = __this->___worldHeight_12;
		int32_t L_15;
		L_15 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_16;
		L_16 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		__this->___worldWidth_11 = ((float)(((float)il2cpp_codegen_multiply(L_14, ((float)L_15)))/((float)L_16)));
		// enemyWidth = transform.lossyScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_17, NULL);
		float L_19 = L_18.___x_2;
		__this->___enemyWidth_13 = L_19;
		// enemyHeight = transform.lossyScale.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_20, NULL);
		float L_22 = L_21.___y_3;
		__this->___enemyHeight_14 = L_22;
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter2D_mCEA8628A3E777C0C06686FB5AE91FB49A94A1FA2 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B14_0 = 0;
	{
		// string name = collider.gameObject.name;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collider0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		V_0 = L_2;
		// if (isBallCaught) {
		bool L_3 = __this->___isBallCaught_18;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0284;
		}
	}
	{
		// transform.eulerAngles = new Vector3(0f, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_5, L_6, NULL);
		// switch (name) {
		String_t* L_7 = V_0;
		V_3 = L_7;
		String_t* L_8 = V_3;
		V_2 = L_8;
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, NULL);
		if (L_10)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118, NULL);
		if (L_12)
		{
			goto IL_00e2;
		}
	}
	{
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, NULL);
		if (L_14)
		{
			goto IL_0144;
		}
	}
	{
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, NULL);
		if (L_16)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01fb;
	}

IL_0081:
	{
		// transform.position = new Vector2(transform.position.x, (((worldHeight / 2) - toolbar.transform.lossyScale.y) - enemyHeight));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		float L_21 = __this->___worldHeight_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___toolbar_8;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_23, NULL);
		float L_25 = L_24.___y_3;
		float L_26 = __this->___enemyHeight_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), L_20, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(L_21/(2.0f))), L_25)), L_26)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_27, NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_28, NULL);
		// sprite.flipY = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_29 = __this->___sprite_20;
		NullCheck(L_29);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_29, (bool)1, NULL);
		// break;
		goto IL_01fd;
	}

IL_00e2:
	{
		// transform.position = new Vector2(transform.position.x, -(((worldHeight / 2) - btmBorder.transform.lossyScale.y) - enemyHeight));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = L_32.___x_2;
		float L_34 = __this->___worldHeight_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___btmBorder_9;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_36, NULL);
		float L_38 = L_37.___y_3;
		float L_39 = __this->___enemyHeight_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), L_33, ((-((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(L_34/(2.0f))), L_38)), L_39)))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_40, NULL);
		NullCheck(L_30);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_30, L_41, NULL);
		// sprite.flipY = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___sprite_20;
		NullCheck(L_42);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_42, (bool)0, NULL);
		// break;
		goto IL_01fd;
	}

IL_0144:
	{
		// transform.position = new Vector2(-((worldWidth / 2) - (enemyWidth / 2)), transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_44 = __this->___worldWidth_11;
		float L_45 = __this->___enemyWidth_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), ((-((float)il2cpp_codegen_subtract(((float)(L_44/(2.0f))), ((float)(L_45/(2.0f))))))), L_48, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_49, NULL);
		NullCheck(L_43);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_50, NULL);
		// sprite.flipY = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___sprite_20;
		NullCheck(L_51);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_51, (bool)0, NULL);
		// sprite.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_52 = __this->___sprite_20;
		NullCheck(L_52);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_52, (bool)0, NULL);
		// break;
		goto IL_01fd;
	}

IL_01a0:
	{
		// transform.position = new Vector2(((worldWidth / 2) - (enemyWidth / 2)), transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_54 = __this->___worldWidth_11;
		float L_55 = __this->___enemyWidth_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		float L_58 = L_57.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_59), ((float)il2cpp_codegen_subtract(((float)(L_54/(2.0f))), ((float)(L_55/(2.0f))))), L_58, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_59, NULL);
		NullCheck(L_53);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_53, L_60, NULL);
		// sprite.flipY = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___sprite_20;
		NullCheck(L_61);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_61, (bool)0, NULL);
		// sprite.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___sprite_20;
		NullCheck(L_62);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_62, (bool)1, NULL);
		// break;
		goto IL_01fd;
	}

IL_01fb:
	{
		// break;
		goto IL_01fd;
	}

IL_01fd:
	{
		// if (name == "Top" || name == "Bottom")
		String_t* L_63 = V_0;
		bool L_64;
		L_64 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_63, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, NULL);
		if (L_64)
		{
			goto IL_0217;
		}
	}
	{
		String_t* L_65 = V_0;
		bool L_66;
		L_66 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_65, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118, NULL);
		G_B14_0 = ((int32_t)(L_66));
		goto IL_0218;
	}

IL_0217:
	{
		G_B14_0 = 1;
	}

IL_0218:
	{
		V_4 = (bool)G_B14_0;
		bool L_67 = V_4;
		if (!L_67)
		{
			goto IL_0231;
		}
	}
	{
		// Utils.ActivateAnimation(Utils.isCatch1, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_68 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isCatch1_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_69 = __this->___animator_19;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_68, L_69, NULL);
		goto IL_0242;
	}

IL_0231:
	{
		// Utils.ActivateAnimation(Utils.isCatch2, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_70 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isCatch2_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_71 = __this->___animator_19;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_70, L_71, NULL);
	}

IL_0242:
	{
		// jump.enabled = false;
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_72 = __this->___jump_16;
		NullCheck(L_72);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_72, (bool)0, NULL);
		// rBody.simulated = false;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_73 = __this->___rBody_21;
		NullCheck(L_73);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_73, (bool)0, NULL);
		// gameOver.enabled = true;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_74 = __this->___gameOver_22;
		NullCheck(L_74);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_74, (bool)1, NULL);
		// score.enabled = false;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_75 = __this->___score_23;
		NullCheck(L_75);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_75, (bool)0, NULL);
		// yourScore.enabled = false;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_76 = __this->___yourScore_24;
		NullCheck(L_76);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_76, (bool)0, NULL);
	}

IL_0284:
	{
		// if (name == "Ball") {
		String_t* L_77 = V_0;
		bool L_78;
		L_78 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_77, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, NULL);
		V_5 = L_78;
		bool L_79 = V_5;
		if (!L_79)
		{
			goto IL_02a7;
		}
	}
	{
		// isBallCaught = true;
		__this->___isBallCaught_18 = (bool)1;
		// isJump = true;
		__this->___isJump_4 = (bool)1;
		goto IL_02b0;
	}

IL_02a7:
	{
		// isJump = false;
		__this->___isJump_4 = (bool)0;
	}

IL_02b0:
	{
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (isBallCaught) {
		bool L_0 = __this->___isBallCaught_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// movement.enabled = false;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_2 = __this->___movement_15;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// idle.enabled = false;
		Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* L_3 = __this->___idle_17;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		goto IL_0177;
	}

IL_002c:
	{
		// jumpDur -= Time.deltaTime;
		float L_4 = __this->___jumpDur_7;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___jumpDur_7 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// if (jumpDur <= 0f) {
		float L_6 = __this->___jumpDur_7;
		V_1 = (bool)((((int32_t)((!(((float)L_6) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_00a5;
		}
	}
	{
		// isJump = true;
		__this->___isJump_4 = (bool)1;
		// if (Random.Range(0, 10) == 0) isIdle = true;
		int32_t L_8;
		L_8 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)10), NULL);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0073;
		}
	}
	{
		// if (Random.Range(0, 10) == 0) isIdle = true;
		__this->___isIdle_5 = (bool)1;
		goto IL_007a;
	}

IL_0073:
	{
		// else isIdle = false;
		__this->___isIdle_5 = (bool)0;
	}

IL_007a:
	{
		// jumpDur = Random.Range(0f, maxJumpDur);
		il2cpp_codegen_runtime_class_init_inline(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		float L_10 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___maxJumpDur_6;
		float L_11;
		L_11 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), L_10, NULL);
		__this->___jumpDur_7 = L_11;
		// idleDur = Random.Range(0f, maxJumpDur);
		float L_12 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___maxJumpDur_6;
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), L_12, NULL);
		__this->___idleDur_10 = L_13;
	}

IL_00a5:
	{
		// if (isJump) {
		bool L_14 = __this->___isJump_4;
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00dd;
		}
	}
	{
		// jump.enabled = true;
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_16 = __this->___jump_16;
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
		// movement.enabled = false;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_17 = __this->___movement_15;
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
		// idle.enabled = false;
		Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* L_18 = __this->___idle_17;
		NullCheck(L_18);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)0, NULL);
		goto IL_0176;
	}

IL_00dd:
	{
		// jump.enabled = false;
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_19 = __this->___jump_16;
		NullCheck(L_19);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)0, NULL);
		// idleDur -= Time.deltaTime;
		float L_20 = __this->___idleDur_10;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___idleDur_10 = ((float)il2cpp_codegen_subtract(L_20, L_21));
		// if (idleDur <= 0f) {
		float L_22 = __this->___idleDur_10;
		V_4 = (bool)((((int32_t)((!(((float)L_22) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_012f;
		}
	}
	{
		// movement.enabled = true;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_24 = __this->___movement_15;
		NullCheck(L_24);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)1, NULL);
		// idle.enabled = false;
		Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* L_25 = __this->___idle_17;
		NullCheck(L_25);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)0, NULL);
	}

IL_012f:
	{
		// if (isIdle) {
		bool L_26 = __this->___isIdle_5;
		V_5 = L_26;
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_0159;
		}
	}
	{
		// idle.enabled = true;
		Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* L_28 = __this->___idle_17;
		NullCheck(L_28);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_28, (bool)1, NULL);
		// movement.enabled = false;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_29 = __this->___movement_15;
		NullCheck(L_29);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		goto IL_0175;
	}

IL_0159:
	{
		// movement.enabled = true;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_30 = __this->___movement_15;
		NullCheck(L_30);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_30, (bool)1, NULL);
		// idle.enabled = false;
		Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* L_31 = __this->___idle_17;
		NullCheck(L_31);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_31, (bool)0, NULL);
	}

IL_0175:
	{
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool isJump = false;
		__this->___isJump_4 = (bool)0;
		// float jumpDur = maxJumpDur;
		il2cpp_codegen_runtime_class_init_inline(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		float L_0 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___maxJumpDur_6;
		__this->___jumpDur_7 = L_0;
		// float idleDur = 0f;
		__this->___idleDur_10 = (0.0f);
		// private bool isBallCaught = false;
		__this->___isBallCaught_18 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Enemy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__cctor_mAA4BD2B92D5A3F66E771359D4C97C551E5AA84B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static float maxJumpDur = 5f;
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_il2cpp_TypeInfo_var))->___maxJumpDur_6 = (5.0f);
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
// System.Void Idle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Idle_Start_m383E4A7AE4C355F0570CF11D086B2F111F0FA5C4 (Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sp = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___sp_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sp_5), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_7), (void*)L_1);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void Idle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Idle_Update_m55AC523E54585262CC08F2A445C9583CB872951D (Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// transform.eulerAngles = new Vector3(0f, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_1, NULL);
		// if (currentEdge == "Top" || currentEdge == "Bottom") {
		String_t* L_2 = __this->___currentEdge_8;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, NULL);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_4 = __this->___currentEdge_8;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0046;
	}

IL_0045:
	{
		G_B3_0 = 1;
	}

IL_0046:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_00b2;
		}
	}
	{
		// int choose = Random.Range(0, 2);
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 2, NULL);
		V_1 = L_7;
		// if (choose == 0) Utils.ActivateAnimation(Utils.isIdle1, animator);
		int32_t L_8 = V_1;
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_006e;
		}
	}
	{
		// if (choose == 0) Utils.ActivateAnimation(Utils.isIdle1, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_10 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdle1_0;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___animator_7;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_10, L_11, NULL);
		goto IL_007f;
	}

IL_006e:
	{
		// else Utils.ActivateAnimation(Utils.isIdle2, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_12 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdle2_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___animator_7;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_12, L_13, NULL);
	}

IL_007f:
	{
		// if (currentEdge == "Top") sp.flipY = true;
		String_t* L_14 = __this->___currentEdge_8;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00a2;
		}
	}
	{
		// if (currentEdge == "Top") sp.flipY = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17 = __this->___sp_5;
		NullCheck(L_17);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_17, (bool)1, NULL);
		goto IL_00af;
	}

IL_00a2:
	{
		// else sp.flipY = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = __this->___sp_5;
		NullCheck(L_18);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_18, (bool)0, NULL);
	}

IL_00af:
	{
		goto IL_0104;
	}

IL_00b2:
	{
		// sp.flipY = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19 = __this->___sp_5;
		NullCheck(L_19);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_19, (bool)0, NULL);
		// if (currentEdge == "Left") sp.flipX = false;
		String_t* L_20 = __this->___currentEdge_8;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_00e5;
		}
	}
	{
		// if (currentEdge == "Left") sp.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___sp_5;
		NullCheck(L_23);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_23, (bool)0, NULL);
		goto IL_00f2;
	}

IL_00e5:
	{
		// else sp.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___sp_5;
		NullCheck(L_24);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_24, (bool)1, NULL);
	}

IL_00f2:
	{
		// Utils.ActivateAnimation(Utils.isIdleSlide, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_25 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdleSlide_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___animator_7;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_25, L_26, NULL);
	}

IL_0104:
	{
		// rb.constraints = RigidbodyConstraints2D.FreezeAll;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_27 = __this->___rb_6;
		NullCheck(L_27);
		Rigidbody2D_set_constraints_mBF02A56E20BD497E3D291931E0AABB850952B238(L_27, 7, NULL);
		// }
		return;
	}
}
// System.Void Idle::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Idle_OnCollisionEnter2D_m3B8D0046312B5F10ADA1ECCDCA7686B8A4EB8F8D (Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collider0, const RuntimeMethod* method) 
{
	{
		// currentEdge = collider.gameObject.name;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collider0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		__this->___currentEdge_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentEdge_8), (void*)L_2);
		// }
		return;
	}
}
// System.Void Idle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Idle__ctor_m476C4F446FBD6CE30091327C2E2BED5F2DC0ED6B (Idle_t7DBEF9F4F9EB9ECEDF9760005D4711F21690EC9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string currentEdge = "";
		__this->___currentEdge_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentEdge_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Jump::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_Awake_m3E68C347D08D03A331518B9CA05155096998A4E0 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rBody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rBody_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rBody_6), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_9), (void*)L_1);
		// sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___sprite_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprite_7), (void*)L_2);
		// score = GameObject.Find("Score").GetComponent<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, NULL);
		NullCheck(L_3);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4;
		L_4 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_3, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		__this->___score_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_10), (void*)L_4);
		// }
		return;
	}
}
// System.Void Jump::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_Update_mADB7064E5D2EB24D87DD72AA75CFC67FF6E4E4A6 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) 
{
	{
		// HandleSpeed();
		Jump_HandleSpeed_m8AED6C8EA48E73E17C0C210562B5C1B40914904A(__this, NULL);
		// HandleJump();
		Jump_HandleJump_mE70132608528D36A5B4EE08C228B2D07C2FC7D95(__this, NULL);
		// }
		return;
	}
}
// System.Void Jump::HandleJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_HandleJump_mE70132608528D36A5B4EE08C228B2D07C2FC7D95 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (isBallCaught) Utils.ActivateAnimation(Utils.isCatch1, animator);
		bool L_0 = __this->___isBallCaught_13;
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (isBallCaught) Utils.ActivateAnimation(Utils.isCatch1, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isCatch1_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_9;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_2, L_3, NULL);
		goto IL_002f;
	}

IL_001e:
	{
		// else Utils.ActivateAnimation(Utils.isJumping, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isJumping_3;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___animator_9;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_4, L_5, NULL);
	}

IL_002f:
	{
		// sprite.flipY = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___sprite_7;
		NullCheck(L_6);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_6, (bool)1, NULL);
		// if (!isInit) {
		bool L_7 = __this->___isInit_12;
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_007d;
		}
	}
	{
		// lastPos = ball.transform.position - transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___ball_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_11, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_14, NULL);
		__this->___lastPos_8 = L_15;
		// isInit = true;
		__this->___isInit_12 = (bool)1;
	}

IL_007d:
	{
		// transform.position = Vector2.MoveTowards(
		//     transform.position,
		//     new Vector2(lastPos.x * 7f, lastPos.y * 7f),
		//     jumpSpeed * Time.deltaTime
		// );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___lastPos_8);
		float L_21 = L_20->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___lastPos_8);
		float L_23 = L_22->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), ((float)il2cpp_codegen_multiply(L_21, (7.0f))), ((float)il2cpp_codegen_multiply(L_23, (7.0f))), /*hidden argument*/NULL);
		float L_25 = __this->___jumpSpeed_4;
		float L_26;
		L_26 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_19, L_24, ((float)il2cpp_codegen_multiply(L_25, L_26)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_27, NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_28, NULL);
		// var offset = 90f;
		V_0 = (90.0f);
		// lastPos.Normalize();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->___lastPos_8);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_29, NULL);
		// float angle = Mathf.Atan2(lastPos.y, lastPos.x) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___lastPos_8);
		float L_31 = L_30->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = (&__this->___lastPos_8);
		float L_33 = L_32->___x_0;
		float L_34;
		L_34 = atan2f(L_31, L_33);
		V_1 = ((float)il2cpp_codegen_multiply(L_34, (57.2957802f)));
		// transform.rotation = Quaternion.Euler(Vector3.forward * (angle + offset));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_37 = V_1;
		float L_38 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_36, ((float)il2cpp_codegen_add(L_37, L_38)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_39, NULL);
		NullCheck(L_35);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_35, L_40, NULL);
		// rBody.constraints = RigidbodyConstraints2D.None;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_41 = __this->___rBody_6;
		NullCheck(L_41);
		Rigidbody2D_set_constraints_mBF02A56E20BD497E3D291931E0AABB850952B238(L_41, 0, NULL);
		// }
		return;
	}
}
// System.Void Jump::HandleSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_HandleSpeed_m8AED6C8EA48E73E17C0C210562B5C1B40914904A (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// if (int.Parse(score.text) >= 100 && int.Parse(score.text) <= 199) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___score_10;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_1, NULL);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)100))))
		{
			goto IL_0031;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___score_10;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_3);
		int32_t L_5;
		L_5 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_4, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)199)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// jumpSpeed = 5f;
		__this->___jumpSpeed_4 = (5.0f);
		goto IL_0199;
	}

IL_0048:
	{
		// } else if (int.Parse(score.text) >= 200 && int.Parse(score.text) <= 299) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___score_10;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_7);
		int32_t L_9;
		L_9 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_8, NULL);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)200))))
		{
			goto IL_007b;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___score_10;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_10);
		int32_t L_12;
		L_12 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_11, NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)299)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007c;
	}

IL_007b:
	{
		G_B8_0 = 0;
	}

IL_007c:
	{
		V_1 = (bool)G_B8_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		// jumpSpeed = 5.5f;
		__this->___jumpSpeed_4 = (5.5f);
		goto IL_0199;
	}

IL_0092:
	{
		// } else if (int.Parse(score.text) >= 300 && int.Parse(score.text) <= 399) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___score_10;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_14);
		int32_t L_16;
		L_16 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_15, NULL);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)300))))
		{
			goto IL_00c5;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___score_10;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_17);
		int32_t L_19;
		L_19 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_18, NULL);
		G_B13_0 = ((((int32_t)((((int32_t)L_19) > ((int32_t)((int32_t)399)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B13_0 = 0;
	}

IL_00c6:
	{
		V_2 = (bool)G_B13_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00dc;
		}
	}
	{
		// jumpSpeed = 6f;
		__this->___jumpSpeed_4 = (6.0f);
		goto IL_0199;
	}

IL_00dc:
	{
		// } else if (int.Parse(score.text) >= 400 && int.Parse(score.text) <= 499) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___score_10;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_21);
		int32_t L_23;
		L_23 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_22, NULL);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)400))))
		{
			goto IL_010f;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->___score_10;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_24);
		int32_t L_26;
		L_26 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_25, NULL);
		G_B18_0 = ((((int32_t)((((int32_t)L_26) > ((int32_t)((int32_t)499)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0110;
	}

IL_010f:
	{
		G_B18_0 = 0;
	}

IL_0110:
	{
		V_3 = (bool)G_B18_0;
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0123;
		}
	}
	{
		// jumpSpeed = 7f;
		__this->___jumpSpeed_4 = (7.0f);
		goto IL_0199;
	}

IL_0123:
	{
		// } else if (int.Parse(score.text) >= 500 && int.Parse(score.text) <= 599) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_28 = __this->___score_10;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_28);
		int32_t L_30;
		L_30 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_29, NULL);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)500))))
		{
			goto IL_0156;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = __this->___score_10;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_31);
		int32_t L_33;
		L_33 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_32, NULL);
		G_B23_0 = ((((int32_t)((((int32_t)L_33) > ((int32_t)((int32_t)599)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0157;
	}

IL_0156:
	{
		G_B23_0 = 0;
	}

IL_0157:
	{
		V_4 = (bool)G_B23_0;
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_016c;
		}
	}
	{
		// jumpSpeed = 8f;
		__this->___jumpSpeed_4 = (8.0f);
		goto IL_0199;
	}

IL_016c:
	{
		// } else if (int.Parse(score.text) >= 600) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_35 = __this->___score_10;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_35);
		int32_t L_37;
		L_37 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_36, NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)((int32_t)600)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_0199;
		}
	}
	{
		// jumpSpeed = 9f;
		__this->___jumpSpeed_4 = (9.0f);
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void Jump::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_OnCollisionEnter2D_mBFEDA5A496413E41975746D4F197F99B7E0AA635 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (collider.gameObject.name == "Ball") {
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collider0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// isBallCaught = true;
		__this->___isBallCaught_13 = (bool)1;
	}

IL_0023:
	{
		// isInit = false;
		__this->___isInit_12 = (bool)0;
		// }
		return;
	}
}
// System.Void Jump::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump__ctor_m9CE21BB399187D66D418C4CF330935DA24BBA9BC (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8A60DFF6BD83A1EFDE0CB3F834684C624E14169);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string jumping = "jumping";
		__this->___jumping_11 = _stringLiteralC8A60DFF6BD83A1EFDE0CB3F834684C624E14169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumping_11), (void*)_stringLiteralC8A60DFF6BD83A1EFDE0CB3F834684C624E14169);
		// private bool isBallCaught = false;
		__this->___isBallCaught_13 = (bool)0;
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
// System.Void Movement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Awake_mACC9CCA53B481EA603EC44E14E6E312F905F2728 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rBody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rBody_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rBody_19), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_21), (void*)L_1);
		// sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___sprite_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprite_20), (void*)L_2);
		// score = GameObject.Find("Score").GetComponent<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, NULL);
		NullCheck(L_3);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4;
		L_4 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_3, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		__this->___score_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_22), (void*)L_4);
		// walkFlipDur = maxWalkFlipDur;
		float L_5 = __this->___maxWalkFlipDur_10;
		__this->___walkFlipDur_11 = L_5;
		// worldHeight = Camera.main.orthographicSize * 2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_6, NULL);
		__this->___worldHeight_15 = ((float)il2cpp_codegen_multiply(L_7, (2.0f)));
		// worldWidth = worldHeight * Screen.width / Screen.height;
		float L_8 = __this->___worldHeight_15;
		int32_t L_9;
		L_9 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		__this->___worldWidth_14 = ((float)(((float)il2cpp_codegen_multiply(L_8, ((float)L_9)))/((float)L_10)));
		// enemyWidth = transform.lossyScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_11, NULL);
		float L_13 = L_12.___x_2;
		__this->___enemyWidth_16 = L_13;
		// enemyHeight = transform.lossyScale.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_14, NULL);
		float L_16 = L_15.___y_3;
		__this->___enemyHeight_17 = L_16;
		// }
		return;
	}
}
// System.Void Movement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Start_m3D09153FD03F06C31BBD151C21BA361EA49FA72B (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Update_m4B99F519DF0A29B476F90FE4314A770CD53EC418 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// FlipDuration();
		Movement_FlipDuration_m399559958A8C00E32CA957D7B0CE0A049B81FCAC(__this, NULL);
		// }
		return;
	}
}
// System.Void Movement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_FixedUpdate_mBAFAFB0C3B305F3F3FCDE7E0AE3B61C89E84B6CC (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// HandleMovement();
		Movement_HandleMovement_m9110BE1C7934A78B41A9F23C8FB99FF04A41FFC4(__this, NULL);
		// DisableGravity();
		Movement_DisableGravity_m2709749C1733183DD3F3314E7C9562F02C74F8BE(__this, NULL);
		// HandleSpeed();
		Movement_HandleSpeed_mAD894AF6AD9127910D58D6474C92B318D6728212(__this, NULL);
		// }
		return;
	}
}
// System.Void Movement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_OnCollisionEnter2D_m856F0E8A2BE6EC056A72D147FB4E09E506B3BB8F (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// currentEdge = collider.gameObject.name;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collider0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		__this->___currentEdge_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentEdge_7), (void*)L_2);
		// switch (currentEdge) {
		String_t* L_3 = __this->___currentEdge_7;
		V_1 = L_3;
		String_t* L_4 = V_1;
		V_0 = L_4;
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118, NULL);
		if (L_8)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, NULL);
		if (L_10)
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, NULL);
		if (L_12)
		{
			goto IL_0145;
		}
	}
	{
		goto IL_0186;
	}

IL_005a:
	{
		// transform.position = new Vector2(transform.position.x, (((worldHeight / 2) - toolbar.transform.lossyScale.y) - enemyHeight));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___x_2;
		float L_17 = __this->___worldHeight_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___toolbar_12;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_19, NULL);
		float L_21 = L_20.___y_3;
		float L_22 = __this->___enemyHeight_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), L_16, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(L_17/(2.0f))), L_21)), L_22)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_23, NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_24, NULL);
		// break;
		goto IL_0188;
	}

IL_00ae:
	{
		// transform.position = new Vector2(transform.position.x, -(((worldHeight / 2) - btmBorder.transform.lossyScale.y) - enemyHeight));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___x_2;
		float L_29 = __this->___worldHeight_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___btmBorder_13;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_31, NULL);
		float L_33 = L_32.___y_3;
		float L_34 = __this->___enemyHeight_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_35), L_28, ((-((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(L_29/(2.0f))), L_33)), L_34)))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_35, NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_36, NULL);
		// break;
		goto IL_0188;
	}

IL_0103:
	{
		// transform.position = new Vector2(-((worldWidth / 2) - (enemyWidth / 2)), transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_38 = __this->___worldWidth_14;
		float L_39 = __this->___enemyWidth_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		float L_42 = L_41.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_43), ((-((float)il2cpp_codegen_subtract(((float)(L_38/(2.0f))), ((float)(L_39/(2.0f))))))), L_42, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_43, NULL);
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_44, NULL);
		// break;
		goto IL_0188;
	}

IL_0145:
	{
		// transform.position = new Vector2(((worldWidth / 2) - (enemyWidth / 2)), transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_46 = __this->___worldWidth_14;
		float L_47 = __this->___enemyWidth_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		float L_50 = L_49.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_51), ((float)il2cpp_codegen_subtract(((float)(L_46/(2.0f))), ((float)(L_47/(2.0f))))), L_50, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_51, NULL);
		NullCheck(L_45);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_45, L_52, NULL);
		// break;
		goto IL_0188;
	}

IL_0186:
	{
		// break;
		goto IL_0188;
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Void Movement::DisableGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_DisableGravity_m2709749C1733183DD3F3314E7C9562F02C74F8BE (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (currentEdge != "")
		String_t* L_0 = __this->___currentEdge_7;
		bool L_1;
		L_1 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// rBody.gravityScale = 0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rBody_19;
		NullCheck(L_3);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_3, (0.0f), NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Movement::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_HandleMovement_m9110BE1C7934A78B41A9F23C8FB99FF04A41FFC4 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	int32_t G_B14_0 = 0;
	{
		// transform.eulerAngles = new Vector3(0f, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_1, NULL);
		// if (currentEdge == "Top" || currentEdge == "Bottom") {
		String_t* L_2 = __this->___currentEdge_7;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, NULL);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_4 = __this->___currentEdge_7;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0046;
	}

IL_0045:
	{
		G_B3_0 = 1;
	}

IL_0046:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_015e;
		}
	}
	{
		// currentPosition = horPos[position];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->___horPos_6;
		int32_t L_8 = __this->___position_18;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___currentPosition_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPosition_8), (void*)L_10);
		// Utils.ActivateAnimation(Utils.isRunning, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isRunning_2;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_21;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_11, L_12, NULL);
		// if (currentEdge == "Top") sprite.flipY = true;
		String_t* L_13 = __this->___currentEdge_7;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, NULL);
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0095;
		}
	}
	{
		// if (currentEdge == "Top") sprite.flipY = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = __this->___sprite_20;
		NullCheck(L_16);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_16, (bool)1, NULL);
		goto IL_00a2;
	}

IL_0095:
	{
		// else sprite.flipY = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17 = __this->___sprite_20;
		NullCheck(L_17);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_17, (bool)0, NULL);
	}

IL_00a2:
	{
		// if (currentPosition == "Right") {
		String_t* L_18 = __this->___currentPosition_8;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, NULL);
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_0108;
		}
	}
	{
		// rBody.MovePosition(transform.position + transform.right * walkSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_21 = __this->___rBody_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_24, NULL);
		float L_26 = __this->___walkSpeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, L_26, NULL);
		float L_28;
		L_28 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_30, NULL);
		NullCheck(L_21);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_21, L_31, NULL);
		// sprite.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_32 = __this->___sprite_20;
		NullCheck(L_32);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_32, (bool)1, NULL);
		goto IL_0158;
	}

IL_0108:
	{
		// sprite.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_33 = __this->___sprite_20;
		NullCheck(L_33);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_33, (bool)0, NULL);
		// rBody.MovePosition(transform.position - transform.right * walkSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_34 = __this->___rBody_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_37, NULL);
		float L_39 = __this->___walkSpeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_38, L_39, NULL);
		float L_41;
		L_41 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_36, L_42, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_43, NULL);
		NullCheck(L_34);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_34, L_44, NULL);
	}

IL_0158:
	{
		goto IL_029e;
	}

IL_015e:
	{
		// } else if (currentEdge == "Right" || currentEdge == "Left") {
		String_t* L_45 = __this->___currentEdge_7;
		bool L_46;
		L_46 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_45, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, NULL);
		if (L_46)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_47 = __this->___currentEdge_7;
		bool L_48;
		L_48 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_47, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, NULL);
		G_B14_0 = ((int32_t)(L_48));
		goto IL_0183;
	}

IL_0182:
	{
		G_B14_0 = 1;
	}

IL_0183:
	{
		V_3 = (bool)G_B14_0;
		bool L_49 = V_3;
		if (!L_49)
		{
			goto IL_029e;
		}
	}
	{
		// currentPosition = vertPos[position];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = __this->___vertPos_5;
		int32_t L_51 = __this->___position_18;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		String_t* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		__this->___currentPosition_8 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPosition_8), (void*)L_53);
		// sprite.flipY = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_54 = __this->___sprite_20;
		NullCheck(L_54);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_54, (bool)0, NULL);
		// if (currentEdge == "Right") sprite.flipX = true;
		String_t* L_55 = __this->___currentEdge_7;
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, NULL);
		V_4 = L_56;
		bool L_57 = V_4;
		if (!L_57)
		{
			goto IL_01d0;
		}
	}
	{
		// if (currentEdge == "Right") sprite.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___sprite_20;
		NullCheck(L_58);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_58, (bool)1, NULL);
		goto IL_01dd;
	}

IL_01d0:
	{
		// else sprite.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___sprite_20;
		NullCheck(L_59);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_59, (bool)0, NULL);
	}

IL_01dd:
	{
		// if (currentPosition == "Top") {
		String_t* L_60 = __this->___currentPosition_8;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, NULL);
		V_5 = L_61;
		bool L_62 = V_5;
		if (!L_62)
		{
			goto IL_0249;
		}
	}
	{
		// Utils.ActivateAnimation(Utils.isSideRunning, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_63 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isSideRunning_5;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_64 = __this->___animator_21;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_63, L_64, NULL);
		// rBody.MovePosition(transform.position + transform.up * walkSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_65 = __this->___rBody_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_68, NULL);
		float L_70 = __this->___walkSpeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_69, L_70, NULL);
		float L_72;
		L_72 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_71, L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_67, L_73, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75;
		L_75 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_74, NULL);
		NullCheck(L_65);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_65, L_75, NULL);
		goto IL_029d;
	}

IL_0249:
	{
		// Utils.ActivateAnimation(Utils.isSliding, animator);
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		String_t* L_76 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isSliding_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_77 = __this->___animator_21;
		Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588(L_76, L_77, NULL);
		// rBody.MovePosition(transform.position - transform.up * walkSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_78 = __this->___rBody_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_79, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_81, NULL);
		float L_83 = __this->___walkSpeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_82, L_83, NULL);
		float L_85;
		L_85 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_84, L_85, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_80, L_86, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88;
		L_88 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_87, NULL);
		NullCheck(L_78);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_78, L_88, NULL);
	}

IL_029d:
	{
	}

IL_029e:
	{
		// rBody.velocity = rBody.velocity.normalized;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_89 = __this->___rBody_19;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_90 = __this->___rBody_19;
		NullCheck(L_90);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91;
		L_91 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_90, NULL);
		V_6 = L_91;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		L_92 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_6), NULL);
		NullCheck(L_89);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_89, L_92, NULL);
		// rBody.constraints = RigidbodyConstraints2D.None;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_93 = __this->___rBody_19;
		NullCheck(L_93);
		Rigidbody2D_set_constraints_mBF02A56E20BD497E3D291931E0AABB850952B238(L_93, 0, NULL);
		// }
		return;
	}
}
// System.Void Movement::HandleSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_HandleSpeed_mAD894AF6AD9127910D58D6474C92B318D6728212 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// if (int.Parse(score.text) >= 100 && int.Parse(score.text) <= 199) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___score_22;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_1, NULL);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)100))))
		{
			goto IL_0031;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___score_22;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_3);
		int32_t L_5;
		L_5 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_4, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)199)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// walkSpeed = 2.5f;
		__this->___walkSpeed_9 = (2.5f);
		goto IL_0199;
	}

IL_0048:
	{
		// } else if (int.Parse(score.text) >= 200 && int.Parse(score.text) <= 299) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___score_22;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_7);
		int32_t L_9;
		L_9 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_8, NULL);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)200))))
		{
			goto IL_007b;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___score_22;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_10);
		int32_t L_12;
		L_12 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_11, NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)299)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007c;
	}

IL_007b:
	{
		G_B8_0 = 0;
	}

IL_007c:
	{
		V_1 = (bool)G_B8_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		// walkSpeed = 3f;
		__this->___walkSpeed_9 = (3.0f);
		goto IL_0199;
	}

IL_0092:
	{
		// } else if (int.Parse(score.text) >= 300 && int.Parse(score.text) <= 399) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___score_22;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_14);
		int32_t L_16;
		L_16 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_15, NULL);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)300))))
		{
			goto IL_00c5;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___score_22;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_17);
		int32_t L_19;
		L_19 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_18, NULL);
		G_B13_0 = ((((int32_t)((((int32_t)L_19) > ((int32_t)((int32_t)399)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B13_0 = 0;
	}

IL_00c6:
	{
		V_2 = (bool)G_B13_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00dc;
		}
	}
	{
		// walkSpeed = 3.5f;
		__this->___walkSpeed_9 = (3.5f);
		goto IL_0199;
	}

IL_00dc:
	{
		// } else if (int.Parse(score.text) >= 400 && int.Parse(score.text) <= 499) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___score_22;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_21);
		int32_t L_23;
		L_23 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_22, NULL);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)400))))
		{
			goto IL_010f;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->___score_22;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_24);
		int32_t L_26;
		L_26 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_25, NULL);
		G_B18_0 = ((((int32_t)((((int32_t)L_26) > ((int32_t)((int32_t)499)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0110;
	}

IL_010f:
	{
		G_B18_0 = 0;
	}

IL_0110:
	{
		V_3 = (bool)G_B18_0;
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0123;
		}
	}
	{
		// walkSpeed = 4f;
		__this->___walkSpeed_9 = (4.0f);
		goto IL_0199;
	}

IL_0123:
	{
		// } else if (int.Parse(score.text) >= 500 && int.Parse(score.text) <= 599) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_28 = __this->___score_22;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_28);
		int32_t L_30;
		L_30 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_29, NULL);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)500))))
		{
			goto IL_0156;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = __this->___score_22;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_31);
		int32_t L_33;
		L_33 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_32, NULL);
		G_B23_0 = ((((int32_t)((((int32_t)L_33) > ((int32_t)((int32_t)599)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0157;
	}

IL_0156:
	{
		G_B23_0 = 0;
	}

IL_0157:
	{
		V_4 = (bool)G_B23_0;
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_016c;
		}
	}
	{
		// walkSpeed = 4.5f;
		__this->___walkSpeed_9 = (4.5f);
		goto IL_0199;
	}

IL_016c:
	{
		// } else if (int.Parse(score.text) >= 600) {
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_35 = __this->___score_22;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_35);
		int32_t L_37;
		L_37 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_36, NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)((int32_t)600)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_0199;
		}
	}
	{
		// walkSpeed = 5f;
		__this->___walkSpeed_9 = (5.0f);
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void Movement::FlipDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_FlipDuration_m399559958A8C00E32CA957D7B0CE0A049B81FCAC (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// walkFlipDur -= Time.deltaTime;
		float L_0 = __this->___walkFlipDur_11;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___walkFlipDur_11 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (walkFlipDur <= 0) {
		float L_2 = __this->___walkFlipDur_11;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// walkFlipDur = Random.Range(1f, maxWalkFlipDur);
		float L_4 = __this->___maxWalkFlipDur_10;
		float L_5;
		L_5 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.0f), L_4, NULL);
		__this->___walkFlipDur_11 = L_5;
		// position = Random.Range(0, 2);
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 2, NULL);
		__this->___position_18 = L_6;
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mCB72C1AD57256D73959D74FB86C5D0AA69EAE7ED (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string[] edges = {"Top", "Right", "Bottom", "Left"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		__this->___edges_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___edges_4), (void*)L_4);
		// private string [] vertPos = {"Top", "Bottom"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		__this->___vertPos_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertPos_5), (void*)L_7);
		// private string [] horPos = {"Left", "Right"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		__this->___horPos_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horPos_6), (void*)L_10);
		// string currentEdge = "";
		__this->___currentEdge_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentEdge_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// string currentPosition = "";
		__this->___currentPosition_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPosition_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// float walkSpeed = 2f;
		__this->___walkSpeed_9 = (2.0f);
		// float maxWalkFlipDur = 3f;
		__this->___maxWalkFlipDur_10 = (3.0f);
		// private int position = 0;
		__this->___position_18 = 0;
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
// System.Void AppFrameRate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppFrameRate_Start_m8DB0A2E2B789DB9BE8158582EB63A6BC2E9EDA80 (AppFrameRate_tDEA6F0977901BBFAE8BF191A66A3C119200F59A5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)8))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Application.targetFrameRate = 120;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)120), NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void AppFrameRate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppFrameRate_Update_m08BA975CDBC5FD4E74519BB48F904E0789B61F4F (AppFrameRate_tDEA6F0977901BBFAE8BF191A66A3C119200F59A5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AppFrameRate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppFrameRate__ctor_mC00079DBAC11CAB63FC4879D9E8D119BCB961512 (AppFrameRate_tDEA6F0977901BBFAE8BF191A66A3C119200F59A5* __this, const RuntimeMethod* method) 
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
// System.Void Border::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Border_Start_m7AA4F821269B95F6FEE212DB8BF512CF11C7D6E5 (Border_tDA168CEA0F8D24ED88419B94D932105F3990C8A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	{
		// SpriteRenderer sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		V_0 = L_0;
		// float worldScreenHeight = Camera.main.orthographicSize * 2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_1, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_2, (2.0f)));
		// float worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;
		float L_3 = V_1;
		int32_t L_4;
		L_4 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_5;
		L_5 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		V_2 = ((float)il2cpp_codegen_multiply(((float)(L_3/((float)L_4))), ((float)L_5)));
		// transform.localScale = new Vector3(worldScreenWidth / sr.sprite.bounds.size.x, (worldScreenHeight / sr.sprite.bounds.size.y) / borderHeight, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_7 = V_2;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = V_0;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_8, NULL);
		NullCheck(L_9);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10;
		L_10 = Sprite_get_bounds_m042F847F6C5118E6B14A3F79A1E1C53E7DFBF452(L_9, NULL);
		V_5 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_12 = L_11.___x_2;
		float L_13 = V_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14 = V_0;
		NullCheck(L_14);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15;
		L_15 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_14, NULL);
		NullCheck(L_15);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_16;
		L_16 = Sprite_get_bounds_m042F847F6C5118E6B14A3F79A1E1C53E7DFBF452(L_15, NULL);
		V_5 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_18 = L_17.___y_3;
		int32_t L_19 = __this->___borderHeight_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((float)(L_7/L_12)), ((float)(((float)(L_13/L_18))/((float)L_19))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_20, NULL);
		// Vector3 mPos = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21;
		L_21 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71(L_21, L_22, NULL);
		V_3 = L_23;
		// mPos.z = 0;
		(&V_3)->___z_4 = (0.0f);
		// mPos.x += gameObject.GetComponent<SpriteRenderer>().bounds.size.x / 2;
		float* L_24 = (&(&V_3)->___x_2);
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_27);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_28;
		L_28 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_27, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_28);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_29;
		L_29 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_28, NULL);
		V_5 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_31 = L_30.___x_2;
		*((float*)L_25) = (float)((float)il2cpp_codegen_add(L_26, ((float)(L_31/(2.0f)))));
		// mPos.y += gameObject.GetComponent<SpriteRenderer>().bounds.size.y / 2;
		float* L_32 = (&(&V_3)->___y_3);
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_35);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_36;
		L_36 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_35, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_36);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_37;
		L_37 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_36, NULL);
		V_5 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_39 = L_38.___y_3;
		*((float*)L_33) = (float)((float)il2cpp_codegen_add(L_34, ((float)(L_39/(2.0f)))));
		// if (isTop) mPos.y = mPos.y * -1;
		bool L_40 = __this->___isTop_4;
		V_6 = L_40;
		bool L_41 = V_6;
		if (!L_41)
		{
			goto IL_0127;
		}
	}
	{
		// if (isTop) mPos.y = mPos.y * -1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_3;
		float L_43 = L_42.___y_3;
		(&V_3)->___y_3 = ((float)il2cpp_codegen_multiply(L_43, (-1.0f)));
		goto IL_013a;
	}

IL_0127:
	{
		// else mPos.y = mPos.y * 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_3;
		float L_45 = L_44.___y_3;
		(&V_3)->___y_3 = ((float)il2cpp_codegen_multiply(L_45, (1.0f)));
	}

IL_013a:
	{
		// transform.position = mPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_3;
		NullCheck(L_46);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_46, L_47, NULL);
		// float total = (worldScreenHeight - sr.transform.lossyScale.y) / 2;
		float L_48 = V_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_49 = V_0;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_49, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_50, NULL);
		float L_52 = L_51.___y_3;
		V_4 = ((float)(((float)il2cpp_codegen_subtract(L_48, L_52))/(2.0f)));
		// }
		return;
	}
}
// System.Void Border::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Border__ctor_m6FD82D7BD3666E899C11096FEDF3FF7E837AED8A (Border_tDA168CEA0F8D24ED88419B94D932105F3990C8A7* __this, const RuntimeMethod* method) 
{
	{
		// bool isTop = true;
		__this->___isTop_4 = (bool)1;
		// int borderHeight = 8;
		__this->___borderHeight_5 = 8;
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
// System.Void EdgeCollider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeCollider_Start_mCA852E3719131DDD65E3BE3BD5ADF8C845127EB4 (EdgeCollider_tD12D7A737148C42690D43D498B311D6F8F7DD033* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rightCollider = GetComponent<Transform> ().Find ("Right");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, NULL);
		__this->___rightCollider_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightCollider_8), (void*)L_1);
		// leftCollider = GetComponent<Transform> ().Find ("Left");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, NULL);
		__this->___leftCollider_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftCollider_7), (void*)L_3);
		// rightCollider.parent = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___rightCollider_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, L_5, NULL);
		// leftCollider.parent = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___leftCollider_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, L_7, NULL);
		// cameraPos = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		__this->___cameraPos_9 = L_10;
		// screenSize.x = Vector2.Distance (Camera.main.ScreenToWorldPoint (new Vector2 (0, 0)), Camera.main.ScreenToWorldPoint (new Vector2 (Screen.width, 0))) * 0.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___screenSize_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_13, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_12, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_15, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		int32_t L_18;
		L_18 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), ((float)L_18), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_19, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_17, L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_21, NULL);
		float L_23;
		L_23 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_16, L_22, NULL);
		L_11->___x_0 = ((float)il2cpp_codegen_multiply(L_23, (0.5f)));
		// screenSize.y = Vector2.Distance (Camera.main.ScreenToWorldPoint (new Vector2 (0, 0)), Camera.main.ScreenToWorldPoint (new Vector2 (0, Screen.height))) * 0.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&__this->___screenSize_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25;
		L_25 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_26, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_25, L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_28, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30;
		L_30 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		int32_t L_31;
		L_31 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), (0.0f), ((float)L_31), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_32, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_30, L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_34, NULL);
		float L_36;
		L_36 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_29, L_35, NULL);
		L_24->___y_1 = ((float)il2cpp_codegen_multiply(L_36, (0.5f)));
		// rightCollider.localScale = new Vector3 (colDepth, screenSize.y * 2, colDepth);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___rightCollider_8;
		float L_38 = __this->___colDepth_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___screenSize_6);
		float L_40 = L_39->___y_1;
		float L_41 = __this->___colDepth_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), L_38, ((float)il2cpp_codegen_multiply(L_40, (2.0f))), L_41, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_37, L_42, NULL);
		// rightCollider.position = new Vector3 (cameraPos.x + screenSize.x + (rightCollider.localScale.x * 0.5f), cameraPos.y, zPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___rightCollider_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___cameraPos_9);
		float L_45 = L_44->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&__this->___screenSize_6);
		float L_47 = L_46->___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___rightCollider_8;
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_48, NULL);
		float L_50 = L_49.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_51 = (&__this->___cameraPos_9);
		float L_52 = L_51->___y_3;
		float L_53 = __this->___zPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_54), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_45, L_47)), ((float)il2cpp_codegen_multiply(L_50, (0.5f))))), L_52, L_53, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_54, NULL);
		// leftCollider.localScale = new Vector3 (colDepth, screenSize.y * 2, colDepth);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->___leftCollider_7;
		float L_56 = __this->___colDepth_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&__this->___screenSize_6);
		float L_58 = L_57->___y_1;
		float L_59 = __this->___colDepth_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_60), L_56, ((float)il2cpp_codegen_multiply(L_58, (2.0f))), L_59, /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_55, L_60, NULL);
		// leftCollider.position = new Vector3 (cameraPos.x - screenSize.x - (leftCollider.localScale.x * 0.5f), cameraPos.y, zPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = __this->___leftCollider_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_62 = (&__this->___cameraPos_9);
		float L_63 = L_62->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_64 = (&__this->___screenSize_6);
		float L_65 = L_64->___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = __this->___leftCollider_7;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_66, NULL);
		float L_68 = L_67.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_69 = (&__this->___cameraPos_9);
		float L_70 = L_69->___y_3;
		float L_71 = __this->___zPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_72), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_63, L_65)), ((float)il2cpp_codegen_multiply(L_68, (0.5f))))), L_70, L_71, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_61, L_72, NULL);
		// }
		return;
	}
}
// System.Void EdgeCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeCollider__ctor_m58A676DE16A74F4D0624F12BFEB785F4E17DA74A (EdgeCollider_tD12D7A737148C42690D43D498B311D6F8F7DD033* __this, const RuntimeMethod* method) 
{
	{
		// private float colDepth = 1f;
		__this->___colDepth_4 = (1.0f);
		// private float zPosition = 0f;
		__this->___zPosition_5 = (0.0f);
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
// System.Void GameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Start_m69F2EA72A4C2B7A2292169AECAEE630860C57B89 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(FadeOut());
		RuntimeObject* L_0;
		L_0 = GameOver_FadeOut_mE9E8FEA0D7CD98E3824053AF15EB36F5D26F8DF4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void GameOver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Update_m35F0FF76707BE934347A7C99461A8CD25B32A58F (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameOver::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOver_FadeIn_mBA74E2225178974AFF3733EC9A7F133400B6DAB1 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7* L_0 = (U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7*)il2cpp_codegen_object_new(U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInU3Ed__6__ctor_m91710FEF71644381B677947111FD64F16CAD27BB(L_0, 0, NULL);
		U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameOver::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOver_FadeOut_mE9E8FEA0D7CD98E3824053AF15EB36F5D26F8DF4 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E* L_0 = (U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E*)il2cpp_codegen_object_new(U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeOutU3Ed__7__ctor_m39871F12EA8509BEA71810C182744D32D5EC39CB(L_0, 0, NULL);
		U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m2D4239F9C4BCE2EBFD1D1D6FAFEBAD05F65399B2 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
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
// System.Void GameOver/<FadeIn>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__6__ctor_m91710FEF71644381B677947111FD64F16CAD27BB (U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameOver/<FadeIn>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__6_System_IDisposable_Dispose_m7BD43460875DEFEA0B7F13228448E6228F512BE7 (U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameOver/<FadeIn>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInU3Ed__6_MoveNext_mE3A8CB90698BAB74212F3FCF0BBB2B671F52A18F (U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00aa;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float alphaVal = gameOverSprite.color.a;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = L_3->___gameOverSprite_4;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_4, NULL);
		float L_6 = L_5.___a_3;
		__this->___U3CalphaValU3E5__1_3 = L_6;
		// Color tmp = gameOverSprite.color;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = L_7->___gameOverSprite_4;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_8, NULL);
		__this->___U3CtmpU3E5__2_4 = L_9;
		goto IL_00b2;
	}

IL_0056:
	{
		// alphaVal -= 0.01f;
		float L_10 = __this->___U3CalphaValU3E5__1_3;
		__this->___U3CalphaValU3E5__1_3 = ((float)il2cpp_codegen_subtract(L_10, (0.00999999978f)));
		// tmp.a = alphaVal;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11 = (&__this->___U3CtmpU3E5__2_4);
		float L_12 = __this->___U3CalphaValU3E5__1_3;
		L_11->___a_3 = L_12;
		// gameOverSprite.color = tmp;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14 = L_13->___gameOverSprite_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___U3CtmpU3E5__2_4;
		NullCheck(L_14);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_14, L_15, NULL);
		// yield return new WaitForSeconds(0.05f); // update interval
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_16 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_16, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00aa:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b2:
	{
		// while (gameOverSprite.color.a > 0)
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = L_17->___gameOverSprite_4;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_18, NULL);
		float L_20 = L_19.___a_3;
		V_1 = (bool)((((float)L_20) > ((float)(0.0f)))? 1 : 0);
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0056;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GameOver/<FadeIn>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED2C7F7CAF0C3FD1F9FC1669FD8F81AAF9DD98AF (U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameOver/<FadeIn>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__6_System_Collections_IEnumerator_Reset_m02E3132D0951C4C3E92B987676B688696530150D (U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInU3Ed__6_System_Collections_IEnumerator_Reset_m02E3132D0951C4C3E92B987676B688696530150D_RuntimeMethod_var)));
	}
}
// System.Object GameOver/<FadeIn>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__6_System_Collections_IEnumerator_get_Current_mD3BC54F52E3477D762E1862D5D9522C7E62B4A4D (U3CFadeInU3Ed__6_tA3E8E6D2CE4EA3EFAB74EF495C46D144F14DFDC7* __this, const RuntimeMethod* method) 
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
// System.Void GameOver/<FadeOut>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__7__ctor_m39871F12EA8509BEA71810C182744D32D5EC39CB (U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameOver/<FadeOut>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__7_System_IDisposable_Dispose_m2B9206A4F7E817FD3E59B441197A7408DB4F7565 (U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameOver/<FadeOut>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutU3Ed__7_MoveNext_mE34E39710B27D58F0965B25C8BDCE59C85A01C2F (U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00f2;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float alphaVal = gameOverSprite.color.a;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = L_3->___gameOverSprite_4;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_4, NULL);
		float L_6 = L_5.___a_3;
		__this->___U3CalphaValU3E5__1_3 = L_6;
		// Color tmp = gameOverSprite.color;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = L_7->___gameOverSprite_4;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_8, NULL);
		__this->___U3CtmpU3E5__2_4 = L_9;
		goto IL_00fa;
	}

IL_0059:
	{
		// alphaVal += 0.01f;
		float L_10 = __this->___U3CalphaValU3E5__1_3;
		__this->___U3CalphaValU3E5__1_3 = ((float)il2cpp_codegen_add(L_10, (0.00999999978f)));
		// tmp.a = alphaVal;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11 = (&__this->___U3CtmpU3E5__2_4);
		float L_12 = __this->___U3CalphaValU3E5__1_3;
		L_11->___a_3 = L_12;
		// gameOverSprite.color = tmp;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14 = L_13->___gameOverSprite_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___U3CtmpU3E5__2_4;
		NullCheck(L_14);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_14, L_15, NULL);
		// playSprite.color = tmp;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = L_16->___playSprite_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___U3CtmpU3E5__2_4;
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// highScore.color = tmp;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = L_19->___highScore_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = __this->___U3CtmpU3E5__2_4;
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		// score.color = tmp;
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = L_22->___score_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = __this->___U3CtmpU3E5__2_4;
		NullCheck(L_23);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		// yield return new WaitForSeconds(0.01f); // update interval
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_25 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_25, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00f2:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00fa:
	{
		// while (gameOverSprite.color.a < 1)
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_27 = L_26->___gameOverSprite_4;
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_27, NULL);
		float L_29 = L_28.___a_3;
		V_1 = (bool)((((float)L_29) < ((float)(1.0f)))? 1 : 0);
		bool L_30 = V_1;
		if (L_30)
		{
			goto IL_0059;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GameOver/<FadeOut>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m035DE3AF06F809B15ED1FC792F396D4C54649B5F (U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameOver/<FadeOut>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__7_System_Collections_IEnumerator_Reset_m84812EB9C205B34EA4A594D5E9AE74F99FFED8A7 (U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutU3Ed__7_System_Collections_IEnumerator_Reset_m84812EB9C205B34EA4A594D5E9AE74F99FFED8A7_RuntimeMethod_var)));
	}
}
// System.Object GameOver/<FadeOut>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__7_System_Collections_IEnumerator_get_Current_mB3ADC8187351097AF29122D8ECE74347C9325C97 (U3CFadeOutU3Ed__7_tFFB115141138D8CADEE7B63B4DBAF782FAC4A60E* __this, const RuntimeMethod* method) 
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
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m9851EAC634456AE4AD4D1163695A64EB3E4AA8FF (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_m8F6F1768AC5316A30F5A79813D72B20EC6796E5A (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FD5D84C71C47871FC8EDFF0FC904DA17CB8DEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// score = (int)(Time.timeSinceLevelLoad * 6f);
		float L_0;
		L_0 = Time_get_timeSinceLevelLoad_m0AA090B0D9CF98F4A7E8AE81ABE29459DBE28C9A(NULL);
		__this->___score_5 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_0, (6.0f)))));
		// if (gameObject.name == "YourScore")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral38FD5D84C71C47871FC8EDFF0FC904DA17CB8DEB, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// text.text = "Score: "+int.Parse(score.ToString("0000"));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___text_4;
		float* L_6 = (&__this->___score_5);
		String_t* L_7;
		L_7 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_6, _stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC, NULL);
		int32_t L_8;
		L_8 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_7, NULL);
		V_1 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_9, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_10);
		goto IL_007e;
	}

IL_0062:
	{
		// text.text = score.ToString("0000");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___text_4;
		float* L_12 = (&__this->___score_5);
		String_t* L_13;
		L_13 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_12, _stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, L_13);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mDEDBA72E1F38C2F7CFF4E6C6556103C5D62C1670 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
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
// System.Void Utils::ActivateAnimation(System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ActivateAnimation_m2A432D431F272497A887DE4CBE5956DC00C7E588 (String_t* ___anim0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for (int i = 0; i < Utils.animations.Length; i++) {
		V_0 = 0;
		goto IL_0036;
	}

IL_0005:
	{
		// if (anim == Utils.animations[i])
		String_t* L_0 = ___anim0;
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___animations_9;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// animator.SetBool(anim, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = ___animator1;
		String_t* L_8 = ___anim0;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, L_8, (bool)1, NULL);
		goto IL_0031;
	}

IL_0022:
	{
		// animator.SetBool(Utils.animations[i], false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = ___animator1;
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___animations_9;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, L_13, (bool)0, NULL);
	}

IL_0031:
	{
		// for (int i = 0; i < Utils.animations.Length; i++) {
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < Utils.animations.Length; i++) {
		int32_t L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___animations_9;
		NullCheck(L_16);
		V_2 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_m419277C5F83D8F73636DE513598E4A5EF9C85A11 (Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__cctor_m0AF5C4B8DA249D20748AD36C83A09A10C25AEB97 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0831AD467A0C82B005CA8C33E121A2CCB48147F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E653D6EA138D9DF2FA27D8EB6FC68D2D88FBA65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2222ECCFCC6E02C37F94B4569E83A972AA8F9B5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CA0CEB18F456C10BCFED3BA48B6182D688461CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5563685B258BC3652BDB4AE39657869034F72D23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60F5B2BF07AA89B2C3CA145FE12D119086BEDC23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65640380845C8260B3B384580D2D970A8BD77060);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string isIdle1 = "isIdle1";
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdle1_0 = _stringLiteral60F5B2BF07AA89B2C3CA145FE12D119086BEDC23;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdle1_0), (void*)_stringLiteral60F5B2BF07AA89B2C3CA145FE12D119086BEDC23);
		// public static string isIdle2 = "isIdle2";
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdle2_1 = _stringLiteral0831AD467A0C82B005CA8C33E121A2CCB48147F2;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdle2_1), (void*)_stringLiteral0831AD467A0C82B005CA8C33E121A2CCB48147F2);
		// public static string isRunning = "isRunning";
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isRunning_2 = _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isRunning_2), (void*)_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		// public static string isJumping = "isJumping";
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isJumping_3 = _stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isJumping_3), (void*)_stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC);
		// public static string isSliding = "isSliding";
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isSliding_4 = _stringLiteral5563685B258BC3652BDB4AE39657869034F72D23;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isSliding_4), (void*)_stringLiteral5563685B258BC3652BDB4AE39657869034F72D23);
		// public static string isSideRunning = "isSideRunning";
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isSideRunning_5 = _stringLiteral3CA0CEB18F456C10BCFED3BA48B6182D688461CC;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isSideRunning_5), (void*)_stringLiteral3CA0CEB18F456C10BCFED3BA48B6182D688461CC);
		// public static string isIdleSlide = "isIdleSlide";
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdleSlide_6 = _stringLiteral65640380845C8260B3B384580D2D970A8BD77060;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdleSlide_6), (void*)_stringLiteral65640380845C8260B3B384580D2D970A8BD77060);
		// public static string isCatch1 = "isCatch1";
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isCatch1_7 = _stringLiteral2222ECCFCC6E02C37F94B4569E83A972AA8F9B5B;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isCatch1_7), (void*)_stringLiteral2222ECCFCC6E02C37F94B4569E83A972AA8F9B5B);
		// public static string isCatch2 = "isCatch2";
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isCatch2_8 = _stringLiteral0E653D6EA138D9DF2FA27D8EB6FC68D2D88FBA65;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isCatch2_8), (void*)_stringLiteral0E653D6EA138D9DF2FA27D8EB6FC68D2D88FBA65);
		// public static string[] animations = { isIdle1, isIdle2, isRunning, isJumping, isSliding, isSideRunning, isIdleSlide, isCatch1, isCatch2 };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdle1_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		String_t* L_4 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdle2_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_3;
		String_t* L_6 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isRunning_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		String_t* L_8 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isJumping_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		String_t* L_10 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isSliding_4;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		String_t* L_12 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isSideRunning_5;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		String_t* L_14 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isIdleSlide_6;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		String_t* L_16 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isCatch1_7;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		String_t* L_18 = ((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___isCatch2_8;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_18);
		((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___animations_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A_il2cpp_TypeInfo_var))->___animations_9), (void*)L_17);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_2 = L_0;
		float L_1 = ___newY1;
		__this->___y_3 = L_1;
		float L_2 = ___newZ2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___target1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___current0;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___target1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___current0;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_13 = ___maxDistanceDelta2;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = ___maxDistanceDelta2;
		float L_16 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply(L_15, L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		G_B6_0 = G_B4_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___target1;
		V_5 = L_18;
		goto IL_0079;
	}

IL_004f:
	{
		float L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_3 = ((float)L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___current0;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___current0;
		float L_27 = L_26.___y_1;
		float L_28 = V_1;
		float L_29 = V_3;
		float L_30 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)(L_28/L_29)), L_30)))), /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_0079;
	}

IL_0079:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
