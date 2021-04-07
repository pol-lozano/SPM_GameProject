#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.AnimationEvent
struct AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF;
// UnityEngine.AnimationState
struct AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tE0C94B5FF990C6B4BB118486BCA35CCDA91AA905;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C;

IL2CPP_EXTERN_C RuntimeClass* AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00974C5D0A39E4A027B0EB44FE85C731384945B0;
IL2CPP_EXTERN_C String_t* _stringLiteral10F6FECF95C1235E3B90F738314A338A55A4DF3B;
IL2CPP_EXTERN_C String_t* _stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286;
IL2CPP_EXTERN_C String_t* _stringLiteral6A5239659C252C3C95FC09A31CA37CA6F6B07FAE;
IL2CPP_EXTERN_C String_t* _stringLiteral82132A808F0B9E6946BE41B8C7B1FDD0D99D773C;
IL2CPP_EXTERN_C String_t* _stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630;
IL2CPP_EXTERN_C String_t* _stringLiteral972CE48A8E26750559B1B00039204D0DE5B03904;
IL2CPP_EXTERN_C String_t* _stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018;
IL2CPP_EXTERN_C String_t* _stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1;
IL2CPP_EXTERN_C String_t* _stringLiteralB31E4AEFDFD2E76052D908F31AC56B3ABCFC7987;
IL2CPP_EXTERN_C String_t* _stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665;
IL2CPP_EXTERN_C String_t* _stringLiteralD05EE9FE9EFEEB35F354D97C2927EEB880DA9264;
IL2CPP_EXTERN_C String_t* _stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9;
IL2CPP_EXTERN_C String_t* _stringLiteralEF248A46D93F240BD665585183A3658090FB86C2;
IL2CPP_EXTERN_C String_t* _stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m09D3BB0318237629E92C4BCB037544A2297AEE69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_m1CF950681A38BB32FA06A00EB161C23C352A4366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetBool_mE41CF6F75B7508692855DEAEE0F863C055AA3BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetFloat_mDB4998CE3141E00E3AB5397B4D01126CDA65832D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetInt_m3CBDE341AD85820A89A6572D85CD775E6A11CE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetBool_m786BC5DF3CE050785D63EC855FC8E3D4A96A5E8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetFloat_m92286736EE327B2541CE17F751347815AA8406F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetInt_mF26C8AEC9C950F186E885ED18B361661F6FF1BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3C417EDD55E853BAA084114A5B12880739B4473C 
{
public:

public:
};


// System.Object


// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct  AnimationPlayableGraphExtensions_t3AB4F2463D4411C26A303E8A35FE1956414D6D0F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions
struct  AnimationPlayableOutputExtensions_t8C2444C50356482CB1733FEDB36B609D443B2AFA  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Animations.AnimationSceneHandleUtility
struct  AnimationSceneHandleUtility_t7ADD3618FC40A139A079BF88991955A898E3D92F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Animations.AnimationStreamHandleUtility
struct  AnimationStreamHandleUtility_t7DB21F0E28B964A5723AA9A5361929BB6F9A4D32  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Animations.AnimatorJobExtensions
struct  AnimatorJobExtensions_tC0E879ECD5BDBAA6B0DF05F8ECDFF48B3F496667  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_HasFixedDuration_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_HasFixedDuration_3)); }
	inline bool get_m_HasFixedDuration_3() const { return ___m_HasFixedDuration_3; }
	inline bool* get_address_of_m_HasFixedDuration_3() { return &___m_HasFixedDuration_3; }
	inline void set_m_HasFixedDuration_3(bool value)
	{
		___m_HasFixedDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_NormalizedTime_5)); }
	inline float get_m_NormalizedTime_5() const { return ___m_NormalizedTime_5; }
	inline float* get_address_of_m_NormalizedTime_5() { return &___m_NormalizedTime_5; }
	inline void set_m_NormalizedTime_5(float value)
	{
		___m_NormalizedTime_5 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_6() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_AnyState_6)); }
	inline bool get_m_AnyState_6() const { return ___m_AnyState_6; }
	inline bool* get_address_of_m_AnyState_6() { return &___m_AnyState_6; }
	inline void set_m_AnyState_6(bool value)
	{
		___m_AnyState_6 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_7() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_TransitionType_7)); }
	inline int32_t get_m_TransitionType_7() const { return ___m_TransitionType_7; }
	inline int32_t* get_address_of_m_TransitionType_7() { return &___m_TransitionType_7; }
	inline void set_m_TransitionType_7(int32_t value)
	{
		___m_TransitionType_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Animations.NotKeyableAttribute
struct  NotKeyableAttribute_tE0C94B5FF990C6B4BB118486BCA35CCDA91AA905  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Animations.PropertySceneHandle
struct  PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6 
{
public:
	// System.UInt32 UnityEngine.Animations.PropertySceneHandle::valid
	uint32_t ___valid_0;
	// System.Int32 UnityEngine.Animations.PropertySceneHandle::handleIndex
	int32_t ___handleIndex_1;

public:
	inline static int32_t get_offset_of_valid_0() { return static_cast<int32_t>(offsetof(PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6, ___valid_0)); }
	inline uint32_t get_valid_0() const { return ___valid_0; }
	inline uint32_t* get_address_of_valid_0() { return &___valid_0; }
	inline void set_valid_0(uint32_t value)
	{
		___valid_0 = value;
	}

	inline static int32_t get_offset_of_handleIndex_1() { return static_cast<int32_t>(offsetof(PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6, ___handleIndex_1)); }
	inline int32_t get_handleIndex_1() const { return ___handleIndex_1; }
	inline int32_t* get_address_of_handleIndex_1() { return &___handleIndex_1; }
	inline void set_handleIndex_1(int32_t value)
	{
		___handleIndex_1 = value;
	}
};


// UnityEngine.Animations.PropertyStreamHandle
struct  PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 
{
public:
	// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::handleIndex
	int32_t ___handleIndex_1;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::valueArrayIndex
	int32_t ___valueArrayIndex_2;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::bindType
	int32_t ___bindType_3;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_handleIndex_1() { return static_cast<int32_t>(offsetof(PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955, ___handleIndex_1)); }
	inline int32_t get_handleIndex_1() const { return ___handleIndex_1; }
	inline int32_t* get_address_of_handleIndex_1() { return &___handleIndex_1; }
	inline void set_handleIndex_1(int32_t value)
	{
		___handleIndex_1 = value;
	}

	inline static int32_t get_offset_of_valueArrayIndex_2() { return static_cast<int32_t>(offsetof(PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955, ___valueArrayIndex_2)); }
	inline int32_t get_valueArrayIndex_2() const { return ___valueArrayIndex_2; }
	inline int32_t* get_address_of_valueArrayIndex_2() { return &___valueArrayIndex_2; }
	inline void set_valueArrayIndex_2(int32_t value)
	{
		___valueArrayIndex_2 = value;
	}

	inline static int32_t get_offset_of_bindType_3() { return static_cast<int32_t>(offsetof(PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955, ___bindType_3)); }
	inline int32_t get_bindType_3() const { return ___bindType_3; }
	inline int32_t* get_address_of_bindType_3() { return &___bindType_3; }
	inline void set_bindType_3(int32_t value)
	{
		___bindType_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_t1F94A6AF21AC0F90F38FFEDE964054F34A117279  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Animations.TransformSceneHandle
struct  TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 
{
public:
	// System.UInt32 UnityEngine.Animations.TransformSceneHandle::valid
	uint32_t ___valid_0;
	// System.Int32 UnityEngine.Animations.TransformSceneHandle::transformSceneHandleDefinitionIndex
	int32_t ___transformSceneHandleDefinitionIndex_1;

public:
	inline static int32_t get_offset_of_valid_0() { return static_cast<int32_t>(offsetof(TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1, ___valid_0)); }
	inline uint32_t get_valid_0() const { return ___valid_0; }
	inline uint32_t* get_address_of_valid_0() { return &___valid_0; }
	inline void set_valid_0(uint32_t value)
	{
		___valid_0 = value;
	}

	inline static int32_t get_offset_of_transformSceneHandleDefinitionIndex_1() { return static_cast<int32_t>(offsetof(TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1, ___transformSceneHandleDefinitionIndex_1)); }
	inline int32_t get_transformSceneHandleDefinitionIndex_1() const { return ___transformSceneHandleDefinitionIndex_1; }
	inline int32_t* get_address_of_transformSceneHandleDefinitionIndex_1() { return &___transformSceneHandleDefinitionIndex_1; }
	inline void set_transformSceneHandleDefinitionIndex_1(int32_t value)
	{
		___transformSceneHandleDefinitionIndex_1 = value;
	}
};


// UnityEngine.Animations.TransformStreamHandle
struct  TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 
{
public:
	// System.UInt32 UnityEngine.Animations.TransformStreamHandle::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.Int32 UnityEngine.Animations.TransformStreamHandle::handleIndex
	int32_t ___handleIndex_1;
	// System.Int32 UnityEngine.Animations.TransformStreamHandle::skeletonIndex
	int32_t ___skeletonIndex_2;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_handleIndex_1() { return static_cast<int32_t>(offsetof(TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525, ___handleIndex_1)); }
	inline int32_t get_handleIndex_1() const { return ___handleIndex_1; }
	inline int32_t* get_address_of_handleIndex_1() { return &___handleIndex_1; }
	inline void set_handleIndex_1(int32_t value)
	{
		___handleIndex_1 = value;
	}

	inline static int32_t get_offset_of_skeletonIndex_2() { return static_cast<int32_t>(offsetof(TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525, ___skeletonIndex_2)); }
	inline int32_t get_skeletonIndex_2() const { return ___skeletonIndex_2; }
	inline int32_t* get_address_of_skeletonIndex_2() { return &___skeletonIndex_2; }
	inline void set_skeletonIndex_2(int32_t value)
	{
		___skeletonIndex_2 = value;
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t1B170B0043F7F21E0AA3577B3220584CA3797630 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationEventSource_t1B170B0043F7F21E0AA3577B3220584CA3797630, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Animations.AnimationHumanStream
struct  AnimationHumanStream_t98A25119C1A24795BA152F54CF9F0673EEDF1C3F 
{
public:
	// System.IntPtr UnityEngine.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(AnimationHumanStream_t98A25119C1A24795BA152F54CF9F0673EEDF1C3F, ___stream_0)); }
	inline intptr_t get_stream_0() const { return ___stream_0; }
	inline intptr_t* get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(intptr_t value)
	{
		___stream_0 = value;
	}
};


// UnityEngine.Animations.AnimationStream
struct  AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 
{
public:
	// System.UInt32 UnityEngine.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___constant_1)); }
	inline intptr_t get_constant_1() const { return ___constant_1; }
	inline intptr_t* get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(intptr_t value)
	{
		___constant_1 = value;
	}

	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___input_2)); }
	inline intptr_t get_input_2() const { return ___input_2; }
	inline intptr_t* get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(intptr_t value)
	{
		___input_2 = value;
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___output_3)); }
	inline intptr_t get_output_3() const { return ___output_3; }
	inline intptr_t* get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(intptr_t value)
	{
		___output_3 = value;
	}

	inline static int32_t get_offset_of_workspace_4() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___workspace_4)); }
	inline intptr_t get_workspace_4() const { return ___workspace_4; }
	inline intptr_t* get_address_of_workspace_4() { return &___workspace_4; }
	inline void set_workspace_4(intptr_t value)
	{
		___workspace_4 = value;
	}

	inline static int32_t get_offset_of_inputStreamAccessor_5() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___inputStreamAccessor_5)); }
	inline intptr_t get_inputStreamAccessor_5() const { return ___inputStreamAccessor_5; }
	inline intptr_t* get_address_of_inputStreamAccessor_5() { return &___inputStreamAccessor_5; }
	inline void set_inputStreamAccessor_5(intptr_t value)
	{
		___inputStreamAccessor_5 = value;
	}

	inline static int32_t get_offset_of_animationHandleBinder_6() { return static_cast<int32_t>(offsetof(AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714, ___animationHandleBinder_6)); }
	inline intptr_t get_animationHandleBinder_6() const { return ___animationHandleBinder_6; }
	inline intptr_t* get_address_of_animationHandleBinder_6() { return &___animationHandleBinder_6; }
	inline void set_animationHandleBinder_6(intptr_t value)
	{
		___animationHandleBinder_6 = value;
	}
};


// UnityEngine.Experimental.Animations.AnimationStreamSource
struct  AnimationStreamSource_t30C65332C76427029F3F2EAD4108B589C27E90F3 
{
public:
	// System.Int32 UnityEngine.Experimental.Animations.AnimationStreamSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationStreamSource_t30C65332C76427029F3F2EAD4108B589C27E90F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Animations.CustomStreamPropertyType
struct  CustomStreamPropertyType_tE550C5CFBBB3C6672DC47AE62EF7C465E22B2C03 
{
public:
	// System.Int32 UnityEngine.Animations.CustomStreamPropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomStreamPropertyType_tE550C5CFBBB3C6672DC47AE62EF7C465E22B2C03, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HumanLimit
struct  HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_Min_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_Max_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_Center_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};


// UnityEngine.Animations.JobMethodIndex
struct  JobMethodIndex_t5D8DB5E4A2F895B92F31530F13E0188389F72455 
{
public:
	// System.Int32 UnityEngine.Animations.JobMethodIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JobMethodIndex_t5D8DB5E4A2F895B92F31530F13E0188389F72455, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Null_2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.SkeletonBone
struct  SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_2() const { return ___position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___rotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___scale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_4() const { return ___scale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;
};

// UnityEngine.TrackedReference
struct  TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>
struct  NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>
struct  NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct  NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.AnimationEvent
struct  AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FunctionName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringParameter_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_ObjectReferenceParameter_3)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObjectReferenceParameter_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_StateSender_8)); }
	inline AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateSender_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * ___m_StateSender_8;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * ___m_StateSender_8;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___m_AnimatorClipInfo_10;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct  AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Animations.AnimationPosePlayable
struct  AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_StaticFields
{
public:
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationRemoveScalePlayable
struct  AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_StaticFields
{
public:
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationScriptPlayable
struct  AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_StaticFields
{
public:
	// UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.AnimationState
struct  AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD  : public TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514
{
public:

public:
};


// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Avatar
struct  Avatar_t1A1B32874530475986346E2EED62F9DDEE8C45C6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.HumanBone
struct  HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BoneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HumanName_1), (void*)value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D, ___limit_2)); }
	inline HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  value)
	{
		___limit_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  ___limit_2;
};

// UnityEngine.Motion
struct  Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Playables.Playable
struct  Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.AnimationClip
struct  AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
{
public:

public:
};


// UnityEngine.AnimatorOverrideController
struct  AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA  : public RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB
{
public:
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * ___OnOverrideControllerDirty_4;

public:
	inline static int32_t get_offset_of_OnOverrideControllerDirty_4() { return static_cast<int32_t>(offsetof(AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA, ___OnOverrideControllerDirty_4)); }
	inline OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * get_OnOverrideControllerDirty_4() const { return ___OnOverrideControllerDirty_4; }
	inline OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C ** get_address_of_OnOverrideControllerDirty_4() { return &___OnOverrideControllerDirty_4; }
	inline void set_OnOverrideControllerDirty_4(OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * value)
	{
		___OnOverrideControllerDirty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOverrideControllerDirty_4), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct  OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_back(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_cleanup(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com_back(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com_cleanup(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertySceneHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m09D3BB0318237629E92C4BCB037544A2297AEE69_gshared (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675  ___handles1, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___buffer2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertySceneHandle>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_m1CF950681A38BB32FA06A00EB161C23C352A4366_gshared (NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675  ___nativeArray0, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_gshared (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___nativeArray0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertyStreamHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307_gshared (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  ___handles1, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___buffer2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertyStreamHandle>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1_gshared (NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  ___nativeArray0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);

// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___x0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m73BDBE0839B6AA4782C37B21DD58D3388B5EC814 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  ___other0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3 (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439 (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m018BD27B24B3EDC5101A475A14F13F753F2323AA (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0 (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3 (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m8979D90ED92FF553B5D6AB0BDD616C544352816B (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93 (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_mB08A41C628755AF909489716A1D62AECC2BFDD9E (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049 (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m9AFE60B035481569924E20C6953B4B21EF7734AA (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, String_t* ___name1, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___handle2, const RuntimeMethod* method);
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  AnimationPlayableOutput_get_Null_mD616AD43B83AF5726C08ED5C8BDB7B3B728A579F (const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_m23C6528BCD9B9D2A1CE03D7600523F09A5F9A34F (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  PlayableOutputHandle_get_Null_m33F7D36A76BFDC0B58633BF931E55FA5BBFFD93D (const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___handle0, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___target1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_mBAB07F849D5C09F170A4F3265DAED7A04A326C5E (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___output0, int32_t ___streamSource1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder(UnityEngine.Playables.PlayableOutputHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_m463610A31103C11859C3AE389DE1F9E5D9F27524 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___output0, int32_t ___sortingOrder1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mC00B09ADD59FAB0D7004041748779390AF5CC865 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___output0, int32_t ___streamSource1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m14165CF1AF20B3C766E0951F3CF6EDC27D6F3689 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___output0, int32_t ___sortingOrder1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57 (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_mECC5FA256AAA5334C38DBB6D00EE8AC1BDC015A1 (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8 (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m7FE9E55B027861A0B91347F18DAC7E11E2740397 (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___other0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertySceneHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
inline int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m09D3BB0318237629E92C4BCB037544A2297AEE69 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675  ___handles1, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___buffer2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675 , NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 , const RuntimeMethod*))AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m09D3BB0318237629E92C4BCB037544A2297AEE69_gshared)(___stream0, ___handles1, ___buffer2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertySceneHandle>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_m1CF950681A38BB32FA06A00EB161C23C352A4366 (NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_m1CF950681A38BB32FA06A00EB161C23C352A4366_gshared)(___nativeArray0, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_gshared)(___nativeArray0, method);
}
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadSceneFloatsInternal_m40F49981260737D167976303B49AD12B466871A5 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, void* ___propertySceneHandles1, void* ___floatBuffer2, int32_t ___count3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8 (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m1705DCC80312E3D34E17B32BDBAF4BBB78D435D8 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_Injected_mCDBC0CB837118EE5D13F0F45B06F283F67733BD0 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, intptr_t ___jobReflectionData2, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Animations.AnimationStream::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AnimationStream_get_animatorBindingsVersion_m87763AEBD70C534E9316BC16B151D9773DC40A35 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationStream::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationStream_get_isValid_m742CF72BAE92642E826E1B71EBC68F91A382D7B7 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationStream::CheckIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_mFD37E9AE5A620EB95856C9AE0FC585923E0E88CE (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.AnimationStream::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_get_deltaTime_mDEE9C51425D6B158A08A84C5F314C38C93A3F949 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_Injected_mA01A71A7EFD8E1DB90738F2907279A8C6F93E3A1 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ____unity_self0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertyStreamHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
inline int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  ___handles1, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___buffer2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924 , NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 , const RuntimeMethod*))AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307_gshared)(___stream0, ___handles1, ___buffer2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertyStreamHandle>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1 (NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1_gshared)(___nativeArray0, method);
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteStreamFloatsInternal_m13C0CBF650201129D20CEAE2F81A71846315C0F3 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, void* ___propertyStreamHandles1, void* ___floatBuffer2, int32_t ___count3, bool ___useMask4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadStreamFloatsInternal_m1D18095F46627C1474A50D4BE49E7616B55D275F (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, void* ___propertyStreamHandles1, void* ___floatBuffer2, int32_t ___count3, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m0D1D54020A1D7F9E73A84DAA5FF118ED31F3E943 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_mE5687E1F614DEDDE45110DA6A55F1B5499667B0C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m9D2F918EE07AE657A11C13F285317C05BB257730 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamTransform_m19DB974AC781F081059BEDC30F3D3F0EA8F5A6C2 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ___transformStreamHandle2, const RuntimeMethod* method);
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  AnimatorJobExtensions_BindStreamProperty_mBC37B65CCDA41CFB201BAC602423024F874B75C7 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindCustomStreamProperty_m8A341FCA0D73F69D348E94C73393586099BC05DA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, String_t* ___property1, int32_t ___propertyType2, PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ___propertyStreamHandle3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamProperty_mED8E8C594B948DCA416397039502BA33FFBDAD04 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ___propertyStreamHandle5, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneTransform_mDBCADF388EBC447C160DBAA471DB109CBC0F6456 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ___transformSceneHandle2, const RuntimeMethod* method);
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  AnimatorJobExtensions_BindSceneProperty_mD71EF82C515100E0966AD0E887E2860E83F699DA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneProperty_m4D552D546B855EAEBE4E7A9AC485651E378FAE47 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6 * ___propertySceneHandle5, const RuntimeMethod* method);
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m21DB79300E852ED93F2521FFC03EC4D858F6B330 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_createdByNative_mFE6CF1B3E598B8111E554C3BC3D53A093628BDBE (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasHandleIndex_mB69A2FC96B434EB916CCF825D21E6A274F518367 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasBindType_m4700903253ECF2F96294D8BB49F804BEB254AACD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsValidInternal_mA063ACB26DD5F5CA0A4FDBCF3840A61802001B35 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PropertyStreamHandle_get_animatorBindingsVersion_mB317627A9F7BAB4949A5BE6381A448D0B07C1DEC (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsSameVersionAsStream_mA6E621F98E7E15FA604184220AE3F14ADF8ED5FF (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasValueArrayIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasValueArrayIndex_m3B7F6BD1725DDAA219FB919501E853757C9A5982 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsResolvedInternal_mA39381430BAC168EEAA72AB3BC7ECB95EBF782ED (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_m4A6C7FDCDAA743F2A3BF2C956F56DD84DAEE01BD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_m3C21D11450AEF37C33AE8033BF23C3CC6CE8A629 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloat(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloat_mDB4998CE3141E00E3AB5397B4D01126CDA65832D (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal(UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_m19ABD63379E1BCCF8458586B61D7858C533CAF1C (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloat(UnityEngine.Animations.AnimationStream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloat_m92286736EE327B2541CE17F751347815AA8406F2 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, float ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_m65CA88E168E9171776212936AD886C75C989C560 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetInt(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetInt_m3CBDE341AD85820A89A6572D85CD775E6A11CE72 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal(UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_m90C08AC5D701C6BF8DF5DE2124767C8BC351BD32 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetInt(UnityEngine.Animations.AnimationStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetInt_mF26C8AEC9C950F186E885ED18B361661F6FF1BD4 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_m2A95929BC6AF43D63EE8B6B076BEA54C433111F8 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBool(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBool_mE41CF6F75B7508692855DEAEE0F863C055AA3BAB (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal(UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_mA2B0B89F9C23DD27F773065C2967A35CAE9393CD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBool(UnityEngine.Animations.AnimationStream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBool_m786BC5DF3CE050785D63EC855FC8E3D4A96A5E8B (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_Injected_m367421253D7724B0394FFA5C5C444E61AA71DD04 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_Injected_m4364D88FA20812524FCD57DCAB050399D2DA69CD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_Injected_m97FD820CD4EE7260E92C278EAABF6BCC5C98219B (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, float ___value2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_Injected_m3347C5B4CF817EAB29435605258E190DC2882CBD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_Injected_m104E0C7D1E8568AC3C38BF6C01DBB434FA8B60C6 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, int32_t ___value2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_Injected_m89A5B98BEA8603E160FFE1575C25282DC487BC34 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_Injected_m092FC719010C8574C487E3571D08110A1A6E465F (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, bool ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_createdByNative_m381E541B1E616808DE73EB4291A96061420FC2CC (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m55A97AEFE87FFFEF61E7C69210E18259E8E3483D (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_mA9C1A94E84A6DF70C563676C64EBA9959C66A392 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_IsValid_mFDCEE3AB0017B339BDB7C344050D16FCA35EBADD (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::CheckIsValid(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetPositionInternal_m5E6C25BAFA879135767114FF6AFD736FED5DAEBB (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetPosition_mEF47119EFD7C822D63582C160B2C2377195DA871 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalPositionInternal_m3D1ECBB837AEF718E120612B0224553033F0C661 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalPosition_m5FD11713F37F85D38002105E330A11EE30D90FBB (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetRotationInternal_mD56C3262B337D22E6873918B4502E45F42D2A214 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetRotation_mF5AFF130F26D3AA39938CE8A565631C295C7C793 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetLocalRotationInternal_m638F46F760A1BD2F36256923D411DADD7C83F2A8 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetLocalRotation_m1D9D6AFC0ADAB6D8CD5BA79DD18CA9705EE4818A (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalScaleInternal_mDA625938FF3C11263F7834824B4B79CDF2FAB447 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalScale_m8374508CB1D727FD0C4B1FF2736F32B456EE65E9 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_m8FB2803EFC16A70AF87057E347AAF4747258BEDD (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRS_mB70457390D4E29E3571C33E4C4233B0BB3F9DB29 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_mE372EE53B6A16E6682F0B08F38733682CC56E664 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTR_m152496BE5D5B1B64E56105FD960BD7476D9F14DB (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_Injected_mAEF5B1A10FF137ACF2BDB973BFAA239277EC9508 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetPositionInternal_Injected_mB8C58D2D6F304D4BF8D4AFBE9CE465FEE04F7C3C (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalPositionInternal_Injected_m0B16E830C7608951413E3BFDC06AB311CF38734D (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetRotationInternal_Injected_mF07F8EA516605D202212A0EDFF32E4963E4D510E (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalRotationInternal_Injected_m3D6C0D43C86368749D01295C7A738C9C0F757320 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalScaleInternal_Injected_m44C9B340AD37508BF56289F7AB8B754DD7A1E672 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_Injected_m45721738580668918936A3707A4F83D2C01F8466 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_Injected_m1D484BAE0E57D4B9461D50808DA6576B809BD561 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValidInternal_m106CB2108BE120A417A69BACAD47E0BFEB848A20 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValid_mA3D7F5EF62C4F6839E90EBB3375B0397C16D3C27 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_createdByNative_m09E28EE5B85E2D996FC1DE88F3552E0DBC65698C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasHandleIndex_m858C7A068508E7F148ED70973AEAC7523B32F903 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Animations.TransformStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransformStreamHandle_get_animatorBindingsVersion_m339F1CE4CFD3C8EDF5ADF40C70CAA33F76D34E08 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsSameVersionAsStream_mA03A754D96E77136FA0BE116411903F26DFDE7FA (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasSkeletonIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasSkeletonIndex_mD6FE3F9368F3E4DDB979A852920AC435D6E11C45 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::Resolve(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_Resolve_m739EF3293488DDF7E96B9BED61C333A2836F6A94 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolvedInternal_m0D6C61D677D131D02D10FE40BAC28E4AE7EBEB63 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolved(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolved_m516D6DC6755EDBBB0408847DA0AC0E6B816B7C10 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_mEFE04845E8E17F574F9F7DCD015358858E257257 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetPositionInternal_mFD91570C872F07D2FE6CB675A7D6F92D29D7F56C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetPosition_m8EC303B7ACD6473E29E29E2BED8E1CA42BCE7BED (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_mE3E594E44154B4B86D780ADF22408BE4A698ADBC (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPosition_m86039C8E5A26507C6E312B7E217ED277BDB89B4D (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetRotationInternal_m41C5AC1219EDBD38C42CFA47A920D09F73D94B72 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetRotation_m9F31E86C408DFFA5AFB077EC8F2AF55F58DE3485 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_m3AAC34CE56365C556846988751A7B70675B59750 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotation_m9FDB3E222F8391541D280E6632FED775F9F7EFD4 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalPositionInternal_m0EE36C1AB9925B45E77332EFBB470EDB5D6AA248 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalPosition_m400997447F20360E23F359D72343E1D329800958 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_mE8D67D1D69ABDF837E6ACA21A0A6630C3838AEDD (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPosition_mF9FC23A42EE3ADBB6E54756DBC98C892A7965BDD (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetLocalRotationInternal_m6D4268CE002A378BA0E1805D8A8FC4B047ACBFE6 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetLocalRotation_m2CB64DFC9B8FB74665DE1B319AC35B3B7AC5E0D0 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_mC8C89F264C09729B509237194274F62CAC8C693C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotation_mFC1D502FF56782A7FFB99C57CD992B2A1A4E0035 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalScaleInternal_mABD23429609FE786C538335E59F14C63FB582980 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalScale_m870393AC50D14D13941B5161C176AB0EB0669F39 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_m2317688DE5D6AB63B4EB9384246437BA353D4F06 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScale(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScale_m46B5D32C4954FE2DEDEE2EC264EF220E5222A045 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_m0DD8233ABBD91D4613CE9AB7BC3F6B7707A5BE2A (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRS_m86FE880A8AE83F11BE0B90CBF15D3AB08DD95DAD (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_m88E8618CD6D5B5401090F2C0B72E2524FF091EA4 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale3, bool ___useMask4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRS_m51550F2C1C71DF59C67D3C3EB2F2E58E1B1D4340 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale3, bool ___useMask4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_m632BBECF1600C921333742EABB88010629D28DCC (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTR_mF212906977EAD98A60A3FC89440AC87633C666F3 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_mDA25D9FCCCD3F5696CB33B7574798D0FA8B05C8A (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, bool ___useMask3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTR_m6D734787B88CE99B6B0A4FB0DAEE3320202D918D (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, bool ___useMask3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_Injected_mF61DEEE02355F14BE4D472B4EEDA2E2EDB5BC14C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetPositionInternal_Injected_m7762C45B552CC8BF58541CE1F700847B1966C4AB (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_Injected_mCA58B5A4ED384B468AD13F2693AAE45080D28BF9 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetRotationInternal_Injected_m6F615378626189657AAF2F903F9A2F1BA1274253 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_Injected_m42988B3643A819A4DB0C2F2C1C39538EE63A3128 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalPositionInternal_Injected_m4E56F0326D66859CBA624ED810DEABE5AD6F76E4 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_Injected_m9D33FFB148C888364A134B07B4F6FA2BC2AA8043 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalRotationInternal_Injected_m9134013FD7860E63D7E6C3B724F314F5C64D326A (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_Injected_m5A53FBC2F84E09B5D9A3DE234942495EC839BB74 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalScaleInternal_Injected_mCF2518AEB79AC2E52B8E36B4ADD0AEBEF151B4DB (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_Injected_mAB4EDF4E790D9731DD1FE1358B6DC2D3CE34920C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_Injected_m765E1439F1F0CF0A46215FA889CE04CE35835781 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_Injected_m2AE1BA68A093EA149F1487A8C80DEA6DAF242E86 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale4, bool ___useMask5, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_Injected_m9B815411B23930BA8CBD1F7A8B8545116FEFBE1C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_Injected_m133C1B4E6E3D1F5A0B17E21D5B0E0710FD901AC5 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, bool ___useMask4, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m73BDBE0839B6AA4782C37B21DD58D3388B5EC814 (AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * __this, AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122((AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationClipPlayable_GetHandle_m93C27911A3C7107750C2A6BE529C58FB2FDB1122((AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationClipPlayable_Equals_m73BDBE0839B6AA4782C37B21DD58D3388B5EC814_AdjustorThunk (RuntimeObject * __this, AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationClipPlayable_Equals_m73BDBE0839B6AA4782C37B21DD58D3388B5EC814(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke(const AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF& unmarshaled, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_back(const AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_pinvoke& marshaled, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_pinvoke_cleanup(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_com(const AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF& unmarshaled, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_com_back(const AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_com& marshaled, AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshal_com_cleanup(AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationEvent__ctor_mA2780A113EA8DD56C3C2EDD0D60BBA78047BACDE (AnimationEvent_tC15CA47BE450896AF876FFA75D7A8E22C2D286AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_m_Time_0((0.0f));
		__this->set_m_FunctionName_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_StringParameter_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_ObjectReferenceParameter_3((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL);
		__this->set_m_FloatParameter_4((0.0f));
		__this->set_m_IntParameter_5(0);
		__this->set_m_MessageOptions_6(0);
		__this->set_m_Source_7(0);
		__this->set_m_StateSender_8((AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD *)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *>(__this + _offset);
	AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439 (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m018BD27B24B3EDC5101A475A14F13F753F2323AA (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439((AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439((AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationLayerMixerPlayable_Equals_m018BD27B24B3EDC5101A475A14F13F753F2323AA_AdjustorThunk (RuntimeObject * __this, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationLayerMixerPlayable_Equals_m018BD27B24B3EDC5101A475A14F13F753F2323AA(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_mBE9F47E968D356F7BB549E705A4E91E1AEAEE807 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_m42F8E5BB37A175AF298324D3072932ED9946427B((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0 (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *>(__this + _offset);
	AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3 (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m8979D90ED92FF553B5D6AB0BDD616C544352816B (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3((AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3((AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMixerPlayable_Equals_m8979D90ED92FF553B5D6AB0BDD616C544352816B_AdjustorThunk (RuntimeObject * __this, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMixerPlayable_Equals_m8979D90ED92FF553B5D6AB0BDD616C544352816B(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m8DB71DF60AD75D3274E24FDB9DAC8F4D8FDD5C1D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mA03CF37709B7854227E25F91BE4F7559981058B0((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93 (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *>(__this + _offset);
	AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_mB08A41C628755AF909489716A1D62AECC2BFDD9E (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA((AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA((AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMotionXToDeltaPlayable_Equals_mB08A41C628755AF909489716A1D62AECC2BFDD9E_AdjustorThunk (RuntimeObject * __this, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_Equals_mB08A41C628755AF909489716A1D62AECC2BFDD9E(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_m0C46BAE776A8D7FAB7CEE08C4D6EBC63B08708FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_m11668860161B62484EA095BD6360AFD26A86DE93((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *>(__this + _offset);
	AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049 (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m9AFE60B035481569924E20C6953B4B21EF7734AA (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049((AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationOffsetPlayable_Equals_m9AFE60B035481569924E20C6953B4B21EF7734AA_AdjustorThunk (RuntimeObject * __this, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationOffsetPlayable_Equals_m9AFE60B035481569924E20C6953B4B21EF7734AA(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m00251ED10BD7F52F20BC9D0A36B9C8AC52F15FA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_m9527E52AEA325EAE188AB9843497F2AB33CB742E((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, String_t* ___name1, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___handle2, const RuntimeMethod* method)
{
	typedef bool (*AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A_ftn) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, String_t*, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *);
	static AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___name1, ___handle2);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  AnimationPlayableOutput_Create_m421CC6D39B79DD5C1E2A88EA4B7F98E433AE8AFC (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___target2, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___name1;
		bool L_1;
		L_1 = AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m4638B869FCB180EABD95C780D33860B6D22A115A((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), L_0, (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_3;
		L_3 = AnimationPlayableOutput_get_Null_mD616AD43B83AF5726C08ED5C8BDB7B3B728A579F(/*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_4 = V_0;
		AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&V_1), L_4, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = ___target2;
		AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&V_1), L_5, /*hidden argument*/NULL);
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_m23C6528BCD9B9D2A1CE03D7600523F09A5F9A34F((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&___handle0), /*hidden argument*/PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD_AdjustorThunk (RuntimeObject * __this, PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * _thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *>(__this + _offset);
	AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  AnimationPlayableOutput_get_Null_mD616AD43B83AF5726C08ED5C8BDB7B3B728A579F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_il2cpp_TypeInfo_var);
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutputHandle_get_Null_m33F7D36A76BFDC0B58633BF931E55FA5BBFFD93D(/*hidden argument*/NULL);
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mD683D769C4D3133372FA33113E8C44095F0921BD((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * _thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *>(__this + _offset);
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  _returnValue;
	_returnValue = AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___value0, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * L_0 = __this->get_address_of_m_Handle_0();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ___value0;
		AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118_AdjustorThunk (RuntimeObject * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * _thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *>(__this + _offset);
	AnimationPlayableOutput_SetTarget_m7641CA468712BC658E3493162F10FC145F021118(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___handle0, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___target1, const RuntimeMethod* method)
{
	typedef void (*AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F_ftn) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *);
	static AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutput_InternalSetTarget_mE310C5DBD3F0F5EDD7DAA8D9F6E329B06C0F307F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)");
	_il2cpp_icall_func(___handle0, ___target1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::SetAnimationStreamSource(UnityEngine.Animations.AnimationPlayableOutput,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_SetAnimationStreamSource_mBD97DEC17B671DA763EB092F41D6B795BAA12CAC (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  ___output0, int32_t ___streamSource1, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&___output0), /*hidden argument*/NULL);
		int32_t L_1 = ___streamSource1;
		AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_mBAB07F849D5C09F170A4F3265DAED7A04A326C5E(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::SetSortingOrder(UnityEngine.Animations.AnimationPlayableOutput,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_SetSortingOrder_mE12001A773FC2CBA69A1A2B88A5B5DFF055D0740 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  ___output0, uint16_t ___sortingOrder1, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&___output0), /*hidden argument*/NULL);
		uint16_t L_1 = ___sortingOrder1;
		AnimationPlayableOutputExtensions_InternalSetSortingOrder_m463610A31103C11859C3AE389DE1F9E5D9F27524(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_mBAB07F849D5C09F170A4F3265DAED7A04A326C5E (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___output0, int32_t ___streamSource1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___streamSource1;
		AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mC00B09ADD59FAB0D7004041748779390AF5CC865((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&___output0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder(UnityEngine.Playables.PlayableOutputHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_m463610A31103C11859C3AE389DE1F9E5D9F27524 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___output0, int32_t ___sortingOrder1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___sortingOrder1;
		AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m14165CF1AF20B3C766E0951F3CF6EDC27D6F3689((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&___output0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mC00B09ADD59FAB0D7004041748779390AF5CC865 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___output0, int32_t ___streamSource1, const RuntimeMethod* method)
{
	typedef void (*AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mC00B09ADD59FAB0D7004041748779390AF5CC865_ftn) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, int32_t);
	static AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mC00B09ADD59FAB0D7004041748779390AF5CC865_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mC00B09ADD59FAB0D7004041748779390AF5CC865_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)");
	_il2cpp_icall_func(___output0, ___streamSource1);
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m14165CF1AF20B3C766E0951F3CF6EDC27D6F3689 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * ___output0, int32_t ___sortingOrder1, const RuntimeMethod* method)
{
	typedef void (*AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m14165CF1AF20B3C766E0951F3CF6EDC27D6F3689_ftn) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, int32_t);
	static AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m14165CF1AF20B3C766E0951F3CF6EDC27D6F3689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m14165CF1AF20B3C766E0951F3CF6EDC27D6F3689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)");
	_il2cpp_icall_func(___output0, ___sortingOrder1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57 (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *>(__this + _offset);
	AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_mECC5FA256AAA5334C38DBB6D00EE8AC1BDC015A1 (AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * __this, AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationPosePlayable_GetHandle_m0354C54EB680FC70D4B48D95F7FC4BA4700A0DCE((AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationPosePlayable_Equals_mECC5FA256AAA5334C38DBB6D00EE8AC1BDC015A1_AdjustorThunk (RuntimeObject * __this, AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationPosePlayable_Equals_mECC5FA256AAA5334C38DBB6D00EE8AC1BDC015A1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_m61B5F097B084BBB3CD21AE5E565AB35450C85B1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPosePlayable__ctor_m318607F120F21EDE3D7C1ED07C8B2ED13A23BF57((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *>(__this + _offset);
	AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8 (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m7FE9E55B027861A0B91347F18DAC7E11E2740397 (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8((AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationRemoveScalePlayable_Equals_m7FE9E55B027861A0B91347F18DAC7E11E2740397_AdjustorThunk (RuntimeObject * __this, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationRemoveScalePlayable_Equals_m7FE9E55B027861A0B91347F18DAC7E11E2740397(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_mA35B93BA4FDEDAA98ACE6A314BF0ED50839B8A98 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_m08810C8ECE9A3A100087DD84B13204EC3AF73A8F((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>,Unity.Collections.NativeArray`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadFloats_m6977010033BB1FACEDB315B2E77997E36236F93F (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675  ___handles1, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___buffer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m09D3BB0318237629E92C4BCB037544A2297AEE69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_m1CF950681A38BB32FA06A00EB161C23C352A4366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675  L_0 = ___handles1;
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_1 = ___buffer2;
		int32_t L_2;
		L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m09D3BB0318237629E92C4BCB037544A2297AEE69((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, L_1, /*hidden argument*/AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m09D3BB0318237629E92C4BCB037544A2297AEE69_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_002a;
	}

IL_0015:
	{
		NativeArray_1_t1E6FF7D562751E21F1724C278C2AC849DEE25675  L_5 = ___handles1;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_m1CF950681A38BB32FA06A00EB161C23C352A4366(L_5, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6_m1CF950681A38BB32FA06A00EB161C23C352A4366_RuntimeMethod_var);
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_7 = ___buffer2;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		int32_t L_9 = V_0;
		AnimationSceneHandleUtility_ReadSceneFloatsInternal_m40F49981260737D167976303B49AD12B466871A5((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), (void*)(void*)L_6, (void*)(void*)L_8, L_9, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadSceneFloatsInternal_m40F49981260737D167976303B49AD12B466871A5 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, void* ___propertySceneHandles1, void* ___floatBuffer2, int32_t ___count3, const RuntimeMethod* method)
{
	typedef void (*AnimationSceneHandleUtility_ReadSceneFloatsInternal_m40F49981260737D167976303B49AD12B466871A5_ftn) (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, void*, void*, int32_t);
	static AnimationSceneHandleUtility_ReadSceneFloatsInternal_m40F49981260737D167976303B49AD12B466871A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationSceneHandleUtility_ReadSceneFloatsInternal_m40F49981260737D167976303B49AD12B466871A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___stream0, ___propertySceneHandles1, ___floatBuffer2, ___count3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_4 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *>(__this + _offset);
	AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationScriptPlayable::op_Implicit(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  AnimationScriptPlayable_op_Implicit_m3AB758B0E16070984139A0F488B39AD2619FAD95 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  ___playable0, const RuntimeMethod* method)
{
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18((AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *)(&___playable0), /*hidden argument*/NULL);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m1705DCC80312E3D34E17B32BDBAF4BBB78D435D8 (AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * __this, AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18((AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimationScriptPlayable_GetHandle_mCEA7899E7E43FC2C73B3331AE27C289327F03B18((AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationScriptPlayable_Equals_m1705DCC80312E3D34E17B32BDBAF4BBB78D435D8_AdjustorThunk (RuntimeObject * __this, AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationScriptPlayable_Equals_m1705DCC80312E3D34E17B32BDBAF4BBB78D435D8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_m8C658D60C47CC85D2F88E444B7E531C590908EDD (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, intptr_t ___jobReflectionData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = ___handle1;
		intptr_t L_1 = ___jobReflectionData2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationScriptPlayable_CreateHandleInternal_Injected_mCDBC0CB837118EE5D13F0F45B06F283F67733BD0((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_m2E7AD0269606C2EB23E1A6A1407E53ACAE1C6F31 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_m0B751F7A7D28F59AADACE7C13704D653E0879C56((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_Injected_mCDBC0CB837118EE5D13F0F45B06F283F67733BD0 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * ___graph0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * ___handle1, intptr_t ___jobReflectionData2, const RuntimeMethod* method)
{
	typedef bool (*AnimationScriptPlayable_CreateHandleInternal_Injected_mCDBC0CB837118EE5D13F0F45B06F283F67733BD0_ftn) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, intptr_t);
	static AnimationScriptPlayable_CreateHandleInternal_Injected_mCDBC0CB837118EE5D13F0F45B06F283F67733BD0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationScriptPlayable_CreateHandleInternal_Injected_mCDBC0CB837118EE5D13F0F45B06F283F67733BD0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___handle1, ___jobReflectionData2);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.UInt32 UnityEngine.Animations.AnimationStream::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AnimationStream_get_animatorBindingsVersion_m87763AEBD70C534E9316BC16B151D9773DC40A35 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AnimatorBindingsVersion_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t AnimationStream_get_animatorBindingsVersion_m87763AEBD70C534E9316BC16B151D9773DC40A35_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * _thisAdjusted = reinterpret_cast<AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = AnimationStream_get_animatorBindingsVersion_m87763AEBD70C534E9316BC16B151D9773DC40A35(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationStream::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationStream_get_isValid_m742CF72BAE92642E826E1B71EBC68F91A382D7B7 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AnimatorBindingsVersion_0();
		if ((!(((uint32_t)L_0) >= ((uint32_t)2))))
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_1 = __this->get_constant_1();
		bool L_2;
		L_2 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_3 = __this->get_input_2();
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_5 = __this->get_output_3();
		bool L_6;
		L_6 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_7 = __this->get_workspace_4();
		bool L_8;
		L_8 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_7, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_9 = __this->get_animationHandleBinder_6();
		bool L_10;
		L_10 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 0;
	}

IL_0065:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0068;
	}

IL_0068:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  bool AnimationStream_get_isValid_m742CF72BAE92642E826E1B71EBC68F91A382D7B7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * _thisAdjusted = reinterpret_cast<AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationStream_get_isValid_m742CF72BAE92642E826E1B71EBC68F91A382D7B7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationStream::CheckIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AnimationStream_get_isValid_m742CF72BAE92642E826E1B71EBC68F91A382D7B7((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB31E4AEFDFD2E76052D908F31AC56B3ABCFC7987)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1_RuntimeMethod_var)));
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * _thisAdjusted = reinterpret_cast<AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *>(__this + _offset);
	AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1(_thisAdjusted, method);
}
// System.Single UnityEngine.Animations.AnimationStream::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_get_deltaTime_mDEE9C51425D6B158A08A84C5F314C38C93A3F949 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)__this, /*hidden argument*/NULL);
		float L_0;
		L_0 = AnimationStream_GetDeltaTime_mFD37E9AE5A620EB95856C9AE0FC585923E0E88CE((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimationStream_get_deltaTime_mDEE9C51425D6B158A08A84C5F314C38C93A3F949_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * _thisAdjusted = reinterpret_cast<AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *>(__this + _offset);
	float _returnValue;
	_returnValue = AnimationStream_get_deltaTime_mDEE9C51425D6B158A08A84C5F314C38C93A3F949(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_mFD37E9AE5A620EB95856C9AE0FC585923E0E88CE (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * __this, const RuntimeMethod* method)
{
	{
		float L_0;
		L_0 = AnimationStream_GetDeltaTime_Injected_mA01A71A7EFD8E1DB90738F2907279A8C6F93E3A1((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float AnimationStream_GetDeltaTime_mFD37E9AE5A620EB95856C9AE0FC585923E0E88CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * _thisAdjusted = reinterpret_cast<AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *>(__this + _offset);
	float _returnValue;
	_returnValue = AnimationStream_GetDeltaTime_mFD37E9AE5A620EB95856C9AE0FC585923E0E88CE(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_Injected_mA01A71A7EFD8E1DB90738F2907279A8C6F93E3A1 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ____unity_self0, const RuntimeMethod* method)
{
	typedef float (*AnimationStream_GetDeltaTime_Injected_mA01A71A7EFD8E1DB90738F2907279A8C6F93E3A1_ftn) (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *);
	static AnimationStream_GetDeltaTime_Injected_mA01A71A7EFD8E1DB90738F2907279A8C6F93E3A1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStream_GetDeltaTime_Injected_mA01A71A7EFD8E1DB90738F2907279A8C6F93E3A1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)");
	float icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>,Unity.Collections.NativeArray`1<System.Single>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteFloats_mAF6710B2B0875294CBA3165CCF679BF3E76FDD6E (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  ___handles1, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___buffer2, bool ___useMask3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  L_0 = ___handles1;
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_1 = ___buffer2;
		int32_t L_2;
		L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, L_1, /*hidden argument*/AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0033;
	}

IL_001d:
	{
		NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  L_5 = ___handles1;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1(L_5, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1_RuntimeMethod_var);
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_7 = ___buffer2;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		int32_t L_9 = V_0;
		bool L_10 = ___useMask3;
		AnimationStreamHandleUtility_WriteStreamFloatsInternal_m13C0CBF650201129D20CEAE2F81A71846315C0F3((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), (void*)(void*)L_6, (void*)(void*)L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>,Unity.Collections.NativeArray`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadFloats_m590E421130188DA4776614FDDEA056E3D0C17643 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  ___handles1, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___buffer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  L_0 = ___handles1;
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_1 = ___buffer2;
		int32_t L_2;
		L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, L_1, /*hidden argument*/AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m76A272C74F84B760EFD286EED9BCAFA6B643F307_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0032;
	}

IL_001d:
	{
		NativeArray_1_tC476EFB4B5D553911836A43C155EE142377D1924  L_5 = ___handles1;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1(L_5, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955_mF17BE05C967B6611EA5C80DDB52C91CF8FB784B1_RuntimeMethod_var);
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_7 = ___buffer2;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		int32_t L_9 = V_0;
		AnimationStreamHandleUtility_ReadStreamFloatsInternal_m1D18095F46627C1474A50D4BE49E7616B55D275F((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), (void*)(void*)L_6, (void*)(void*)L_8, L_9, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadStreamFloatsInternal_m1D18095F46627C1474A50D4BE49E7616B55D275F (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, void* ___propertyStreamHandles1, void* ___floatBuffer2, int32_t ___count3, const RuntimeMethod* method)
{
	typedef void (*AnimationStreamHandleUtility_ReadStreamFloatsInternal_m1D18095F46627C1474A50D4BE49E7616B55D275F_ftn) (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, void*, void*, int32_t);
	static AnimationStreamHandleUtility_ReadStreamFloatsInternal_m1D18095F46627C1474A50D4BE49E7616B55D275F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStreamHandleUtility_ReadStreamFloatsInternal_m1D18095F46627C1474A50D4BE49E7616B55D275F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___stream0, ___propertyStreamHandles1, ___floatBuffer2, ___count3);
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteStreamFloatsInternal_m13C0CBF650201129D20CEAE2F81A71846315C0F3 (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, void* ___propertyStreamHandles1, void* ___floatBuffer2, int32_t ___count3, bool ___useMask4, const RuntimeMethod* method)
{
	typedef void (*AnimationStreamHandleUtility_WriteStreamFloatsInternal_m13C0CBF650201129D20CEAE2F81A71846315C0F3_ftn) (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, void*, void*, int32_t, bool);
	static AnimationStreamHandleUtility_WriteStreamFloatsInternal_m13C0CBF650201129D20CEAE2F81A71846315C0F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStreamHandleUtility_WriteStreamFloatsInternal_m13C0CBF650201129D20CEAE2F81A71846315C0F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___stream0, ___propertyStreamHandles1, ___floatBuffer2, ___count3, ___useMask4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		Animator_SetFloatString_m0D1D54020A1D7F9E73A84DAA5FF118ED31F3E943(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mA337A8EB0C377B41EAB2FAFC01320F9FD2DC6ED3 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		float L_2 = ___dampTime2;
		float L_3 = ___deltaTime3;
		Animator_SetFloatStringDamp_mE5687E1F614DEDDE45110DA6A55F1B5499667B0C(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_m1ADEF28BC77A4C8DBC707DA02A1B72E00AC0C88A (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasBoundPlayables_m1ADEF28BC77A4C8DBC707DA02A1B72E00AC0C88A_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *);
	static Animator_get_hasBoundPlayables_m1ADEF28BC77A4C8DBC707DA02A1B72E00AC0C88A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_m1ADEF28BC77A4C8DBC707DA02A1B72E00AC0C88A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m0D1D54020A1D7F9E73A84DAA5FF118ED31F3E943 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatString_m0D1D54020A1D7F9E73A84DAA5FF118ED31F3E943_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, String_t*, float);
	static Animator_SetFloatString_m0D1D54020A1D7F9E73A84DAA5FF118ED31F3E943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m0D1D54020A1D7F9E73A84DAA5FF118ED31F3E943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, String_t*);
	static Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m38F66A49276BCED56B89BB6AF8A36183BE4285F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, String_t*);
	static Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m6FC21A6B7732A31338EE22E78F3D6220903EDBB2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_mE5687E1F614DEDDE45110DA6A55F1B5499667B0C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatStringDamp_mE5687E1F614DEDDE45110DA6A55F1B5499667B0C_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, String_t*, float, float, float);
	static Animator_SetFloatStringDamp_mE5687E1F614DEDDE45110DA6A55F1B5499667B0C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatStringDamp_mE5687E1F614DEDDE45110DA6A55F1B5499667B0C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1, ___dampTime2, ___deltaTime3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		__this->set_m_Handle_0(L_0);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = ___handle0;
		AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38((AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *>(__this + _offset);
	AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1;
		L_1 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool L_4;
		L_4 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6;
		L_6 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_8 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38_RuntimeMethod_var)));
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_9 = ___handle0;
		__this->set_m_Handle_0(L_9);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *>(__this + _offset);
	AnimatorControllerPlayable_SetHandle_m19111E2A65EDAB3382AC9BE815503459A495FF38(_thisAdjusted, ___handle0, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m9D2F918EE07AE657A11C13F285317C05BB257730 (AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * __this, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C((AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AnimatorControllerPlayable_GetHandle_mBB2911E1B1867ED9C9080BEF16838119A51E0C0C((AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorControllerPlayable_Equals_m9D2F918EE07AE657A11C13F285317C05BB257730_AdjustorThunk (RuntimeObject * __this, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorControllerPlayable_Equals_m9D2F918EE07AE657A11C13F285317C05BB257730(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m82C2FF3AEAD5D042648E50B513269EF367C51EB4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_mBD4E1368EB671F6349C5740B1BF131F97BD12CC8((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// UnityEngine.Animations.TransformStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamTransform(UnityEngine.Animator,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525  AnimatorJobExtensions_BindStreamTransform_m5A0A86B5FA99B240EB4F7B13D38984341A29A78A (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, const RuntimeMethod* method)
{
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 ));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform1;
		AnimatorJobExtensions_InternalBindStreamTransform_m19DB974AC781F081059BEDC30F3D3F0EA8F5A6C2(L_0, L_1, (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)(&V_0), /*hidden argument*/NULL);
		TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525  L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  AnimatorJobExtensions_BindStreamProperty_m90906A790D20F0225D265D5499A8073D298D4DC1 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, const RuntimeMethod* method)
{
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform1;
		Type_t * L_2 = ___type2;
		String_t* L_3 = ___property3;
		PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  L_4;
		L_4 = AnimatorJobExtensions_BindStreamProperty_mBC37B65CCDA41CFB201BAC602423024F874B75C7(L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_000e;
	}

IL_000e:
	{
		PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  AnimatorJobExtensions_BindCustomStreamProperty_mE816DD0CFDD17C48B03E54C39558166397C7CA5C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, String_t* ___property1, int32_t ___type2, const RuntimeMethod* method)
{
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 ));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		String_t* L_1 = ___property1;
		int32_t L_2 = ___type2;
		AnimatorJobExtensions_InternalBindCustomStreamProperty_m8A341FCA0D73F69D348E94C73393586099BC05DA(L_0, L_1, L_2, (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)(&V_0), /*hidden argument*/NULL);
		PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  AnimatorJobExtensions_BindStreamProperty_mBC37B65CCDA41CFB201BAC602423024F874B75C7 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, const RuntimeMethod* method)
{
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 ));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform1;
		Type_t * L_2 = ___type2;
		String_t* L_3 = ___property3;
		bool L_4 = ___isObjectReference4;
		AnimatorJobExtensions_InternalBindStreamProperty_mED8E8C594B948DCA416397039502BA33FFBDAD04(L_0, L_1, L_2, L_3, L_4, (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)(&V_0), /*hidden argument*/NULL);
		PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  L_5 = V_0;
		V_1 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Animations.TransformSceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneTransform(UnityEngine.Animator,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1  AnimatorJobExtensions_BindSceneTransform_m70DDDEF4FDAD0B585759A302A9FA5AB429677CD1 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, const RuntimeMethod* method)
{
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 ));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform1;
		AnimatorJobExtensions_InternalBindSceneTransform_mDBCADF388EBC447C160DBAA471DB109CBC0F6456(L_0, L_1, (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)(&V_0), /*hidden argument*/NULL);
		TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1  L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  AnimatorJobExtensions_BindSceneProperty_mC90B532550A3D239992628CB7FD161C1676649DF (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, const RuntimeMethod* method)
{
	PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform1;
		Type_t * L_2 = ___type2;
		String_t* L_3 = ___property3;
		PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  L_4;
		L_4 = AnimatorJobExtensions_BindSceneProperty_mD71EF82C515100E0966AD0E887E2860E83F699DA(L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_000e;
	}

IL_000e:
	{
		PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  AnimatorJobExtensions_BindSceneProperty_mD71EF82C515100E0966AD0E887E2860E83F699DA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, const RuntimeMethod* method)
{
	PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6 ));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform1;
		Type_t * L_2 = ___type2;
		String_t* L_3 = ___property3;
		bool L_4 = ___isObjectReference4;
		AnimatorJobExtensions_InternalBindSceneProperty_m4D552D546B855EAEBE4E7A9AC485651E378FAE47(L_0, L_1, L_2, L_3, L_4, (PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6 *)(&V_0), /*hidden argument*/NULL);
		PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  L_5 = V_0;
		V_1 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6  L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamTransform_m19DB974AC781F081059BEDC30F3D3F0EA8F5A6C2 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ___transformStreamHandle2, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindStreamTransform_m19DB974AC781F081059BEDC30F3D3F0EA8F5A6C2_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *);
	static AnimatorJobExtensions_InternalBindStreamTransform_m19DB974AC781F081059BEDC30F3D3F0EA8F5A6C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindStreamTransform_m19DB974AC781F081059BEDC30F3D3F0EA8F5A6C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)");
	_il2cpp_icall_func(___animator0, ___transform1, ___transformStreamHandle2);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamProperty_mED8E8C594B948DCA416397039502BA33FFBDAD04 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ___propertyStreamHandle5, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindStreamProperty_mED8E8C594B948DCA416397039502BA33FFBDAD04_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Type_t *, String_t*, bool, PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *);
	static AnimatorJobExtensions_InternalBindStreamProperty_mED8E8C594B948DCA416397039502BA33FFBDAD04_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindStreamProperty_mED8E8C594B948DCA416397039502BA33FFBDAD04_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)");
	_il2cpp_icall_func(___animator0, ___transform1, ___type2, ___property3, ___isObjectReference4, ___propertyStreamHandle5);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindCustomStreamProperty_m8A341FCA0D73F69D348E94C73393586099BC05DA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, String_t* ___property1, int32_t ___propertyType2, PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ___propertyStreamHandle3, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindCustomStreamProperty_m8A341FCA0D73F69D348E94C73393586099BC05DA_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, String_t*, int32_t, PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *);
	static AnimatorJobExtensions_InternalBindCustomStreamProperty_m8A341FCA0D73F69D348E94C73393586099BC05DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindCustomStreamProperty_m8A341FCA0D73F69D348E94C73393586099BC05DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)");
	_il2cpp_icall_func(___animator0, ___property1, ___propertyType2, ___propertyStreamHandle3);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneTransform_mDBCADF388EBC447C160DBAA471DB109CBC0F6456 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ___transformSceneHandle2, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindSceneTransform_mDBCADF388EBC447C160DBAA471DB109CBC0F6456_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *);
	static AnimatorJobExtensions_InternalBindSceneTransform_mDBCADF388EBC447C160DBAA471DB109CBC0F6456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindSceneTransform_mDBCADF388EBC447C160DBAA471DB109CBC0F6456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)");
	_il2cpp_icall_func(___animator0, ___transform1, ___transformSceneHandle2);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneProperty_m4D552D546B855EAEBE4E7A9AC485651E378FAE47 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6 * ___propertySceneHandle5, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindSceneProperty_m4D552D546B855EAEBE4E7A9AC485651E378FAE47_ftn) (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Type_t *, String_t*, bool, PropertySceneHandle_tEAB589C8293E0B3B0202BE2B90C0345F9D236BF6 *);
	static AnimatorJobExtensions_InternalBindSceneProperty_m4D552D546B855EAEBE4E7A9AC485651E378FAE47_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindSceneProperty_m4D552D546B855EAEBE4E7A9AC485651E378FAE47_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)");
	_il2cpp_icall_func(___animator0, ___transform1, ___type2, ___property3, ___isObjectReference4, ___propertySceneHandle5);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_m579571520B7C607B6983D4973EBAE982EAC9AA40 (AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA * ___controller0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA * L_0 = ___controller0;
		NullCheck(L_0);
		OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * L_1 = L_0->get_OnOverrideControllerDirty_4();
		V_0 = (bool)((!(((RuntimeObject*)(OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimatorOverrideController_t4630AA9761965F735AEB26B9A92D210D6338B2DA * L_3 = ___controller0;
		NullCheck(L_3);
		OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * L_4 = L_3->get_OnOverrideControllerDirty_4();
		NullCheck(L_4);
		OnOverrideControllerDirtyCallback_Invoke_m21DB79300E852ED93F2521FFC03EC4D858F6B330(L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke(const AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0& unmarshaled, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_back(const AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_com(const AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0& unmarshaled, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_com_back(const AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_com& marshaled, AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshal_com_cleanup(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_back(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke& marshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  unmarshaled_limit_temp_2;
	memset((&unmarshaled_limit_temp_2), 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_pinvoke_cleanup(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com_back(const HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com& marshaled, HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  unmarshaled_limit_temp_2;
	memset((&unmarshaled_limit_temp_2), 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshal_com_cleanup(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Animations.NotKeyableAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotKeyableAttribute__ctor_m98269306D3337B28D7E5E55C84B2F6304EBFE507 (NotKeyableAttribute_tE0C94B5FF990C6B4BB118486BCA35CCDA91AA905 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsValidInternal_mA063ACB26DD5F5CA0A4FDBCF3840A61802001B35 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		bool L_1;
		L_1 = AnimationStream_get_isValid_m742CF72BAE92642E826E1B71EBC68F91A382D7B7((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2;
		L_2 = PropertyStreamHandle_get_createdByNative_mFE6CF1B3E598B8111E554C3BC3D53A093628BDBE((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		bool L_3;
		L_3 = PropertyStreamHandle_get_hasHandleIndex_mB69A2FC96B434EB916CCF825D21E6A274F518367((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		bool L_4;
		L_4 = PropertyStreamHandle_get_hasBindType_m4700903253ECF2F96294D8BB49F804BEB254AACD((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsValidInternal_mA063ACB26DD5F5CA0A4FDBCF3840A61802001B35_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_IsValidInternal_mA063ACB26DD5F5CA0A4FDBCF3840A61802001B35(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_createdByNative_mFE6CF1B3E598B8111E554C3BC3D53A093628BDBE (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = PropertyStreamHandle_get_animatorBindingsVersion_mB317627A9F7BAB4949A5BE6381A448D0B07C1DEC((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_createdByNative_mFE6CF1B3E598B8111E554C3BC3D53A093628BDBE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_createdByNative_mFE6CF1B3E598B8111E554C3BC3D53A093628BDBE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsSameVersionAsStream_mA6E621F98E7E15FA604184220AE3F14ADF8ED5FF (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = PropertyStreamHandle_get_animatorBindingsVersion_mB317627A9F7BAB4949A5BE6381A448D0B07C1DEC((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_1 = ___stream0;
		uint32_t L_2;
		L_2 = AnimationStream_get_animatorBindingsVersion_m87763AEBD70C534E9316BC16B151D9773DC40A35((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsSameVersionAsStream_mA6E621F98E7E15FA604184220AE3F14ADF8ED5FF_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_IsSameVersionAsStream_mA6E621F98E7E15FA604184220AE3F14ADF8ED5FF(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasHandleIndex_mB69A2FC96B434EB916CCF825D21E6A274F518367 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_handleIndex_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasHandleIndex_mB69A2FC96B434EB916CCF825D21E6A274F518367_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_hasHandleIndex_mB69A2FC96B434EB916CCF825D21E6A274F518367(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasValueArrayIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasValueArrayIndex_m3B7F6BD1725DDAA219FB919501E853757C9A5982 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_valueArrayIndex_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasValueArrayIndex_m3B7F6BD1725DDAA219FB919501E853757C9A5982_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_hasValueArrayIndex_m3B7F6BD1725DDAA219FB919501E853757C9A5982(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasBindType_m4700903253ECF2F96294D8BB49F804BEB254AACD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_bindType_3();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasBindType_m4700903253ECF2F96294D8BB49F804BEB254AACD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_hasBindType_m4700903253ECF2F96294D8BB49F804BEB254AACD(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PropertyStreamHandle_get_animatorBindingsVersion_mB317627A9F7BAB4949A5BE6381A448D0B07C1DEC (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AnimatorBindingsVersion_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t PropertyStreamHandle_get_animatorBindingsVersion_mB317627A9F7BAB4949A5BE6381A448D0B07C1DEC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = PropertyStreamHandle_get_animatorBindingsVersion_mB317627A9F7BAB4949A5BE6381A448D0B07C1DEC(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsResolvedInternal_mA39381430BAC168EEAA72AB3BC7ECB95EBF782ED (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		bool L_1;
		L_1 = PropertyStreamHandle_IsValidInternal_mA063ACB26DD5F5CA0A4FDBCF3840A61802001B35((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_2 = ___stream0;
		bool L_3;
		L_3 = PropertyStreamHandle_IsSameVersionAsStream_mA6E621F98E7E15FA604184220AE3F14ADF8ED5FF((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool L_4;
		L_4 = PropertyStreamHandle_get_hasValueArrayIndex_m3B7F6BD1725DDAA219FB919501E853757C9A5982((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsResolvedInternal_mA39381430BAC168EEAA72AB3BC7ECB95EBF782ED_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_IsResolvedInternal_mA39381430BAC168EEAA72AB3BC7ECB95EBF782ED(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B19_0 = 0;
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_1 = ___stream0;
		bool L_2;
		L_2 = PropertyStreamHandle_IsResolvedInternal_mA39381430BAC168EEAA72AB3BC7ECB95EBF782ED((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0091;
	}

IL_0015:
	{
		bool L_4;
		L_4 = PropertyStreamHandle_get_createdByNative_mFE6CF1B3E598B8111E554C3BC3D53A093628BDBE((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		bool L_5;
		L_5 = PropertyStreamHandle_get_hasHandleIndex_mB69A2FC96B434EB916CCF825D21E6A274F518367((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		bool L_6;
		L_6 = PropertyStreamHandle_get_hasBindType_m4700903253ECF2F96294D8BB49F804BEB254AACD((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 1;
	}

IL_0031:
	{
		V_1 = (bool)G_B6_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A5239659C252C3C95FC09A31CA37CA6F6B07FAE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50_RuntimeMethod_var)));
	}

IL_0040:
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_9 = ___stream0;
		bool L_10;
		L_10 = PropertyStreamHandle_IsSameVersionAsStream_mA6E621F98E7E15FA604184220AE3F14ADF8ED5FF((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		bool L_11;
		L_11 = PropertyStreamHandle_get_hasHandleIndex_mB69A2FC96B434EB916CCF825D21E6A274F518367((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		bool L_12;
		L_12 = PropertyStreamHandle_get_hasValueArrayIndex_m3B7F6BD1725DDAA219FB919501E853757C9A5982((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B12_0 = 0;
	}

IL_005d:
	{
		G_B14_0 = G_B12_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B14_0 = 1;
	}

IL_0060:
	{
		V_2 = (bool)G_B14_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_14 = ___stream0;
		PropertyStreamHandle_ResolveInternal_m4A6C7FDCDAA743F2A3BF2C956F56DD84DAEE01BD((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_14, /*hidden argument*/NULL);
	}

IL_006e:
	{
		bool L_15;
		L_15 = PropertyStreamHandle_get_hasHandleIndex_mB69A2FC96B434EB916CCF825D21E6A274F518367((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		bool L_16;
		L_16 = PropertyStreamHandle_get_hasValueArrayIndex_m3B7F6BD1725DDAA219FB919501E853757C9A5982((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, /*hidden argument*/NULL);
		G_B19_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B19_0 = 0;
	}

IL_0082:
	{
		V_3 = (bool)G_B19_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_18 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10F6FECF95C1235E3B90F738314A338A55A4DF3B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50_RuntimeMethod_var)));
	}

IL_0091:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50(_thisAdjusted, ___stream0, method);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloat(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloat_mDB4998CE3141E00E3AB5397B4D01126CDA65832D (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_GetFloat_mDB4998CE3141E00E3AB5397B4D01126CDA65832D_RuntimeMethod_var)));
	}

IL_0025:
	{
		float L_3;
		L_3 = PropertyStreamHandle_GetFloatInternal_m3C21D11450AEF37C33AE8033BF23C3CC6CE8A629((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0030;
	}

IL_0030:
	{
		float L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  float PropertyStreamHandle_GetFloat_mDB4998CE3141E00E3AB5397B4D01126CDA65832D_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	float _returnValue;
	_returnValue = PropertyStreamHandle_GetFloat_mDB4998CE3141E00E3AB5397B4D01126CDA65832D(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloat(UnityEngine.Animations.AnimationStream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloat_m92286736EE327B2541CE17F751347815AA8406F2 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, float ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF248A46D93F240BD665585183A3658090FB86C2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_SetFloat_m92286736EE327B2541CE17F751347815AA8406F2_RuntimeMethod_var)));
	}

IL_0025:
	{
		float L_3 = ___value1;
		PropertyStreamHandle_SetFloatInternal_m19ABD63379E1BCCF8458586B61D7858C533CAF1C((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetFloat_m92286736EE327B2541CE17F751347815AA8406F2_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, float ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	PropertyStreamHandle_SetFloat_m92286736EE327B2541CE17F751347815AA8406F2(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetInt(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetInt_m3CBDE341AD85820A89A6572D85CD775E6A11CE72 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = __this->get_bindType_3();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = __this->get_bindType_3();
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_GetInt_m3CBDE341AD85820A89A6572D85CD775E6A11CE72_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_5;
		L_5 = PropertyStreamHandle_GetIntInternal_m65CA88E168E9171776212936AD886C75C989C560((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0048;
	}

IL_0048:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t PropertyStreamHandle_GetInt_m3CBDE341AD85820A89A6572D85CD775E6A11CE72_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PropertyStreamHandle_GetInt_m3CBDE341AD85820A89A6572D85CD775E6A11CE72(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetInt(UnityEngine.Animations.AnimationStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetInt_mF26C8AEC9C950F186E885ED18B361661F6FF1BD4 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, int32_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = __this->get_bindType_3();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = __this->get_bindType_3();
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF248A46D93F240BD665585183A3658090FB86C2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_SetInt_mF26C8AEC9C950F186E885ED18B361661F6FF1BD4_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_5 = ___value1;
		PropertyStreamHandle_SetIntInternal_m90C08AC5D701C6BF8DF5DE2124767C8BC351BD32((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_5, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetInt_mF26C8AEC9C950F186E885ED18B361661F6FF1BD4_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	PropertyStreamHandle_SetInt_mF26C8AEC9C950F186E885ED18B361661F6FF1BD4(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBool(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBool_mE41CF6F75B7508692855DEAEE0F863C055AA3BAB (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->get_bindType_3();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_GetBool_mE41CF6F75B7508692855DEAEE0F863C055AA3BAB_RuntimeMethod_var)));
	}

IL_0031:
	{
		bool L_4;
		L_4 = PropertyStreamHandle_GetBoolInternal_m2A95929BC6AF43D63EE8B6B076BEA54C433111F8((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_003c;
	}

IL_003c:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_GetBool_mE41CF6F75B7508692855DEAEE0F863C055AA3BAB_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_GetBool_mE41CF6F75B7508692855DEAEE0F863C055AA3BAB(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBool(UnityEngine.Animations.AnimationStream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBool_m786BC5DF3CE050785D63EC855FC8E3D4A96A5E8B (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, bool ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mAF68D2D2FBAAB927EEF05FAA8E9476796BC2AE50((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->get_bindType_3();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF248A46D93F240BD665585183A3658090FB86C2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_SetBool_m786BC5DF3CE050785D63EC855FC8E3D4A96A5E8B_RuntimeMethod_var)));
	}

IL_0031:
	{
		bool L_4 = ___value1;
		PropertyStreamHandle_SetBoolInternal_mA2B0B89F9C23DD27F773065C2967A35CAE9393CD((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_4, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetBool_m786BC5DF3CE050785D63EC855FC8E3D4A96A5E8B_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, bool ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	PropertyStreamHandle_SetBool_m786BC5DF3CE050785D63EC855FC8E3D4A96A5E8B(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_m4A6C7FDCDAA743F2A3BF2C956F56DD84DAEE01BD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		PropertyStreamHandle_ResolveInternal_Injected_m367421253D7724B0394FFA5C5C444E61AA71DD04((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_ResolveInternal_m4A6C7FDCDAA743F2A3BF2C956F56DD84DAEE01BD_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	PropertyStreamHandle_ResolveInternal_m4A6C7FDCDAA743F2A3BF2C956F56DD84DAEE01BD(_thisAdjusted, ___stream0, method);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_m3C21D11450AEF37C33AE8033BF23C3CC6CE8A629 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		float L_1;
		L_1 = PropertyStreamHandle_GetFloatInternal_Injected_m4364D88FA20812524FCD57DCAB050399D2DA69CD((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float PropertyStreamHandle_GetFloatInternal_m3C21D11450AEF37C33AE8033BF23C3CC6CE8A629_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	float _returnValue;
	_returnValue = PropertyStreamHandle_GetFloatInternal_m3C21D11450AEF37C33AE8033BF23C3CC6CE8A629(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal(UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_m19ABD63379E1BCCF8458586B61D7858C533CAF1C (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, float ___value1, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		float L_1 = ___value1;
		PropertyStreamHandle_SetFloatInternal_Injected_m97FD820CD4EE7260E92C278EAABF6BCC5C98219B((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetFloatInternal_m19ABD63379E1BCCF8458586B61D7858C533CAF1C_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, float ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	PropertyStreamHandle_SetFloatInternal_m19ABD63379E1BCCF8458586B61D7858C533CAF1C(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_m65CA88E168E9171776212936AD886C75C989C560 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		int32_t L_1;
		L_1 = PropertyStreamHandle_GetIntInternal_Injected_m3347C5B4CF817EAB29435605258E190DC2882CBD((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t PropertyStreamHandle_GetIntInternal_m65CA88E168E9171776212936AD886C75C989C560_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PropertyStreamHandle_GetIntInternal_m65CA88E168E9171776212936AD886C75C989C560(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal(UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_m90C08AC5D701C6BF8DF5DE2124767C8BC351BD32 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		int32_t L_1 = ___value1;
		PropertyStreamHandle_SetIntInternal_Injected_m104E0C7D1E8568AC3C38BF6C01DBB434FA8B60C6((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetIntInternal_m90C08AC5D701C6BF8DF5DE2124767C8BC351BD32_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	PropertyStreamHandle_SetIntInternal_m90C08AC5D701C6BF8DF5DE2124767C8BC351BD32(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_m2A95929BC6AF43D63EE8B6B076BEA54C433111F8 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		bool L_1;
		L_1 = PropertyStreamHandle_GetBoolInternal_Injected_m89A5B98BEA8603E160FFE1575C25282DC487BC34((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_GetBoolInternal_m2A95929BC6AF43D63EE8B6B076BEA54C433111F8_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_GetBoolInternal_m2A95929BC6AF43D63EE8B6B076BEA54C433111F8(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal(UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_mA2B0B89F9C23DD27F773065C2967A35CAE9393CD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, bool ___value1, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		bool L_1 = ___value1;
		PropertyStreamHandle_SetBoolInternal_Injected_m092FC719010C8574C487E3571D08110A1A6E465F((PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetBoolInternal_mA2B0B89F9C23DD27F773065C2967A35CAE9393CD_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, bool ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *>(__this + _offset);
	PropertyStreamHandle_SetBoolInternal_mA2B0B89F9C23DD27F773065C2967A35CAE9393CD(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_Injected_m367421253D7724B0394FFA5C5C444E61AA71DD04 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method)
{
	typedef void (*PropertyStreamHandle_ResolveInternal_Injected_m367421253D7724B0394FFA5C5C444E61AA71DD04_ftn) (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *);
	static PropertyStreamHandle_ResolveInternal_Injected_m367421253D7724B0394FFA5C5C444E61AA71DD04_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_ResolveInternal_Injected_m367421253D7724B0394FFA5C5C444E61AA71DD04_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	_il2cpp_icall_func(____unity_self0, ___stream1);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_Injected_m4364D88FA20812524FCD57DCAB050399D2DA69CD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method)
{
	typedef float (*PropertyStreamHandle_GetFloatInternal_Injected_m4364D88FA20812524FCD57DCAB050399D2DA69CD_ftn) (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *);
	static PropertyStreamHandle_GetFloatInternal_Injected_m4364D88FA20812524FCD57DCAB050399D2DA69CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetFloatInternal_Injected_m4364D88FA20812524FCD57DCAB050399D2DA69CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	float icallRetVal = _il2cpp_icall_func(____unity_self0, ___stream1);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_Injected_m97FD820CD4EE7260E92C278EAABF6BCC5C98219B (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, float ___value2, const RuntimeMethod* method)
{
	typedef void (*PropertyStreamHandle_SetFloatInternal_Injected_m97FD820CD4EE7260E92C278EAABF6BCC5C98219B_ftn) (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, float);
	static PropertyStreamHandle_SetFloatInternal_Injected_m97FD820CD4EE7260E92C278EAABF6BCC5C98219B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetFloatInternal_Injected_m97FD820CD4EE7260E92C278EAABF6BCC5C98219B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___value2);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_Injected_m3347C5B4CF817EAB29435605258E190DC2882CBD (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method)
{
	typedef int32_t (*PropertyStreamHandle_GetIntInternal_Injected_m3347C5B4CF817EAB29435605258E190DC2882CBD_ftn) (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *);
	static PropertyStreamHandle_GetIntInternal_Injected_m3347C5B4CF817EAB29435605258E190DC2882CBD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetIntInternal_Injected_m3347C5B4CF817EAB29435605258E190DC2882CBD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0, ___stream1);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_Injected_m104E0C7D1E8568AC3C38BF6C01DBB434FA8B60C6 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, int32_t ___value2, const RuntimeMethod* method)
{
	typedef void (*PropertyStreamHandle_SetIntInternal_Injected_m104E0C7D1E8568AC3C38BF6C01DBB434FA8B60C6_ftn) (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, int32_t);
	static PropertyStreamHandle_SetIntInternal_Injected_m104E0C7D1E8568AC3C38BF6C01DBB434FA8B60C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetIntInternal_Injected_m104E0C7D1E8568AC3C38BF6C01DBB434FA8B60C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___value2);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_Injected_m89A5B98BEA8603E160FFE1575C25282DC487BC34 (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method)
{
	typedef bool (*PropertyStreamHandle_GetBoolInternal_Injected_m89A5B98BEA8603E160FFE1575C25282DC487BC34_ftn) (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *);
	static PropertyStreamHandle_GetBoolInternal_Injected_m89A5B98BEA8603E160FFE1575C25282DC487BC34_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetBoolInternal_Injected_m89A5B98BEA8603E160FFE1575C25282DC487BC34_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0, ___stream1);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_Injected_m092FC719010C8574C487E3571D08110A1A6E465F (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, bool ___value2, const RuntimeMethod* method)
{
	typedef void (*PropertyStreamHandle_SetBoolInternal_Injected_m092FC719010C8574C487E3571D08110A1A6E465F_ftn) (PropertyStreamHandle_tE4CD30EF78EEE5514D65ECD4C0E03031DB22B955 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, bool);
	static PropertyStreamHandle_SetBoolInternal_Injected_m092FC719010C8574C487E3571D08110A1A6E465F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetBoolInternal_Injected_m092FC719010C8574C487E3571D08110A1A6E465F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___value2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_back(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke& marshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_position_temp_2;
	memset((&unmarshaled_position_temp_2), 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_rotation_temp_3;
	memset((&unmarshaled_rotation_temp_3), 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_scale_temp_4;
	memset((&unmarshaled_scale_temp_4), 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_pinvoke_cleanup(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com_back(const SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com& marshaled, SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_position_temp_2;
	memset((&unmarshaled_position_temp_2), 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_rotation_temp_3;
	memset((&unmarshaled_rotation_temp_3), 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_scale_temp_4;
	memset((&unmarshaled_scale_temp_4), 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshal_com_cleanup(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_m0B5055A01EEF9070E7611D3C3165AAA118D22953 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_m2FF9D5AD07DF99860C7B0033791FE08F2EF919F1 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mE8EADFCEA482A101BF13AFB773A06C3C2C8B3208 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_mB51A6EA16DA5038BF7C4E46863C8ECA1338EFBDD (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m2BB5A0CD4B083CCDFAC7EE2F8233D2B11825197F (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m8696CC6EE9DC7577A07023F84DCF6E4F80E75ACC (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m7FD170C30229751A93F64C26AFFF9C9BA057BF3D (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_m0027D5548D58C0E2777A4CF9420F015FD56CEC18 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF81F7D0AB02EB31012A7C50E75295C40301A5055 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_m795DAE1099CF045D5E61ABBBAD017455F48B0707 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m29F850CE0258906408520515E4E157D43AFEB181 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m96E18AE1A75046F85EB7FEB5C05CEC7377F72C1F (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_mF2DF6E7A25D30F05E99984F3E8D4083D695F23CA (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m8AC70A1160FE329D0E1EC31F08B1E85B59DB516D (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Animations.TransformSceneHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_IsValid_mFDCEE3AB0017B339BDB7C344050D16FCA35EBADD (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		bool L_0;
		L_0 = AnimationStream_get_isValid_m742CF72BAE92642E826E1B71EBC68F91A382D7B7((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1;
		L_1 = TransformSceneHandle_get_createdByNative_m381E541B1E616808DE73EB4291A96061420FC2CC((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m55A97AEFE87FFFEF61E7C69210E18259E8E3483D((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3;
		L_3 = TransformSceneHandle_HasValidTransform_mA9C1A94E84A6DF70C563676C64EBA9959C66A392((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_IsValid_mFDCEE3AB0017B339BDB7C344050D16FCA35EBADD_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_IsValid_mFDCEE3AB0017B339BDB7C344050D16FCA35EBADD(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_createdByNative_m381E541B1E616808DE73EB4291A96061420FC2CC (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0 = __this->get_valid_0();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_get_createdByNative_m381E541B1E616808DE73EB4291A96061420FC2CC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_get_createdByNative_m381E541B1E616808DE73EB4291A96061420FC2CC(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m55A97AEFE87FFFEF61E7C69210E18259E8E3483D (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_transformSceneHandleDefinitionIndex_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m55A97AEFE87FFFEF61E7C69210E18259E8E3483D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m55A97AEFE87FFFEF61E7C69210E18259E8E3483D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::CheckIsValid(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = TransformSceneHandle_get_createdByNative_m381E541B1E616808DE73EB4291A96061420FC2CC((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2;
		L_2 = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m55A97AEFE87FFFEF61E7C69210E18259E8E3483D((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral972CE48A8E26750559B1B00039204D0DE5B03904)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8_RuntimeMethod_var)));
	}

IL_002b:
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_5 = ___stream0;
		bool L_6;
		L_6 = TransformSceneHandle_HasValidTransform_mA9C1A94E84A6DF70C563676C64EBA9959C66A392((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_8 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD05EE9FE9EFEEB35F354D97C2927EEB880DA9264)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8_RuntimeMethod_var)));
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetPosition_mEF47119EFD7C822D63582C160B2C2377195DA871 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = TransformSceneHandle_GetPositionInternal_m5E6C25BAFA879135767114FF6AFD736FED5DAEBB((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetPosition_mEF47119EFD7C822D63582C160B2C2377195DA871_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformSceneHandle_GetPosition_mEF47119EFD7C822D63582C160B2C2377195DA871(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalPosition_m5FD11713F37F85D38002105E330A11EE30D90FBB (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = TransformSceneHandle_GetLocalPositionInternal_m3D1ECBB837AEF718E120612B0224553033F0C661((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalPosition_m5FD11713F37F85D38002105E330A11EE30D90FBB_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformSceneHandle_GetLocalPosition_m5FD11713F37F85D38002105E330A11EE30D90FBB(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetRotation_mF5AFF130F26D3AA39938CE8A565631C295C7C793 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = TransformSceneHandle_GetRotationInternal_mD56C3262B337D22E6873918B4502E45F42D2A214((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetRotation_mF5AFF130F26D3AA39938CE8A565631C295C7C793_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = TransformSceneHandle_GetRotation_mF5AFF130F26D3AA39938CE8A565631C295C7C793(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetLocalRotation_m1D9D6AFC0ADAB6D8CD5BA79DD18CA9705EE4818A (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = TransformSceneHandle_GetLocalRotationInternal_m638F46F760A1BD2F36256923D411DADD7C83F2A8((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetLocalRotation_m1D9D6AFC0ADAB6D8CD5BA79DD18CA9705EE4818A_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = TransformSceneHandle_GetLocalRotation_m1D9D6AFC0ADAB6D8CD5BA79DD18CA9705EE4818A(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalScale_m8374508CB1D727FD0C4B1FF2736F32B456EE65E9 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = TransformSceneHandle_GetLocalScaleInternal_mDA625938FF3C11263F7834824B4B79CDF2FAB447((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalScale_m8374508CB1D727FD0C4B1FF2736F32B456EE65E9_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformSceneHandle_GetLocalScale_m8374508CB1D727FD0C4B1FF2736F32B456EE65E9(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRS_mB70457390D4E29E3571C33E4C4233B0BB3F9DB29 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method)
{
	{
		TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_1 = ___rotation2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = ___scale3;
		TransformSceneHandle_GetLocalTRSInternal_m8FB2803EFC16A70AF87057E347AAF4747258BEDD((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetLocalTRS_mB70457390D4E29E3571C33E4C4233B0BB3F9DB29_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	TransformSceneHandle_GetLocalTRS_mB70457390D4E29E3571C33E4C4233B0BB3F9DB29(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTR_m152496BE5D5B1B64E56105FD960BD7476D9F14DB (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	{
		TransformSceneHandle_CheckIsValid_mF7107D4A803831C89AE38A38A577336482303EF8((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_1 = ___rotation2;
		TransformSceneHandle_GetGlobalTRInternal_mE372EE53B6A16E6682F0B08F38733682CC56E664((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetGlobalTR_m152496BE5D5B1B64E56105FD960BD7476D9F14DB_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	TransformSceneHandle_GetGlobalTR_m152496BE5D5B1B64E56105FD960BD7476D9F14DB(_thisAdjusted, ___stream0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_mA9C1A94E84A6DF70C563676C64EBA9959C66A392 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		bool L_1;
		L_1 = TransformSceneHandle_HasValidTransform_Injected_mAEF5B1A10FF137ACF2BDB973BFAA239277EC9508((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_HasValidTransform_mA9C1A94E84A6DF70C563676C64EBA9959C66A392_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_HasValidTransform_mA9C1A94E84A6DF70C563676C64EBA9959C66A392(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetPositionInternal_m5E6C25BAFA879135767114FF6AFD736FED5DAEBB (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformSceneHandle_GetPositionInternal_Injected_mB8C58D2D6F304D4BF8D4AFBE9CE465FEE04F7C3C((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetPositionInternal_m5E6C25BAFA879135767114FF6AFD736FED5DAEBB_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformSceneHandle_GetPositionInternal_m5E6C25BAFA879135767114FF6AFD736FED5DAEBB(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalPositionInternal_m3D1ECBB837AEF718E120612B0224553033F0C661 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformSceneHandle_GetLocalPositionInternal_Injected_m0B16E830C7608951413E3BFDC06AB311CF38734D((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalPositionInternal_m3D1ECBB837AEF718E120612B0224553033F0C661_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformSceneHandle_GetLocalPositionInternal_m3D1ECBB837AEF718E120612B0224553033F0C661(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetRotationInternal_mD56C3262B337D22E6873918B4502E45F42D2A214 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformSceneHandle_GetRotationInternal_Injected_mF07F8EA516605D202212A0EDFF32E4963E4D510E((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetRotationInternal_mD56C3262B337D22E6873918B4502E45F42D2A214_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = TransformSceneHandle_GetRotationInternal_mD56C3262B337D22E6873918B4502E45F42D2A214(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetLocalRotationInternal_m638F46F760A1BD2F36256923D411DADD7C83F2A8 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformSceneHandle_GetLocalRotationInternal_Injected_m3D6C0D43C86368749D01295C7A738C9C0F757320((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformSceneHandle_GetLocalRotationInternal_m638F46F760A1BD2F36256923D411DADD7C83F2A8_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = TransformSceneHandle_GetLocalRotationInternal_m638F46F760A1BD2F36256923D411DADD7C83F2A8(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalScaleInternal_mDA625938FF3C11263F7834824B4B79CDF2FAB447 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformSceneHandle_GetLocalScaleInternal_Injected_m44C9B340AD37508BF56289F7AB8B754DD7A1E672((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformSceneHandle_GetLocalScaleInternal_mDA625938FF3C11263F7834824B4B79CDF2FAB447_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformSceneHandle_GetLocalScaleInternal_mDA625938FF3C11263F7834824B4B79CDF2FAB447(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_m8FB2803EFC16A70AF87057E347AAF4747258BEDD (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = ___rotation2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = ___scale3;
		TransformSceneHandle_GetLocalTRSInternal_Injected_m45721738580668918936A3707A4F83D2C01F8466((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_2, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetLocalTRSInternal_m8FB2803EFC16A70AF87057E347AAF4747258BEDD_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	TransformSceneHandle_GetLocalTRSInternal_m8FB2803EFC16A70AF87057E347AAF4747258BEDD(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_mE372EE53B6A16E6682F0B08F38733682CC56E664 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = ___rotation2;
		TransformSceneHandle_GetGlobalTRInternal_Injected_m1D484BAE0E57D4B9461D50808DA6576B809BD561((TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetGlobalTRInternal_mE372EE53B6A16E6682F0B08F38733682CC56E664_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *>(__this + _offset);
	TransformSceneHandle_GetGlobalTRInternal_mE372EE53B6A16E6682F0B08F38733682CC56E664(_thisAdjusted, ___stream0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_Injected_mAEF5B1A10FF137ACF2BDB973BFAA239277EC9508 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method)
{
	typedef bool (*TransformSceneHandle_HasValidTransform_Injected_mAEF5B1A10FF137ACF2BDB973BFAA239277EC9508_ftn) (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *);
	static TransformSceneHandle_HasValidTransform_Injected_mAEF5B1A10FF137ACF2BDB973BFAA239277EC9508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_HasValidTransform_Injected_mAEF5B1A10FF137ACF2BDB973BFAA239277EC9508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0, ___stream1);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetPositionInternal_Injected_mB8C58D2D6F304D4BF8D4AFBE9CE465FEE04F7C3C (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetPositionInternal_Injected_mB8C58D2D6F304D4BF8D4AFBE9CE465FEE04F7C3C_ftn) (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformSceneHandle_GetPositionInternal_Injected_mB8C58D2D6F304D4BF8D4AFBE9CE465FEE04F7C3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetPositionInternal_Injected_mB8C58D2D6F304D4BF8D4AFBE9CE465FEE04F7C3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalPositionInternal_Injected_m0B16E830C7608951413E3BFDC06AB311CF38734D (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetLocalPositionInternal_Injected_m0B16E830C7608951413E3BFDC06AB311CF38734D_ftn) (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformSceneHandle_GetLocalPositionInternal_Injected_m0B16E830C7608951413E3BFDC06AB311CF38734D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalPositionInternal_Injected_m0B16E830C7608951413E3BFDC06AB311CF38734D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetRotationInternal_Injected_mF07F8EA516605D202212A0EDFF32E4963E4D510E (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetRotationInternal_Injected_mF07F8EA516605D202212A0EDFF32E4963E4D510E_ftn) (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static TransformSceneHandle_GetRotationInternal_Injected_mF07F8EA516605D202212A0EDFF32E4963E4D510E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetRotationInternal_Injected_mF07F8EA516605D202212A0EDFF32E4963E4D510E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalRotationInternal_Injected_m3D6C0D43C86368749D01295C7A738C9C0F757320 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetLocalRotationInternal_Injected_m3D6C0D43C86368749D01295C7A738C9C0F757320_ftn) (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static TransformSceneHandle_GetLocalRotationInternal_Injected_m3D6C0D43C86368749D01295C7A738C9C0F757320_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalRotationInternal_Injected_m3D6C0D43C86368749D01295C7A738C9C0F757320_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalScaleInternal_Injected_m44C9B340AD37508BF56289F7AB8B754DD7A1E672 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetLocalScaleInternal_Injected_m44C9B340AD37508BF56289F7AB8B754DD7A1E672_ftn) (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformSceneHandle_GetLocalScaleInternal_Injected_m44C9B340AD37508BF56289F7AB8B754DD7A1E672_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalScaleInternal_Injected_m44C9B340AD37508BF56289F7AB8B754DD7A1E672_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_Injected_m45721738580668918936A3707A4F83D2C01F8466 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale4, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetLocalTRSInternal_Injected_m45721738580668918936A3707A4F83D2C01F8466_ftn) (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformSceneHandle_GetLocalTRSInternal_Injected_m45721738580668918936A3707A4F83D2C01F8466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalTRSInternal_Injected_m45721738580668918936A3707A4F83D2C01F8466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3, ___scale4);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_Injected_m1D484BAE0E57D4B9461D50808DA6576B809BD561 (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetGlobalTRInternal_Injected_m1D484BAE0E57D4B9461D50808DA6576B809BD561_ftn) (TransformSceneHandle_t9C0EF6C9070A1CF8060E5D94F90A8DD8CC3967E1 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static TransformSceneHandle_GetGlobalTRInternal_Injected_m1D484BAE0E57D4B9461D50808DA6576B809BD561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetGlobalTRInternal_Injected_m1D484BAE0E57D4B9461D50808DA6576B809BD561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValid_mA3D7F5EF62C4F6839E90EBB3375B0397C16D3C27 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = TransformStreamHandle_IsValidInternal_m106CB2108BE120A417A69BACAD47E0BFEB848A20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsValid_mA3D7F5EF62C4F6839E90EBB3375B0397C16D3C27_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsValid_mA3D7F5EF62C4F6839E90EBB3375B0397C16D3C27(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValidInternal_m106CB2108BE120A417A69BACAD47E0BFEB848A20 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		bool L_1;
		L_1 = AnimationStream_get_isValid_m742CF72BAE92642E826E1B71EBC68F91A382D7B7((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2;
		L_2 = TransformStreamHandle_get_createdByNative_m09E28EE5B85E2D996FC1DE88F3552E0DBC65698C((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		bool L_3;
		L_3 = TransformStreamHandle_get_hasHandleIndex_m858C7A068508E7F148ED70973AEAC7523B32F903((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsValidInternal_m106CB2108BE120A417A69BACAD47E0BFEB848A20_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsValidInternal_m106CB2108BE120A417A69BACAD47E0BFEB848A20(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_createdByNative_m09E28EE5B85E2D996FC1DE88F3552E0DBC65698C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = TransformStreamHandle_get_animatorBindingsVersion_m339F1CE4CFD3C8EDF5ADF40C70CAA33F76D34E08((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_createdByNative_m09E28EE5B85E2D996FC1DE88F3552E0DBC65698C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_get_createdByNative_m09E28EE5B85E2D996FC1DE88F3552E0DBC65698C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsSameVersionAsStream_mA03A754D96E77136FA0BE116411903F26DFDE7FA (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = TransformStreamHandle_get_animatorBindingsVersion_m339F1CE4CFD3C8EDF5ADF40C70CAA33F76D34E08((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_1 = ___stream0;
		uint32_t L_2;
		L_2 = AnimationStream_get_animatorBindingsVersion_m87763AEBD70C534E9316BC16B151D9773DC40A35((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsSameVersionAsStream_mA03A754D96E77136FA0BE116411903F26DFDE7FA_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsSameVersionAsStream_mA03A754D96E77136FA0BE116411903F26DFDE7FA(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasHandleIndex_m858C7A068508E7F148ED70973AEAC7523B32F903 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_handleIndex_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_hasHandleIndex_m858C7A068508E7F148ED70973AEAC7523B32F903_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_get_hasHandleIndex_m858C7A068508E7F148ED70973AEAC7523B32F903(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasSkeletonIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasSkeletonIndex_mD6FE3F9368F3E4DDB979A852920AC435D6E11C45 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_skeletonIndex_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_hasSkeletonIndex_mD6FE3F9368F3E4DDB979A852920AC435D6E11C45_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_get_hasSkeletonIndex_mD6FE3F9368F3E4DDB979A852920AC435D6E11C45(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.Animations.TransformStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransformStreamHandle_get_animatorBindingsVersion_m339F1CE4CFD3C8EDF5ADF40C70CAA33F76D34E08 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AnimatorBindingsVersion_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t TransformStreamHandle_get_animatorBindingsVersion_m339F1CE4CFD3C8EDF5ADF40C70CAA33F76D34E08_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = TransformStreamHandle_get_animatorBindingsVersion_m339F1CE4CFD3C8EDF5ADF40C70CAA33F76D34E08(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::Resolve(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_Resolve_m739EF3293488DDF7E96B9BED61C333A2836F6A94 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_Resolve_m739EF3293488DDF7E96B9BED61C333A2836F6A94_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_Resolve_m739EF3293488DDF7E96B9BED61C333A2836F6A94(_thisAdjusted, ___stream0, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolved(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolved_m516D6DC6755EDBBB0408847DA0AC0E6B816B7C10 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = TransformStreamHandle_IsResolvedInternal_m0D6C61D677D131D02D10FE40BAC28E4AE7EBEB63((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsResolved_m516D6DC6755EDBBB0408847DA0AC0E6B816B7C10_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsResolved_m516D6DC6755EDBBB0408847DA0AC0E6B816B7C10(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolvedInternal_m0D6C61D677D131D02D10FE40BAC28E4AE7EBEB63 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		bool L_1;
		L_1 = TransformStreamHandle_IsValidInternal_m106CB2108BE120A417A69BACAD47E0BFEB848A20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_2 = ___stream0;
		bool L_3;
		L_3 = TransformStreamHandle_IsSameVersionAsStream_mA03A754D96E77136FA0BE116411903F26DFDE7FA((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool L_4;
		L_4 = TransformStreamHandle_get_hasSkeletonIndex_mD6FE3F9368F3E4DDB979A852920AC435D6E11C45((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsResolvedInternal_m0D6C61D677D131D02D10FE40BAC28E4AE7EBEB63_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsResolvedInternal_m0D6C61D677D131D02D10FE40BAC28E4AE7EBEB63(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		AnimationStream_CheckIsValid_mD8A928AD6EA629BFA8CD10949DF612394DC4FFF1((AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_1 = ___stream0;
		bool L_2;
		L_2 = TransformStreamHandle_IsResolvedInternal_m0D6C61D677D131D02D10FE40BAC28E4AE7EBEB63((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0089;
	}

IL_0015:
	{
		bool L_4;
		L_4 = TransformStreamHandle_get_createdByNative_m09E28EE5B85E2D996FC1DE88F3552E0DBC65698C((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		bool L_5;
		L_5 = TransformStreamHandle_get_hasHandleIndex_m858C7A068508E7F148ED70973AEAC7523B32F903((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_7 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00974C5D0A39E4A027B0EB44FE85C731384945B0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20_RuntimeMethod_var)));
	}

IL_0038:
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_8 = ___stream0;
		bool L_9;
		L_9 = TransformStreamHandle_IsSameVersionAsStream_mA03A754D96E77136FA0BE116411903F26DFDE7FA((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		bool L_10;
		L_10 = TransformStreamHandle_get_hasHandleIndex_m858C7A068508E7F148ED70973AEAC7523B32F903((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		bool L_11;
		L_11 = TransformStreamHandle_get_hasSkeletonIndex_mD6FE3F9368F3E4DDB979A852920AC435D6E11C45((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B11_0 = 0;
	}

IL_0055:
	{
		G_B13_0 = G_B11_0;
		goto IL_0058;
	}

IL_0057:
	{
		G_B13_0 = 1;
	}

IL_0058:
	{
		V_2 = (bool)G_B13_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_13 = ___stream0;
		TransformStreamHandle_ResolveInternal_mEFE04845E8E17F574F9F7DCD015358858E257257((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_13, /*hidden argument*/NULL);
	}

IL_0066:
	{
		bool L_14;
		L_14 = TransformStreamHandle_get_hasHandleIndex_m858C7A068508E7F148ED70973AEAC7523B32F903((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		bool L_15;
		L_15 = TransformStreamHandle_get_hasSkeletonIndex_mD6FE3F9368F3E4DDB979A852920AC435D6E11C45((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, /*hidden argument*/NULL);
		G_B18_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B18_0 = 0;
	}

IL_007a:
	{
		V_3 = (bool)G_B18_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_17 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82132A808F0B9E6946BE41B8C7B1FDD0D99D773C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20_RuntimeMethod_var)));
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetPosition_m8EC303B7ACD6473E29E29E2BED8E1CA42BCE7BED (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = TransformStreamHandle_GetPositionInternal_mFD91570C872F07D2FE6CB675A7D6F92D29D7F56C((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetPosition_m8EC303B7ACD6473E29E29E2BED8E1CA42BCE7BED_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformStreamHandle_GetPosition_m8EC303B7ACD6473E29E29E2BED8E1CA42BCE7BED(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPosition_m86039C8E5A26507C6E312B7E217ED277BDB89B4D (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position1;
		TransformStreamHandle_SetPositionInternal_mE3E594E44154B4B86D780ADF22408BE4A698ADBC((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetPosition_m86039C8E5A26507C6E312B7E217ED277BDB89B4D_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetPosition_m86039C8E5A26507C6E312B7E217ED277BDB89B4D(_thisAdjusted, ___stream0, ___position1, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetRotation_m9F31E86C408DFFA5AFB077EC8F2AF55F58DE3485 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = TransformStreamHandle_GetRotationInternal_m41C5AC1219EDBD38C42CFA47A920D09F73D94B72((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetRotation_m9F31E86C408DFFA5AFB077EC8F2AF55F58DE3485_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = TransformStreamHandle_GetRotation_m9F31E86C408DFFA5AFB077EC8F2AF55F58DE3485(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotation_m9FDB3E222F8391541D280E6632FED775F9F7EFD4 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___rotation1;
		TransformStreamHandle_SetRotationInternal_m3AAC34CE56365C556846988751A7B70675B59750((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetRotation_m9FDB3E222F8391541D280E6632FED775F9F7EFD4_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetRotation_m9FDB3E222F8391541D280E6632FED775F9F7EFD4(_thisAdjusted, ___stream0, ___rotation1, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalPosition_m400997447F20360E23F359D72343E1D329800958 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = TransformStreamHandle_GetLocalPositionInternal_m0EE36C1AB9925B45E77332EFBB470EDB5D6AA248((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalPosition_m400997447F20360E23F359D72343E1D329800958_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformStreamHandle_GetLocalPosition_m400997447F20360E23F359D72343E1D329800958(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPosition_mF9FC23A42EE3ADBB6E54756DBC98C892A7965BDD (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position1;
		TransformStreamHandle_SetLocalPositionInternal_mE8D67D1D69ABDF837E6ACA21A0A6630C3838AEDD((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalPosition_mF9FC23A42EE3ADBB6E54756DBC98C892A7965BDD_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetLocalPosition_mF9FC23A42EE3ADBB6E54756DBC98C892A7965BDD(_thisAdjusted, ___stream0, ___position1, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetLocalRotation_m2CB64DFC9B8FB74665DE1B319AC35B3B7AC5E0D0 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = TransformStreamHandle_GetLocalRotationInternal_m6D4268CE002A378BA0E1805D8A8FC4B047ACBFE6((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetLocalRotation_m2CB64DFC9B8FB74665DE1B319AC35B3B7AC5E0D0_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = TransformStreamHandle_GetLocalRotation_m2CB64DFC9B8FB74665DE1B319AC35B3B7AC5E0D0(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotation_mFC1D502FF56782A7FFB99C57CD992B2A1A4E0035 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___rotation1;
		TransformStreamHandle_SetLocalRotationInternal_mC8C89F264C09729B509237194274F62CAC8C693C((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalRotation_mFC1D502FF56782A7FFB99C57CD992B2A1A4E0035_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetLocalRotation_mFC1D502FF56782A7FFB99C57CD992B2A1A4E0035(_thisAdjusted, ___stream0, ___rotation1, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalScale_m870393AC50D14D13941B5161C176AB0EB0669F39 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = TransformStreamHandle_GetLocalScaleInternal_mABD23429609FE786C538335E59F14C63FB582980((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalScale_m870393AC50D14D13941B5161C176AB0EB0669F39_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformStreamHandle_GetLocalScale_m870393AC50D14D13941B5161C176AB0EB0669F39(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScale(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScale_m46B5D32C4954FE2DEDEE2EC264EF220E5222A045 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___scale1;
		TransformStreamHandle_SetLocalScaleInternal_m2317688DE5D6AB63B4EB9384246437BA353D4F06((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalScale_m46B5D32C4954FE2DEDEE2EC264EF220E5222A045_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetLocalScale_m46B5D32C4954FE2DEDEE2EC264EF220E5222A045(_thisAdjusted, ___stream0, ___scale1, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRS_m86FE880A8AE83F11BE0B90CBF15D3AB08DD95DAD (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_1 = ___rotation2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = ___scale3;
		TransformStreamHandle_GetLocalTRSInternal_m0DD8233ABBD91D4613CE9AB7BC3F6B7707A5BE2A((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetLocalTRS_m86FE880A8AE83F11BE0B90CBF15D3AB08DD95DAD_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_GetLocalTRS_m86FE880A8AE83F11BE0B90CBF15D3AB08DD95DAD(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRS_m51550F2C1C71DF59C67D3C3EB2F2E58E1B1D4340 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale3, bool ___useMask4, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___rotation2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___scale3;
		bool L_3 = ___useMask4;
		TransformStreamHandle_SetLocalTRSInternal_m88E8618CD6D5B5401090F2C0B72E2524FF091EA4((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalTRS_m51550F2C1C71DF59C67D3C3EB2F2E58E1B1D4340_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale3, bool ___useMask4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetLocalTRS_m51550F2C1C71DF59C67D3C3EB2F2E58E1B1D4340(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, ___useMask4, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTR_mF212906977EAD98A60A3FC89440AC87633C666F3 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_1 = ___rotation2;
		TransformStreamHandle_GetGlobalTRInternal_m632BBECF1600C921333742EABB88010629D28DCC((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetGlobalTR_mF212906977EAD98A60A3FC89440AC87633C666F3_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_GetGlobalTR_mF212906977EAD98A60A3FC89440AC87633C666F3(_thisAdjusted, ___stream0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTR_m6D734787B88CE99B6B0A4FB0DAEE3320202D918D (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, bool ___useMask3, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_mC5DD860AD0DD797DB94774E899F59F165163AB20((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___rotation2;
		bool L_2 = ___useMask3;
		TransformStreamHandle_SetGlobalTRInternal_mDA25D9FCCCD3F5696CB33B7574798D0FA8B05C8A((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)(&___stream0), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetGlobalTR_m6D734787B88CE99B6B0A4FB0DAEE3320202D918D_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714  ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, bool ___useMask3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetGlobalTR_m6D734787B88CE99B6B0A4FB0DAEE3320202D918D(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___useMask3, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_mEFE04845E8E17F574F9F7DCD015358858E257257 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_ResolveInternal_Injected_mF61DEEE02355F14BE4D472B4EEDA2E2EDB5BC14C((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_ResolveInternal_mEFE04845E8E17F574F9F7DCD015358858E257257_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_ResolveInternal_mEFE04845E8E17F574F9F7DCD015358858E257257(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetPositionInternal_mFD91570C872F07D2FE6CB675A7D6F92D29D7F56C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_GetPositionInternal_Injected_m7762C45B552CC8BF58541CE1F700847B1966C4AB((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetPositionInternal_mFD91570C872F07D2FE6CB675A7D6F92D29D7F56C_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformStreamHandle_GetPositionInternal_mFD91570C872F07D2FE6CB675A7D6F92D29D7F56C(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_mE3E594E44154B4B86D780ADF22408BE4A698ADBC (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_SetPositionInternal_Injected_mCA58B5A4ED384B468AD13F2693AAE45080D28BF9((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___position1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetPositionInternal_mE3E594E44154B4B86D780ADF22408BE4A698ADBC_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetPositionInternal_mE3E594E44154B4B86D780ADF22408BE4A698ADBC(_thisAdjusted, ___stream0, ___position1, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetRotationInternal_m41C5AC1219EDBD38C42CFA47A920D09F73D94B72 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_GetRotationInternal_Injected_m6F615378626189657AAF2F903F9A2F1BA1274253((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetRotationInternal_m41C5AC1219EDBD38C42CFA47A920D09F73D94B72_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = TransformStreamHandle_GetRotationInternal_m41C5AC1219EDBD38C42CFA47A920D09F73D94B72(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_m3AAC34CE56365C556846988751A7B70675B59750 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_SetRotationInternal_Injected_m42988B3643A819A4DB0C2F2C1C39538EE63A3128((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___rotation1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetRotationInternal_m3AAC34CE56365C556846988751A7B70675B59750_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetRotationInternal_m3AAC34CE56365C556846988751A7B70675B59750(_thisAdjusted, ___stream0, ___rotation1, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalPositionInternal_m0EE36C1AB9925B45E77332EFBB470EDB5D6AA248 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_GetLocalPositionInternal_Injected_m4E56F0326D66859CBA624ED810DEABE5AD6F76E4((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalPositionInternal_m0EE36C1AB9925B45E77332EFBB470EDB5D6AA248_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformStreamHandle_GetLocalPositionInternal_m0EE36C1AB9925B45E77332EFBB470EDB5D6AA248(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_mE8D67D1D69ABDF837E6ACA21A0A6630C3838AEDD (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_SetLocalPositionInternal_Injected_m9D33FFB148C888364A134B07B4F6FA2BC2AA8043((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___position1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalPositionInternal_mE8D67D1D69ABDF837E6ACA21A0A6630C3838AEDD_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetLocalPositionInternal_mE8D67D1D69ABDF837E6ACA21A0A6630C3838AEDD(_thisAdjusted, ___stream0, ___position1, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetLocalRotationInternal_m6D4268CE002A378BA0E1805D8A8FC4B047ACBFE6 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_GetLocalRotationInternal_Injected_m9134013FD7860E63D7E6C3B724F314F5C64D326A((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformStreamHandle_GetLocalRotationInternal_m6D4268CE002A378BA0E1805D8A8FC4B047ACBFE6_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = TransformStreamHandle_GetLocalRotationInternal_m6D4268CE002A378BA0E1805D8A8FC4B047ACBFE6(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_mC8C89F264C09729B509237194274F62CAC8C693C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_SetLocalRotationInternal_Injected_m5A53FBC2F84E09B5D9A3DE234942495EC839BB74((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___rotation1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalRotationInternal_mC8C89F264C09729B509237194274F62CAC8C693C_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetLocalRotationInternal_mC8C89F264C09729B509237194274F62CAC8C693C(_thisAdjusted, ___stream0, ___rotation1, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalScaleInternal_mABD23429609FE786C538335E59F14C63FB582980 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_GetLocalScaleInternal_Injected_mCF2518AEB79AC2E52B8E36B4ADD0AEBEF151B4DB((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformStreamHandle_GetLocalScaleInternal_mABD23429609FE786C538335E59F14C63FB582980_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformStreamHandle_GetLocalScaleInternal_mABD23429609FE786C538335E59F14C63FB582980(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_m2317688DE5D6AB63B4EB9384246437BA353D4F06 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		TransformStreamHandle_SetLocalScaleInternal_Injected_mAB4EDF4E790D9731DD1FE1358B6DC2D3CE34920C((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___scale1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalScaleInternal_m2317688DE5D6AB63B4EB9384246437BA353D4F06_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetLocalScaleInternal_m2317688DE5D6AB63B4EB9384246437BA353D4F06(_thisAdjusted, ___stream0, ___scale1, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_m0DD8233ABBD91D4613CE9AB7BC3F6B7707A5BE2A (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = ___rotation2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = ___scale3;
		TransformStreamHandle_GetLocalTRSInternal_Injected_m765E1439F1F0CF0A46215FA889CE04CE35835781((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_2, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetLocalTRSInternal_m0DD8233ABBD91D4613CE9AB7BC3F6B7707A5BE2A_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_GetLocalTRSInternal_m0DD8233ABBD91D4613CE9AB7BC3F6B7707A5BE2A(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_m88E8618CD6D5B5401090F2C0B72E2524FF091EA4 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale3, bool ___useMask4, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		bool L_1 = ___useMask4;
		TransformStreamHandle_SetLocalTRSInternal_Injected_m2AE1BA68A093EA149F1487A8C80DEA6DAF242E86((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___position1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___rotation2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___scale3), L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalTRSInternal_m88E8618CD6D5B5401090F2C0B72E2524FF091EA4_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale3, bool ___useMask4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetLocalTRSInternal_m88E8618CD6D5B5401090F2C0B72E2524FF091EA4(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, ___useMask4, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_m632BBECF1600C921333742EABB88010629D28DCC (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = ___rotation2;
		TransformStreamHandle_GetGlobalTRInternal_Injected_m9B815411B23930BA8CBD1F7A8B8545116FEFBE1C((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetGlobalTRInternal_m632BBECF1600C921333742EABB88010629D28DCC_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_GetGlobalTRInternal_m632BBECF1600C921333742EABB88010629D28DCC(_thisAdjusted, ___stream0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_mDA25D9FCCCD3F5696CB33B7574798D0FA8B05C8A (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, bool ___useMask3, const RuntimeMethod* method)
{
	{
		AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * L_0 = ___stream0;
		bool L_1 = ___useMask3;
		TransformStreamHandle_SetGlobalTRInternal_Injected_m133C1B4E6E3D1F5A0B17E21D5B0E0710FD901AC5((TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *)__this, (AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___position1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___rotation2), L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetGlobalTRInternal_mDA25D9FCCCD3F5696CB33B7574798D0FA8B05C8A_AdjustorThunk (RuntimeObject * __this, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, bool ___useMask3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * _thisAdjusted = reinterpret_cast<TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *>(__this + _offset);
	TransformStreamHandle_SetGlobalTRInternal_mDA25D9FCCCD3F5696CB33B7574798D0FA8B05C8A(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___useMask3, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_Injected_mF61DEEE02355F14BE4D472B4EEDA2E2EDB5BC14C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_ResolveInternal_Injected_mF61DEEE02355F14BE4D472B4EEDA2E2EDB5BC14C_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *);
	static TransformStreamHandle_ResolveInternal_Injected_mF61DEEE02355F14BE4D472B4EEDA2E2EDB5BC14C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_ResolveInternal_Injected_mF61DEEE02355F14BE4D472B4EEDA2E2EDB5BC14C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	_il2cpp_icall_func(____unity_self0, ___stream1);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetPositionInternal_Injected_m7762C45B552CC8BF58541CE1F700847B1966C4AB (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetPositionInternal_Injected_m7762C45B552CC8BF58541CE1F700847B1966C4AB_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformStreamHandle_GetPositionInternal_Injected_m7762C45B552CC8BF58541CE1F700847B1966C4AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetPositionInternal_Injected_m7762C45B552CC8BF58541CE1F700847B1966C4AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_Injected_mCA58B5A4ED384B468AD13F2693AAE45080D28BF9 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetPositionInternal_Injected_mCA58B5A4ED384B468AD13F2693AAE45080D28BF9_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformStreamHandle_SetPositionInternal_Injected_mCA58B5A4ED384B468AD13F2693AAE45080D28BF9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetPositionInternal_Injected_mCA58B5A4ED384B468AD13F2693AAE45080D28BF9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetRotationInternal_Injected_m6F615378626189657AAF2F903F9A2F1BA1274253 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetRotationInternal_Injected_m6F615378626189657AAF2F903F9A2F1BA1274253_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static TransformStreamHandle_GetRotationInternal_Injected_m6F615378626189657AAF2F903F9A2F1BA1274253_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetRotationInternal_Injected_m6F615378626189657AAF2F903F9A2F1BA1274253_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_Injected_m42988B3643A819A4DB0C2F2C1C39538EE63A3128 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetRotationInternal_Injected_m42988B3643A819A4DB0C2F2C1C39538EE63A3128_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static TransformStreamHandle_SetRotationInternal_Injected_m42988B3643A819A4DB0C2F2C1C39538EE63A3128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetRotationInternal_Injected_m42988B3643A819A4DB0C2F2C1C39538EE63A3128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___rotation2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalPositionInternal_Injected_m4E56F0326D66859CBA624ED810DEABE5AD6F76E4 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetLocalPositionInternal_Injected_m4E56F0326D66859CBA624ED810DEABE5AD6F76E4_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformStreamHandle_GetLocalPositionInternal_Injected_m4E56F0326D66859CBA624ED810DEABE5AD6F76E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalPositionInternal_Injected_m4E56F0326D66859CBA624ED810DEABE5AD6F76E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_Injected_m9D33FFB148C888364A134B07B4F6FA2BC2AA8043 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetLocalPositionInternal_Injected_m9D33FFB148C888364A134B07B4F6FA2BC2AA8043_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformStreamHandle_SetLocalPositionInternal_Injected_m9D33FFB148C888364A134B07B4F6FA2BC2AA8043_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalPositionInternal_Injected_m9D33FFB148C888364A134B07B4F6FA2BC2AA8043_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalRotationInternal_Injected_m9134013FD7860E63D7E6C3B724F314F5C64D326A (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetLocalRotationInternal_Injected_m9134013FD7860E63D7E6C3B724F314F5C64D326A_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static TransformStreamHandle_GetLocalRotationInternal_Injected_m9134013FD7860E63D7E6C3B724F314F5C64D326A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalRotationInternal_Injected_m9134013FD7860E63D7E6C3B724F314F5C64D326A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_Injected_m5A53FBC2F84E09B5D9A3DE234942495EC839BB74 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetLocalRotationInternal_Injected_m5A53FBC2F84E09B5D9A3DE234942495EC839BB74_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static TransformStreamHandle_SetLocalRotationInternal_Injected_m5A53FBC2F84E09B5D9A3DE234942495EC839BB74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalRotationInternal_Injected_m5A53FBC2F84E09B5D9A3DE234942495EC839BB74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___rotation2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalScaleInternal_Injected_mCF2518AEB79AC2E52B8E36B4ADD0AEBEF151B4DB (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetLocalScaleInternal_Injected_mCF2518AEB79AC2E52B8E36B4ADD0AEBEF151B4DB_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformStreamHandle_GetLocalScaleInternal_Injected_mCF2518AEB79AC2E52B8E36B4ADD0AEBEF151B4DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalScaleInternal_Injected_mCF2518AEB79AC2E52B8E36B4ADD0AEBEF151B4DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_Injected_mAB4EDF4E790D9731DD1FE1358B6DC2D3CE34920C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetLocalScaleInternal_Injected_mAB4EDF4E790D9731DD1FE1358B6DC2D3CE34920C_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformStreamHandle_SetLocalScaleInternal_Injected_mAB4EDF4E790D9731DD1FE1358B6DC2D3CE34920C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalScaleInternal_Injected_mAB4EDF4E790D9731DD1FE1358B6DC2D3CE34920C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___scale2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_Injected_m765E1439F1F0CF0A46215FA889CE04CE35835781 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale4, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetLocalTRSInternal_Injected_m765E1439F1F0CF0A46215FA889CE04CE35835781_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static TransformStreamHandle_GetLocalTRSInternal_Injected_m765E1439F1F0CF0A46215FA889CE04CE35835781_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalTRSInternal_Injected_m765E1439F1F0CF0A46215FA889CE04CE35835781_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3, ___scale4);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_Injected_m2AE1BA68A093EA149F1487A8C80DEA6DAF242E86 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___scale4, bool ___useMask5, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetLocalTRSInternal_Injected_m2AE1BA68A093EA149F1487A8C80DEA6DAF242E86_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, bool);
	static TransformStreamHandle_SetLocalTRSInternal_Injected_m2AE1BA68A093EA149F1487A8C80DEA6DAF242E86_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalTRSInternal_Injected_m2AE1BA68A093EA149F1487A8C80DEA6DAF242E86_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3, ___scale4, ___useMask5);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_Injected_m9B815411B23930BA8CBD1F7A8B8545116FEFBE1C (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetGlobalTRInternal_Injected_m9B815411B23930BA8CBD1F7A8B8545116FEFBE1C_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static TransformStreamHandle_GetGlobalTRInternal_Injected_m9B815411B23930BA8CBD1F7A8B8545116FEFBE1C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetGlobalTRInternal_Injected_m9B815411B23930BA8CBD1F7A8B8545116FEFBE1C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_Injected_m133C1B4E6E3D1F5A0B17E21D5B0E0710FD901AC5 (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 * ____unity_self0, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 * ___stream1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation3, bool ___useMask4, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetGlobalTRInternal_Injected_m133C1B4E6E3D1F5A0B17E21D5B0E0710FD901AC5_ftn) (TransformStreamHandle_tC5F812B029957D5CEAAA84349BF4617F831D8525 *, AnimationStream_t32D9239CBAA66CE867094B820035B2121D7E2714 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, bool);
	static TransformStreamHandle_SetGlobalTRInternal_Injected_m133C1B4E6E3D1F5A0B17E21D5B0E0710FD901AC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetGlobalTRInternal_Injected_m133C1B4E6E3D1F5A0B17E21D5B0E0710FD901AC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3, ___useMask4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_mA35F55BEB8A4BD57D109684E857F85C1F0A6C1B5 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m21DB79300E852ED93F2521FFC03EC4D858F6B330 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOverrideControllerDirtyCallback_BeginInvoke_m40D5810BF8C5066DB2C7987E7C76FD23D2AC47E3 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_EndInvoke_mAF3C7805FADE63999DC2121032B11DF86668E9F4 (OnOverrideControllerDirtyCallback_t9E38572D7CF06EEFF943EA68082DAC68AB40476C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
