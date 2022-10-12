﻿#include "pch-cpp.hpp"

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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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

// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus>
struct Dictionary_2_tDFF23279733A30AC1A45EA9FEB8105F663D96705;
// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object>
struct Dictionary_2_t4FF21A84FE740BDEF33FFAA0162AAAADBA3DEB56;
// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>
struct GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D;
// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>
struct GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90;
// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>
struct GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<UnityEngine.Object>
struct HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614;
// System.Collections.Generic.IComparer`1<Cinemachine.ClipperLib/IntersectNode>
struct IComparer_1_t43E5048FA5A8274BEEB0DBB952999FA8436FBF55;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Object>
struct IEqualityComparer_1_tE1B452183381DE5C65F7FA196512AA93494E8076;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>>
struct List_1_t899A658EFE11E82F22DA15F96306DABE3AFF7655;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>
struct List_1_tD3D80A48908E0B8646110C913780E72E2157A541;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/TEdge>>
struct List_1_t79AD4ED63DA2970BB638F8061040C4C26CDE9C8E;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain>
struct List_1_t3895718121BD33A45F11A972C6A17E372C5FA43D;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>
struct List_1_t2C9A586FD2E1B8C67E6407386FCA1C121EC125B6;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Text.StringBuilder>
struct List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897;
// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame>
struct List_1_tC7A631B4A35E461A5E78F0D0C4D482812E731DEB;
// System.Collections.Generic.List`1<Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState>
struct List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3;
// System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>
struct List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18;
// System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>
struct List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C;
// System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntersectNode>
struct List_1_t762FB7D85EDD20C0C53C1361807B0DE03606E1E9;
// System.Collections.Generic.List`1<Cinemachine.ClipperLib/Join>
struct List_1_t1FD0176A6AE3A0879983080D9977949695807419;
// System.Collections.Generic.List`1<Cinemachine.ClipperLib/OutRec>
struct List_1_t228D82D8E5C6A21F8A1BD91379B7784A558E2F89;
// System.Collections.Generic.List`1<Cinemachine.ClipperLib/PolyNode>
struct List_1_t6B363664E747D5A84578F8282376CB04CDF801F4;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter>
struct ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76;
// UnityEngine.Events.UnityAction`1<Cinemachine.CinemachineBrain>
struct UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityEvent`1<Cinemachine.CinemachineBrain>
struct UnityEvent_1_tA9D67747BC8C9E0D4541EE0B100AA53EF640F411;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>[]
struct List_1U5BU5D_tA9C9F576B05E4960A32E11AC0E0CB97BE5D0BEEE;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Object>[]
struct SlotU5BU5D_tB954CFB6304E7898C4816F5DC15DD8F413A31531;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Text.StringBuilder[]
struct StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.Rendering.Volume[]
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959;
// UnityEngine.Rendering.VolumeComponent[]
struct VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
// Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState[]
struct VcamExtraStateU5BU5D_t24FD5CAABE7F800EA1DA3DF342555AE9166433FF;
// Cinemachine.ClipperLib/DoublePoint[]
struct DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726;
// Cinemachine.ClipperLib/IntPoint[]
struct IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13;
// Cinemachine.ClipperLib/PolyNode[]
struct PolyNodeU5BU5D_tB4D6AD2B8F6A4C22972BB1F21A95E906E9BE0E2D;
// Cinemachine.Utility.HeadingTracker/Item[]
struct ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Rendering.BoolParameter
struct BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Cinemachine.CinemachineBlend
struct CinemachineBlend_t727AC6579F9C674EB8E01FC3ACB846B20786FF5E;
// Cinemachine.CinemachineBlenderSettings
struct CinemachineBlenderSettings_t55EA371578F7C0ADACF81ACF631C0838A459ED18;
// Cinemachine.CinemachineBrain
struct CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9;
// Cinemachine.Utility.CinemachineDebug
struct CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390;
// Cinemachine.CinemachineExtension
struct CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73;
// Cinemachine.PostFX.CinemachinePostProcessing
struct CinemachinePostProcessing_t1D2E39360B2745E47A9DDFE4CF9090999D7D85E5;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
// Cinemachine.PostFX.CinemachineVolumeSettings
struct CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6;
// UnityEngine.Rendering.ClampedFloatParameter
struct ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8;
// UnityEngine.Rendering.ClampedIntParameter
struct ClampedIntParameter_tAF77FC44E522B137734644AE2E3F702580033B8E;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Rendering.Universal.DepthOfField
struct DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF;
// UnityEngine.Rendering.Universal.DepthOfFieldModeParameter
struct DepthOfFieldModeParameter_t2AC87B0A41A5C9BB872A9E9D7913C262F9DA4E26;
// System.Exception
struct Exception_t;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Cinemachine.Utility.GaussianWindow1D_CameraRotation
struct GaussianWindow1D_CameraRotation_t038ADB42DAC4B627909A377F105CBD40260BBC98;
// Cinemachine.Utility.GaussianWindow1D_Quaternion
struct GaussianWindow1D_Quaternion_t81313B62477A5C087C4DD0D5A4CAC929C2F7938B;
// Cinemachine.Utility.GaussianWindow1D_Vector3
struct GaussianWindow1D_Vector3_t2392E8CA14D412847A8C8FFC9E548D1AF61A4D86;
// Cinemachine.Utility.HeadingTracker
struct HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Cinemachine.ICinemachineCamera
struct ICinemachineCamera_tE6F5FB0E83AB8D13CB7B8B47B2AE09A161C513F5;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Rendering.MinFloatParameter
struct MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Cinemachine.Utility.PositionPredictor
struct PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Rendering.Volume
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154;
// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452;
// Cinemachine.CinemachineCore/GetBlendOverrideDelegate
struct GetBlendOverrideDelegate_t36EFDCBF8770712A9E7B06F300B0C62C0C42B14A;
// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate
struct OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708;
// Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState
struct VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C;
// Cinemachine.ClipperLib/Clipper
struct Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A;
// Cinemachine.ClipperLib/ClipperBase
struct ClipperBase_tF5E5EE071153091C61DE73A7046E19212CA00B91;
// Cinemachine.ClipperLib/ClipperException
struct ClipperException_t88B1DB246A93C0860AFD818A9BE49B74D84C28D5;
// Cinemachine.ClipperLib/ClipperOffset
struct ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725;
// Cinemachine.ClipperLib/LocalMinima
struct LocalMinima_t17EDBFA2B30A20A338E70D1ED97F069F46FC2918;
// Cinemachine.ClipperLib/Maxima
struct Maxima_tD785E87BCD1D6AE0BFD3A193A48D622098DC2182;
// Cinemachine.ClipperLib/PolyNode
struct PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27;
// Cinemachine.ClipperLib/PolyTree
struct PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD;
// Cinemachine.ClipperLib/Scanbeam
struct Scanbeam_t889C0F322D9DC0483684E230880893A65C4AF35F;
// Cinemachine.ClipperLib/TEdge
struct TEdge_tD50F9A4EA68576966D4B0E2E64DF310C2A1F307C;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD3D80A48908E0B8646110C913780E72E2157A541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeUtility_t29BFA2198191EF8D4466FBAC7EAB84A1F9702965_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214;
IL2CPP_EXTERN_C String_t* _stringLiteralB7B09D50F531ADBBABA83C24F6AD26DFA31CB3EC;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineExtension_GetAllExtraStates_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_m033F186F18F171F683031A18E87603857F3A4BF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineExtension_GetExtraState_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_mCB7C0F584EAAC5BB590A7BC3290E17398741FF76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineVolumeSettings_ApplyPostFX_mD30F83FB961A57C8D91F99DA356A404F54E4BC7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineVolumeSettings_OnCameraCut_m29CDE599E30BF2A3E9A8C33251FA27AE36D84AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m677FC8F8D71757745C78555FC7FDEB9B90F18E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m85FDC916AFDB03C731C1DE85A1AD64070EC621D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m89DC75068BCAAAA94D88C74FBD233EE5F3E96644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mEBB3584E3F5C9390346BF4EE9FD8E5D2ABADE5C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mCF16C5DA588B7468D6B2219D2519B7814709347C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAE021A0360032927647546267D4A69BC7C15C9B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE785BB140AACEA37285183D122AB76C64D1776B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE06E257FFA840B6A76C943FCC4F70FF8FC78C222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m06668C0A3C120FA25245D89C14B0787E790F8D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m39BEA6B481C5F43AADAA90DD7277AFDA096BF0E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m73287C547CBAFA373521EC072BF640074D60D417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mCEFDEE1CDCD179EC42CACBA45A68043B2F6EF9B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9865D2A6023BF15CE2F05EC3A2BD0A1ED1F72D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m7747D3473584FC32EC00DAFA15732DD41926AF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_mF0F13BCF460823FB136A0964BA8A8E3B30CAB5C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m32AB5B53E1EAEF533CB62F1909BECF6C01854CB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m85A1A83D119CC5BFE0C4A6352E38591B5C6D5F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBE415A6F2F48CA40D24EF2ECB6001A80D683AE64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDF34972E1038C2983D5086C38D56E62FCFDA5FBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3EA042A7A6709E4B248A6AEF39800F2BCB5D418B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m67F93C76C9F469705D5CE2E159C52B380E47340F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m752E3D908DAB46834D43C51F1F2EB5A515D10928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21A5A68B5CC40355C926A2D7DF3CDC70DDB2076F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m4B1A8AFCE2BEE0C3570F54204394D25D1235F9CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m4C766CDFB68990BFC38564E2D5546DB93A740C74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m8AF0D30918276002D4457FFD304E0280AA6E984D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mBB81853DDC94D55D5D7B50D95C949BADB3C79538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m71F5F51057EA215E366D07697A324759482B9112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_mACF428D34ACD47070A01E3FC433D7AAD4E672081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisVolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1_mFF81C5BA0BE60CA936B0A49798FFAD1A414321A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB3E814B430D892264646F8671CC6AFF035ECB0AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m9C18146FC609E4712D1E32D9E7FC19913AAAA2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeProfile_TryGet_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m97F7A492589285276A340E3E20321C5879DB47BC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726;
struct IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13;
struct ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>
struct GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D  : public RuntimeObject
{
	// T[] Cinemachine.Utility.GaussianWindow1d`1::mData
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___mData_0;
	// System.Single[] Cinemachine.Utility.GaussianWindow1d`1::mKernel
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___mKernel_1;
	// System.Int32 Cinemachine.Utility.GaussianWindow1d`1::mCurrentPos
	int32_t ___mCurrentPos_2;
	// System.Single Cinemachine.Utility.GaussianWindow1d`1::<Sigma>k__BackingField
	float ___U3CSigmaU3Ek__BackingField_3;
};

// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>
struct GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90  : public RuntimeObject
{
	// T[] Cinemachine.Utility.GaussianWindow1d`1::mData
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___mData_0;
	// System.Single[] Cinemachine.Utility.GaussianWindow1d`1::mKernel
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___mKernel_1;
	// System.Int32 Cinemachine.Utility.GaussianWindow1d`1::mCurrentPos
	int32_t ___mCurrentPos_2;
	// System.Single Cinemachine.Utility.GaussianWindow1d`1::<Sigma>k__BackingField
	float ___U3CSigmaU3Ek__BackingField_3;
};

// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>
struct GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C  : public RuntimeObject
{
	// T[] Cinemachine.Utility.GaussianWindow1d`1::mData
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___mData_0;
	// System.Single[] Cinemachine.Utility.GaussianWindow1d`1::mKernel
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___mKernel_1;
	// System.Int32 Cinemachine.Utility.GaussianWindow1d`1::mCurrentPos
	int32_t ___mCurrentPos_2;
	// System.Single Cinemachine.Utility.GaussianWindow1d`1::<Sigma>k__BackingField
	float ___U3CSigmaU3Ek__BackingField_3;
};

// System.Collections.Generic.HashSet`1<UnityEngine.Object>
struct HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB954CFB6304E7898C4816F5DC15DD8F413A31531* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>
struct List_1_tD3D80A48908E0B8646110C913780E72E2157A541  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tA9C9F576B05E4960A32E11AC0E0CB97BE5D0BEEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD3D80A48908E0B8646110C913780E72E2157A541_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_tA9C9F576B05E4960A32E11AC0E0CB97BE5D0BEEE* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<System.Text.StringBuilder>
struct List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState>
struct List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VcamExtraStateU5BU5D_t24FD5CAABE7F800EA1DA3DF342555AE9166433FF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VcamExtraStateU5BU5D_t24FD5CAABE7F800EA1DA3DF342555AE9166433FF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>
struct List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>
struct List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Cinemachine.ClipperLib/PolyNode>
struct List_1_t6B363664E747D5A84578F8282376CB04CDF801F4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PolyNodeU5BU5D_tB4D6AD2B8F6A4C22972BB1F21A95E906E9BE0E2D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6B363664E747D5A84578F8282376CB04CDF801F4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PolyNodeU5BU5D_tB4D6AD2B8F6A4C22972BB1F21A95E906E9BE0E2D* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Cinemachine.CinemachineCore
struct CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain> Cinemachine.CinemachineCore::mActiveBrains
	List_1_t3895718121BD33A45F11A972C6A17E372C5FA43D* ___mActiveBrains_10;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase> Cinemachine.CinemachineCore::mActiveCameras
	List_1_t2C9A586FD2E1B8C67E6407386FCA1C121EC125B6* ___mActiveCameras_11;
	// System.Boolean Cinemachine.CinemachineCore::m_ActiveCamerasAreSorted
	bool ___m_ActiveCamerasAreSorted_12;
	// System.Int32 Cinemachine.CinemachineCore::m_ActivationSequence
	int32_t ___m_ActivationSequence_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>> Cinemachine.CinemachineCore::mAllCameras
	List_1_t899A658EFE11E82F22DA15F96306DABE3AFF7655* ___mAllCameras_14;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineCore::mRoundRobinVcamLastFrame
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mRoundRobinVcamLastFrame_15;
	// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus> Cinemachine.CinemachineCore::mUpdateStatus
	Dictionary_2_tDFF23279733A30AC1A45EA9FEB8105F663D96705* ___mUpdateStatus_18;
	// Cinemachine.CinemachineCore/UpdateFilter Cinemachine.CinemachineCore::m_CurrentUpdateFilter
	int32_t ___m_CurrentUpdateFilter_19;
};

struct CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields
{
	// System.Int32 Cinemachine.CinemachineCore::kStreamingVersion
	int32_t ___kStreamingVersion_0;
	// System.String Cinemachine.CinemachineCore::kVersionString
	String_t* ___kVersionString_1;
	// Cinemachine.CinemachineCore Cinemachine.CinemachineCore::sInstance
	CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD* ___sInstance_2;
	// System.Boolean Cinemachine.CinemachineCore::sShowHiddenObjects
	bool ___sShowHiddenObjects_3;
	// Cinemachine.CinemachineCore/AxisInputDelegate Cinemachine.CinemachineCore::GetInputAxis
	AxisInputDelegate_tE27958ACEDD7816DB591B6F485ACD7083541C452* ___GetInputAxis_4;
	// System.Single Cinemachine.CinemachineCore::UniformDeltaTimeOverride
	float ___UniformDeltaTimeOverride_5;
	// System.Single Cinemachine.CinemachineCore::CurrentTimeOverride
	float ___CurrentTimeOverride_6;
	// Cinemachine.CinemachineCore/GetBlendOverrideDelegate Cinemachine.CinemachineCore::GetBlendOverride
	GetBlendOverrideDelegate_t36EFDCBF8770712A9E7B06F300B0C62C0C42B14A* ___GetBlendOverride_7;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraUpdatedEvent
	BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* ___CameraUpdatedEvent_8;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraCutEvent
	BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* ___CameraCutEvent_9;
	// System.Single Cinemachine.CinemachineCore::s_LastUpdateTime
	float ___s_LastUpdateTime_16;
	// System.Int32 Cinemachine.CinemachineCore::s_FixedFrameCount
	int32_t ___s_FixedFrameCount_17;
};

// Cinemachine.Utility.CinemachineDebug
struct CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390  : public RuntimeObject
{
};

struct CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields
{
	// System.Collections.Generic.HashSet`1<UnityEngine.Object> Cinemachine.Utility.CinemachineDebug::mClients
	HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* ___mClients_0;
	// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate Cinemachine.Utility.CinemachineDebug::OnGUIHandlers
	OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* ___OnGUIHandlers_1;
	// System.Collections.Generic.List`1<System.Text.StringBuilder> Cinemachine.Utility.CinemachineDebug::mAvailableStringBuilders
	List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* ___mAvailableStringBuilders_2;
};

// Cinemachine.Utility.Damper
struct Damper_tA61B33592F02578A5F6A3B037AF23B912F384CC1  : public RuntimeObject
{
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};

struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// Cinemachine.Utility.SplineHelpers
struct SplineHelpers_t7682CC3DACAE1C386D3E10C698158BB01029CAB1  : public RuntimeObject
{
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// Cinemachine.Utility.UnityQuaternionExtensions
struct UnityQuaternionExtensions_tDAD9DA965B9CB6C259F30527DF4869A7416AAC6B  : public RuntimeObject
{
};

// Cinemachine.Utility.UnityRectExtensions
struct UnityRectExtensions_tC7FB52D9541E42CB39B1C1ACCE9552A38477A837  : public RuntimeObject
{
};

// Cinemachine.Utility.UnityVectorExtensions
struct UnityVectorExtensions_t972032C1EC4BF2068F7C9EA58E25CB9A1513ED09  : public RuntimeObject
{
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

// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72  : public RuntimeObject
{
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;
};

// Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState
struct VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C  : public RuntimeObject
{
	// UnityEngine.Rendering.VolumeProfile Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState::mProfileCopy
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___mProfileCopy_0;
};

// Cinemachine.ClipperLib/ClipperBase
struct ClipperBase_tF5E5EE071153091C61DE73A7046E19212CA00B91  : public RuntimeObject
{
	// Cinemachine.ClipperLib/LocalMinima Cinemachine.ClipperLib/ClipperBase::m_MinimaList
	LocalMinima_t17EDBFA2B30A20A338E70D1ED97F069F46FC2918* ___m_MinimaList_6;
	// Cinemachine.ClipperLib/LocalMinima Cinemachine.ClipperLib/ClipperBase::m_CurrentLM
	LocalMinima_t17EDBFA2B30A20A338E70D1ED97F069F46FC2918* ___m_CurrentLM_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/TEdge>> Cinemachine.ClipperLib/ClipperBase::m_edges
	List_1_t79AD4ED63DA2970BB638F8061040C4C26CDE9C8E* ___m_edges_8;
	// Cinemachine.ClipperLib/Scanbeam Cinemachine.ClipperLib/ClipperBase::m_Scanbeam
	Scanbeam_t889C0F322D9DC0483684E230880893A65C4AF35F* ___m_Scanbeam_9;
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/OutRec> Cinemachine.ClipperLib/ClipperBase::m_PolyOuts
	List_1_t228D82D8E5C6A21F8A1BD91379B7784A558E2F89* ___m_PolyOuts_10;
	// Cinemachine.ClipperLib/TEdge Cinemachine.ClipperLib/ClipperBase::m_ActiveEdges
	TEdge_tD50F9A4EA68576966D4B0E2E64DF310C2A1F307C* ___m_ActiveEdges_11;
	// System.Boolean Cinemachine.ClipperLib/ClipperBase::m_UseFullRange
	bool ___m_UseFullRange_12;
	// System.Boolean Cinemachine.ClipperLib/ClipperBase::m_HasOpenPaths
	bool ___m_HasOpenPaths_13;
	// System.Boolean Cinemachine.ClipperLib/ClipperBase::<PreserveCollinear>k__BackingField
	bool ___U3CPreserveCollinearU3Ek__BackingField_14;
};

// Cinemachine.ClipperLib/PolyNode
struct PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27  : public RuntimeObject
{
	// Cinemachine.ClipperLib/PolyNode Cinemachine.ClipperLib/PolyNode::m_Parent
	PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* ___m_Parent_0;
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint> Cinemachine.ClipperLib/PolyNode::m_polygon
	List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* ___m_polygon_1;
	// System.Int32 Cinemachine.ClipperLib/PolyNode::m_Index
	int32_t ___m_Index_2;
	// Cinemachine.ClipperLib/JoinType Cinemachine.ClipperLib/PolyNode::m_jointype
	int32_t ___m_jointype_3;
	// Cinemachine.ClipperLib/EndType Cinemachine.ClipperLib/PolyNode::m_endtype
	int32_t ___m_endtype_4;
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/PolyNode> Cinemachine.ClipperLib/PolyNode::m_Childs
	List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* ___m_Childs_5;
	// System.Boolean Cinemachine.ClipperLib/PolyNode::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_6;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>
struct Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD3D80A48908E0B8646110C913780E72E2157A541* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Object>
struct Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>
struct Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<Cinemachine.CinemachineBrain>
struct UnityEvent_1_tA9D67747BC8C9E0D4541EE0B100AA53EF640F411  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	float ___m_Value_2;
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

// Cinemachine.CinemachineBlendDefinition
struct CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B 
{
	// Cinemachine.CinemachineBlendDefinition/Style Cinemachine.CinemachineBlendDefinition::m_Style
	int32_t ___m_Style_0;
	// System.Single Cinemachine.CinemachineBlendDefinition::m_Time
	float ___m_Time_1;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBlendDefinition::m_CustomCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CustomCurve_2;
};

struct CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B_StaticFields
{
	// UnityEngine.AnimationCurve[] Cinemachine.CinemachineBlendDefinition::sStandardCurves
	AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC* ___sStandardCurves_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Cinemachine.Utility.GaussianWindow1D_CameraRotation
struct GaussianWindow1D_CameraRotation_t038ADB42DAC4B627909A377F105CBD40260BBC98  : public GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90
{
};

// Cinemachine.Utility.GaussianWindow1D_Quaternion
struct GaussianWindow1D_Quaternion_t81313B62477A5C087C4DD0D5A4CAC929C2F7938B  : public GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D
{
};

// Cinemachine.Utility.GaussianWindow1D_Vector3
struct GaussianWindow1D_Vector3_t2392E8CA14D412847A8C8FFC9E548D1AF61A4D86  : public GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_tA818451ADD7D8E0EEB94ABC9AEB57CA1C7C18CF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tA818451ADD7D8E0EEB94ABC9AEB57CA1C7C18CF0__padding[12];
	};
};
#pragma pack(pop, tp)

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;
};

// Cinemachine.ClipperLib/Clipper
struct Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A  : public ClipperBase_tF5E5EE071153091C61DE73A7046E19212CA00B91
{
	// Cinemachine.ClipperLib/ClipType Cinemachine.ClipperLib/Clipper::m_ClipType
	int32_t ___m_ClipType_18;
	// Cinemachine.ClipperLib/Maxima Cinemachine.ClipperLib/Clipper::m_Maxima
	Maxima_tD785E87BCD1D6AE0BFD3A193A48D622098DC2182* ___m_Maxima_19;
	// Cinemachine.ClipperLib/TEdge Cinemachine.ClipperLib/Clipper::m_SortedEdges
	TEdge_tD50F9A4EA68576966D4B0E2E64DF310C2A1F307C* ___m_SortedEdges_20;
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntersectNode> Cinemachine.ClipperLib/Clipper::m_IntersectList
	List_1_t762FB7D85EDD20C0C53C1361807B0DE03606E1E9* ___m_IntersectList_21;
	// System.Collections.Generic.IComparer`1<Cinemachine.ClipperLib/IntersectNode> Cinemachine.ClipperLib/Clipper::m_IntersectNodeComparer
	RuntimeObject* ___m_IntersectNodeComparer_22;
	// System.Boolean Cinemachine.ClipperLib/Clipper::m_ExecuteLocked
	bool ___m_ExecuteLocked_23;
	// Cinemachine.ClipperLib/PolyFillType Cinemachine.ClipperLib/Clipper::m_ClipFillType
	int32_t ___m_ClipFillType_24;
	// Cinemachine.ClipperLib/PolyFillType Cinemachine.ClipperLib/Clipper::m_SubjFillType
	int32_t ___m_SubjFillType_25;
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/Join> Cinemachine.ClipperLib/Clipper::m_Joins
	List_1_t1FD0176A6AE3A0879983080D9977949695807419* ___m_Joins_26;
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/Join> Cinemachine.ClipperLib/Clipper::m_GhostJoins
	List_1_t1FD0176A6AE3A0879983080D9977949695807419* ___m_GhostJoins_27;
	// System.Boolean Cinemachine.ClipperLib/Clipper::m_UsingPolyTree
	bool ___m_UsingPolyTree_28;
	// System.Boolean Cinemachine.ClipperLib/Clipper::<ReverseSolution>k__BackingField
	bool ___U3CReverseSolutionU3Ek__BackingField_29;
	// System.Boolean Cinemachine.ClipperLib/Clipper::<StrictlySimple>k__BackingField
	bool ___U3CStrictlySimpleU3Ek__BackingField_30;
};

// Cinemachine.ClipperLib/DoublePoint
struct DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 
{
	// System.Double Cinemachine.ClipperLib/DoublePoint::X
	double ___X_0;
	// System.Double Cinemachine.ClipperLib/DoublePoint::Y
	double ___Y_1;
};

// Cinemachine.ClipperLib/IntPoint
struct IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 
{
	// System.Int64 Cinemachine.ClipperLib/IntPoint::X
	int64_t ___X_0;
	// System.Int64 Cinemachine.ClipperLib/IntPoint::Y
	int64_t ___Y_1;
};

// Cinemachine.ClipperLib/IntRect
struct IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 
{
	// System.Int64 Cinemachine.ClipperLib/IntRect::left
	int64_t ___left_0;
	// System.Int64 Cinemachine.ClipperLib/IntRect::top
	int64_t ___top_1;
	// System.Int64 Cinemachine.ClipperLib/IntRect::right
	int64_t ___right_2;
	// System.Int64 Cinemachine.ClipperLib/IntRect::bottom
	int64_t ___bottom_3;
};

// Cinemachine.ClipperLib/PolyTree
struct PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD  : public PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27
{
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/PolyNode> Cinemachine.ClipperLib/PolyTree::m_AllPolys
	List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* ___m_AllPolys_7;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD2F0BB6468365F48988527DD340B6CADEB144BD6  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tD2F0BB6468365F48988527DD340B6CADEB144BD6_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::AA5072B96927F710758B3E5237A84AC68E397BC4E1BF7E864A950696D743CC32
	__StaticArrayInitTypeSizeU3D12_tA818451ADD7D8E0EEB94ABC9AEB57CA1C7C18CF0 ___AA5072B96927F710758B3E5237A84AC68E397BC4E1BF7E864A950696D743CC32_0;
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

// UnityEngine.Rendering.FloatParameter
struct FloatParameter_t566B623CD21B2F957A20BA790ACEF6684A712106  : public VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8
{
};

// Cinemachine.Utility.HeadingTracker
struct HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA  : public RuntimeObject
{
	// Cinemachine.Utility.HeadingTracker/Item[] Cinemachine.Utility.HeadingTracker::mHistory
	ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* ___mHistory_0;
	// System.Int32 Cinemachine.Utility.HeadingTracker::mTop
	int32_t ___mTop_1;
	// System.Int32 Cinemachine.Utility.HeadingTracker::mBottom
	int32_t ___mBottom_2;
	// System.Int32 Cinemachine.Utility.HeadingTracker::mCount
	int32_t ___mCount_3;
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker::mHeadingSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mHeadingSum_4;
	// System.Single Cinemachine.Utility.HeadingTracker::mWeightSum
	float ___mWeightSum_5;
	// System.Single Cinemachine.Utility.HeadingTracker::mWeightTime
	float ___mWeightTime_6;
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker::mLastGoodHeading
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mLastGoodHeading_7;
};

struct HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_StaticFields
{
	// System.Single Cinemachine.Utility.HeadingTracker::mDecayExponent
	float ___mDecayExponent_8;
};

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;
};

struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_StaticFields
{
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Default_0;
};
// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
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

// Cinemachine.Utility.PositionPredictor
struct PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E  : public RuntimeObject
{
	// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_0;
	// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::m_SmoothDampVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_SmoothDampVelocity_1;
	// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::m_Pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Pos_2;
	// System.Boolean Cinemachine.Utility.PositionPredictor::m_HavePos
	bool ___m_HavePos_3;
	// System.Single Cinemachine.Utility.PositionPredictor::Smoothing
	float ___Smoothing_4;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3  : public UnityEvent_1_tA9D67747BC8C9E0D4541EE0B100AA53EF640F411
{
};

// Cinemachine.ClipperLib/ClipperOffset
struct ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> Cinemachine.ClipperLib/ClipperOffset::m_destPolys
	List_1_tD3D80A48908E0B8646110C913780E72E2157A541* ___m_destPolys_0;
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint> Cinemachine.ClipperLib/ClipperOffset::m_srcPoly
	List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* ___m_srcPoly_1;
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint> Cinemachine.ClipperLib/ClipperOffset::m_destPoly
	List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* ___m_destPoly_2;
	// System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint> Cinemachine.ClipperLib/ClipperOffset::m_normals
	List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* ___m_normals_3;
	// System.Double Cinemachine.ClipperLib/ClipperOffset::m_delta
	double ___m_delta_4;
	// System.Double Cinemachine.ClipperLib/ClipperOffset::m_sinA
	double ___m_sinA_5;
	// System.Double Cinemachine.ClipperLib/ClipperOffset::m_sin
	double ___m_sin_6;
	// System.Double Cinemachine.ClipperLib/ClipperOffset::m_cos
	double ___m_cos_7;
	// System.Double Cinemachine.ClipperLib/ClipperOffset::m_miterLim
	double ___m_miterLim_8;
	// System.Double Cinemachine.ClipperLib/ClipperOffset::m_StepsPerRad
	double ___m_StepsPerRad_9;
	// Cinemachine.ClipperLib/IntPoint Cinemachine.ClipperLib/ClipperOffset::m_lowest
	IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___m_lowest_10;
	// Cinemachine.ClipperLib/PolyNode Cinemachine.ClipperLib/ClipperOffset::m_polyNodes
	PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* ___m_polyNodes_11;
	// System.Double Cinemachine.ClipperLib/ClipperOffset::<ArcTolerance>k__BackingField
	double ___U3CArcToleranceU3Ek__BackingField_12;
	// System.Double Cinemachine.ClipperLib/ClipperOffset::<MiterLimit>k__BackingField
	double ___U3CMiterLimitU3Ek__BackingField_13;
};

// Cinemachine.Utility.HeadingTracker/Item
struct Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 
{
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker/Item::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_0;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::weight
	float ___weight_1;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::time
	float ___time_2;
};

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_StaticFields
{
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___kNoPoint_3;
};
// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Rendering.MinFloatParameter
struct MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9  : public FloatParameter_t566B623CD21B2F957A20BA790ACEF6684A712106
{
	// System.Single UnityEngine.Rendering.MinFloatParameter::min
	float ___min_3;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Cinemachine.ClipperLib/ClipperException
struct ClipperException_t88B1DB246A93C0860AFD818A9BE49B74D84C28D5  : public Exception_t
{
};

// UnityEngine.Events.UnityAction`1<Cinemachine.CinemachineBrain>
struct UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114  : public MulticastDelegate_t
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

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.Rendering.VolumeComponent::active
	bool ___active_4;
	// System.String UnityEngine.Rendering.VolumeComponent::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter> UnityEngine.Rendering.VolumeComponent::<parameters>k__BackingField
	ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76* ___U3CparametersU3Ek__BackingField_6;
};

// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeProfile::components
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___components_4;
	// System.Boolean UnityEngine.Rendering.VolumeProfile::isDirty
	bool ___isDirty_5;
};

// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate
struct OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708  : public MulticastDelegate_t
{
};

// UnityEngine.Rendering.Universal.DepthOfField
struct DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.Universal.DepthOfFieldModeParameter UnityEngine.Rendering.Universal.DepthOfField::mode
	DepthOfFieldModeParameter_t2AC87B0A41A5C9BB872A9E9D7913C262F9DA4E26* ___mode_7;
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.DepthOfField::gaussianStart
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___gaussianStart_8;
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.DepthOfField::gaussianEnd
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___gaussianEnd_9;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::gaussianMaxRadius
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___gaussianMaxRadius_10;
	// UnityEngine.Rendering.BoolParameter UnityEngine.Rendering.Universal.DepthOfField::highQualitySampling
	BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95* ___highQualitySampling_11;
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.DepthOfField::focusDistance
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___focusDistance_12;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::aperture
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___aperture_13;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::focalLength
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___focalLength_14;
	// UnityEngine.Rendering.ClampedIntParameter UnityEngine.Rendering.Universal.DepthOfField::bladeCount
	ClampedIntParameter_tAF77FC44E522B137734644AE2E3F702580033B8E* ___bladeCount_15;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::bladeCurvature
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___bladeCurvature_16;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::bladeRotation
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___bladeRotation_17;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Cinemachine.CinemachineBrain
struct CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowDebugText
	bool ___m_ShowDebugText_4;
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowCameraFrustum
	bool ___m_ShowCameraFrustum_5;
	// System.Boolean Cinemachine.CinemachineBrain::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_6;
	// UnityEngine.Transform Cinemachine.CinemachineBrain::m_WorldUpOverride
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_WorldUpOverride_7;
	// Cinemachine.CinemachineBrain/UpdateMethod Cinemachine.CinemachineBrain::m_UpdateMethod
	int32_t ___m_UpdateMethod_8;
	// Cinemachine.CinemachineBrain/BrainUpdateMethod Cinemachine.CinemachineBrain::m_BlendUpdateMethod
	int32_t ___m_BlendUpdateMethod_9;
	// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineBrain::m_DefaultBlend
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___m_DefaultBlend_10;
	// Cinemachine.CinemachineBlenderSettings Cinemachine.CinemachineBrain::m_CustomBlends
	CinemachineBlenderSettings_t55EA371578F7C0ADACF81ACF631C0838A459ED18* ___m_CustomBlends_11;
	// UnityEngine.Camera Cinemachine.CinemachineBrain::m_OutputCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_OutputCamera_12;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineBrain::m_CameraCutEvent
	BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* ___m_CameraCutEvent_13;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineBrain::m_CameraActivatedEvent
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_CameraActivatedEvent_14;
	// UnityEngine.Coroutine Cinemachine.CinemachineBrain::mPhysicsCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___mPhysicsCoroutine_16;
	// System.Int32 Cinemachine.CinemachineBrain::m_LastFrameUpdated
	int32_t ___m_LastFrameUpdated_17;
	// UnityEngine.WaitForFixedUpdate Cinemachine.CinemachineBrain::mWaitForFixedUpdate
	WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ___mWaitForFixedUpdate_18;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame> Cinemachine.CinemachineBrain::mFrameStack
	List_1_tC7A631B4A35E461A5E78F0D0C4D482812E731DEB* ___mFrameStack_19;
	// System.Int32 Cinemachine.CinemachineBrain::mNextFrameId
	int32_t ___mNextFrameId_20;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineBrain::mCurrentLiveCameras
	CinemachineBlend_t727AC6579F9C674EB8E01FC3ACB846B20786FF5E* ___mCurrentLiveCameras_21;
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mActiveCameraPreviousFrame
	RuntimeObject* ___mActiveCameraPreviousFrame_23;
	// UnityEngine.GameObject Cinemachine.CinemachineBrain::mActiveCameraPreviousFrameGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mActiveCameraPreviousFrameGameObject_24;
	// Cinemachine.CameraState Cinemachine.CinemachineBrain::<CurrentCameraState>k__BackingField
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___U3CCurrentCameraStateU3Ek__BackingField_25;
};

struct CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9_StaticFields
{
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mSoloCamera
	RuntimeObject* ___mSoloCamera_15;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBrain::mDefaultLinearAnimationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___mDefaultLinearAnimationCurve_22;
};

// Cinemachine.CinemachineExtension
struct CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineExtension::m_vcamOwner
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_vcamOwner_5;
	// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object> Cinemachine.CinemachineExtension::mExtraState
	Dictionary_2_t4FF21A84FE740BDEF33FFAA0162AAAADBA3DEB56* ___mExtraState_6;
};

// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget_20;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam_21;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_22;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget_23;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam_24;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_25;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_27;
};

// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RenderShadows
	bool ___m_RenderShadows_8;
	// UnityEngine.Rendering.Universal.CameraOverrideOption UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresDepthTextureOption
	int32_t ___m_RequiresDepthTextureOption_9;
	// UnityEngine.Rendering.Universal.CameraOverrideOption UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresOpaqueTextureOption
	int32_t ___m_RequiresOpaqueTextureOption_10;
	// UnityEngine.Rendering.Universal.CameraRenderType UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_CameraType
	int32_t ___m_CameraType_11;
	// System.Collections.Generic.List`1<UnityEngine.Camera> UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Cameras
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_Cameras_12;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RendererIndex
	int32_t ___m_RendererIndex_13;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_VolumeLayerMask_14;
	// UnityEngine.Transform UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeTrigger
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_VolumeTrigger_15;
	// UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeFrameworkUpdateModeOption
	int32_t ___m_VolumeFrameworkUpdateModeOption_16;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RenderPostProcessing
	bool ___m_RenderPostProcessing_17;
	// UnityEngine.Rendering.Universal.AntialiasingMode UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Antialiasing
	int32_t ___m_Antialiasing_18;
	// UnityEngine.Rendering.Universal.AntialiasingQuality UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_AntialiasingQuality
	int32_t ___m_AntialiasingQuality_19;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_StopNaN
	bool ___m_StopNaN_20;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Dithering
	bool ___m_Dithering_21;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_ClearDepth
	bool ___m_ClearDepth_22;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_AllowXRRendering
	bool ___m_AllowXRRendering_23;
	// UnityEngine.Camera UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_24;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresDepthTexture
	bool ___m_RequiresDepthTexture_25;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresColorTexture
	bool ___m_RequiresColorTexture_26;
	// System.Single UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Version
	float ___m_Version_27;
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeStack
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___m_VolumeStack_29;
};

struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_StaticFields
{
	// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::s_DefaultAdditionalCameraData
	UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* ___s_DefaultAdditionalCameraData_28;
};

// UnityEngine.Rendering.Volume
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.Rendering.Volume::m_IsGlobal
	bool ___m_IsGlobal_4;
	// System.Single UnityEngine.Rendering.Volume::priority
	float ___priority_5;
	// System.Single UnityEngine.Rendering.Volume::blendDistance
	float ___blendDistance_6;
	// System.Single UnityEngine.Rendering.Volume::weight
	float ___weight_7;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::sharedProfile
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___sharedProfile_8;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.Rendering.Volume::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_9;
	// System.Int32 UnityEngine.Rendering.Volume::m_PreviousLayer
	int32_t ___m_PreviousLayer_10;
	// System.Single UnityEngine.Rendering.Volume::m_PreviousPriority
	float ___m_PreviousPriority_11;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::m_InternalProfile
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___m_InternalProfile_12;
};

// Cinemachine.PostFX.CinemachinePostProcessing
struct CinemachinePostProcessing_t1D2E39360B2745E47A9DDFE4CF9090999D7D85E5  : public CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73
{
};

// Cinemachine.PostFX.CinemachineVolumeSettings
struct CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6  : public CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73
{
	// System.Boolean Cinemachine.PostFX.CinemachineVolumeSettings::m_FocusTracksTarget
	bool ___m_FocusTracksTarget_8;
	// Cinemachine.PostFX.CinemachineVolumeSettings/FocusTrackingMode Cinemachine.PostFX.CinemachineVolumeSettings::m_FocusTracking
	int32_t ___m_FocusTracking_9;
	// UnityEngine.Transform Cinemachine.PostFX.CinemachineVolumeSettings::m_FocusTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FocusTarget_10;
	// System.Single Cinemachine.PostFX.CinemachineVolumeSettings::m_FocusOffset
	float ___m_FocusOffset_11;
	// UnityEngine.Rendering.VolumeProfile Cinemachine.PostFX.CinemachineVolumeSettings::m_Profile
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___m_Profile_12;
};

struct CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields
{
	// System.Single Cinemachine.PostFX.CinemachineVolumeSettings::s_VolumePriority
	float ___s_VolumePriority_7;
	// System.String Cinemachine.PostFX.CinemachineVolumeSettings::sVolumeOwnerName
	String_t* ___sVolumeOwnerName_13;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> Cinemachine.PostFX.CinemachineVolumeSettings::sVolumes
	List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* ___sVolumes_14;
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// Cinemachine.Utility.HeadingTracker/Item[]
struct ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 m_Items[1];

	inline Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
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
// Cinemachine.ClipperLib/IntPoint[]
struct IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13  : public RuntimeArray
{
	ALIGN_FIELD (8) IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 m_Items[1];

	inline IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 value)
	{
		m_Items[index] = value;
	}
};
// Cinemachine.ClipperLib/DoublePoint[]
struct DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726  : public RuntimeArray
{
	ALIGN_FIELD (8) DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 m_Items[1];

	inline DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDF34972E1038C2983D5086C38D56E62FCFDA5FBB_gshared (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_gshared_inline (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_gshared (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4B1A8AFCE2BEE0C3570F54204394D25D1235F9CF_gshared (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_gshared_inline (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mF0F13BCF460823FB136A0964BA8A8E3B30CAB5C9_gshared (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m32AB5B53E1EAEF533CB62F1909BECF6C01854CB9_gshared (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m06668C0A3C120FA25245D89C14B0787E790F8D13_gshared_inline (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4C766CDFB68990BFC38564E2D5546DB93A740C74_gshared (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_gshared_inline (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_gshared (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E_gshared (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, int32_t ___index0, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6_gshared (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> Cinemachine.CinemachineExtension::GetAllExtraStates<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* CinemachineExtension_GetAllExtraStates_TisRuntimeObject_m1910A2ACEF3BCDAD7EB81C9B0F81945BFED4A9AA_gshared (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73* __this, const RuntimeMethod* method) ;
// T Cinemachine.CinemachineExtension::GetExtraState<System.Object>(Cinemachine.ICinemachineCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CinemachineExtension_GetExtraState_TisRuntimeObject_m63736B66E05E9A88615CD036333B6549324E8406_gshared (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73* __this, RuntimeObject* ___vcam0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m6394BC3A9A95358ECE114A783689654E1E2DAC44_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_gshared (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::get_KernelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_gshared (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_gshared (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::get_KernelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_gshared (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_gshared (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::get_KernelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_gshared (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90* __this, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::.ctor()
inline void List_1__ctor_mDF34972E1038C2983D5086C38D56E62FCFDA5FBB (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18*, const RuntimeMethod*))List_1__ctor_mDF34972E1038C2983D5086C38D56E62FCFDA5FBB_gshared)(__this, method);
}
// System.Void Cinemachine.ClipperLib/PolyNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyNode__ctor_m7DF908F626C3C169AEBAF5DDE0AAC631F0153E85 (PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.ClipperLib/ClipperOffset::set_MiterLimit(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClipperOffset_set_MiterLimit_m81F85F0942E5A1B4A131627D7E7DFCF46BFCD859_inline (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Cinemachine.ClipperLib/ClipperOffset::set_ArcTolerance(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClipperOffset_set_ArcTolerance_mF1025B552D6EB0FA28D7E6807397DC0DC4DC93B0_inline (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, double ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Cinemachine.ClipperLib/PolyNode> Cinemachine.ClipperLib/PolyNode::get_Childs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline (PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/PolyNode>::Clear()
inline void List_1_Clear_m73287C547CBAFA373521EC072BF640074D60D417_inline (List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6B363664E747D5A84578F8282376CB04CDF801F4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::get_Count()
inline int32_t List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_inline (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*, const RuntimeMethod*))List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::get_Item(System.Int32)
inline IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 (*) (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*, int32_t, const RuntimeMethod*))List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_gshared)(__this, ___index0, method);
}
// System.Boolean Cinemachine.ClipperLib/IntPoint::op_Equality(Cinemachine.ClipperLib/IntPoint,Cinemachine.ClipperLib/IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPoint_op_Equality_m1895B2D711859DD40BE3B629806686F2EB454FC5 (IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___a0, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m4B1A8AFCE2BEE0C3570F54204394D25D1235F9CF (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m4B1A8AFCE2BEE0C3570F54204394D25D1235F9CF_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::Add(T)
inline void List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674, const RuntimeMethod*))List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Cinemachine.ClipperLib/IntPoint::op_Inequality(Cinemachine.ClipperLib/IntPoint,Cinemachine.ClipperLib/IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPoint_op_Inequality_m6755E58DA3258E1041F8C8C1A0DBB6AA20497EC4 (IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___a0, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___b1, const RuntimeMethod* method) ;
// System.Void Cinemachine.ClipperLib/PolyNode::AddChild(Cinemachine.ClipperLib/PolyNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyNode_AddChild_m0AE9AA1CD1E9EB371362350CAA9304F95A2D2DA5 (PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* __this, PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* ___Child0, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.ClipperLib/PolyNode::get_ChildCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67 (PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.ClipperLib/IntPoint::.ctor(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1 (IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* __this, int64_t ___X0, int64_t ___Y1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Cinemachine.ClipperLib/PolyNode>::get_Item(System.Int32)
inline PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482 (List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* (*) (List_1_t6B363664E747D5A84578F8282376CB04CDF801F4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::GetEnumerator()
inline Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5 List_1_GetEnumerator_m9865D2A6023BF15CE2F05EC3A2BD0A1ED1F72D43 (List_1_tD3D80A48908E0B8646110C913780E72E2157A541* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5 (*) (List_1_tD3D80A48908E0B8646110C913780E72E2157A541*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::Dispose()
inline void Enumerator_Dispose_m677FC8F8D71757745C78555FC7FDEB9B90F18E6D (Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::get_Current()
inline List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* Enumerator_get_Current_m89DC75068BCAAAA94D88C74FBD233EE5F3E96644_inline (Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5* __this, const RuntimeMethod* method)
{
	return ((  List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* (*) (Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::AddPath(System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>,Cinemachine.ClipperLib/JoinType,Cinemachine.ClipperLib/EndType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_AddPath_m30CDF70BFA54E89D99CBDD267D513347A6D46EEA (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* ___path0, int32_t ___joinType1, int32_t ___endType2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::MoveNext()
inline bool Enumerator_MoveNext_m85FDC916AFDB03C731C1DE85A1AD64070EC621D0 (Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean Cinemachine.ClipperLib/Clipper::Orientation(System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Clipper_Orientation_mCCFCAC82598BB2359FAC352A25CC7CD9DF71E406 (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* ___poly0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::Reverse()
inline void List_1_Reverse_mF0F13BCF460823FB136A0964BA8A8E3B30CAB5C9 (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*, const RuntimeMethod*))List_1_Reverse_mF0F13BCF460823FB136A0964BA8A8E3B30CAB5C9_gshared)(__this, method);
}
// System.Void Cinemachine.ClipperLib/DoublePoint::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoublePoint__ctor_m87B0A4A8419F7E7608DF989FFBD0E92295A0A72F (DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1* __this, double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::.ctor()
inline void List_1__ctor_m85A1A83D119CC5BFE0C4A6352E38591B5C6D5F14 (List_1_tD3D80A48908E0B8646110C913780E72E2157A541* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3D80A48908E0B8646110C913780E72E2157A541*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Cinemachine.ClipperLib/ClipperBase::near_zero(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClipperBase_near_zero_mDAFA25942FF6D795F79D917BD5A178F5085E0504 (double ___val0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mBB81853DDC94D55D5D7B50D95C949BADB3C79538 (List_1_tD3D80A48908E0B8646110C913780E72E2157A541* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3D80A48908E0B8646110C913780E72E2157A541*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::Add(T)
inline void List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_inline (List_1_tD3D80A48908E0B8646110C913780E72E2157A541* __this, List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3D80A48908E0B8646110C913780E72E2157A541*, List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Double Cinemachine.ClipperLib/ClipperOffset::get_MiterLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ClipperOffset_get_MiterLimit_m12626F15B3A2B944F81E05ADBB263C8C3479D7DD_inline (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, const RuntimeMethod* method) ;
// System.Double Cinemachine.ClipperLib/ClipperOffset::get_ArcTolerance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ClipperOffset_get_ArcTolerance_m25B298CB94489BE792C4EF8870B396D2158C3E92_inline (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::.ctor()
inline void List_1__ctor_m32AB5B53E1EAEF533CB62F1909BECF6C01854CB9 (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*, const RuntimeMethod*))List_1__ctor_m32AB5B53E1EAEF533CB62F1909BECF6C01854CB9_gshared)(__this, method);
}
// System.Int64 Cinemachine.ClipperLib/ClipperOffset::Round(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::Clear()
inline void List_1_Clear_m06668C0A3C120FA25245D89C14B0787E790F8D13_inline (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18*, const RuntimeMethod*))List_1_Clear_m06668C0A3C120FA25245D89C14B0787E790F8D13_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m4C766CDFB68990BFC38564E2D5546DB93A740C74 (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m4C766CDFB68990BFC38564E2D5546DB93A740C74_gshared)(__this, ___value0, method);
}
// Cinemachine.ClipperLib/DoublePoint Cinemachine.ClipperLib/ClipperOffset::GetUnitNormal(Cinemachine.ClipperLib/IntPoint,Cinemachine.ClipperLib/IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ClipperOffset_GetUnitNormal_mE79775AAC5E47077FE6EC3003830E30BA5D42786 (IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___pt10, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___pt21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::Add(T)
inline void List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_inline (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18*, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1, const RuntimeMethod*))List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::get_Item(System.Int32)
inline DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5 (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 (*) (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18*, int32_t, const RuntimeMethod*))List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_gshared)(__this, ___index0, method);
}
// System.Void Cinemachine.ClipperLib/DoublePoint::.ctor(Cinemachine.ClipperLib/DoublePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoublePoint__ctor_m1DD41CFCE7D02EDD548BC15B67AF3A5FF8919DAB (DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1* __this, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ___dp0, const RuntimeMethod* method) ;
// System.Void Cinemachine.ClipperLib/ClipperOffset::OffsetPoint(System.Int32,System.Int32&,Cinemachine.ClipperLib/JoinType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_OffsetPoint_mA364CFD851041996876AA12D1E32CB8CD56FD35F (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, int32_t ___j0, int32_t* ___k1, int32_t ___jointype2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/DoublePoint>::set_Item(System.Int32,T)
inline void List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, int32_t ___index0, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18*, int32_t, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1, const RuntimeMethod*))List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::DoSquare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_DoSquare_m6FF4AC6A3D3A432776BEA5EC3869CC1EED8807D8 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, int32_t ___j0, int32_t ___k1, const RuntimeMethod* method) ;
// System.Void Cinemachine.ClipperLib/ClipperOffset::DoRound(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_DoRound_m87BA50E7B0346922ACC73C69B6D28E9099E42692 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, int32_t ___j0, int32_t ___k1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::Clear()
inline void List_1_Clear_mCEFDEE1CDCD179EC42CACBA45A68043B2F6EF9B0_inline (List_1_tD3D80A48908E0B8646110C913780E72E2157A541* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3D80A48908E0B8646110C913780E72E2157A541*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::FixOrientations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_FixOrientations_m32685E41D88FB8B7FC06282DA7C128E197C7C518 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.ClipperLib/ClipperOffset::DoOffset(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_DoOffset_m21188ACCDBCEA566BFD6DEE0D03F9B5340CEF009 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, double ___delta0, const RuntimeMethod* method) ;
// System.Void Cinemachine.ClipperLib/Clipper::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clipper__ctor_mFE1DEBE1F52B653F893824C803EC03A94560C146 (Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* __this, int32_t ___InitOptions0, const RuntimeMethod* method) ;
// System.Boolean Cinemachine.ClipperLib/ClipperBase::AddPaths(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>,Cinemachine.ClipperLib/PolyType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClipperBase_AddPaths_m3A4E3756B561A396C16E4658743F61D088FA2EEA (ClipperBase_tF5E5EE071153091C61DE73A7046E19212CA00B91* __this, List_1_tD3D80A48908E0B8646110C913780E72E2157A541* ___ppg0, int32_t ___polyType1, bool ___closed2, const RuntimeMethod* method) ;
// System.Boolean Cinemachine.ClipperLib/Clipper::Execute(Cinemachine.ClipperLib/ClipType,System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>,Cinemachine.ClipperLib/PolyFillType,Cinemachine.ClipperLib/PolyFillType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Clipper_Execute_mD4963862505A6417805A36BDC8EE3551AF5227A0 (Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* __this, int32_t ___clipType0, List_1_tD3D80A48908E0B8646110C913780E72E2157A541* ___solution1, int32_t ___subjFillType2, int32_t ___clipFillType3, const RuntimeMethod* method) ;
// Cinemachine.ClipperLib/IntRect Cinemachine.ClipperLib/ClipperBase::GetBounds(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 ClipperBase_GetBounds_mC13AB297ABF4C0D5C98672C33C9B8358242A0ED7 (List_1_tD3D80A48908E0B8646110C913780E72E2157A541* ___paths0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>::.ctor(System.Int32)
inline void List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6 (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*, int32_t, const RuntimeMethod*))List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6_gshared)(__this, ___capacity0, method);
}
// System.Boolean Cinemachine.ClipperLib/ClipperBase::AddPath(System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>,Cinemachine.ClipperLib/PolyType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClipperBase_AddPath_m34810D1B9F21314A52EB4A1B77F454EE19CAA62F (ClipperBase_tF5E5EE071153091C61DE73A7046E19212CA00B91* __this, List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* ___pg0, int32_t ___polyType1, bool ___Closed2, const RuntimeMethod* method) ;
// System.Void Cinemachine.ClipperLib/Clipper::set_ReverseSolution(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Clipper_set_ReverseSolution_m4C3D2FEE37DDCCB590395F6A7199C8510813834A_inline (Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::get_Count()
inline int32_t List_1_get_Count_m3EA042A7A6709E4B248A6AEF39800F2BCB5D418B_inline (List_1_tD3D80A48908E0B8646110C913780E72E2157A541* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD3D80A48908E0B8646110C913780E72E2157A541*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m7747D3473584FC32EC00DAFA15732DD41926AF60 (List_1_tD3D80A48908E0B8646110C913780E72E2157A541* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3D80A48908E0B8646110C913780E72E2157A541*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void Cinemachine.ClipperLib/PolyTree::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolyTree_Clear_m9590AC2AB10E2126CDA65C9824B31FC88E191185 (PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* __this, const RuntimeMethod* method) ;
// System.Boolean Cinemachine.ClipperLib/Clipper::Execute(Cinemachine.ClipperLib/ClipType,Cinemachine.ClipperLib/PolyTree,Cinemachine.ClipperLib/PolyFillType,Cinemachine.ClipperLib/PolyFillType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Clipper_Execute_mDBF9988159022C1F340702FED6E189758BD23D52 (Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* __this, int32_t ___clipType0, PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* ___polytree1, int32_t ___subjFillType2, int32_t ___clipFillType3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/PolyNode>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m8AF0D30918276002D4457FFD304E0280AA6E984D (List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6B363664E747D5A84578F8282376CB04CDF801F4*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.ClipperLib/PolyNode>::set_Item(System.Int32,T)
inline void List_1_set_Item_m71F5F51057EA215E366D07697A324759482B9112 (List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* __this, int32_t ___index0, PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6B363664E747D5A84578F8282376CB04CDF801F4*, int32_t, PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::DoMiter(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_DoMiter_m2797F6E5BA1D568908043B4883ED4850EFAF39C3 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, int32_t ___j0, int32_t ___k1, double ___r2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineExtension__ctor_m8955F80D4A62DE7C3DA510CFECEF722346241C94 (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>::get_Count()
inline int32_t List_1_get_Count_m67F93C76C9F469705D5CE2E159C52B380E47340F_inline (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<T> Cinemachine.CinemachineExtension::GetAllExtraStates<Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState>()
inline List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3* CinemachineExtension_GetAllExtraStates_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_m033F186F18F171F683031A18E87603857F3A4BF0 (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73* __this, const RuntimeMethod* method)
{
	return ((  List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3* (*) (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73*, const RuntimeMethod*))CinemachineExtension_GetAllExtraStates_TisRuntimeObject_m1910A2ACEF3BCDAD7EB81C9B0F81945BFED4A9AA_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState>::get_Item(System.Int32)
inline VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* List_1_get_Item_m21A5A68B5CC40355C926A2D7DF3CDC70DDB2076F (List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* (*) (List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState::DestroyProfileCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState_DestroyProfileCopy_m1BF9F84F865D1E065076E69DEC72ECE7A85E63CD (VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState>::get_Count()
inline int32_t List_1_get_Count_m752E3D908DAB46834D43C51F1F2EB5A515D10928_inline (List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Cinemachine.CinemachineExtension::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineExtension_OnEnable_mAABA4125E1F4271A991D234F62771AD496E9EF98 (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73* __this, const RuntimeMethod* method) ;
// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineExtension::get_VirtualCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* CinemachineExtension_get_VirtualCamera_mD9E9C61D2B18DD4B1ECF1B6A12EE5FD3B152376E (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::InvalidateCachedProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings_InvalidateCachedProfile_m3D298EAFD2FDF9DC057A316B5FB986962D14A547 (CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineExtension::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineExtension_OnDestroy_m856A803E3DAE93CD0AADFA9B687A430BD24616DE (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73* __this, const RuntimeMethod* method) ;
// T Cinemachine.CinemachineExtension::GetExtraState<Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState>(Cinemachine.ICinemachineCamera)
inline VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* CinemachineExtension_GetExtraState_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_mCB7C0F584EAAC5BB590A7BC3290E17398741FF76 (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73* __this, RuntimeObject* ___vcam0, const RuntimeMethod* method)
{
	return ((  VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* (*) (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73*, RuntimeObject*, const RuntimeMethod*))CinemachineExtension_GetExtraState_TisRuntimeObject_m63736B66E05E9A88615CD036333B6549324E8406_gshared)(__this, ___vcam0, method);
}
// System.Boolean Cinemachine.PostFX.CinemachineVolumeSettings::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineVolumeSettings_get_IsValid_mF3369F4EEBA7D9EEAAACA866B1B8B154EAEE034E (CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState::CreateProfileCopy(UnityEngine.Rendering.VolumeProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState_CreateProfileCopy_mAADD5F9762AB647121CD080BBEC9F3732E53D628 (VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* __this, VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___source0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<UnityEngine.Rendering.Universal.DepthOfField>(T&)
inline bool VolumeProfile_TryGet_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m97F7A492589285276A340E3E20321C5879DB47BC (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*, DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF**, const RuntimeMethod*))VolumeProfile_TryGet_TisRuntimeObject_m6394BC3A9A95358ECE114A783689654E1E2DAC44_gshared)(__this, ___component0, method);
}
// UnityEngine.Vector3 Cinemachine.CameraState::get_FinalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraState_get_FinalPosition_m4D482D1F3E008068C2151FC24FD85CB6F603AE12 (CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void Cinemachine.CameraState/CustomBlendable::.ctor(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomBlendable__ctor_mF38BF574AF05E415A01A2A46E506DE6B5086B303 (CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___custom0, float ___weight1, const RuntimeMethod* method) ;
// System.Void Cinemachine.CameraState::AddCustomBlendable(Cinemachine.CameraState/CustomBlendable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_AddCustomBlendable_m1DA24CB5A397752C33B6A1773CFF38F02505AD3C (CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* __this, CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___b0, const RuntimeMethod* method) ;
// Cinemachine.CameraState Cinemachine.CinemachineBrain::get_CurrentCameraState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 CinemachineBrain_get_CurrentCameraState_m4FD443F016CFCA5FCDFFF17E95A93162D18847C2_inline (CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* __this, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.CameraState::get_NumCustomBlendables()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraState_get_NumCustomBlendables_mA7FC428A3F135FA88769EC45E2C5521F2D1169DB_inline (CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> Cinemachine.PostFX.CinemachineVolumeSettings::GetDynamicBrainVolumes(Cinemachine.CinemachineBrain,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* CinemachineVolumeSettings_GetDynamicBrainVolumes_m9EBCC8D416C963BD194EE74889BDFB8971C97EE5 (CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* ___brain0, int32_t ___minVolumes1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>::get_Item(System.Int32)
inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284 (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* (*) (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Rendering.Volume::set_profile(UnityEngine.Rendering.VolumeProfile)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Volume_set_profile_m89709CBB66123E4DD821570E2CC4D9AE3D42E769_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>::get_Count()
inline int32_t List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_inline (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::GetCustomBlendable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB CameraState_GetCustomBlendable_mE19B33F6CEC1B42ACAEB34A0601E48A80577498E (CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Volume::set_isGlobal(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Volume_set_isGlobal_m5E2B89583386E5A6C63AD61D2A8DBCAB5533BF15_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>::Clear()
inline void List_1_Clear_m39BEA6B481C5F43AADAA90DD7277AFDA096BF0E5_inline (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Rendering.Volume>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAE021A0360032927647546267D4A69BC7C15C9B4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___results0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rendering.Universal.UniversalAdditionalCameraData>()
inline UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* GameObject_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mCF16C5DA588B7468D6B2219D2519B7814709347C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.LayerMask UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::get_volumeLayerMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB UniversalAdditionalCameraData_get_volumeLayerMask_m6CA98C050693650D8818151E9ADE480CCBF44BFC_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rendering.Volume>()
inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* GameObject_AddComponent_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mEBB3584E3F5C9390346BF4EE9FD8E5D2ABADE5C5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>::Add(T)
inline void List_1_Add_mE06E257FFA840B6A76C943FCC4F70FF8FC78C222_inline (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897*, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<Cinemachine.CinemachineBrain>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m5CC9F1C8EA62E69F366ADC95ED52BF0CAA0F1582 (UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Cinemachine.CinemachineBrain>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m9C18146FC609E4712D1E32D9E7FC19913AAAA2DA (UnityEvent_1_tA9D67747BC8C9E0D4541EE0B100AA53EF640F411* __this, UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA9D67747BC8C9E0D4541EE0B100AA53EF640F411*, UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Cinemachine.CinemachineBrain>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB3E814B430D892264646F8671CC6AFF035ECB0AC (UnityEvent_1_tA9D67747BC8C9E0D4541EE0B100AA53EF640F411* __this, UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA9D67747BC8C9E0D4541EE0B100AA53EF640F411*, UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>::.ctor()
inline void List_1__ctor_mBE415A6F2F48CA40D24EF2ECB6001A80D683AE64 (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.ScriptableObject::CreateInstance<UnityEngine.Rendering.VolumeProfile>()
inline VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ScriptableObject_CreateInstance_TisVolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1_mFF81C5BA0BE60CA936B0A49798FFAD1A414321A9 (const RuntimeMethod* method)
{
	return ((  VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>::GetEnumerator()
inline Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760 (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 (*) (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::Dispose()
inline void Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607 (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::get_Current()
inline VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355* __this, const RuntimeMethod* method)
{
	return ((  VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* (*) (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.Rendering.VolumeComponent>(T)
inline VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* Object_Instantiate_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_mACF428D34ACD47070A01E3FC433D7AAD4E672081 (VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___original0, const RuntimeMethod* method)
{
	return ((  VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* (*) (VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>::Add(T)
inline void List_1_Add_mAE785BB140AACEA37285183D122AB76C64D1776B_inline (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* __this, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064*, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::MoveNext()
inline bool Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911 (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Cinemachine.RuntimeUtility::DestroyObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUtility_DestroyObject_mEEBC4EE2A429B4E4D00EC07BA62044C9FF8E8A18 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Object>::Contains(T)
inline bool HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Object>::Remove(T)
inline bool HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595 (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Object>::.ctor()
inline void HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Object>::Add(T)
inline bool HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5 (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___text0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.Object>::GetEnumerator()
inline Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Object>::Dispose()
inline void Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553 (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Object>::get_Current()
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_inline (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853* __this, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Object>::MoveNext()
inline bool Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645 (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Text.StringBuilder>::get_Count()
inline int32_t List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_inline (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Text.StringBuilder>::get_Item(System.Int32)
inline StringBuilder_t* List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8 (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  StringBuilder_t* (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.StringBuilder>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409 (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.StringBuilder>::.ctor()
inline void List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138 (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.StringBuilder>::Add(T)
inline void List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_inline (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, StringBuilder_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, StringBuilder_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::.ctor(System.Single,System.Int32)
inline void GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09 (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	((  void (*) (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C*, float, int32_t, const RuntimeMethod*))GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_gshared)(__this, ___sigma0, ___maxKernelRadius1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::get_KernelSize()
inline int32_t GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C*, const RuntimeMethod*))GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_gshared)(__this, method);
}
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::.ctor(System.Single,System.Int32)
inline void GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8 (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	((  void (*) (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*, float, int32_t, const RuntimeMethod*))GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_gshared)(__this, ___sigma0, ___maxKernelRadius1, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::get_KernelSize()
inline int32_t GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*, const RuntimeMethod*))GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Normalize(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m8845A29F55B839D0CD43124B1AA34034BFCA9A7D_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::.ctor(System.Single,System.Int32)
inline void GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	((  void (*) (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*, float, int32_t, const RuntimeMethod*))GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_gshared)(__this, ___sigma0, ___maxKernelRadius1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::get_KernelSize()
inline int32_t GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7 (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*, const RuntimeMethod*))GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_gshared)(__this, method);
}
// System.Void Cinemachine.Utility.PositionPredictor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_Reset_mDA454522FB1823437E5538169D712A2E18F956C5 (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::PredictPositionDelta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionPredictor_PredictPositionDelta_mC16231F75C5C088B5CC2444D3C2FA12F6DACC4AD (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, float ___lookaheadTime0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.Damper::Damp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_Damp_m3245F3453DB74DE11801C6EE15F163D5EAFC0CE4 (float ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.HeadingTracker::ClearHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.HeadingTracker::get_FilterSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.CinemachineCore::get_CurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineCore_get_CurrentTime_mFA05B621BE52910A8C3A304CB715257011C9A782 (const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.HeadingTracker::PopBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_PopBottom_mCB0D0A7AE4238580CB7FFAAD17497F7B532B57AE (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.HeadingTracker::Decay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HeadingTracker_Decay_mCBB06FF8B9BC4A154A4EFC9DA910854ED0FB25F8 (float ___time0, const RuntimeMethod* method) ;
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::Lerp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Lerp_mE5FFF3D013F0880F7DF8C613E7CB44EBD7349DAB_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPoints(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPoints_mF56B274A09DF5E4E77BC1BD1903C423FE9F1391A (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___knot0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl11, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl22, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_mC49B9FC3093AD872A60A0DEAE15B90CFC74DD80E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.UnityVectorExtensions::Cross(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Cross_m4ABE9CEBFA9687AB7A79F2287ABA20A011A514C0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v21, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_positiveInfinity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_positiveInfinity_m5F51F6F541EAD5ACCD5699BF1F219449D991E834_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_mFA715DF39B2BA00E0236B1DD527A53CE159A4C8C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::SlerpWithReferenceUp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityQuaternionExtensions_SlerpWithReferenceUp_m8D94F55CE71358BD2A6B38511E97BAB9EDC55464 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___qA0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___qB1, float ___t2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::ProjectOntoPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnityVectorExtensions_ProjectOntoPlane_m7B4042CE802D9E43593F9290EBCFFC1E1F1568A6 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m0653422E15193C2E4A4E5AF05236B6315C789C23_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_mA8EE238FB571BF476038E19AAF311CB42605282D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::Normalize(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Normalize_m1D1B879617A0F54904EDD0E59D356D605457002B_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Cinemachine.ClipperLib/ClipperOffset::get_ArcTolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ClipperOffset_get_ArcTolerance_m25B298CB94489BE792C4EF8870B396D2158C3E92 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, const RuntimeMethod* method) 
{
	{
		// public double ArcTolerance { get; set; }
		double L_0 = __this->___U3CArcToleranceU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::set_ArcTolerance(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_set_ArcTolerance_mF1025B552D6EB0FA28D7E6807397DC0DC4DC93B0 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double ArcTolerance { get; set; }
		double L_0 = ___value0;
		__this->___U3CArcToleranceU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Double Cinemachine.ClipperLib/ClipperOffset::get_MiterLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ClipperOffset_get_MiterLimit_m12626F15B3A2B944F81E05ADBB263C8C3479D7DD (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, const RuntimeMethod* method) 
{
	{
		// public double MiterLimit { get; set; }
		double L_0 = __this->___U3CMiterLimitU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::set_MiterLimit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_set_MiterLimit_m81F85F0942E5A1B4A131627D7E7DFCF46BFCD859 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double MiterLimit { get; set; }
		double L_0 = ___value0;
		__this->___U3CMiterLimitU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset__ctor_mEC075A2F9B5E587A9D06CF9E45A555417C69D158 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, double ___miterLimit0, double ___arcTolerance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDF34972E1038C2983D5086C38D56E62FCFDA5FBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<DoublePoint> m_normals = new List<DoublePoint>();
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_0 = (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18*)il2cpp_codegen_object_new(List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDF34972E1038C2983D5086C38D56E62FCFDA5FBB(L_0, List_1__ctor_mDF34972E1038C2983D5086C38D56E62FCFDA5FBB_RuntimeMethod_var);
		__this->___m_normals_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_normals_3), (void*)L_0);
		// private PolyNode m_polyNodes = new PolyNode();
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_1 = (PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27*)il2cpp_codegen_object_new(PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PolyNode__ctor_m7DF908F626C3C169AEBAF5DDE0AAC631F0153E85(L_1, NULL);
		__this->___m_polyNodes_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_polyNodes_11), (void*)L_1);
		// public ClipperOffset(
		//   double miterLimit = 2.0, double arcTolerance = def_arc_tolerance)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// MiterLimit = miterLimit;
		double L_2 = ___miterLimit0;
		ClipperOffset_set_MiterLimit_m81F85F0942E5A1B4A131627D7E7DFCF46BFCD859_inline(__this, L_2, NULL);
		// ArcTolerance = arcTolerance;
		double L_3 = ___arcTolerance1;
		ClipperOffset_set_ArcTolerance_mF1025B552D6EB0FA28D7E6807397DC0DC4DC93B0_inline(__this, L_3, NULL);
		// m_lowest.X = -1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* L_4 = (&__this->___m_lowest_10);
		L_4->___X_0 = ((int64_t)(-1));
		// }
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_Clear_mED8C219339D64A95987DB230DFE13C32FEC9CF87 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m73287C547CBAFA373521EC072BF640074D60D417_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_polyNodes.Childs.Clear();
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_0 = __this->___m_polyNodes_11;
		NullCheck(L_0);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_1;
		L_1 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_0, NULL);
		NullCheck(L_1);
		List_1_Clear_m73287C547CBAFA373521EC072BF640074D60D417_inline(L_1, List_1_Clear_m73287C547CBAFA373521EC072BF640074D60D417_RuntimeMethod_var);
		// m_lowest.X = -1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* L_2 = (&__this->___m_lowest_10);
		L_2->___X_0 = ((int64_t)(-1));
		// }
		return;
	}
}
// System.Int64 Cinemachine.ClipperLib/ClipperOffset::Round(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F (double ___value0, const RuntimeMethod* method) 
{
	{
		// return value < 0 ? (cInt)(value - 0.5) : (cInt)(value + 0.5);
		double L_0 = ___value0;
		if ((((double)L_0) < ((double)(0.0))))
		{
			goto IL_0019;
		}
	}
	{
		double L_1 = ___value0;
		return il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_add(L_1, (0.5))));
	}

IL_0019:
	{
		double L_2 = ___value0;
		return il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_subtract(L_2, (0.5))));
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::AddPath(System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>,Cinemachine.ClipperLib/JoinType,Cinemachine.ClipperLib/EndType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_AddPath_m30CDF70BFA54E89D99CBDD267D513347A6D46EEA (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* ___path0, int32_t ___joinType1, int32_t ___endType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m4B1A8AFCE2BEE0C3570F54204394D25D1235F9CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int highI = path.Count - 1;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_0 = ___path0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_inline(L_0, List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (highI < 0) return;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		// if (highI < 0) return;
		return;
	}

IL_000e:
	{
		// PolyNode newNode = new PolyNode();
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_3 = (PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27*)il2cpp_codegen_object_new(PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PolyNode__ctor_m7DF908F626C3C169AEBAF5DDE0AAC631F0153E85(L_3, NULL);
		V_1 = L_3;
		// newNode.m_jointype = joinType;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_4 = V_1;
		int32_t L_5 = ___joinType1;
		NullCheck(L_4);
		L_4->___m_jointype_3 = L_5;
		// newNode.m_endtype = endType;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_6 = V_1;
		int32_t L_7 = ___endType2;
		NullCheck(L_6);
		L_6->___m_endtype_4 = L_7;
		// if (endType == EndType.etClosedLine || endType == EndType.etClosedPolygon)
		int32_t L_8 = ___endType2;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = ___endType2;
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_002f;
	}

IL_002b:
	{
		// while (highI > 0 && path[0] == path[highI]) highI--;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_002f:
	{
		// while (highI > 0 && path[0] == path[highI]) highI--;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_12 = ___path0;
		NullCheck(L_12);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_13;
		L_13 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_12, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_14 = ___path0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_16;
		L_16 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_14, L_15, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		bool L_17;
		L_17 = IntPoint_op_Equality_m1895B2D711859DD40BE3B629806686F2EB454FC5(L_13, L_16, NULL);
		if (L_17)
		{
			goto IL_002b;
		}
	}

IL_0048:
	{
		// newNode.m_polygon.Capacity = highI + 1;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_18 = V_1;
		NullCheck(L_18);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_19 = L_18->___m_polygon_1;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		List_1_set_Capacity_m4B1A8AFCE2BEE0C3570F54204394D25D1235F9CF(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), List_1_set_Capacity_m4B1A8AFCE2BEE0C3570F54204394D25D1235F9CF_RuntimeMethod_var);
		// newNode.m_polygon.Add(path[0]);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_21 = V_1;
		NullCheck(L_21);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_22 = L_21->___m_polygon_1;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_23 = ___path0;
		NullCheck(L_23);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_24;
		L_24 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_23, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		NullCheck(L_22);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_22, L_24, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// int j = 0, k = 0;
		V_2 = 0;
		// int j = 0, k = 0;
		V_3 = 0;
		// for (int i = 1; i <= highI; i++)
		V_4 = 1;
		goto IL_010e;
	}

IL_0074:
	{
		// if (newNode.m_polygon[j] != path[i])
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_25 = V_1;
		NullCheck(L_25);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_26 = L_25->___m_polygon_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_28;
		L_28 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_26, L_27, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_29 = ___path0;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_31;
		L_31 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_29, L_30, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		bool L_32;
		L_32 = IntPoint_op_Inequality_m6755E58DA3258E1041F8C8C1A0DBB6AA20497EC4(L_28, L_31, NULL);
		if (!L_32)
		{
			goto IL_0108;
		}
	}
	{
		// j++;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		// newNode.m_polygon.Add(path[i]);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_34 = V_1;
		NullCheck(L_34);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_35 = L_34->___m_polygon_1;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_36 = ___path0;
		int32_t L_37 = V_4;
		NullCheck(L_36);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_38;
		L_38 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_36, L_37, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		NullCheck(L_35);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_35, L_38, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// if (path[i].Y > newNode.m_polygon[k].Y ||
		//   (path[i].Y == newNode.m_polygon[k].Y &&
		//   path[i].X < newNode.m_polygon[k].X)) k = j;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_39 = ___path0;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_41;
		L_41 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_39, L_40, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_42 = L_41.___Y_1;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_43 = V_1;
		NullCheck(L_43);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_44 = L_43->___m_polygon_1;
		int32_t L_45 = V_3;
		NullCheck(L_44);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_46;
		L_46 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_44, L_45, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_47 = L_46.___Y_1;
		if ((((int64_t)L_42) > ((int64_t)L_47)))
		{
			goto IL_0106;
		}
	}
	{
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_48 = ___path0;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_50;
		L_50 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_48, L_49, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_51 = L_50.___Y_1;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_52 = V_1;
		NullCheck(L_52);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_53 = L_52->___m_polygon_1;
		int32_t L_54 = V_3;
		NullCheck(L_53);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_55;
		L_55 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_53, L_54, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_56 = L_55.___Y_1;
		if ((!(((uint64_t)L_51) == ((uint64_t)L_56))))
		{
			goto IL_0108;
		}
	}
	{
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_57 = ___path0;
		int32_t L_58 = V_4;
		NullCheck(L_57);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_59;
		L_59 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_57, L_58, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_60 = L_59.___X_0;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_61 = V_1;
		NullCheck(L_61);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_62 = L_61->___m_polygon_1;
		int32_t L_63 = V_3;
		NullCheck(L_62);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_64;
		L_64 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_62, L_63, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_65 = L_64.___X_0;
		if ((((int64_t)L_60) >= ((int64_t)L_65)))
		{
			goto IL_0108;
		}
	}

IL_0106:
	{
		// path[i].X < newNode.m_polygon[k].X)) k = j;
		int32_t L_66 = V_2;
		V_3 = L_66;
	}

IL_0108:
	{
		// for (int i = 1; i <= highI; i++)
		int32_t L_67 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_010e:
	{
		// for (int i = 1; i <= highI; i++)
		int32_t L_68 = V_4;
		int32_t L_69 = V_0;
		if ((((int32_t)L_68) <= ((int32_t)L_69)))
		{
			goto IL_0074;
		}
	}
	{
		// if (endType == EndType.etClosedPolygon && j < 2) return;
		int32_t L_70 = ___endType2;
		if (L_70)
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_71 = V_2;
		if ((((int32_t)L_71) >= ((int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		// if (endType == EndType.etClosedPolygon && j < 2) return;
		return;
	}

IL_011e:
	{
		// m_polyNodes.AddChild(newNode);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_72 = __this->___m_polyNodes_11;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_73 = V_1;
		NullCheck(L_72);
		PolyNode_AddChild_m0AE9AA1CD1E9EB371362350CAA9304F95A2D2DA5(L_72, L_73, NULL);
		// if (endType != EndType.etClosedPolygon) return;
		int32_t L_74 = ___endType2;
		if (!L_74)
		{
			goto IL_012e;
		}
	}
	{
		// if (endType != EndType.etClosedPolygon) return;
		return;
	}

IL_012e:
	{
		// if (m_lowest.X < 0)
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* L_75 = (&__this->___m_lowest_10);
		int64_t L_76 = L_75->___X_0;
		if ((((int64_t)L_76) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0159;
		}
	}
	{
		// m_lowest = new IntPoint(m_polyNodes.ChildCount - 1, k);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_77 = __this->___m_polyNodes_11;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_77, NULL);
		int32_t L_79 = V_3;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_80;
		memset((&L_80), 0, sizeof(L_80));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_80), ((int64_t)((int32_t)il2cpp_codegen_subtract(L_78, 1))), ((int64_t)L_79), /*hidden argument*/NULL);
		__this->___m_lowest_10 = L_80;
		return;
	}

IL_0159:
	{
		// IntPoint ip = m_polyNodes.Childs[(int)m_lowest.X].m_polygon[(int)m_lowest.Y];
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_81 = __this->___m_polyNodes_11;
		NullCheck(L_81);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_82;
		L_82 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_81, NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* L_83 = (&__this->___m_lowest_10);
		int64_t L_84 = L_83->___X_0;
		NullCheck(L_82);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_85;
		L_85 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_82, ((int32_t)L_84), List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		NullCheck(L_85);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_86 = L_85->___m_polygon_1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* L_87 = (&__this->___m_lowest_10);
		int64_t L_88 = L_87->___Y_1;
		NullCheck(L_86);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_89;
		L_89 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_86, ((int32_t)L_88), List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		V_5 = L_89;
		// if (newNode.m_polygon[k].Y > ip.Y ||
		//   (newNode.m_polygon[k].Y == ip.Y &&
		//   newNode.m_polygon[k].X < ip.X))
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_90 = V_1;
		NullCheck(L_90);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_91 = L_90->___m_polygon_1;
		int32_t L_92 = V_3;
		NullCheck(L_91);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_93;
		L_93 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_91, L_92, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_94 = L_93.___Y_1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_95 = V_5;
		int64_t L_96 = L_95.___Y_1;
		if ((((int64_t)L_94) > ((int64_t)L_96)))
		{
			goto IL_01db;
		}
	}
	{
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_97 = V_1;
		NullCheck(L_97);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_98 = L_97->___m_polygon_1;
		int32_t L_99 = V_3;
		NullCheck(L_98);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_100;
		L_100 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_98, L_99, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_101 = L_100.___Y_1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_102 = V_5;
		int64_t L_103 = L_102.___Y_1;
		if ((!(((uint64_t)L_101) == ((uint64_t)L_103))))
		{
			goto IL_01f6;
		}
	}
	{
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_104 = V_1;
		NullCheck(L_104);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_105 = L_104->___m_polygon_1;
		int32_t L_106 = V_3;
		NullCheck(L_105);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_107;
		L_107 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_105, L_106, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_108 = L_107.___X_0;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_109 = V_5;
		int64_t L_110 = L_109.___X_0;
		if ((((int64_t)L_108) >= ((int64_t)L_110)))
		{
			goto IL_01f6;
		}
	}

IL_01db:
	{
		// m_lowest = new IntPoint(m_polyNodes.ChildCount - 1, k);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_111 = __this->___m_polyNodes_11;
		NullCheck(L_111);
		int32_t L_112;
		L_112 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_111, NULL);
		int32_t L_113 = V_3;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_114;
		memset((&L_114), 0, sizeof(L_114));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_114), ((int64_t)((int32_t)il2cpp_codegen_subtract(L_112, 1))), ((int64_t)L_113), /*hidden argument*/NULL);
		__this->___m_lowest_10 = L_114;
	}

IL_01f6:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::AddPaths(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>,Cinemachine.ClipperLib/JoinType,Cinemachine.ClipperLib/EndType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_AddPaths_m48B4B426171D6EEAE676FCDA8E55F6FBBCEE66A8 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, List_1_tD3D80A48908E0B8646110C913780E72E2157A541* ___paths0, int32_t ___joinType1, int32_t ___endType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m677FC8F8D71757745C78555FC7FDEB9B90F18E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m85FDC916AFDB03C731C1DE85A1AD64070EC621D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m89DC75068BCAAAA94D88C74FBD233EE5F3E96644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9865D2A6023BF15CE2F05EC3A2BD0A1ED1F72D43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* V_1 = NULL;
	{
		// foreach (Path p in paths)
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_0 = ___paths0;
		NullCheck(L_0);
		Enumerator_t81E7BC2C4AFB10AD8941F6F9BF613541A749A9C5 L_1;
		L_1 = List_1_GetEnumerator_m9865D2A6023BF15CE2F05EC3A2BD0A1ED1F72D43(L_0, List_1_GetEnumerator_m9865D2A6023BF15CE2F05EC3A2BD0A1ED1F72D43_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m677FC8F8D71757745C78555FC7FDEB9B90F18E6D((&V_0), Enumerator_Dispose_m677FC8F8D71757745C78555FC7FDEB9B90F18E6D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_0009_1:
			{
				// foreach (Path p in paths)
				List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_2;
				L_2 = Enumerator_get_Current_m89DC75068BCAAAA94D88C74FBD233EE5F3E96644_inline((&V_0), Enumerator_get_Current_m89DC75068BCAAAA94D88C74FBD233EE5F3E96644_RuntimeMethod_var);
				V_1 = L_2;
				// AddPath(p, joinType, endType);
				List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_3 = V_1;
				int32_t L_4 = ___joinType1;
				int32_t L_5 = ___endType2;
				ClipperOffset_AddPath_m30CDF70BFA54E89D99CBDD267D513347A6D46EEA(__this, L_3, L_4, L_5, NULL);
			}

IL_001a_1:
			{
				// foreach (Path p in paths)
				bool L_6;
				L_6 = Enumerator_MoveNext_m85FDC916AFDB03C731C1DE85A1AD64070EC621D0((&V_0), Enumerator_MoveNext_m85FDC916AFDB03C731C1DE85A1AD64070EC621D0_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::FixOrientations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_FixOrientations_m32685E41D88FB8B7FC06282DA7C128E197C7C518 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_mF0F13BCF460823FB136A0964BA8A8E3B30CAB5C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* V_1 = NULL;
	int32_t V_2 = 0;
	PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* V_3 = NULL;
	{
		// if (m_lowest.X >= 0 &&
		//   !Clipper.Orientation(m_polyNodes.Childs[(int)m_lowest.X].m_polygon))
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* L_0 = (&__this->___m_lowest_10);
		int64_t L_1 = L_0->___X_0;
		if ((((int64_t)L_1) < ((int64_t)((int64_t)0))))
		{
			goto IL_0089;
		}
	}
	{
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_2 = __this->___m_polyNodes_11;
		NullCheck(L_2);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_3;
		L_3 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_2, NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* L_4 = (&__this->___m_lowest_10);
		int64_t L_5 = L_4->___X_0;
		NullCheck(L_3);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_6;
		L_6 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_3, ((int32_t)L_5), List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_7 = L_6->___m_polygon_1;
		bool L_8;
		L_8 = Clipper_Orientation_mCCFCAC82598BB2359FAC352A25CC7CD9DF71E406(L_7, NULL);
		if (L_8)
		{
			goto IL_0089;
		}
	}
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		V_0 = 0;
		goto IL_007a;
	}

IL_003b:
	{
		// PolyNode node = m_polyNodes.Childs[i];
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_9 = __this->___m_polyNodes_11;
		NullCheck(L_9);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_10;
		L_10 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_12;
		L_12 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_10, L_11, List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		V_1 = L_12;
		// if (node.m_endtype == EndType.etClosedPolygon ||
		//   (node.m_endtype == EndType.etClosedLine &&
		//   Clipper.Orientation(node.m_polygon)))
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___m_endtype_4;
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___m_endtype_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_17 = V_1;
		NullCheck(L_17);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_18 = L_17->___m_polygon_1;
		bool L_19;
		L_19 = Clipper_Orientation_mCCFCAC82598BB2359FAC352A25CC7CD9DF71E406(L_18, NULL);
		if (!L_19)
		{
			goto IL_0076;
		}
	}

IL_006b:
	{
		// node.m_polygon.Reverse();
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_20 = V_1;
		NullCheck(L_20);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_21 = L_20->___m_polygon_1;
		NullCheck(L_21);
		List_1_Reverse_mF0F13BCF460823FB136A0964BA8A8E3B30CAB5C9(L_21, List_1_Reverse_mF0F13BCF460823FB136A0964BA8A8E3B30CAB5C9_RuntimeMethod_var);
	}

IL_0076:
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007a:
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		int32_t L_23 = V_0;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_24 = __this->___m_polyNodes_11;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_24, NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_0089:
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		V_2 = 0;
		goto IL_00c4;
	}

IL_008d:
	{
		// PolyNode node = m_polyNodes.Childs[i];
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_26 = __this->___m_polyNodes_11;
		NullCheck(L_26);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_27;
		L_27 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_26, NULL);
		int32_t L_28 = V_2;
		NullCheck(L_27);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_29;
		L_29 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_27, L_28, List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		V_3 = L_29;
		// if (node.m_endtype == EndType.etClosedLine &&
		//   !Clipper.Orientation(node.m_polygon))
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = L_30->___m_endtype_4;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00c0;
		}
	}
	{
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_32 = V_3;
		NullCheck(L_32);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_33 = L_32->___m_polygon_1;
		bool L_34;
		L_34 = Clipper_Orientation_mCCFCAC82598BB2359FAC352A25CC7CD9DF71E406(L_33, NULL);
		if (L_34)
		{
			goto IL_00c0;
		}
	}
	{
		// node.m_polygon.Reverse();
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_35 = V_3;
		NullCheck(L_35);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_36 = L_35->___m_polygon_1;
		NullCheck(L_36);
		List_1_Reverse_mF0F13BCF460823FB136A0964BA8A8E3B30CAB5C9(L_36, List_1_Reverse_mF0F13BCF460823FB136A0964BA8A8E3B30CAB5C9_RuntimeMethod_var);
	}

IL_00c0:
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00c4:
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		int32_t L_38 = V_2;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_39 = __this->___m_polyNodes_11;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_39, NULL);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_008d;
		}
	}
	{
		// }
		return;
	}
}
// Cinemachine.ClipperLib/DoublePoint Cinemachine.ClipperLib/ClipperOffset::GetUnitNormal(Cinemachine.ClipperLib/IntPoint,Cinemachine.ClipperLib/IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ClipperOffset_GetUnitNormal_mE79775AAC5E47077FE6EC3003830E30BA5D42786 (IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___pt10, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___pt21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// double dx = (pt2.X - pt1.X);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_0 = ___pt21;
		int64_t L_1 = L_0.___X_0;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_2 = ___pt10;
		int64_t L_3 = L_2.___X_0;
		V_0 = ((double)((int64_t)il2cpp_codegen_subtract(L_1, L_3)));
		// double dy = (pt2.Y - pt1.Y);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_4 = ___pt21;
		int64_t L_5 = L_4.___Y_1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_6 = ___pt10;
		int64_t L_7 = L_6.___Y_1;
		V_1 = ((double)((int64_t)il2cpp_codegen_subtract(L_5, L_7)));
		// if ((dx == 0) && (dy == 0)) return new DoublePoint();
		double L_8 = V_0;
		if ((!(((double)L_8) == ((double)(0.0)))))
		{
			goto IL_0040;
		}
	}
	{
		double L_9 = V_1;
		if ((!(((double)L_9) == ((double)(0.0)))))
		{
			goto IL_0040;
		}
	}
	{
		// if ((dx == 0) && (dy == 0)) return new DoublePoint();
		il2cpp_codegen_initobj((&V_3), sizeof(DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1));
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_10 = V_3;
		return L_10;
	}

IL_0040:
	{
		// double f = 1 * 1.0 / Math.Sqrt(dx * dx + dy * dy);
		double L_11 = V_0;
		double L_12 = V_0;
		double L_13 = V_1;
		double L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_11, L_12)), ((double)il2cpp_codegen_multiply(L_13, L_14)))));
		V_2 = ((double)((1.0)/L_15));
		// dx *= f;
		double L_16 = V_0;
		double L_17 = V_2;
		V_0 = ((double)il2cpp_codegen_multiply(L_16, L_17));
		// dy *= f;
		double L_18 = V_1;
		double L_19 = V_2;
		V_1 = ((double)il2cpp_codegen_multiply(L_18, L_19));
		// return new DoublePoint(dy, -dx);
		double L_20 = V_1;
		double L_21 = V_0;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_22;
		memset((&L_22), 0, sizeof(L_22));
		DoublePoint__ctor_m87B0A4A8419F7E7608DF989FFBD0E92295A0A72F((&L_22), L_20, ((-L_21)), /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::DoOffset(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_DoOffset_m21188ACCDBCEA566BFD6DEE0D03F9B5340CEF009 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, double ___delta0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m06668C0A3C120FA25245D89C14B0787E790F8D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m32AB5B53E1EAEF533CB62F1909BECF6C01854CB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m85A1A83D119CC5BFE0C4A6352E38591B5C6D5F14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m4C766CDFB68990BFC38564E2D5546DB93A740C74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mBB81853DDC94D55D5D7B50D95C949BADB3C79538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD3D80A48908E0B8646110C913780E72E2157A541_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* V_3 = NULL;
	int32_t V_4 = 0;
	PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* V_5 = NULL;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	int32_t V_9 = 0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	{
		// m_destPolys = new Paths();
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_0 = (List_1_tD3D80A48908E0B8646110C913780E72E2157A541*)il2cpp_codegen_object_new(List_1_tD3D80A48908E0B8646110C913780E72E2157A541_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m85A1A83D119CC5BFE0C4A6352E38591B5C6D5F14(L_0, List_1__ctor_m85A1A83D119CC5BFE0C4A6352E38591B5C6D5F14_RuntimeMethod_var);
		__this->___m_destPolys_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_destPolys_0), (void*)L_0);
		// m_delta = delta;
		double L_1 = ___delta0;
		__this->___m_delta_4 = L_1;
		// if (ClipperBase.near_zero(delta))
		double L_2 = ___delta0;
		bool L_3;
		L_3 = ClipperBase_near_zero_mDAFA25942FF6D795F79D917BD5A178F5085E0504(L_2, NULL);
		if (!L_3)
		{
			goto IL_0072;
		}
	}
	{
		// m_destPolys.Capacity = m_polyNodes.ChildCount;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_4 = __this->___m_destPolys_0;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_5 = __this->___m_polyNodes_11;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_5, NULL);
		NullCheck(L_4);
		List_1_set_Capacity_mBB81853DDC94D55D5D7B50D95C949BADB3C79538(L_4, L_6, List_1_set_Capacity_mBB81853DDC94D55D5D7B50D95C949BADB3C79538_RuntimeMethod_var);
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		V_2 = 0;
		goto IL_0063;
	}

IL_0034:
	{
		// PolyNode node = m_polyNodes.Childs[i];
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_7 = __this->___m_polyNodes_11;
		NullCheck(L_7);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_8;
		L_8 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_7, NULL);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_10;
		L_10 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_8, L_9, List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		V_3 = L_10;
		// if (node.m_endtype == EndType.etClosedPolygon)
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = L_11->___m_endtype_4;
		if (L_12)
		{
			goto IL_005f;
		}
	}
	{
		// m_destPolys.Add(node.m_polygon);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_13 = __this->___m_destPolys_0;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_14 = V_3;
		NullCheck(L_14);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_15 = L_14->___m_polygon_1;
		NullCheck(L_13);
		List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_inline(L_13, L_15, List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_RuntimeMethod_var);
	}

IL_005f:
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0063:
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		int32_t L_17 = V_2;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_18 = __this->___m_polyNodes_11;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_18, NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0034;
		}
	}
	{
		// return;
		return;
	}

IL_0072:
	{
		// if (MiterLimit > 2) m_miterLim = 2 / (MiterLimit * MiterLimit);
		double L_20;
		L_20 = ClipperOffset_get_MiterLimit_m12626F15B3A2B944F81E05ADBB263C8C3479D7DD_inline(__this, NULL);
		if ((!(((double)L_20) > ((double)(2.0)))))
		{
			goto IL_00a2;
		}
	}
	{
		// if (MiterLimit > 2) m_miterLim = 2 / (MiterLimit * MiterLimit);
		double L_21;
		L_21 = ClipperOffset_get_MiterLimit_m12626F15B3A2B944F81E05ADBB263C8C3479D7DD_inline(__this, NULL);
		double L_22;
		L_22 = ClipperOffset_get_MiterLimit_m12626F15B3A2B944F81E05ADBB263C8C3479D7DD_inline(__this, NULL);
		__this->___m_miterLim_8 = ((double)((2.0)/((double)il2cpp_codegen_multiply(L_21, L_22))));
		goto IL_00b1;
	}

IL_00a2:
	{
		// else m_miterLim = 0.5;
		__this->___m_miterLim_8 = (0.5);
	}

IL_00b1:
	{
		// if (ArcTolerance <= 0.0)
		double L_23;
		L_23 = ClipperOffset_get_ArcTolerance_m25B298CB94489BE792C4EF8870B396D2158C3E92_inline(__this, NULL);
		if ((!(((double)L_23) <= ((double)(0.0)))))
		{
			goto IL_00ce;
		}
	}
	{
		// y = def_arc_tolerance;
		V_0 = (0.25);
		goto IL_0100;
	}

IL_00ce:
	{
		// else if (ArcTolerance > Math.Abs(delta) * def_arc_tolerance)
		double L_24;
		L_24 = ClipperOffset_get_ArcTolerance_m25B298CB94489BE792C4EF8870B396D2158C3E92_inline(__this, NULL);
		double L_25 = ___delta0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = fabs(L_25);
		if ((!(((double)L_24) > ((double)((double)il2cpp_codegen_multiply(L_26, (0.25)))))))
		{
			goto IL_00f9;
		}
	}
	{
		// y = Math.Abs(delta) * def_arc_tolerance;
		double L_27 = ___delta0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_28;
		L_28 = fabs(L_27);
		V_0 = ((double)il2cpp_codegen_multiply(L_28, (0.25)));
		goto IL_0100;
	}

IL_00f9:
	{
		// y = ArcTolerance;
		double L_29;
		L_29 = ClipperOffset_get_ArcTolerance_m25B298CB94489BE792C4EF8870B396D2158C3E92_inline(__this, NULL);
		V_0 = L_29;
	}

IL_0100:
	{
		// double steps = Math.PI / Math.Acos(1 - y / Math.Abs(delta));
		double L_30 = V_0;
		double L_31 = ___delta0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = fabs(L_31);
		double L_33;
		L_33 = acos(((double)il2cpp_codegen_subtract((1.0), ((double)(L_30/L_32)))));
		V_1 = ((double)((3.1415926535897931)/L_33));
		// m_sin = Math.Sin(two_pi / steps);
		double L_34 = V_1;
		double L_35;
		L_35 = sin(((double)((6.2831853071795862)/L_34)));
		__this->___m_sin_6 = L_35;
		// m_cos = Math.Cos(two_pi / steps);
		double L_36 = V_1;
		double L_37;
		L_37 = cos(((double)((6.2831853071795862)/L_36)));
		__this->___m_cos_7 = L_37;
		// m_StepsPerRad = steps / two_pi;
		double L_38 = V_1;
		__this->___m_StepsPerRad_9 = ((double)(L_38/(6.2831853071795862)));
		// if (delta < 0.0) m_sin = -m_sin;
		double L_39 = ___delta0;
		if ((!(((double)L_39) < ((double)(0.0)))))
		{
			goto IL_0178;
		}
	}
	{
		// if (delta < 0.0) m_sin = -m_sin;
		double L_40 = __this->___m_sin_6;
		__this->___m_sin_6 = ((-L_40));
	}

IL_0178:
	{
		// m_destPolys.Capacity = m_polyNodes.ChildCount * 2;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_41 = __this->___m_destPolys_0;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_42 = __this->___m_polyNodes_11;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_42, NULL);
		NullCheck(L_41);
		List_1_set_Capacity_mBB81853DDC94D55D5D7B50D95C949BADB3C79538(L_41, ((int32_t)il2cpp_codegen_multiply(L_43, 2)), List_1_set_Capacity_mBB81853DDC94D55D5D7B50D95C949BADB3C79538_RuntimeMethod_var);
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		V_4 = 0;
		goto IL_08e1;
	}

IL_0198:
	{
		// PolyNode node = m_polyNodes.Childs[i];
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_44 = __this->___m_polyNodes_11;
		NullCheck(L_44);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_45;
		L_45 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_44, NULL);
		int32_t L_46 = V_4;
		NullCheck(L_45);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_47;
		L_47 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_45, L_46, List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		V_5 = L_47;
		// m_srcPoly = node.m_polygon;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_48 = V_5;
		NullCheck(L_48);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_49 = L_48->___m_polygon_1;
		__this->___m_srcPoly_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_srcPoly_1), (void*)L_49);
		// int len = m_srcPoly.Count;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_50 = __this->___m_srcPoly_1;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_inline(L_50, List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_RuntimeMethod_var);
		V_6 = L_51;
		// if (len == 0 || (delta <= 0 && (len < 3 ||
		//   node.m_endtype != EndType.etClosedPolygon)))
		int32_t L_52 = V_6;
		if (!L_52)
		{
			goto IL_08db;
		}
	}
	{
		double L_53 = ___delta0;
		if ((!(((double)L_53) <= ((double)(0.0)))))
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_54 = V_6;
		if ((((int32_t)L_54) < ((int32_t)3)))
		{
			goto IL_08db;
		}
	}
	{
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_55 = V_5;
		NullCheck(L_55);
		int32_t L_56 = L_55->___m_endtype_4;
		if (L_56)
		{
			goto IL_08db;
		}
	}

IL_01ed:
	{
		// m_destPoly = new Path();
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_57 = (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*)il2cpp_codegen_object_new(List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		List_1__ctor_m32AB5B53E1EAEF533CB62F1909BECF6C01854CB9(L_57, List_1__ctor_m32AB5B53E1EAEF533CB62F1909BECF6C01854CB9_RuntimeMethod_var);
		__this->___m_destPoly_2 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_destPoly_2), (void*)L_57);
		// if (len == 1)
		int32_t L_58 = V_6;
		if ((!(((uint32_t)L_58) == ((uint32_t)1))))
		{
			goto IL_0374;
		}
	}
	{
		// if (node.m_jointype == JoinType.jtRound)
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_59 = V_5;
		NullCheck(L_59);
		int32_t L_60 = L_59->___m_jointype_3;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_02ab;
		}
	}
	{
		// double X = 1.0, Y = 0.0;
		V_7 = (1.0);
		// double X = 1.0, Y = 0.0;
		V_8 = (0.0);
		// for (int j = 1; j <= steps; j++)
		V_9 = 1;
		goto IL_02a0;
	}

IL_0228:
	{
		// m_destPoly.Add(new IntPoint(
		//   Round(m_srcPoly[0].X + X * delta),
		//   Round(m_srcPoly[0].Y + Y * delta)));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_61 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_62 = __this->___m_srcPoly_1;
		NullCheck(L_62);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_63;
		L_63 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_62, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_64 = L_63.___X_0;
		double L_65 = V_7;
		double L_66 = ___delta0;
		int64_t L_67;
		L_67 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_64), ((double)il2cpp_codegen_multiply(L_65, L_66)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_68 = __this->___m_srcPoly_1;
		NullCheck(L_68);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_69;
		L_69 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_68, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_70 = L_69.___Y_1;
		double L_71 = V_8;
		double L_72 = ___delta0;
		int64_t L_73;
		L_73 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_70), ((double)il2cpp_codegen_multiply(L_71, L_72)))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_74;
		memset((&L_74), 0, sizeof(L_74));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_74), L_67, L_73, /*hidden argument*/NULL);
		NullCheck(L_61);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_61, L_74, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// double X2 = X;
		double L_75 = V_7;
		// X = X * m_cos - m_sin * Y;
		double L_76 = V_7;
		double L_77 = __this->___m_cos_7;
		double L_78 = __this->___m_sin_6;
		double L_79 = V_8;
		V_7 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_76, L_77)), ((double)il2cpp_codegen_multiply(L_78, L_79))));
		// Y = X2 * m_sin + Y * m_cos;
		double L_80 = __this->___m_sin_6;
		double L_81 = V_8;
		double L_82 = __this->___m_cos_7;
		V_8 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_75, L_80)), ((double)il2cpp_codegen_multiply(L_81, L_82))));
		// for (int j = 1; j <= steps; j++)
		int32_t L_83 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_02a0:
	{
		// for (int j = 1; j <= steps; j++)
		int32_t L_84 = V_9;
		double L_85 = V_1;
		if ((((double)((double)L_84)) <= ((double)L_85)))
		{
			goto IL_0228;
		}
	}
	{
		goto IL_035e;
	}

IL_02ab:
	{
		// double X = -1.0, Y = -1.0;
		V_10 = (-1.0);
		// double X = -1.0, Y = -1.0;
		V_11 = (-1.0);
		// for (int j = 0; j < 4; ++j)
		V_12 = 0;
		goto IL_0356;
	}

IL_02c9:
	{
		// m_destPoly.Add(new IntPoint(
		//   Round(m_srcPoly[0].X + X * delta),
		//   Round(m_srcPoly[0].Y + Y * delta)));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_86 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_87 = __this->___m_srcPoly_1;
		NullCheck(L_87);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_88;
		L_88 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_87, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_89 = L_88.___X_0;
		double L_90 = V_10;
		double L_91 = ___delta0;
		int64_t L_92;
		L_92 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_89), ((double)il2cpp_codegen_multiply(L_90, L_91)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_93 = __this->___m_srcPoly_1;
		NullCheck(L_93);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_94;
		L_94 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_93, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_95 = L_94.___Y_1;
		double L_96 = V_11;
		double L_97 = ___delta0;
		int64_t L_98;
		L_98 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_95), ((double)il2cpp_codegen_multiply(L_96, L_97)))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_99;
		memset((&L_99), 0, sizeof(L_99));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_99), L_92, L_98, /*hidden argument*/NULL);
		NullCheck(L_86);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_86, L_99, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// if (X < 0) X = 1;
		double L_100 = V_10;
		if ((!(((double)L_100) < ((double)(0.0)))))
		{
			goto IL_032b;
		}
	}
	{
		// if (X < 0) X = 1;
		V_10 = (1.0);
		goto IL_0350;
	}

IL_032b:
	{
		// else if (Y < 0) Y = 1;
		double L_101 = V_11;
		if ((!(((double)L_101) < ((double)(0.0)))))
		{
			goto IL_0345;
		}
	}
	{
		// else if (Y < 0) Y = 1;
		V_11 = (1.0);
		goto IL_0350;
	}

IL_0345:
	{
		// else X = -1;
		V_10 = (-1.0);
	}

IL_0350:
	{
		// for (int j = 0; j < 4; ++j)
		int32_t L_102 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_0356:
	{
		// for (int j = 0; j < 4; ++j)
		int32_t L_103 = V_12;
		if ((((int32_t)L_103) < ((int32_t)4)))
		{
			goto IL_02c9;
		}
	}

IL_035e:
	{
		// m_destPolys.Add(m_destPoly);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_104 = __this->___m_destPolys_0;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_105 = __this->___m_destPoly_2;
		NullCheck(L_104);
		List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_inline(L_104, L_105, List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_RuntimeMethod_var);
		// continue;
		goto IL_08db;
	}

IL_0374:
	{
		// m_normals.Clear();
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_106 = __this->___m_normals_3;
		NullCheck(L_106);
		List_1_Clear_m06668C0A3C120FA25245D89C14B0787E790F8D13_inline(L_106, List_1_Clear_m06668C0A3C120FA25245D89C14B0787E790F8D13_RuntimeMethod_var);
		// m_normals.Capacity = len;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_107 = __this->___m_normals_3;
		int32_t L_108 = V_6;
		NullCheck(L_107);
		List_1_set_Capacity_m4C766CDFB68990BFC38564E2D5546DB93A740C74(L_107, L_108, List_1_set_Capacity_m4C766CDFB68990BFC38564E2D5546DB93A740C74_RuntimeMethod_var);
		// for (int j = 0; j < len - 1; j++)
		V_13 = 0;
		goto IL_03c3;
	}

IL_0391:
	{
		// m_normals.Add(GetUnitNormal(m_srcPoly[j], m_srcPoly[j + 1]));
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_109 = __this->___m_normals_3;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_110 = __this->___m_srcPoly_1;
		int32_t L_111 = V_13;
		NullCheck(L_110);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_112;
		L_112 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_110, L_111, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_113 = __this->___m_srcPoly_1;
		int32_t L_114 = V_13;
		NullCheck(L_113);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_115;
		L_115 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_113, ((int32_t)il2cpp_codegen_add(L_114, 1)), List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_116;
		L_116 = ClipperOffset_GetUnitNormal_mE79775AAC5E47077FE6EC3003830E30BA5D42786(L_112, L_115, NULL);
		NullCheck(L_109);
		List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_inline(L_109, L_116, List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_RuntimeMethod_var);
		// for (int j = 0; j < len - 1; j++)
		int32_t L_117 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_03c3:
	{
		// for (int j = 0; j < len - 1; j++)
		int32_t L_118 = V_13;
		int32_t L_119 = V_6;
		if ((((int32_t)L_118) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_119, 1)))))
		{
			goto IL_0391;
		}
	}
	{
		// if (node.m_endtype == EndType.etClosedLine ||
		//   node.m_endtype == EndType.etClosedPolygon)
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_120 = V_5;
		NullCheck(L_120);
		int32_t L_121 = L_120->___m_endtype_4;
		if ((((int32_t)L_121) == ((int32_t)1)))
		{
			goto IL_03de;
		}
	}
	{
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_122 = V_5;
		NullCheck(L_122);
		int32_t L_123 = L_122->___m_endtype_4;
		if (L_123)
		{
			goto IL_040b;
		}
	}

IL_03de:
	{
		// m_normals.Add(GetUnitNormal(m_srcPoly[len - 1], m_srcPoly[0]));
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_124 = __this->___m_normals_3;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_125 = __this->___m_srcPoly_1;
		int32_t L_126 = V_6;
		NullCheck(L_125);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_127;
		L_127 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_125, ((int32_t)il2cpp_codegen_subtract(L_126, 1)), List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_128 = __this->___m_srcPoly_1;
		NullCheck(L_128);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_129;
		L_129 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_128, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_130;
		L_130 = ClipperOffset_GetUnitNormal_mE79775AAC5E47077FE6EC3003830E30BA5D42786(L_127, L_129, NULL);
		NullCheck(L_124);
		List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_inline(L_124, L_130, List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_RuntimeMethod_var);
		goto IL_042a;
	}

IL_040b:
	{
		// m_normals.Add(new DoublePoint(m_normals[len - 2]));
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_131 = __this->___m_normals_3;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_132 = __this->___m_normals_3;
		int32_t L_133 = V_6;
		NullCheck(L_132);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_134;
		L_134 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_132, ((int32_t)il2cpp_codegen_subtract(L_133, 2)), List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_135;
		memset((&L_135), 0, sizeof(L_135));
		DoublePoint__ctor_m1DD41CFCE7D02EDD548BC15B67AF3A5FF8919DAB((&L_135), L_134, /*hidden argument*/NULL);
		NullCheck(L_131);
		List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_inline(L_131, L_135, List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_RuntimeMethod_var);
	}

IL_042a:
	{
		// if (node.m_endtype == EndType.etClosedPolygon)
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_136 = V_5;
		NullCheck(L_136);
		int32_t L_137 = L_136->___m_endtype_4;
		if (L_137)
		{
			goto IL_0471;
		}
	}
	{
		// int k = len - 1;
		int32_t L_138 = V_6;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
		// for (int j = 0; j < len; j++)
		V_15 = 0;
		goto IL_0455;
	}

IL_043e:
	{
		// OffsetPoint(j, ref k, node.m_jointype);
		int32_t L_139 = V_15;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_140 = V_5;
		NullCheck(L_140);
		int32_t L_141 = L_140->___m_jointype_3;
		ClipperOffset_OffsetPoint_mA364CFD851041996876AA12D1E32CB8CD56FD35F(__this, L_139, (&V_14), L_141, NULL);
		// for (int j = 0; j < len; j++)
		int32_t L_142 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_0455:
	{
		// for (int j = 0; j < len; j++)
		int32_t L_143 = V_15;
		int32_t L_144 = V_6;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_043e;
		}
	}
	{
		// m_destPolys.Add(m_destPoly);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_145 = __this->___m_destPolys_0;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_146 = __this->___m_destPoly_2;
		NullCheck(L_145);
		List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_inline(L_145, L_146, List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_RuntimeMethod_var);
		goto IL_08db;
	}

IL_0471:
	{
		// else if (node.m_endtype == EndType.etClosedLine)
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_147 = V_5;
		NullCheck(L_147);
		int32_t L_148 = L_147->___m_endtype_4;
		if ((!(((uint32_t)L_148) == ((uint32_t)1))))
		{
			goto IL_0580;
		}
	}
	{
		// int k = len - 1;
		int32_t L_149 = V_6;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_149, 1));
		// for (int j = 0; j < len; j++)
		V_18 = 0;
		goto IL_04a0;
	}

IL_0489:
	{
		// OffsetPoint(j, ref k, node.m_jointype);
		int32_t L_150 = V_18;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_151 = V_5;
		NullCheck(L_151);
		int32_t L_152 = L_151->___m_jointype_3;
		ClipperOffset_OffsetPoint_mA364CFD851041996876AA12D1E32CB8CD56FD35F(__this, L_150, (&V_16), L_152, NULL);
		// for (int j = 0; j < len; j++)
		int32_t L_153 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_153, 1));
	}

IL_04a0:
	{
		// for (int j = 0; j < len; j++)
		int32_t L_154 = V_18;
		int32_t L_155 = V_6;
		if ((((int32_t)L_154) < ((int32_t)L_155)))
		{
			goto IL_0489;
		}
	}
	{
		// m_destPolys.Add(m_destPoly);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_156 = __this->___m_destPolys_0;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_157 = __this->___m_destPoly_2;
		NullCheck(L_156);
		List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_inline(L_156, L_157, List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_RuntimeMethod_var);
		// m_destPoly = new Path();
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_158 = (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*)il2cpp_codegen_object_new(List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C_il2cpp_TypeInfo_var);
		NullCheck(L_158);
		List_1__ctor_m32AB5B53E1EAEF533CB62F1909BECF6C01854CB9(L_158, List_1__ctor_m32AB5B53E1EAEF533CB62F1909BECF6C01854CB9_RuntimeMethod_var);
		__this->___m_destPoly_2 = L_158;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_destPoly_2), (void*)L_158);
		// DoublePoint n = m_normals[len - 1];
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_159 = __this->___m_normals_3;
		int32_t L_160 = V_6;
		NullCheck(L_159);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_161;
		L_161 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_159, ((int32_t)il2cpp_codegen_subtract(L_160, 1)), List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		V_17 = L_161;
		// for (int j = len - 1; j > 0; j--)
		int32_t L_162 = V_6;
		V_19 = ((int32_t)il2cpp_codegen_subtract(L_162, 1));
		goto IL_051d;
	}

IL_04db:
	{
		// m_normals[j] = new DoublePoint(-m_normals[j - 1].X, -m_normals[j - 1].Y);
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_163 = __this->___m_normals_3;
		int32_t L_164 = V_19;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_165 = __this->___m_normals_3;
		int32_t L_166 = V_19;
		NullCheck(L_165);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_167;
		L_167 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_165, ((int32_t)il2cpp_codegen_subtract(L_166, 1)), List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_168 = L_167.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_169 = __this->___m_normals_3;
		int32_t L_170 = V_19;
		NullCheck(L_169);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_171;
		L_171 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_169, ((int32_t)il2cpp_codegen_subtract(L_170, 1)), List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_172 = L_171.___Y_1;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_173;
		memset((&L_173), 0, sizeof(L_173));
		DoublePoint__ctor_m87B0A4A8419F7E7608DF989FFBD0E92295A0A72F((&L_173), ((-L_168)), ((-L_172)), /*hidden argument*/NULL);
		NullCheck(L_163);
		List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E(L_163, L_164, L_173, List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E_RuntimeMethod_var);
		// for (int j = len - 1; j > 0; j--)
		int32_t L_174 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_subtract(L_174, 1));
	}

IL_051d:
	{
		// for (int j = len - 1; j > 0; j--)
		int32_t L_175 = V_19;
		if ((((int32_t)L_175) > ((int32_t)0)))
		{
			goto IL_04db;
		}
	}
	{
		// m_normals[0] = new DoublePoint(-n.X, -n.Y);
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_176 = __this->___m_normals_3;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_177 = V_17;
		double L_178 = L_177.___X_0;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_179 = V_17;
		double L_180 = L_179.___Y_1;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_181;
		memset((&L_181), 0, sizeof(L_181));
		DoublePoint__ctor_m87B0A4A8419F7E7608DF989FFBD0E92295A0A72F((&L_181), ((-L_178)), ((-L_180)), /*hidden argument*/NULL);
		NullCheck(L_176);
		List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E(L_176, 0, L_181, List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E_RuntimeMethod_var);
		// k = 0;
		V_16 = 0;
		// for (int j = len - 1; j >= 0; j--)
		int32_t L_182 = V_6;
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_182, 1));
		goto IL_0565;
	}

IL_054e:
	{
		// OffsetPoint(j, ref k, node.m_jointype);
		int32_t L_183 = V_20;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_184 = V_5;
		NullCheck(L_184);
		int32_t L_185 = L_184->___m_jointype_3;
		ClipperOffset_OffsetPoint_mA364CFD851041996876AA12D1E32CB8CD56FD35F(__this, L_183, (&V_16), L_185, NULL);
		// for (int j = len - 1; j >= 0; j--)
		int32_t L_186 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_186, 1));
	}

IL_0565:
	{
		// for (int j = len - 1; j >= 0; j--)
		int32_t L_187 = V_20;
		if ((((int32_t)L_187) >= ((int32_t)0)))
		{
			goto IL_054e;
		}
	}
	{
		// m_destPolys.Add(m_destPoly);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_188 = __this->___m_destPolys_0;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_189 = __this->___m_destPoly_2;
		NullCheck(L_188);
		List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_inline(L_188, L_189, List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_RuntimeMethod_var);
		goto IL_08db;
	}

IL_0580:
	{
		// int k = 0;
		V_21 = 0;
		// for (int j = 1; j < len - 1; ++j)
		V_23 = 1;
		goto IL_059f;
	}

IL_0588:
	{
		// OffsetPoint(j, ref k, node.m_jointype);
		int32_t L_190 = V_23;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_191 = V_5;
		NullCheck(L_191);
		int32_t L_192 = L_191->___m_jointype_3;
		ClipperOffset_OffsetPoint_mA364CFD851041996876AA12D1E32CB8CD56FD35F(__this, L_190, (&V_21), L_192, NULL);
		// for (int j = 1; j < len - 1; ++j)
		int32_t L_193 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_193, 1));
	}

IL_059f:
	{
		// for (int j = 1; j < len - 1; ++j)
		int32_t L_194 = V_23;
		int32_t L_195 = V_6;
		if ((((int32_t)L_194) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_195, 1)))))
		{
			goto IL_0588;
		}
	}
	{
		// if (node.m_endtype == EndType.etOpenButt)
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_196 = V_5;
		NullCheck(L_196);
		int32_t L_197 = L_196->___m_endtype_4;
		if ((!(((uint32_t)L_197) == ((uint32_t)2))))
		{
			goto IL_0698;
		}
	}
	{
		// int j = len - 1;
		int32_t L_198 = V_6;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_198, 1));
		// pt1 = new IntPoint((cInt)Round(m_srcPoly[j].X + m_normals[j].X *
		//   delta), (cInt)Round(m_srcPoly[j].Y + m_normals[j].Y * delta));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_199 = __this->___m_srcPoly_1;
		int32_t L_200 = V_24;
		NullCheck(L_199);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_201;
		L_201 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_199, L_200, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_202 = L_201.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_203 = __this->___m_normals_3;
		int32_t L_204 = V_24;
		NullCheck(L_203);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_205;
		L_205 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_203, L_204, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_206 = L_205.___X_0;
		double L_207 = ___delta0;
		int64_t L_208;
		L_208 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_202), ((double)il2cpp_codegen_multiply(L_206, L_207)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_209 = __this->___m_srcPoly_1;
		int32_t L_210 = V_24;
		NullCheck(L_209);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_211;
		L_211 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_209, L_210, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_212 = L_211.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_213 = __this->___m_normals_3;
		int32_t L_214 = V_24;
		NullCheck(L_213);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_215;
		L_215 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_213, L_214, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_216 = L_215.___Y_1;
		double L_217 = ___delta0;
		int64_t L_218;
		L_218 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_212), ((double)il2cpp_codegen_multiply(L_216, L_217)))), NULL);
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&V_22), L_208, L_218, NULL);
		// m_destPoly.Add(pt1);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_219 = __this->___m_destPoly_2;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_220 = V_22;
		NullCheck(L_219);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_219, L_220, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// pt1 = new IntPoint((cInt)Round(m_srcPoly[j].X - m_normals[j].X *
		//   delta), (cInt)Round(m_srcPoly[j].Y - m_normals[j].Y * delta));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_221 = __this->___m_srcPoly_1;
		int32_t L_222 = V_24;
		NullCheck(L_221);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_223;
		L_223 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_221, L_222, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_224 = L_223.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_225 = __this->___m_normals_3;
		int32_t L_226 = V_24;
		NullCheck(L_225);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_227;
		L_227 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_225, L_226, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_228 = L_227.___X_0;
		double L_229 = ___delta0;
		int64_t L_230;
		L_230 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_subtract(((double)L_224), ((double)il2cpp_codegen_multiply(L_228, L_229)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_231 = __this->___m_srcPoly_1;
		int32_t L_232 = V_24;
		NullCheck(L_231);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_233;
		L_233 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_231, L_232, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_234 = L_233.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_235 = __this->___m_normals_3;
		int32_t L_236 = V_24;
		NullCheck(L_235);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_237;
		L_237 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_235, L_236, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_238 = L_237.___Y_1;
		double L_239 = ___delta0;
		int64_t L_240;
		L_240 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_subtract(((double)L_234), ((double)il2cpp_codegen_multiply(L_238, L_239)))), NULL);
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&V_22), L_230, L_240, NULL);
		// m_destPoly.Add(pt1);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_241 = __this->___m_destPoly_2;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_242 = V_22;
		NullCheck(L_241);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_241, L_242, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		goto IL_070b;
	}

IL_0698:
	{
		// int j = len - 1;
		int32_t L_243 = V_6;
		V_25 = ((int32_t)il2cpp_codegen_subtract(L_243, 1));
		// k = len - 2;
		int32_t L_244 = V_6;
		V_21 = ((int32_t)il2cpp_codegen_subtract(L_244, 2));
		// m_sinA = 0;
		__this->___m_sinA_5 = (0.0);
		// m_normals[j] = new DoublePoint(-m_normals[j].X, -m_normals[j].Y);
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_245 = __this->___m_normals_3;
		int32_t L_246 = V_25;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_247 = __this->___m_normals_3;
		int32_t L_248 = V_25;
		NullCheck(L_247);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_249;
		L_249 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_247, L_248, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_250 = L_249.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_251 = __this->___m_normals_3;
		int32_t L_252 = V_25;
		NullCheck(L_251);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_253;
		L_253 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_251, L_252, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_254 = L_253.___Y_1;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_255;
		memset((&L_255), 0, sizeof(L_255));
		DoublePoint__ctor_m87B0A4A8419F7E7608DF989FFBD0E92295A0A72F((&L_255), ((-L_250)), ((-L_254)), /*hidden argument*/NULL);
		NullCheck(L_245);
		List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E(L_245, L_246, L_255, List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E_RuntimeMethod_var);
		// if (node.m_endtype == EndType.etOpenSquare)
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_256 = V_5;
		NullCheck(L_256);
		int32_t L_257 = L_256->___m_endtype_4;
		if ((!(((uint32_t)L_257) == ((uint32_t)3))))
		{
			goto IL_0701;
		}
	}
	{
		// DoSquare(j, k);
		int32_t L_258 = V_25;
		int32_t L_259 = V_21;
		ClipperOffset_DoSquare_m6FF4AC6A3D3A432776BEA5EC3869CC1EED8807D8(__this, L_258, L_259, NULL);
		goto IL_070b;
	}

IL_0701:
	{
		// DoRound(j, k);
		int32_t L_260 = V_25;
		int32_t L_261 = V_21;
		ClipperOffset_DoRound_m87BA50E7B0346922ACC73C69B6D28E9099E42692(__this, L_260, L_261, NULL);
	}

IL_070b:
	{
		// for (int j = len - 1; j > 0; j--)
		int32_t L_262 = V_6;
		V_26 = ((int32_t)il2cpp_codegen_subtract(L_262, 1));
		goto IL_0755;
	}

IL_0713:
	{
		// m_normals[j] = new DoublePoint(-m_normals[j - 1].X, -m_normals[j - 1].Y);
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_263 = __this->___m_normals_3;
		int32_t L_264 = V_26;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_265 = __this->___m_normals_3;
		int32_t L_266 = V_26;
		NullCheck(L_265);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_267;
		L_267 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_265, ((int32_t)il2cpp_codegen_subtract(L_266, 1)), List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_268 = L_267.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_269 = __this->___m_normals_3;
		int32_t L_270 = V_26;
		NullCheck(L_269);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_271;
		L_271 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_269, ((int32_t)il2cpp_codegen_subtract(L_270, 1)), List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_272 = L_271.___Y_1;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_273;
		memset((&L_273), 0, sizeof(L_273));
		DoublePoint__ctor_m87B0A4A8419F7E7608DF989FFBD0E92295A0A72F((&L_273), ((-L_268)), ((-L_272)), /*hidden argument*/NULL);
		NullCheck(L_263);
		List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E(L_263, L_264, L_273, List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E_RuntimeMethod_var);
		// for (int j = len - 1; j > 0; j--)
		int32_t L_274 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_subtract(L_274, 1));
	}

IL_0755:
	{
		// for (int j = len - 1; j > 0; j--)
		int32_t L_275 = V_26;
		if ((((int32_t)L_275) > ((int32_t)0)))
		{
			goto IL_0713;
		}
	}
	{
		// m_normals[0] = new DoublePoint(-m_normals[1].X, -m_normals[1].Y);
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_276 = __this->___m_normals_3;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_277 = __this->___m_normals_3;
		NullCheck(L_277);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_278;
		L_278 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_277, 1, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_279 = L_278.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_280 = __this->___m_normals_3;
		NullCheck(L_280);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_281;
		L_281 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_280, 1, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_282 = L_281.___Y_1;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_283;
		memset((&L_283), 0, sizeof(L_283));
		DoublePoint__ctor_m87B0A4A8419F7E7608DF989FFBD0E92295A0A72F((&L_283), ((-L_279)), ((-L_282)), /*hidden argument*/NULL);
		NullCheck(L_276);
		List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E(L_276, 0, L_283, List_1_set_Item_m335A5CC6C0D1B0131D0EB543FEE3636A89F6126E_RuntimeMethod_var);
		// k = len - 1;
		int32_t L_284 = V_6;
		V_21 = ((int32_t)il2cpp_codegen_subtract(L_284, 1));
		// for (int j = k - 1; j > 0; --j)
		int32_t L_285 = V_21;
		V_27 = ((int32_t)il2cpp_codegen_subtract(L_285, 1));
		goto IL_07b4;
	}

IL_079d:
	{
		// OffsetPoint(j, ref k, node.m_jointype);
		int32_t L_286 = V_27;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_287 = V_5;
		NullCheck(L_287);
		int32_t L_288 = L_287->___m_jointype_3;
		ClipperOffset_OffsetPoint_mA364CFD851041996876AA12D1E32CB8CD56FD35F(__this, L_286, (&V_21), L_288, NULL);
		// for (int j = k - 1; j > 0; --j)
		int32_t L_289 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_subtract(L_289, 1));
	}

IL_07b4:
	{
		// for (int j = k - 1; j > 0; --j)
		int32_t L_290 = V_27;
		if ((((int32_t)L_290) > ((int32_t)0)))
		{
			goto IL_079d;
		}
	}
	{
		// if (node.m_endtype == EndType.etOpenButt)
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_291 = V_5;
		NullCheck(L_291);
		int32_t L_292 = L_291->___m_endtype_4;
		if ((!(((uint32_t)L_292) == ((uint32_t)2))))
		{
			goto IL_089c;
		}
	}
	{
		// pt1 = new IntPoint((cInt)Round(m_srcPoly[0].X - m_normals[0].X * delta),
		//   (cInt)Round(m_srcPoly[0].Y - m_normals[0].Y * delta));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_293 = __this->___m_srcPoly_1;
		NullCheck(L_293);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_294;
		L_294 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_293, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_295 = L_294.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_296 = __this->___m_normals_3;
		NullCheck(L_296);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_297;
		L_297 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_296, 0, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_298 = L_297.___X_0;
		double L_299 = ___delta0;
		int64_t L_300;
		L_300 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_subtract(((double)L_295), ((double)il2cpp_codegen_multiply(L_298, L_299)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_301 = __this->___m_srcPoly_1;
		NullCheck(L_301);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_302;
		L_302 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_301, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_303 = L_302.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_304 = __this->___m_normals_3;
		NullCheck(L_304);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_305;
		L_305 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_304, 0, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_306 = L_305.___Y_1;
		double L_307 = ___delta0;
		int64_t L_308;
		L_308 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_subtract(((double)L_303), ((double)il2cpp_codegen_multiply(L_306, L_307)))), NULL);
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&V_22), L_300, L_308, NULL);
		// m_destPoly.Add(pt1);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_309 = __this->___m_destPoly_2;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_310 = V_22;
		NullCheck(L_309);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_309, L_310, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// pt1 = new IntPoint((cInt)Round(m_srcPoly[0].X + m_normals[0].X * delta),
		//   (cInt)Round(m_srcPoly[0].Y + m_normals[0].Y * delta));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_311 = __this->___m_srcPoly_1;
		NullCheck(L_311);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_312;
		L_312 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_311, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_313 = L_312.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_314 = __this->___m_normals_3;
		NullCheck(L_314);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_315;
		L_315 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_314, 0, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_316 = L_315.___X_0;
		double L_317 = ___delta0;
		int64_t L_318;
		L_318 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_313), ((double)il2cpp_codegen_multiply(L_316, L_317)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_319 = __this->___m_srcPoly_1;
		NullCheck(L_319);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_320;
		L_320 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_319, 0, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_321 = L_320.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_322 = __this->___m_normals_3;
		NullCheck(L_322);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_323;
		L_323 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_322, 0, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_324 = L_323.___Y_1;
		double L_325 = ___delta0;
		int64_t L_326;
		L_326 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_321), ((double)il2cpp_codegen_multiply(L_324, L_325)))), NULL);
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&V_22), L_318, L_326, NULL);
		// m_destPoly.Add(pt1);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_327 = __this->___m_destPoly_2;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_328 = V_22;
		NullCheck(L_327);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_327, L_328, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		goto IL_08ca;
	}

IL_089c:
	{
		// k = 1;
		V_21 = 1;
		// m_sinA = 0;
		__this->___m_sinA_5 = (0.0);
		// if (node.m_endtype == EndType.etOpenSquare)
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_329 = V_5;
		NullCheck(L_329);
		int32_t L_330 = L_329->___m_endtype_4;
		if ((!(((uint32_t)L_330) == ((uint32_t)3))))
		{
			goto IL_08c2;
		}
	}
	{
		// DoSquare(0, 1);
		ClipperOffset_DoSquare_m6FF4AC6A3D3A432776BEA5EC3869CC1EED8807D8(__this, 0, 1, NULL);
		goto IL_08ca;
	}

IL_08c2:
	{
		// DoRound(0, 1);
		ClipperOffset_DoRound_m87BA50E7B0346922ACC73C69B6D28E9099E42692(__this, 0, 1, NULL);
	}

IL_08ca:
	{
		// m_destPolys.Add(m_destPoly);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_331 = __this->___m_destPolys_0;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_332 = __this->___m_destPoly_2;
		NullCheck(L_331);
		List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_inline(L_331, L_332, List_1_Add_m91C4D95B34BA9009B7C8B6905B55C22BC94B571A_RuntimeMethod_var);
	}

IL_08db:
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		int32_t L_333 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_333, 1));
	}

IL_08e1:
	{
		// for (int i = 0; i < m_polyNodes.ChildCount; i++)
		int32_t L_334 = V_4;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_335 = __this->___m_polyNodes_11;
		NullCheck(L_335);
		int32_t L_336;
		L_336 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_335, NULL);
		if ((((int32_t)L_334) < ((int32_t)L_336)))
		{
			goto IL_0198;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::Execute(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>>&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_Execute_mB6E649005853A610D808D8E5F0CBB8EDE436D7C7 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, List_1_tD3D80A48908E0B8646110C913780E72E2157A541** ___solution0, double ___delta1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mCEFDEE1CDCD179EC42CACBA45A68043B2F6EF9B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m7747D3473584FC32EC00DAFA15732DD41926AF60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3EA042A7A6709E4B248A6AEF39800F2BCB5D418B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* V_0 = NULL;
	IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* V_2 = NULL;
	{
		// solution.Clear();
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541** L_0 = ___solution0;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_1 = *((List_1_tD3D80A48908E0B8646110C913780E72E2157A541**)L_0);
		NullCheck(L_1);
		List_1_Clear_mCEFDEE1CDCD179EC42CACBA45A68043B2F6EF9B0_inline(L_1, List_1_Clear_mCEFDEE1CDCD179EC42CACBA45A68043B2F6EF9B0_RuntimeMethod_var);
		// FixOrientations();
		ClipperOffset_FixOrientations_m32685E41D88FB8B7FC06282DA7C128E197C7C518(__this, NULL);
		// DoOffset(delta);
		double L_2 = ___delta1;
		ClipperOffset_DoOffset_m21188ACCDBCEA566BFD6DEE0D03F9B5340CEF009(__this, L_2, NULL);
		// Clipper clpr = new Clipper();
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_3 = (Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A*)il2cpp_codegen_object_new(Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Clipper__ctor_mFE1DEBE1F52B653F893824C803EC03A94560C146(L_3, 0, NULL);
		V_0 = L_3;
		// clpr.AddPaths(m_destPolys, PolyType.ptSubject, true);
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_4 = V_0;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_5 = __this->___m_destPolys_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = ClipperBase_AddPaths_m3A4E3756B561A396C16E4658743F61D088FA2EEA(L_4, L_5, 0, (bool)1, NULL);
		// if (delta > 0)
		double L_7 = ___delta1;
		if ((!(((double)L_7) > ((double)(0.0)))))
		{
			goto IL_0043;
		}
	}
	{
		// clpr.Execute(ClipType.ctUnion, solution,
		//   PolyFillType.pftPositive, PolyFillType.pftPositive);
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_8 = V_0;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541** L_9 = ___solution0;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_10 = *((List_1_tD3D80A48908E0B8646110C913780E72E2157A541**)L_9);
		NullCheck(L_8);
		bool L_11;
		L_11 = Clipper_Execute_mD4963862505A6417805A36BDC8EE3551AF5227A0(L_8, 1, L_10, 2, 2, NULL);
		return;
	}

IL_0043:
	{
		// IntRect r = Clipper.GetBounds(m_destPolys);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_12 = __this->___m_destPolys_0;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_13;
		L_13 = ClipperBase_GetBounds_mC13AB297ABF4C0D5C98672C33C9B8358242A0ED7(L_12, NULL);
		V_1 = L_13;
		// Path outer = new Path(4);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_14 = (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*)il2cpp_codegen_object_new(List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6(L_14, 4, List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6_RuntimeMethod_var);
		V_2 = L_14;
		// outer.Add(new IntPoint(r.left - 10, r.bottom + 10));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_15 = V_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_16 = V_1;
		int64_t L_17 = L_16.___left_0;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_18 = V_1;
		int64_t L_19 = L_18.___bottom_3;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_20;
		memset((&L_20), 0, sizeof(L_20));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_20), ((int64_t)il2cpp_codegen_subtract(L_17, ((int64_t)((int32_t)10)))), ((int64_t)il2cpp_codegen_add(L_19, ((int64_t)((int32_t)10)))), /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_15, L_20, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// outer.Add(new IntPoint(r.right + 10, r.bottom + 10));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_21 = V_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_22 = V_1;
		int64_t L_23 = L_22.___right_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_24 = V_1;
		int64_t L_25 = L_24.___bottom_3;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_26;
		memset((&L_26), 0, sizeof(L_26));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_26), ((int64_t)il2cpp_codegen_add(L_23, ((int64_t)((int32_t)10)))), ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)((int32_t)10)))), /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_21, L_26, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// outer.Add(new IntPoint(r.right + 10, r.top - 10));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_27 = V_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_28 = V_1;
		int64_t L_29 = L_28.___right_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_30 = V_1;
		int64_t L_31 = L_30.___top_1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_32;
		memset((&L_32), 0, sizeof(L_32));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_32), ((int64_t)il2cpp_codegen_add(L_29, ((int64_t)((int32_t)10)))), ((int64_t)il2cpp_codegen_subtract(L_31, ((int64_t)((int32_t)10)))), /*hidden argument*/NULL);
		NullCheck(L_27);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_27, L_32, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// outer.Add(new IntPoint(r.left - 10, r.top - 10));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_33 = V_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_34 = V_1;
		int64_t L_35 = L_34.___left_0;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_36 = V_1;
		int64_t L_37 = L_36.___top_1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_38;
		memset((&L_38), 0, sizeof(L_38));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_38), ((int64_t)il2cpp_codegen_subtract(L_35, ((int64_t)((int32_t)10)))), ((int64_t)il2cpp_codegen_subtract(L_37, ((int64_t)((int32_t)10)))), /*hidden argument*/NULL);
		NullCheck(L_33);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_33, L_38, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// clpr.AddPath(outer, PolyType.ptSubject, true);
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_39 = V_0;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_40 = V_2;
		NullCheck(L_39);
		bool L_41;
		L_41 = ClipperBase_AddPath_m34810D1B9F21314A52EB4A1B77F454EE19CAA62F(L_39, L_40, 0, (bool)1, NULL);
		// clpr.ReverseSolution = true;
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_42 = V_0;
		NullCheck(L_42);
		Clipper_set_ReverseSolution_m4C3D2FEE37DDCCB590395F6A7199C8510813834A_inline(L_42, (bool)1, NULL);
		// clpr.Execute(ClipType.ctUnion, solution, PolyFillType.pftNegative, PolyFillType.pftNegative);
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_43 = V_0;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541** L_44 = ___solution0;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_45 = *((List_1_tD3D80A48908E0B8646110C913780E72E2157A541**)L_44);
		NullCheck(L_43);
		bool L_46;
		L_46 = Clipper_Execute_mD4963862505A6417805A36BDC8EE3551AF5227A0(L_43, 1, L_45, 3, 3, NULL);
		// if (solution.Count > 0) solution.RemoveAt(0);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541** L_47 = ___solution0;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_48 = *((List_1_tD3D80A48908E0B8646110C913780E72E2157A541**)L_47);
		NullCheck(L_48);
		int32_t L_49;
		L_49 = List_1_get_Count_m3EA042A7A6709E4B248A6AEF39800F2BCB5D418B_inline(L_48, List_1_get_Count_m3EA042A7A6709E4B248A6AEF39800F2BCB5D418B_RuntimeMethod_var);
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		// if (solution.Count > 0) solution.RemoveAt(0);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541** L_50 = ___solution0;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_51 = *((List_1_tD3D80A48908E0B8646110C913780E72E2157A541**)L_50);
		NullCheck(L_51);
		List_1_RemoveAt_m7747D3473584FC32EC00DAFA15732DD41926AF60(L_51, 0, List_1_RemoveAt_m7747D3473584FC32EC00DAFA15732DD41926AF60_RuntimeMethod_var);
	}

IL_0101:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::Execute(Cinemachine.ClipperLib/PolyTree&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_Execute_mAD1CC573A536C2365E3AE2290B6AB3EDA1D2FA03 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** ___solution0, double ___delta1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m8AF0D30918276002D4457FFD304E0280AA6E984D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m71F5F51057EA215E366D07697A324759482B9112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* V_0 = NULL;
	IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* V_2 = NULL;
	PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// solution.Clear();
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_0 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_1 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_0);
		NullCheck(L_1);
		PolyTree_Clear_m9590AC2AB10E2126CDA65C9824B31FC88E191185(L_1, NULL);
		// FixOrientations();
		ClipperOffset_FixOrientations_m32685E41D88FB8B7FC06282DA7C128E197C7C518(__this, NULL);
		// DoOffset(delta);
		double L_2 = ___delta1;
		ClipperOffset_DoOffset_m21188ACCDBCEA566BFD6DEE0D03F9B5340CEF009(__this, L_2, NULL);
		// Clipper clpr = new Clipper();
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_3 = (Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A*)il2cpp_codegen_object_new(Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Clipper__ctor_mFE1DEBE1F52B653F893824C803EC03A94560C146(L_3, 0, NULL);
		V_0 = L_3;
		// clpr.AddPaths(m_destPolys, PolyType.ptSubject, true);
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_4 = V_0;
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_5 = __this->___m_destPolys_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = ClipperBase_AddPaths_m3A4E3756B561A396C16E4658743F61D088FA2EEA(L_4, L_5, 0, (bool)1, NULL);
		// if (delta > 0)
		double L_7 = ___delta1;
		if ((!(((double)L_7) > ((double)(0.0)))))
		{
			goto IL_0043;
		}
	}
	{
		// clpr.Execute(ClipType.ctUnion, solution,
		//   PolyFillType.pftPositive, PolyFillType.pftPositive);
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_8 = V_0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_9 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_10 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_9);
		NullCheck(L_8);
		bool L_11;
		L_11 = Clipper_Execute_mDBF9988159022C1F340702FED6E189758BD23D52(L_8, 1, L_10, 2, 2, NULL);
		return;
	}

IL_0043:
	{
		// IntRect r = Clipper.GetBounds(m_destPolys);
		List_1_tD3D80A48908E0B8646110C913780E72E2157A541* L_12 = __this->___m_destPolys_0;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_13;
		L_13 = ClipperBase_GetBounds_mC13AB297ABF4C0D5C98672C33C9B8358242A0ED7(L_12, NULL);
		V_1 = L_13;
		// Path outer = new Path(4);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_14 = (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*)il2cpp_codegen_object_new(List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6(L_14, 4, List_1__ctor_m0C9FCAA3EEB3FA8D74A57EB3231442F5F0949DC6_RuntimeMethod_var);
		V_2 = L_14;
		// outer.Add(new IntPoint(r.left - 10, r.bottom + 10));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_15 = V_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_16 = V_1;
		int64_t L_17 = L_16.___left_0;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_18 = V_1;
		int64_t L_19 = L_18.___bottom_3;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_20;
		memset((&L_20), 0, sizeof(L_20));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_20), ((int64_t)il2cpp_codegen_subtract(L_17, ((int64_t)((int32_t)10)))), ((int64_t)il2cpp_codegen_add(L_19, ((int64_t)((int32_t)10)))), /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_15, L_20, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// outer.Add(new IntPoint(r.right + 10, r.bottom + 10));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_21 = V_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_22 = V_1;
		int64_t L_23 = L_22.___right_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_24 = V_1;
		int64_t L_25 = L_24.___bottom_3;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_26;
		memset((&L_26), 0, sizeof(L_26));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_26), ((int64_t)il2cpp_codegen_add(L_23, ((int64_t)((int32_t)10)))), ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)((int32_t)10)))), /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_21, L_26, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// outer.Add(new IntPoint(r.right + 10, r.top - 10));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_27 = V_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_28 = V_1;
		int64_t L_29 = L_28.___right_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_30 = V_1;
		int64_t L_31 = L_30.___top_1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_32;
		memset((&L_32), 0, sizeof(L_32));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_32), ((int64_t)il2cpp_codegen_add(L_29, ((int64_t)((int32_t)10)))), ((int64_t)il2cpp_codegen_subtract(L_31, ((int64_t)((int32_t)10)))), /*hidden argument*/NULL);
		NullCheck(L_27);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_27, L_32, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// outer.Add(new IntPoint(r.left - 10, r.top - 10));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_33 = V_2;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_34 = V_1;
		int64_t L_35 = L_34.___left_0;
		IntRect_tF487ECDFDA24ED1D258F498973EFA83EE5757F05 L_36 = V_1;
		int64_t L_37 = L_36.___top_1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_38;
		memset((&L_38), 0, sizeof(L_38));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_38), ((int64_t)il2cpp_codegen_subtract(L_35, ((int64_t)((int32_t)10)))), ((int64_t)il2cpp_codegen_subtract(L_37, ((int64_t)((int32_t)10)))), /*hidden argument*/NULL);
		NullCheck(L_33);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_33, L_38, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// clpr.AddPath(outer, PolyType.ptSubject, true);
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_39 = V_0;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_40 = V_2;
		NullCheck(L_39);
		bool L_41;
		L_41 = ClipperBase_AddPath_m34810D1B9F21314A52EB4A1B77F454EE19CAA62F(L_39, L_40, 0, (bool)1, NULL);
		// clpr.ReverseSolution = true;
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_42 = V_0;
		NullCheck(L_42);
		Clipper_set_ReverseSolution_m4C3D2FEE37DDCCB590395F6A7199C8510813834A_inline(L_42, (bool)1, NULL);
		// clpr.Execute(ClipType.ctUnion, solution, PolyFillType.pftNegative, PolyFillType.pftNegative);
		Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* L_43 = V_0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_44 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_45 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_44);
		NullCheck(L_43);
		bool L_46;
		L_46 = Clipper_Execute_mDBF9988159022C1F340702FED6E189758BD23D52(L_43, 1, L_45, 3, 3, NULL);
		// if (solution.ChildCount == 1 && solution.Childs[0].ChildCount > 0)
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_47 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_48 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_47);
		NullCheck(L_48);
		int32_t L_49;
		L_49 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_48, NULL);
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0188;
		}
	}
	{
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_50 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_51 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_50);
		NullCheck(L_51);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_52;
		L_52 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_51, NULL);
		NullCheck(L_52);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_53;
		L_53 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_52, 0, List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		NullCheck(L_53);
		int32_t L_54;
		L_54 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_53, NULL);
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_0188;
		}
	}
	{
		// PolyNode outerNode = solution.Childs[0];
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_55 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_56 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_55);
		NullCheck(L_56);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_57;
		L_57 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_56, NULL);
		NullCheck(L_57);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_58;
		L_58 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_57, 0, List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		V_3 = L_58;
		// solution.Childs.Capacity = outerNode.ChildCount;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_59 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_60 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_59);
		NullCheck(L_60);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_61;
		L_61 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_60, NULL);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_62, NULL);
		NullCheck(L_61);
		List_1_set_Capacity_m8AF0D30918276002D4457FFD304E0280AA6E984D(L_61, L_63, List_1_set_Capacity_m8AF0D30918276002D4457FFD304E0280AA6E984D_RuntimeMethod_var);
		// solution.Childs[0] = outerNode.Childs[0];
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_64 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_65 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_64);
		NullCheck(L_65);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_66;
		L_66 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_65, NULL);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_67 = V_3;
		NullCheck(L_67);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_68;
		L_68 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_67, NULL);
		NullCheck(L_68);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_69;
		L_69 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_68, 0, List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		NullCheck(L_66);
		List_1_set_Item_m71F5F51057EA215E366D07697A324759482B9112(L_66, 0, L_69, List_1_set_Item_m71F5F51057EA215E366D07697A324759482B9112_RuntimeMethod_var);
		// solution.Childs[0].m_Parent = solution;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_70 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_71 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_70);
		NullCheck(L_71);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_72;
		L_72 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_71, NULL);
		NullCheck(L_72);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_73;
		L_73 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_72, 0, List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_74 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_75 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_74);
		NullCheck(L_73);
		L_73->___m_Parent_0 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&L_73->___m_Parent_0), (void*)L_75);
		// for (int i = 1; i < outerNode.ChildCount; i++)
		V_4 = 1;
		goto IL_017d;
	}

IL_0163:
	{
		// solution.AddChild(outerNode.Childs[i]);
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_76 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_77 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_76);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_78 = V_3;
		NullCheck(L_78);
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_79;
		L_79 = PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline(L_78, NULL);
		int32_t L_80 = V_4;
		NullCheck(L_79);
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_81;
		L_81 = List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482(L_79, L_80, List_1_get_Item_m8A75A1C0A95F2D63355B6A22CD3E1164D0A50482_RuntimeMethod_var);
		NullCheck(L_77);
		PolyNode_AddChild_m0AE9AA1CD1E9EB371362350CAA9304F95A2D2DA5(L_77, L_81, NULL);
		// for (int i = 1; i < outerNode.ChildCount; i++)
		int32_t L_82 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_017d:
	{
		// for (int i = 1; i < outerNode.ChildCount; i++)
		int32_t L_83 = V_4;
		PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = PolyNode_get_ChildCount_mC79FA922B67A88E6E940285881BDB16109D57C67(L_84, NULL);
		if ((((int32_t)L_83) < ((int32_t)L_85)))
		{
			goto IL_0163;
		}
	}
	{
		return;
	}

IL_0188:
	{
		// solution.Clear();
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD** L_86 = ___solution0;
		PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD* L_87 = *((PolyTree_t6BC36A91ED216BC6148B566797C40651292A9BBD**)L_86);
		NullCheck(L_87);
		PolyTree_Clear_m9590AC2AB10E2126CDA65C9824B31FC88E191185(L_87, NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::OffsetPoint(System.Int32,System.Int32&,Cinemachine.ClipperLib/JoinType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_OffsetPoint_mA364CFD851041996876AA12D1E32CB8CD56FD35F (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, int32_t ___j0, int32_t* ___k1, int32_t ___jointype2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// m_sinA = (m_normals[k].X * m_normals[j].Y - m_normals[j].X * m_normals[k].Y);
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_0 = __this->___m_normals_3;
		int32_t* L_1 = ___k1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_3;
		L_3 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_0, L_2, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_4 = L_3.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_5 = __this->___m_normals_3;
		int32_t L_6 = ___j0;
		NullCheck(L_5);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_7;
		L_7 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_5, L_6, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_8 = L_7.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_9 = __this->___m_normals_3;
		int32_t L_10 = ___j0;
		NullCheck(L_9);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_11;
		L_11 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_9, L_10, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_12 = L_11.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_13 = __this->___m_normals_3;
		int32_t* L_14 = ___k1;
		int32_t L_15 = *((int32_t*)L_14);
		NullCheck(L_13);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_16;
		L_16 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_13, L_15, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_17 = L_16.___Y_1;
		__this->___m_sinA_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_4, L_8)), ((double)il2cpp_codegen_multiply(L_12, L_17))));
		// if (Math.Abs(m_sinA * m_delta) < 1.0)
		double L_18 = __this->___m_sinA_5;
		double L_19 = __this->___m_delta_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = fabs(((double)il2cpp_codegen_multiply(L_18, L_19)));
		if ((!(((double)L_20) < ((double)(1.0)))))
		{
			goto IL_0139;
		}
	}
	{
		// double cosA = (m_normals[k].X * m_normals[j].X + m_normals[j].Y * m_normals[k].Y);
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_21 = __this->___m_normals_3;
		int32_t* L_22 = ___k1;
		int32_t L_23 = *((int32_t*)L_22);
		NullCheck(L_21);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_24;
		L_24 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_21, L_23, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_25 = L_24.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_26 = __this->___m_normals_3;
		int32_t L_27 = ___j0;
		NullCheck(L_26);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_28;
		L_28 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_26, L_27, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_29 = L_28.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_30 = __this->___m_normals_3;
		int32_t L_31 = ___j0;
		NullCheck(L_30);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_32;
		L_32 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_30, L_31, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_33 = L_32.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_34 = __this->___m_normals_3;
		int32_t* L_35 = ___k1;
		int32_t L_36 = *((int32_t*)L_35);
		NullCheck(L_34);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_37;
		L_37 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_34, L_36, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_38 = L_37.___Y_1;
		// if (cosA > 0) // angle ==> 0 degrees
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_25, L_29)), ((double)il2cpp_codegen_multiply(L_33, L_38))))) > ((double)(0.0)))))
		{
			goto IL_017b;
		}
	}
	{
		// m_destPoly.Add(new IntPoint(Round(m_srcPoly[j].X + m_normals[k].X * m_delta),
		//   Round(m_srcPoly[j].Y + m_normals[k].Y * m_delta)));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_39 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_40 = __this->___m_srcPoly_1;
		int32_t L_41 = ___j0;
		NullCheck(L_40);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_42;
		L_42 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_40, L_41, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_43 = L_42.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_44 = __this->___m_normals_3;
		int32_t* L_45 = ___k1;
		int32_t L_46 = *((int32_t*)L_45);
		NullCheck(L_44);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_47;
		L_47 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_44, L_46, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_48 = L_47.___X_0;
		double L_49 = __this->___m_delta_4;
		int64_t L_50;
		L_50 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_43), ((double)il2cpp_codegen_multiply(L_48, L_49)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_51 = __this->___m_srcPoly_1;
		int32_t L_52 = ___j0;
		NullCheck(L_51);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_53;
		L_53 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_51, L_52, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_54 = L_53.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_55 = __this->___m_normals_3;
		int32_t* L_56 = ___k1;
		int32_t L_57 = *((int32_t*)L_56);
		NullCheck(L_55);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_58;
		L_58 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_55, L_57, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_59 = L_58.___Y_1;
		double L_60 = __this->___m_delta_4;
		int64_t L_61;
		L_61 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_54), ((double)il2cpp_codegen_multiply(L_59, L_60)))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_62;
		memset((&L_62), 0, sizeof(L_62));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_62), L_50, L_61, /*hidden argument*/NULL);
		NullCheck(L_39);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_39, L_62, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// return;
		return;
	}

IL_0139:
	{
		// else if (m_sinA > 1.0) m_sinA = 1.0;
		double L_63 = __this->___m_sinA_5;
		if ((!(((double)L_63) > ((double)(1.0)))))
		{
			goto IL_015b;
		}
	}
	{
		// else if (m_sinA > 1.0) m_sinA = 1.0;
		__this->___m_sinA_5 = (1.0);
		goto IL_017b;
	}

IL_015b:
	{
		// else if (m_sinA < -1.0) m_sinA = -1.0;
		double L_64 = __this->___m_sinA_5;
		if ((!(((double)L_64) < ((double)(-1.0)))))
		{
			goto IL_017b;
		}
	}
	{
		// else if (m_sinA < -1.0) m_sinA = -1.0;
		__this->___m_sinA_5 = (-1.0);
	}

IL_017b:
	{
		// if (m_sinA * m_delta < 0)
		double L_65 = __this->___m_sinA_5;
		double L_66 = __this->___m_delta_4;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_65, L_66))) < ((double)(0.0)))))
		{
			goto IL_0294;
		}
	}
	{
		// m_destPoly.Add(new IntPoint(Round(m_srcPoly[j].X + m_normals[k].X * m_delta),
		//   Round(m_srcPoly[j].Y + m_normals[k].Y * m_delta)));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_67 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_68 = __this->___m_srcPoly_1;
		int32_t L_69 = ___j0;
		NullCheck(L_68);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_70;
		L_70 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_68, L_69, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_71 = L_70.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_72 = __this->___m_normals_3;
		int32_t* L_73 = ___k1;
		int32_t L_74 = *((int32_t*)L_73);
		NullCheck(L_72);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_75;
		L_75 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_72, L_74, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_76 = L_75.___X_0;
		double L_77 = __this->___m_delta_4;
		int64_t L_78;
		L_78 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_71), ((double)il2cpp_codegen_multiply(L_76, L_77)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_79 = __this->___m_srcPoly_1;
		int32_t L_80 = ___j0;
		NullCheck(L_79);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_81;
		L_81 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_79, L_80, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_82 = L_81.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_83 = __this->___m_normals_3;
		int32_t* L_84 = ___k1;
		int32_t L_85 = *((int32_t*)L_84);
		NullCheck(L_83);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_86;
		L_86 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_83, L_85, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_87 = L_86.___Y_1;
		double L_88 = __this->___m_delta_4;
		int64_t L_89;
		L_89 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_82), ((double)il2cpp_codegen_multiply(L_87, L_88)))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_90;
		memset((&L_90), 0, sizeof(L_90));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_90), L_78, L_89, /*hidden argument*/NULL);
		NullCheck(L_67);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_67, L_90, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// m_destPoly.Add(m_srcPoly[j]);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_91 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_92 = __this->___m_srcPoly_1;
		int32_t L_93 = ___j0;
		NullCheck(L_92);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_94;
		L_94 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_92, L_93, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		NullCheck(L_91);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_91, L_94, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// m_destPoly.Add(new IntPoint(Round(m_srcPoly[j].X + m_normals[j].X * m_delta),
		//   Round(m_srcPoly[j].Y + m_normals[j].Y * m_delta)));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_95 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_96 = __this->___m_srcPoly_1;
		int32_t L_97 = ___j0;
		NullCheck(L_96);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_98;
		L_98 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_96, L_97, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_99 = L_98.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_100 = __this->___m_normals_3;
		int32_t L_101 = ___j0;
		NullCheck(L_100);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_102;
		L_102 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_100, L_101, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_103 = L_102.___X_0;
		double L_104 = __this->___m_delta_4;
		int64_t L_105;
		L_105 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_99), ((double)il2cpp_codegen_multiply(L_103, L_104)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_106 = __this->___m_srcPoly_1;
		int32_t L_107 = ___j0;
		NullCheck(L_106);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_108;
		L_108 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_106, L_107, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_109 = L_108.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_110 = __this->___m_normals_3;
		int32_t L_111 = ___j0;
		NullCheck(L_110);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_112;
		L_112 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_110, L_111, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_113 = L_112.___Y_1;
		double L_114 = __this->___m_delta_4;
		int64_t L_115;
		L_115 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_109), ((double)il2cpp_codegen_multiply(L_113, L_114)))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_116;
		memset((&L_116), 0, sizeof(L_116));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_116), L_105, L_115, /*hidden argument*/NULL);
		NullCheck(L_95);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_95, L_116, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		goto IL_0333;
	}

IL_0294:
	{
		int32_t L_117 = ___jointype2;
		switch (L_117)
		{
			case 0:
			{
				goto IL_031f;
			}
			case 1:
			{
				goto IL_032a;
			}
			case 2:
			{
				goto IL_02ab;
			}
		}
	}
	{
		goto IL_0333;
	}

IL_02ab:
	{
		// double r = 1 + (m_normals[j].X * m_normals[k].X +
		//   m_normals[j].Y * m_normals[k].Y);
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_118 = __this->___m_normals_3;
		int32_t L_119 = ___j0;
		NullCheck(L_118);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_120;
		L_120 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_118, L_119, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_121 = L_120.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_122 = __this->___m_normals_3;
		int32_t* L_123 = ___k1;
		int32_t L_124 = *((int32_t*)L_123);
		NullCheck(L_122);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_125;
		L_125 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_122, L_124, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_126 = L_125.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_127 = __this->___m_normals_3;
		int32_t L_128 = ___j0;
		NullCheck(L_127);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_129;
		L_129 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_127, L_128, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_130 = L_129.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_131 = __this->___m_normals_3;
		int32_t* L_132 = ___k1;
		int32_t L_133 = *((int32_t*)L_132);
		NullCheck(L_131);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_134;
		L_134 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_131, L_133, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_135 = L_134.___Y_1;
		V_0 = ((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_121, L_126)), ((double)il2cpp_codegen_multiply(L_130, L_135))))));
		// if (r >= m_miterLim) DoMiter(j, k, r); else DoSquare(j, k);
		double L_136 = V_0;
		double L_137 = __this->___m_miterLim_8;
		if ((!(((double)L_136) >= ((double)L_137))))
		{
			goto IL_0314;
		}
	}
	{
		// if (r >= m_miterLim) DoMiter(j, k, r); else DoSquare(j, k);
		int32_t L_138 = ___j0;
		int32_t* L_139 = ___k1;
		int32_t L_140 = *((int32_t*)L_139);
		double L_141 = V_0;
		ClipperOffset_DoMiter_m2797F6E5BA1D568908043B4883ED4850EFAF39C3(__this, L_138, L_140, L_141, NULL);
		goto IL_0333;
	}

IL_0314:
	{
		// if (r >= m_miterLim) DoMiter(j, k, r); else DoSquare(j, k);
		int32_t L_142 = ___j0;
		int32_t* L_143 = ___k1;
		int32_t L_144 = *((int32_t*)L_143);
		ClipperOffset_DoSquare_m6FF4AC6A3D3A432776BEA5EC3869CC1EED8807D8(__this, L_142, L_144, NULL);
		// break;
		goto IL_0333;
	}

IL_031f:
	{
		// case JoinType.jtSquare: DoSquare(j, k); break;
		int32_t L_145 = ___j0;
		int32_t* L_146 = ___k1;
		int32_t L_147 = *((int32_t*)L_146);
		ClipperOffset_DoSquare_m6FF4AC6A3D3A432776BEA5EC3869CC1EED8807D8(__this, L_145, L_147, NULL);
		// case JoinType.jtSquare: DoSquare(j, k); break;
		goto IL_0333;
	}

IL_032a:
	{
		// case JoinType.jtRound: DoRound(j, k); break;
		int32_t L_148 = ___j0;
		int32_t* L_149 = ___k1;
		int32_t L_150 = *((int32_t*)L_149);
		ClipperOffset_DoRound_m87BA50E7B0346922ACC73C69B6D28E9099E42692(__this, L_148, L_150, NULL);
	}

IL_0333:
	{
		// k = j;
		int32_t* L_151 = ___k1;
		int32_t L_152 = ___j0;
		*((int32_t*)L_151) = (int32_t)L_152;
		// }
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::DoSquare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_DoSquare_m6FF4AC6A3D3A432776BEA5EC3869CC1EED8807D8 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, int32_t ___j0, int32_t ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double dx = Math.Tan(Math.Atan2(m_sinA,
		//     m_normals[k].X * m_normals[j].X + m_normals[k].Y * m_normals[j].Y) / 4);
		double L_0 = __this->___m_sinA_5;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_1 = __this->___m_normals_3;
		int32_t L_2 = ___k1;
		NullCheck(L_1);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_3;
		L_3 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_1, L_2, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_4 = L_3.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_5 = __this->___m_normals_3;
		int32_t L_6 = ___j0;
		NullCheck(L_5);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_7;
		L_7 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_5, L_6, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_8 = L_7.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_9 = __this->___m_normals_3;
		int32_t L_10 = ___k1;
		NullCheck(L_9);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_11;
		L_11 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_9, L_10, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_12 = L_11.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_13 = __this->___m_normals_3;
		int32_t L_14 = ___j0;
		NullCheck(L_13);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_15;
		L_15 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_13, L_14, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_16 = L_15.___Y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = atan2(L_0, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_4, L_8)), ((double)il2cpp_codegen_multiply(L_12, L_16)))));
		double L_18;
		L_18 = tan(((double)(L_17/(4.0))));
		V_0 = L_18;
		// m_destPoly.Add(new IntPoint(
		//     Round(m_srcPoly[j].X + m_delta * (m_normals[k].X - m_normals[k].Y * dx)),
		//     Round(m_srcPoly[j].Y + m_delta * (m_normals[k].Y + m_normals[k].X * dx))));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_19 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_20 = __this->___m_srcPoly_1;
		int32_t L_21 = ___j0;
		NullCheck(L_20);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_22;
		L_22 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_20, L_21, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_23 = L_22.___X_0;
		double L_24 = __this->___m_delta_4;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_25 = __this->___m_normals_3;
		int32_t L_26 = ___k1;
		NullCheck(L_25);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_27;
		L_27 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_25, L_26, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_28 = L_27.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_29 = __this->___m_normals_3;
		int32_t L_30 = ___k1;
		NullCheck(L_29);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_31;
		L_31 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_29, L_30, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_32 = L_31.___Y_1;
		double L_33 = V_0;
		int64_t L_34;
		L_34 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_23), ((double)il2cpp_codegen_multiply(L_24, ((double)il2cpp_codegen_subtract(L_28, ((double)il2cpp_codegen_multiply(L_32, L_33)))))))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_35 = __this->___m_srcPoly_1;
		int32_t L_36 = ___j0;
		NullCheck(L_35);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_37;
		L_37 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_35, L_36, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_38 = L_37.___Y_1;
		double L_39 = __this->___m_delta_4;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_40 = __this->___m_normals_3;
		int32_t L_41 = ___k1;
		NullCheck(L_40);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_42;
		L_42 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_40, L_41, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_43 = L_42.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_44 = __this->___m_normals_3;
		int32_t L_45 = ___k1;
		NullCheck(L_44);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_46;
		L_46 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_44, L_45, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_47 = L_46.___X_0;
		double L_48 = V_0;
		int64_t L_49;
		L_49 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_38), ((double)il2cpp_codegen_multiply(L_39, ((double)il2cpp_codegen_add(L_43, ((double)il2cpp_codegen_multiply(L_47, L_48)))))))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_50;
		memset((&L_50), 0, sizeof(L_50));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_50), L_34, L_49, /*hidden argument*/NULL);
		NullCheck(L_19);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_19, L_50, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// m_destPoly.Add(new IntPoint(
		//     Round(m_srcPoly[j].X + m_delta * (m_normals[j].X + m_normals[j].Y * dx)),
		//     Round(m_srcPoly[j].Y + m_delta * (m_normals[j].Y - m_normals[j].X * dx))));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_51 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_52 = __this->___m_srcPoly_1;
		int32_t L_53 = ___j0;
		NullCheck(L_52);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_54;
		L_54 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_52, L_53, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_55 = L_54.___X_0;
		double L_56 = __this->___m_delta_4;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_57 = __this->___m_normals_3;
		int32_t L_58 = ___j0;
		NullCheck(L_57);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_59;
		L_59 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_57, L_58, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_60 = L_59.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_61 = __this->___m_normals_3;
		int32_t L_62 = ___j0;
		NullCheck(L_61);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_63;
		L_63 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_61, L_62, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_64 = L_63.___Y_1;
		double L_65 = V_0;
		int64_t L_66;
		L_66 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_55), ((double)il2cpp_codegen_multiply(L_56, ((double)il2cpp_codegen_add(L_60, ((double)il2cpp_codegen_multiply(L_64, L_65)))))))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_67 = __this->___m_srcPoly_1;
		int32_t L_68 = ___j0;
		NullCheck(L_67);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_69;
		L_69 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_67, L_68, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_70 = L_69.___Y_1;
		double L_71 = __this->___m_delta_4;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_72 = __this->___m_normals_3;
		int32_t L_73 = ___j0;
		NullCheck(L_72);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_74;
		L_74 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_72, L_73, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_75 = L_74.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_76 = __this->___m_normals_3;
		int32_t L_77 = ___j0;
		NullCheck(L_76);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_78;
		L_78 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_76, L_77, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_79 = L_78.___X_0;
		double L_80 = V_0;
		int64_t L_81;
		L_81 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_70), ((double)il2cpp_codegen_multiply(L_71, ((double)il2cpp_codegen_subtract(L_75, ((double)il2cpp_codegen_multiply(L_79, L_80)))))))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_82;
		memset((&L_82), 0, sizeof(L_82));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_82), L_66, L_81, /*hidden argument*/NULL);
		NullCheck(L_51);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_51, L_82, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::DoMiter(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_DoMiter_m2797F6E5BA1D568908043B4883ED4850EFAF39C3 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, int32_t ___j0, int32_t ___k1, double ___r2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double q = m_delta / r;
		double L_0 = __this->___m_delta_4;
		double L_1 = ___r2;
		V_0 = ((double)(L_0/L_1));
		// m_destPoly.Add(new IntPoint(Round(m_srcPoly[j].X + (m_normals[k].X + m_normals[j].X) * q),
		//     Round(m_srcPoly[j].Y + (m_normals[k].Y + m_normals[j].Y) * q)));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_2 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_3 = __this->___m_srcPoly_1;
		int32_t L_4 = ___j0;
		NullCheck(L_3);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_5;
		L_5 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_3, L_4, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_6 = L_5.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_7 = __this->___m_normals_3;
		int32_t L_8 = ___k1;
		NullCheck(L_7);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_9;
		L_9 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_7, L_8, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_10 = L_9.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_11 = __this->___m_normals_3;
		int32_t L_12 = ___j0;
		NullCheck(L_11);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_13;
		L_13 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_11, L_12, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_14 = L_13.___X_0;
		double L_15 = V_0;
		int64_t L_16;
		L_16 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_6), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_10, L_14)), L_15)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_17 = __this->___m_srcPoly_1;
		int32_t L_18 = ___j0;
		NullCheck(L_17);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_19;
		L_19 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_17, L_18, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_20 = L_19.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_21 = __this->___m_normals_3;
		int32_t L_22 = ___k1;
		NullCheck(L_21);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_23;
		L_23 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_21, L_22, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_24 = L_23.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_25 = __this->___m_normals_3;
		int32_t L_26 = ___j0;
		NullCheck(L_25);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_27;
		L_27 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_25, L_26, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_28 = L_27.___Y_1;
		double L_29 = V_0;
		int64_t L_30;
		L_30 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_20), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_24, L_28)), L_29)))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_31;
		memset((&L_31), 0, sizeof(L_31));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_31), L_16, L_30, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_2, L_31, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cinemachine.ClipperLib/ClipperOffset::DoRound(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperOffset_DoRound_m87BA50E7B0346922ACC73C69B6D28E9099E42692 (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, int32_t ___j0, int32_t ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	{
		// double a = Math.Atan2(m_sinA,
		// m_normals[k].X * m_normals[j].X + m_normals[k].Y * m_normals[j].Y);
		double L_0 = __this->___m_sinA_5;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_1 = __this->___m_normals_3;
		int32_t L_2 = ___k1;
		NullCheck(L_1);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_3;
		L_3 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_1, L_2, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_4 = L_3.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_5 = __this->___m_normals_3;
		int32_t L_6 = ___j0;
		NullCheck(L_5);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_7;
		L_7 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_5, L_6, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_8 = L_7.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_9 = __this->___m_normals_3;
		int32_t L_10 = ___k1;
		NullCheck(L_9);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_11;
		L_11 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_9, L_10, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_12 = L_11.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_13 = __this->___m_normals_3;
		int32_t L_14 = ___j0;
		NullCheck(L_13);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_15;
		L_15 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_13, L_14, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_16 = L_15.___Y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = atan2(L_0, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_4, L_8)), ((double)il2cpp_codegen_multiply(L_12, L_16)))));
		V_0 = L_17;
		// int steps = Math.Max((int)Round(m_StepsPerRad * Math.Abs(a)),1);
		double L_18 = __this->___m_StepsPerRad_9;
		double L_19 = V_0;
		double L_20;
		L_20 = fabs(L_19);
		int64_t L_21;
		L_21 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_multiply(L_18, L_20)), NULL);
		int32_t L_22;
		L_22 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)L_21), 1, NULL);
		V_1 = L_22;
		// double X = m_normals[k].X, Y = m_normals[k].Y, X2;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_23 = __this->___m_normals_3;
		int32_t L_24 = ___k1;
		NullCheck(L_23);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_25;
		L_25 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_23, L_24, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_26 = L_25.___X_0;
		V_2 = L_26;
		// double X = m_normals[k].X, Y = m_normals[k].Y, X2;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_27 = __this->___m_normals_3;
		int32_t L_28 = ___k1;
		NullCheck(L_27);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_29;
		L_29 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_27, L_28, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_30 = L_29.___Y_1;
		V_3 = L_30;
		// for (int i = 0; i < steps; ++i)
		V_4 = 0;
		goto IL_0110;
	}

IL_0096:
	{
		// m_destPoly.Add(new IntPoint(
		//     Round(m_srcPoly[j].X + X * m_delta),
		//     Round(m_srcPoly[j].Y + Y * m_delta)));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_31 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_32 = __this->___m_srcPoly_1;
		int32_t L_33 = ___j0;
		NullCheck(L_32);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_34;
		L_34 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_32, L_33, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_35 = L_34.___X_0;
		double L_36 = V_2;
		double L_37 = __this->___m_delta_4;
		int64_t L_38;
		L_38 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_35), ((double)il2cpp_codegen_multiply(L_36, L_37)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_39 = __this->___m_srcPoly_1;
		int32_t L_40 = ___j0;
		NullCheck(L_39);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_41;
		L_41 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_39, L_40, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_42 = L_41.___Y_1;
		double L_43 = V_3;
		double L_44 = __this->___m_delta_4;
		int64_t L_45;
		L_45 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_42), ((double)il2cpp_codegen_multiply(L_43, L_44)))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_46;
		memset((&L_46), 0, sizeof(L_46));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_46), L_38, L_45, /*hidden argument*/NULL);
		NullCheck(L_31);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_31, L_46, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// X2 = X;
		double L_47 = V_2;
		// X = X * m_cos - m_sin * Y;
		double L_48 = V_2;
		double L_49 = __this->___m_cos_7;
		double L_50 = __this->___m_sin_6;
		double L_51 = V_3;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_48, L_49)), ((double)il2cpp_codegen_multiply(L_50, L_51))));
		// Y = X2 * m_sin + Y * m_cos;
		double L_52 = __this->___m_sin_6;
		double L_53 = V_3;
		double L_54 = __this->___m_cos_7;
		V_3 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_47, L_52)), ((double)il2cpp_codegen_multiply(L_53, L_54))));
		// for (int i = 0; i < steps; ++i)
		int32_t L_55 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0110:
	{
		// for (int i = 0; i < steps; ++i)
		int32_t L_56 = V_4;
		int32_t L_57 = V_1;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0096;
		}
	}
	{
		// m_destPoly.Add(new IntPoint(
		// Round(m_srcPoly[j].X + m_normals[j].X * m_delta),
		// Round(m_srcPoly[j].Y + m_normals[j].Y * m_delta)));
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_58 = __this->___m_destPoly_2;
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_59 = __this->___m_srcPoly_1;
		int32_t L_60 = ___j0;
		NullCheck(L_59);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_61;
		L_61 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_59, L_60, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_62 = L_61.___X_0;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_63 = __this->___m_normals_3;
		int32_t L_64 = ___j0;
		NullCheck(L_63);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_65;
		L_65 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_63, L_64, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_66 = L_65.___X_0;
		double L_67 = __this->___m_delta_4;
		int64_t L_68;
		L_68 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_62), ((double)il2cpp_codegen_multiply(L_66, L_67)))), NULL);
		List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* L_69 = __this->___m_srcPoly_1;
		int32_t L_70 = ___j0;
		NullCheck(L_69);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_71;
		L_71 = List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F(L_69, L_70, List_1_get_Item_m24B912BEB96018A91FE32A68BF3CF2B9602EA36F_RuntimeMethod_var);
		int64_t L_72 = L_71.___Y_1;
		List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* L_73 = __this->___m_normals_3;
		int32_t L_74 = ___j0;
		NullCheck(L_73);
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_75;
		L_75 = List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5(L_73, L_74, List_1_get_Item_m8617BFA098902713754751F1409138F54A0F04B5_RuntimeMethod_var);
		double L_76 = L_75.___Y_1;
		double L_77 = __this->___m_delta_4;
		int64_t L_78;
		L_78 = ClipperOffset_Round_m5FB50144D5D0ABDE18741EC99B86BAF660F25F4F(((double)il2cpp_codegen_add(((double)L_72), ((double)il2cpp_codegen_multiply(L_76, L_77)))), NULL);
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_79;
		memset((&L_79), 0, sizeof(L_79));
		IntPoint__ctor_mD85ED4713EDE2C713D37C9CD776B791F21C048E1((&L_79), L_68, L_78, /*hidden argument*/NULL);
		NullCheck(L_58);
		List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_inline(L_58, L_79, List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_RuntimeMethod_var);
		// }
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
// System.Void Cinemachine.ClipperLib/ClipperException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipperException__ctor_mD885137DA5F4345C11209699548F776B93180F1A (ClipperException_t88B1DB246A93C0860AFD818A9BE49B74D84C28D5* __this, String_t* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ClipperException(string description) : base(description){}
		String_t* L_0 = ___description0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public ClipperException(string description) : base(description){}
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
// System.Void Cinemachine.PostFX.CinemachinePostProcessing::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachinePostProcessing_PostPipelineStageCallback_m4E796F5B2758A2E4DB5CCE4FCFCF6545BC248033 (CinemachinePostProcessing_t1D2E39360B2745E47A9DDFE4CF9090999D7D85E5* __this, CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___vcam0, int32_t ___stage1, CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* ___state2, float ___deltaTime3, const RuntimeMethod* method) 
{
	{
		// CinemachineCore.Stage stage, ref CameraState state, float deltaTime) {}
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachinePostProcessing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachinePostProcessing__ctor_mCB4146D6BBBE2356147A9DB6D2E0F349B89A908A (CinemachinePostProcessing_t1D2E39360B2745E47A9DDFE4CF9090999D7D85E5* __this, const RuntimeMethod* method) 
{
	{
		CinemachineExtension__ctor_m8955F80D4A62DE7C3DA510CFECEF722346241C94(__this, NULL);
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
// System.Boolean Cinemachine.PostFX.CinemachineVolumeSettings::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineVolumeSettings_get_IsValid_mF3369F4EEBA7D9EEAAACA866B1B8B154EAEE034E (CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m67F93C76C9F469705D5CE2E159C52B380E47340F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsValid { get { return m_Profile != null && m_Profile.components.Count > 0; } }
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_0 = __this->___m_Profile_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_2 = __this->___m_Profile_12;
		NullCheck(L_2);
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_3 = L_2->___components_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m67F93C76C9F469705D5CE2E159C52B380E47340F_inline(L_3, List_1_get_Count_m67F93C76C9F469705D5CE2E159C52B380E47340F_RuntimeMethod_var);
		return (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::InvalidateCachedProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings_InvalidateCachedProfile_m3D298EAFD2FDF9DC057A316B5FB986962D14A547 (CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineExtension_GetAllExtraStates_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_m033F186F18F171F683031A18E87603857F3A4BF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m752E3D908DAB46834D43C51F1F2EB5A515D10928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21A5A68B5CC40355C926A2D7DF3CDC70DDB2076F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var list = GetAllExtraStates<VcamExtraState>();
		List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3* L_0;
		L_0 = CinemachineExtension_GetAllExtraStates_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_m033F186F18F171F683031A18E87603857F3A4BF0(__this, CinemachineExtension_GetAllExtraStates_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_m033F186F18F171F683031A18E87603857F3A4BF0_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < list.Count; ++i)
		V_1 = 0;
		goto IL_001b;
	}

IL_000b:
	{
		// list[i].DestroyProfileCopy();
		List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* L_3;
		L_3 = List_1_get_Item_m21A5A68B5CC40355C926A2D7DF3CDC70DDB2076F(L_1, L_2, List_1_get_Item_m21A5A68B5CC40355C926A2D7DF3CDC70DDB2076F_RuntimeMethod_var);
		NullCheck(L_3);
		VcamExtraState_DestroyProfileCopy_m1BF9F84F865D1E065076E69DEC72ECE7A85E63CD(L_3, NULL);
		// for (int i = 0; i < list.Count; ++i)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001b:
	{
		// for (int i = 0; i < list.Count; ++i)
		int32_t L_5 = V_1;
		List_1_tFF91CF649F4A803DA62A5ECAA6B4CAEC13DDD8A3* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m752E3D908DAB46834D43C51F1F2EB5A515D10928_inline(L_6, List_1_get_Count_m752E3D908DAB46834D43C51F1F2EB5A515D10928_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings_OnEnable_m68ECD8A769F0547C2957D96B42CD8363C9A3B0B8 (CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* G_B3_0 = NULL;
	CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* G_B4_1 = NULL;
	{
		// base.OnEnable();
		CinemachineExtension_OnEnable_mAABA4125E1F4271A991D234F62771AD496E9EF98(__this, NULL);
		// if (m_FocusTracksTarget)
		bool L_0 = __this->___m_FocusTracksTarget_8;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// m_FocusTracking = VirtualCamera.LookAt != null
		//     ? FocusTrackingMode.LookAtTarget : FocusTrackingMode.Camera;
		CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* L_1;
		L_1 = CinemachineExtension_get_VirtualCamera_mD9E9C61D2B18DD4B1ECF1B6A12EE5FD3B152376E(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = VirtualFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(29 /* UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::get_LookAt() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B2_0 = __this;
		if (L_3)
		{
			G_B3_0 = __this;
			goto IL_0025;
		}
	}
	{
		G_B4_0 = 4;
		G_B4_1 = G_B2_0;
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0026:
	{
		NullCheck(G_B4_1);
		G_B4_1->___m_FocusTracking_9 = G_B4_0;
	}

IL_002b:
	{
		// m_FocusTracksTarget = false;
		__this->___m_FocusTracksTarget_8 = (bool)0;
		// }
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings_OnDestroy_mD30D049C74BEAFE0D4E16386DE964105B4F37307 (CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* __this, const RuntimeMethod* method) 
{
	{
		// InvalidateCachedProfile();
		CinemachineVolumeSettings_InvalidateCachedProfile_m3D298EAFD2FDF9DC057A316B5FB986962D14A547(__this, NULL);
		// base.OnDestroy();
		CinemachineExtension_OnDestroy_m856A803E3DAE93CD0AADFA9B687A430BD24616DE(__this, NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings_PostPipelineStageCallback_m038D698BBDD6E32F068AD6C468267B251E4F2393 (CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* __this, CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___vcam0, int32_t ___stage1, CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* ___state2, float ___deltaTime3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineExtension_GetExtraState_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_mCB7C0F584EAAC5BB590A7BC3290E17398741FF76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m97F7A492589285276A340E3E20321C5879DB47BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* V_0 = NULL;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* V_1 = NULL;
	DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* V_2 = NULL;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// if (stage == CinemachineCore.Stage.Finalize)
		int32_t L_0 = ___stage1;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0119;
		}
	}
	{
		// var extra = GetExtraState<VcamExtraState>(vcam);
		CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* L_1 = ___vcam0;
		VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* L_2;
		L_2 = CinemachineExtension_GetExtraState_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_mCB7C0F584EAAC5BB590A7BC3290E17398741FF76(__this, L_1, CinemachineExtension_GetExtraState_TisVcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C_mCB7C0F584EAAC5BB590A7BC3290E17398741FF76_RuntimeMethod_var);
		V_0 = L_2;
		// if (!IsValid)
		bool L_3;
		L_3 = CinemachineVolumeSettings_get_IsValid_mF3369F4EEBA7D9EEAAACA866B1B8B154EAEE034E(__this, NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// extra.DestroyProfileCopy();
		VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* L_4 = V_0;
		NullCheck(L_4);
		VcamExtraState_DestroyProfileCopy_m1BF9F84F865D1E065076E69DEC72ECE7A85E63CD(L_4, NULL);
		return;
	}

IL_001e:
	{
		// var profile = m_Profile;
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_5 = __this->___m_Profile_12;
		V_1 = L_5;
		// if (m_FocusTracking == FocusTrackingMode.None)
		int32_t L_6 = __this->___m_FocusTracking_9;
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		// extra.DestroyProfileCopy();
		VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* L_7 = V_0;
		NullCheck(L_7);
		VcamExtraState_DestroyProfileCopy_m1BF9F84F865D1E065076E69DEC72ECE7A85E63CD(L_7, NULL);
		goto IL_0108;
	}

IL_0038:
	{
		// if (extra.mProfileCopy == null)
		VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* L_8 = V_0;
		NullCheck(L_8);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_9 = L_8->___mProfileCopy_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// extra.CreateProfileCopy(m_Profile);
		VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* L_11 = V_0;
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_12 = __this->___m_Profile_12;
		NullCheck(L_11);
		VcamExtraState_CreateProfileCopy_mAADD5F9762AB647121CD080BBEC9F3732E53D628(L_11, L_12, NULL);
	}

IL_0052:
	{
		// profile = extra.mProfileCopy;
		VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* L_13 = V_0;
		NullCheck(L_13);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_14 = L_13->___mProfileCopy_0;
		V_1 = L_14;
		// if (profile.TryGet(out DepthOfField dof))
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_15 = V_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = VolumeProfile_TryGet_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m97F7A492589285276A340E3E20321C5879DB47BC(L_15, (&V_2), VolumeProfile_TryGet_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m97F7A492589285276A340E3E20321C5879DB47BC_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0108;
		}
	}
	{
		// float focusDistance = m_FocusOffset;
		float L_17 = __this->___m_FocusOffset_11;
		V_3 = L_17;
		// if (m_FocusTracking == FocusTrackingMode.LookAtTarget)
		int32_t L_18 = __this->___m_FocusTracking_9;
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0095;
		}
	}
	{
		// focusDistance += (state.FinalPosition - state.ReferenceLookAt).magnitude;
		float L_19 = V_3;
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* L_20 = ___state2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = CameraState_get_FinalPosition_m4D482D1F3E008068C2151FC24FD85CB6F603AE12(L_20, NULL);
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* L_22 = ___state2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___ReferenceLookAt_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_23, NULL);
		V_4 = L_24;
		float L_25;
		L_25 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		V_3 = ((float)il2cpp_codegen_add(L_19, L_25));
		goto IL_00eb;
	}

IL_0095:
	{
		// Transform focusTarget = null;
		V_5 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// switch (m_FocusTracking)
		int32_t L_26 = __this->___m_FocusTracking_9;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) == ((int32_t)2)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) == ((int32_t)3)))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00c3;
	}

IL_00ac:
	{
		// case FocusTrackingMode.FollowTarget: focusTarget = VirtualCamera.Follow; break;
		CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* L_29;
		L_29 = CinemachineExtension_get_VirtualCamera_mD9E9C61D2B18DD4B1ECF1B6A12EE5FD3B152376E(__this, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = VirtualFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(31 /* UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::get_Follow() */, L_29);
		V_5 = L_30;
		// case FocusTrackingMode.FollowTarget: focusTarget = VirtualCamera.Follow; break;
		goto IL_00c3;
	}

IL_00bb:
	{
		// case FocusTrackingMode.CustomTarget: focusTarget = m_FocusTarget; break;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___m_FocusTarget_10;
		V_5 = L_31;
	}

IL_00c3:
	{
		// if (focusTarget != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_00eb;
		}
	}
	{
		// focusDistance += (state.FinalPosition - focusTarget.position).magnitude;
		float L_34 = V_3;
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* L_35 = ___state2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = CameraState_get_FinalPosition_m4D482D1F3E008068C2151FC24FD85CB6F603AE12(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = V_5;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_36, L_38, NULL);
		V_4 = L_39;
		float L_40;
		L_40 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		V_3 = ((float)il2cpp_codegen_add(L_34, L_40));
	}

IL_00eb:
	{
		// dof.focusDistance.value = Mathf.Max(0, focusDistance);
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_41 = V_2;
		NullCheck(L_41);
		MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* L_42 = L_41->___focusDistance_12;
		float L_43 = V_3;
		float L_44;
		L_44 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_43, NULL);
		NullCheck(L_42);
		VirtualActionInvoker1< float >::Invoke(13 /* System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::set_value(T) */, L_42, L_44);
		// profile.isDirty = true;
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_45 = V_1;
		NullCheck(L_45);
		L_45->___isDirty_5 = (bool)1;
	}

IL_0108:
	{
		// state.AddCustomBlendable(new CameraState.CustomBlendable(profile, 1));
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* L_46 = ___state2;
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_47 = V_1;
		CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB L_48;
		memset((&L_48), 0, sizeof(L_48));
		CustomBlendable__ctor_mF38BF574AF05E415A01A2A46E506DE6B5086B303((&L_48), L_47, (1.0f), /*hidden argument*/NULL);
		CameraState_AddCustomBlendable_m1DA24CB5A397752C33B6A1773CFF38F02505AD3C(L_46, L_48, NULL);
	}

IL_0119:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::OnCameraCut(Cinemachine.CinemachineBrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings_OnCameraCut_m29CDE599E30BF2A3E9A8C33251FA27AE36D84AF8 (CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* ___brain0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::ApplyPostFX(Cinemachine.CinemachineBrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings_ApplyPostFX_mD30F83FB961A57C8D91F99DA356A404F54E4BC7D (CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* ___brain0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* V_2 = NULL;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB V_7;
	memset((&V_7), 0, sizeof(V_7));
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* V_8 = NULL;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* V_9 = NULL;
	{
		// CameraState state = brain.CurrentCameraState;
		CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* L_0 = ___brain0;
		NullCheck(L_0);
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 L_1;
		L_1 = CinemachineBrain_get_CurrentCameraState_m4FD443F016CFCA5FCDFFF17E95A93162D18847C2_inline(L_0, NULL);
		V_0 = L_1;
		// int numBlendables = state.NumCustomBlendables;
		int32_t L_2;
		L_2 = CameraState_get_NumCustomBlendables_mA7FC428A3F135FA88769EC45E2C5521F2D1169DB_inline((&V_0), NULL);
		V_1 = L_2;
		// var volumes = GetDynamicBrainVolumes(brain, numBlendables);
		CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* L_3 = ___brain0;
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_5;
		L_5 = CinemachineVolumeSettings_GetDynamicBrainVolumes_m9EBCC8D416C963BD194EE74889BDFB8971C97EE5(L_3, L_4, NULL);
		V_2 = L_5;
		// for (int i = 0; i < volumes.Count; ++i)
		V_5 = 0;
		goto IL_0050;
	}

IL_001c:
	{
		// volumes[i].weight = 0;
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_6 = V_2;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_8;
		L_8 = List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284(L_6, L_7, List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___weight_7 = (0.0f);
		// volumes[i].sharedProfile = null;
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_9 = V_2;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_11;
		L_11 = List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284(L_9, L_10, List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___sharedProfile_8 = (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___sharedProfile_8), (void*)(VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*)NULL);
		// volumes[i].profile = null;
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_12 = V_2;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_14;
		L_14 = List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284(L_12, L_13, List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284_RuntimeMethod_var);
		NullCheck(L_14);
		Volume_set_profile_m89709CBB66123E4DD821570E2CC4D9AE3D42E769_inline(L_14, (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*)NULL, NULL);
		// for (int i = 0; i < volumes.Count; ++i)
		int32_t L_15 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0050:
	{
		// for (int i = 0; i < volumes.Count; ++i)
		int32_t L_16 = V_5;
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_inline(L_17, List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001c;
		}
	}
	{
		// Volume firstVolume = null;
		V_3 = (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377*)NULL;
		// int numPPblendables = 0;
		V_4 = 0;
		// for (int i = 0; i < numBlendables; ++i)
		V_6 = 0;
		goto IL_00f3;
	}

IL_0067:
	{
		// var b = state.GetCustomBlendable(i);
		int32_t L_19 = V_6;
		CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB L_20;
		L_20 = CameraState_GetCustomBlendable_mE19B33F6CEC1B42ACAEB34A0601E48A80577498E((&V_0), L_19, NULL);
		V_7 = L_20;
		// var profile = b.m_Custom as VolumeProfile;
		CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB L_21 = V_7;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = L_21.___m_Custom_0;
		V_8 = ((VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*)IsInstSealed((RuntimeObject*)L_22, VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1_il2cpp_TypeInfo_var));
		// if (!(profile == null)) // in case it was deleted
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_23 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_24)
		{
			goto IL_00dd;
		}
	}
	{
		// var v = volumes[i];
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_25 = V_2;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_27;
		L_27 = List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284(L_25, L_26, List_1_get_Item_m8F67F8C424EA44EF7EA2F4B9075A446291DAF284_RuntimeMethod_var);
		V_9 = L_27;
		// if (firstVolume == null)
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_28 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00a0;
		}
	}
	{
		// firstVolume = v;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_30 = V_9;
		V_3 = L_30;
	}

IL_00a0:
	{
		// v.sharedProfile = profile;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_31 = V_9;
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_32 = V_8;
		NullCheck(L_31);
		L_31->___sharedProfile_8 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___sharedProfile_8), (void*)L_32);
		// v.isGlobal = true;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_33 = V_9;
		NullCheck(L_33);
		Volume_set_isGlobal_m5E2B89583386E5A6C63AD61D2A8DBCAB5533BF15_inline(L_33, (bool)1, NULL);
		// v.priority = s_VolumePriority - (numBlendables - i) - 1;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_34 = V_9;
		il2cpp_codegen_runtime_class_init_inline(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		float L_35 = ((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___s_VolumePriority_7;
		int32_t L_36 = V_1;
		int32_t L_37 = V_6;
		NullCheck(L_34);
		L_34->___priority_5 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_35, ((float)((int32_t)il2cpp_codegen_subtract(L_36, L_37))))), (1.0f)));
		// v.weight = b.m_Weight;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_38 = V_9;
		CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB L_39 = V_7;
		float L_40 = L_39.___m_Weight_1;
		NullCheck(L_38);
		L_38->___weight_7 = L_40;
		// ++numPPblendables;
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00dd:
	{
		// if (numPPblendables > 1)
		int32_t L_42 = V_4;
		if ((((int32_t)L_42) <= ((int32_t)1)))
		{
			goto IL_00ed;
		}
	}
	{
		// firstVolume.weight = 1;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_43 = V_3;
		NullCheck(L_43);
		L_43->___weight_7 = (1.0f);
	}

IL_00ed:
	{
		// for (int i = 0; i < numBlendables; ++i)
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f3:
	{
		// for (int i = 0; i < numBlendables; ++i)
		int32_t L_45 = V_6;
		int32_t L_46 = V_1;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0067;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> Cinemachine.PostFX.CinemachineVolumeSettings::GetDynamicBrainVolumes(Cinemachine.CinemachineBrain,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* CinemachineVolumeSettings_GetDynamicBrainVolumes_m9EBCC8D416C963BD194EE74889BDFB8971C97EE5 (CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* ___brain0, int32_t ___minVolumes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mEBB3584E3F5C9390346BF4EE9FD8E5D2ABADE5C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mCF16C5DA588B7468D6B2219D2519B7814709347C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAE021A0360032927647546267D4A69BC7C15C9B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE06E257FFA840B6A76C943FCC4F70FF8FC78C222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m39BEA6B481C5F43AADAA90DD7277AFDA096BF0E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// GameObject volumeOwner = null;
		V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// Transform t = brain.transform;
		CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* L_0 = ___brain0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		V_1 = L_1;
		// int numChildren = t.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_2, NULL);
		V_2 = L_3;
		// sVolumes.Clear();
		il2cpp_codegen_runtime_class_init_inline(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_4 = ((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumes_14;
		NullCheck(L_4);
		List_1_Clear_m39BEA6B481C5F43AADAA90DD7277AFDA096BF0E5_inline(L_4, List_1_Clear_m39BEA6B481C5F43AADAA90DD7277AFDA096BF0E5_RuntimeMethod_var);
		// for (int i = 0; volumeOwner == null && i < numChildren; ++i)
		V_3 = 0;
		goto IL_0057;
	}

IL_001e:
	{
		// GameObject child = t.GetChild(i).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_1;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, L_6, NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		V_4 = L_8;
		// if (child.hideFlags == HideFlags.HideAndDontSave)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3(L_9, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0053;
		}
	}
	{
		// child.GetComponents(sVolumes);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_4;
		il2cpp_codegen_runtime_class_init_inline(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_12 = ((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumes_14;
		NullCheck(L_11);
		GameObject_GetComponents_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAE021A0360032927647546267D4A69BC7C15C9B4(L_11, L_12, GameObject_GetComponents_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAE021A0360032927647546267D4A69BC7C15C9B4_RuntimeMethod_var);
		// if (sVolumes.Count > 0)
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_13 = ((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumes_14;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_inline(L_13, List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// volumeOwner = child;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_4;
		V_0 = L_15;
	}

IL_0053:
	{
		// for (int i = 0; volumeOwner == null && i < numChildren; ++i)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0057:
	{
		// for (int i = 0; volumeOwner == null && i < numChildren; ++i)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_001e;
		}
	}

IL_0064:
	{
		// if (minVolumes > 0)
		int32_t L_21 = ___minVolumes1;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		// if (volumeOwner == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0093;
		}
	}
	{
		// volumeOwner = new GameObject(sVolumeOwnerName);
		il2cpp_codegen_runtime_class_init_inline(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		String_t* L_24 = ((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumeOwnerName_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_25, L_24, NULL);
		V_0 = L_25;
		// volumeOwner.hideFlags = HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_0;
		NullCheck(L_26);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_26, ((int32_t)61), NULL);
		// volumeOwner.transform.parent = t;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_1;
		NullCheck(L_28);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_28, L_29, NULL);
	}

IL_0093:
	{
		// var data = brain.gameObject.GetComponent<UniversalAdditionalCameraData>();
		CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* L_30 = ___brain0;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_31);
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_32;
		L_32 = GameObject_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mCF16C5DA588B7468D6B2219D2519B7814709347C(L_31, GameObject_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mCF16C5DA588B7468D6B2219D2519B7814709347C_RuntimeMethod_var);
		V_5 = L_32;
		// if (data != null)
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_33 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_00f6;
		}
	}
	{
		// int mask = data.volumeLayerMask;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_35 = V_5;
		NullCheck(L_35);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_36;
		L_36 = UniversalAdditionalCameraData_get_volumeLayerMask_m6CA98C050693650D8818151E9ADE480CCBF44BFC_inline(L_35, NULL);
		int32_t L_37;
		L_37 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_36, NULL);
		V_6 = L_37;
		// for (int i = 0; i < 32; ++i)
		V_7 = 0;
		goto IL_00d9;
	}

IL_00bd:
	{
		// if ((mask & (1 << i)) != 0)
		int32_t L_38 = V_6;
		int32_t L_39 = V_7;
		if (!((int32_t)(L_38&((int32_t)(1<<((int32_t)(L_39&((int32_t)31))))))))
		{
			goto IL_00d3;
		}
	}
	{
		// volumeOwner.layer = i;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_0;
		int32_t L_41 = V_7;
		NullCheck(L_40);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_40, L_41, NULL);
		// break;
		goto IL_00f6;
	}

IL_00d3:
	{
		// for (int i = 0; i < 32; ++i)
		int32_t L_42 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d9:
	{
		// for (int i = 0; i < 32; ++i)
		int32_t L_43 = V_7;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)32))))
		{
			goto IL_00bd;
		}
	}
	{
		goto IL_00f6;
	}

IL_00e1:
	{
		// sVolumes.Add(volumeOwner.gameObject.AddComponent<Volume>());
		il2cpp_codegen_runtime_class_init_inline(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_44 = ((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumes_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_0;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_45, NULL);
		NullCheck(L_46);
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_47;
		L_47 = GameObject_AddComponent_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mEBB3584E3F5C9390346BF4EE9FD8E5D2ABADE5C5(L_46, GameObject_AddComponent_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mEBB3584E3F5C9390346BF4EE9FD8E5D2ABADE5C5_RuntimeMethod_var);
		NullCheck(L_44);
		List_1_Add_mE06E257FFA840B6A76C943FCC4F70FF8FC78C222_inline(L_44, L_47, List_1_Add_mE06E257FFA840B6A76C943FCC4F70FF8FC78C222_RuntimeMethod_var);
	}

IL_00f6:
	{
		// while (sVolumes.Count < minVolumes)
		il2cpp_codegen_runtime_class_init_inline(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_48 = ((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumes_14;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_inline(L_48, List_1_get_Count_m9108C03CB689BB906D87E03F239998CEE7153A17_RuntimeMethod_var);
		int32_t L_50 = ___minVolumes1;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00e1;
		}
	}

IL_0103:
	{
		// return sVolumes;
		il2cpp_codegen_runtime_class_init_inline(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_51 = ((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumes_14;
		return L_51;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::InitializeModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings_InitializeModule_m8B90EAA83131EAD2A01D34D0CDA8EAC6E8885F45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineVolumeSettings_ApplyPostFX_mD30F83FB961A57C8D91F99DA356A404F54E4BC7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineVolumeSettings_OnCameraCut_m29CDE599E30BF2A3E9A8C33251FA27AE36D84AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB3E814B430D892264646F8671CC6AFF035ECB0AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m9C18146FC609E4712D1E32D9E7FC19913AAAA2DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CinemachineCore.CameraUpdatedEvent.RemoveListener(ApplyPostFX);
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* L_0 = ((CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var))->___CameraUpdatedEvent_8;
		UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114* L_1 = (UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114*)il2cpp_codegen_object_new(UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_m5CC9F1C8EA62E69F366ADC95ED52BF0CAA0F1582(L_1, NULL, (intptr_t)((void*)CinemachineVolumeSettings_ApplyPostFX_mD30F83FB961A57C8D91F99DA356A404F54E4BC7D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m9C18146FC609E4712D1E32D9E7FC19913AAAA2DA(L_0, L_1, UnityEvent_1_RemoveListener_m9C18146FC609E4712D1E32D9E7FC19913AAAA2DA_RuntimeMethod_var);
		// CinemachineCore.CameraUpdatedEvent.AddListener(ApplyPostFX);
		BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* L_2 = ((CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var))->___CameraUpdatedEvent_8;
		UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114* L_3 = (UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114*)il2cpp_codegen_object_new(UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m5CC9F1C8EA62E69F366ADC95ED52BF0CAA0F1582(L_3, NULL, (intptr_t)((void*)CinemachineVolumeSettings_ApplyPostFX_mD30F83FB961A57C8D91F99DA356A404F54E4BC7D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB3E814B430D892264646F8671CC6AFF035ECB0AC(L_2, L_3, UnityEvent_1_AddListener_mB3E814B430D892264646F8671CC6AFF035ECB0AC_RuntimeMethod_var);
		// CinemachineCore.CameraCutEvent.RemoveListener(OnCameraCut);
		BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* L_4 = ((CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var))->___CameraCutEvent_9;
		UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114* L_5 = (UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114*)il2cpp_codegen_object_new(UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m5CC9F1C8EA62E69F366ADC95ED52BF0CAA0F1582(L_5, NULL, (intptr_t)((void*)CinemachineVolumeSettings_OnCameraCut_m29CDE599E30BF2A3E9A8C33251FA27AE36D84AF8_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m9C18146FC609E4712D1E32D9E7FC19913AAAA2DA(L_4, L_5, UnityEvent_1_RemoveListener_m9C18146FC609E4712D1E32D9E7FC19913AAAA2DA_RuntimeMethod_var);
		// CinemachineCore.CameraCutEvent.AddListener(OnCameraCut);
		BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* L_6 = ((CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var))->___CameraCutEvent_9;
		UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114* L_7 = (UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114*)il2cpp_codegen_object_new(UnityAction_1_t78C232CAACA0FC00C5F55E92D98A3BE00BE44114_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_m5CC9F1C8EA62E69F366ADC95ED52BF0CAA0F1582(L_7, NULL, (intptr_t)((void*)CinemachineVolumeSettings_OnCameraCut_m29CDE599E30BF2A3E9A8C33251FA27AE36D84AF8_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_mB3E814B430D892264646F8671CC6AFF035ECB0AC(L_6, L_7, UnityEvent_1_AddListener_mB3E814B430D892264646F8671CC6AFF035ECB0AC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings__ctor_mB23ECA31DF611267B81182121229A3B5EF12014B (CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* __this, const RuntimeMethod* method) 
{
	{
		CinemachineExtension__ctor_m8955F80D4A62DE7C3DA510CFECEF722346241C94(__this, NULL);
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings__cctor_mE4B70C86D6154123858921B57F4DCEC60291FB41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBE415A6F2F48CA40D24EF2ECB6001A80D683AE64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7B09D50F531ADBBABA83C24F6AD26DFA31CB3EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public float s_VolumePriority = 1000f;
		((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___s_VolumePriority_7 = (1000.0f);
		// static string sVolumeOwnerName = "__CMVolumes";
		((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumeOwnerName_13 = _stringLiteralB7B09D50F531ADBBABA83C24F6AD26DFA31CB3EC;
		Il2CppCodeGenWriteBarrier((void**)(&((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumeOwnerName_13), (void*)_stringLiteralB7B09D50F531ADBBABA83C24F6AD26DFA31CB3EC);
		// static  List<Volume> sVolumes = new List<Volume>();
		List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* L_0 = (List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897*)il2cpp_codegen_object_new(List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBE415A6F2F48CA40D24EF2ECB6001A80D683AE64(L_0, List_1__ctor_mBE415A6F2F48CA40D24EF2ECB6001A80D683AE64_RuntimeMethod_var);
		((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumes_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6_il2cpp_TypeInfo_var))->___sVolumes_14), (void*)L_0);
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
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState::CreateProfileCopy(UnityEngine.Rendering.VolumeProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState_CreateProfileCopy_mAADD5F9762AB647121CD080BBEC9F3732E53D628 (VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* __this, VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE785BB140AACEA37285183D122AB76C64D1776B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_mACF428D34ACD47070A01E3FC433D7AAD4E672081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisVolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1_mFF81C5BA0BE60CA936B0A49798FFAD1A414321A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* V_0 = NULL;
	Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 V_1;
	memset((&V_1), 0, sizeof(V_1));
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_2 = NULL;
	{
		// DestroyProfileCopy();
		VcamExtraState_DestroyProfileCopy_m1BF9F84F865D1E065076E69DEC72ECE7A85E63CD(__this, NULL);
		// VolumeProfile profile = ScriptableObject.CreateInstance<VolumeProfile>();
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_0;
		L_0 = ScriptableObject_CreateInstance_TisVolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1_mFF81C5BA0BE60CA936B0A49798FFAD1A414321A9(ScriptableObject_CreateInstance_TisVolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1_mFF81C5BA0BE60CA936B0A49798FFAD1A414321A9_RuntimeMethod_var);
		V_0 = L_0;
		// if (source != null)
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_1 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// foreach (var item in source.components)
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_3 = ___source0;
		NullCheck(L_3);
		List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_4 = L_3->___components_4;
		NullCheck(L_4);
		Enumerator_t28274C6C8959D52D00A7A29993ED244DA2644355 L_5;
		L_5 = List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760(L_4, List_1_GetEnumerator_m7FFBBF9B40BF65391F615C1718B33A309DBEC760_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607((&V_1), Enumerator_Dispose_mCE78820A119B5A3974D397DF20EACCF0AE77A607_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_0023_1:
			{
				// foreach (var item in source.components)
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_6;
				L_6 = Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_inline((&V_1), Enumerator_get_Current_m3E2C62A181DBC8F1232AE097D030451DC49CDC59_RuntimeMethod_var);
				// var itemCopy = Instantiate(item);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_7;
				L_7 = Object_Instantiate_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_mACF428D34ACD47070A01E3FC433D7AAD4E672081(L_6, Object_Instantiate_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_mACF428D34ACD47070A01E3FC433D7AAD4E672081_RuntimeMethod_var);
				V_2 = L_7;
				// profile.components.Add(itemCopy);
				VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_8 = V_0;
				NullCheck(L_8);
				List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* L_9 = L_8->___components_4;
				VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_10 = V_2;
				NullCheck(L_9);
				List_1_Add_mAE785BB140AACEA37285183D122AB76C64D1776B_inline(L_9, L_10, List_1_Add_mAE785BB140AACEA37285183D122AB76C64D1776B_RuntimeMethod_var);
				// profile.isDirty = true;
				VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_11 = V_0;
				NullCheck(L_11);
				L_11->___isDirty_5 = (bool)1;
			}

IL_0043_1:
			{
				// foreach (var item in source.components)
				bool L_12;
				L_12 = Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911((&V_1), Enumerator_MoveNext_mCDC4D51017A6FCCB56125B31477498D37FBC4911_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// mProfileCopy = profile;
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_13 = V_0;
		__this->___mProfileCopy_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mProfileCopy_0), (void*)L_13);
		// }
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState::DestroyProfileCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState_DestroyProfileCopy_m1BF9F84F865D1E065076E69DEC72ECE7A85E63CD (VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtility_t29BFA2198191EF8D4466FBAC7EAB84A1F9702965_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mProfileCopy != null)
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_0 = __this->___mProfileCopy_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// RuntimeUtility.DestroyObject(mProfileCopy);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_2 = __this->___mProfileCopy_0;
		il2cpp_codegen_runtime_class_init_inline(RuntimeUtility_t29BFA2198191EF8D4466FBAC7EAB84A1F9702965_il2cpp_TypeInfo_var);
		RuntimeUtility_DestroyObject_mEEBC4EE2A429B4E4D00EC07BA62044C9FF8E8A18(L_2, NULL);
	}

IL_0019:
	{
		// mProfileCopy = null;
		__this->___mProfileCopy_0 = (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mProfileCopy_0), (void*)(VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*)NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings/VcamExtraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState__ctor_m11A226E4A0A03612BAACADA52E816B79B73FF12F (VcamExtraState_t373360378C645FC92B99C366A7B4F2317C6AD73C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Cinemachine.Utility.CinemachineDebug::ReleaseScreenPos(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineDebug_ReleaseScreenPos_m6C54E91372A22F7D171D8D91C454DF06E95A6593 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mClients != null && mClients.Contains(client))
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_0 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_1 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___client0;
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D(L_1, L_2, HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// mClients.Remove(client);
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_4 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___client0;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595(L_4, L_5, HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595_RuntimeMethod_var);
	}

IL_0020:
	{
		// }
		return;
	}
}
// UnityEngine.Rect Cinemachine.Utility.CinemachineDebug::GetScreenPos(UnityEngine.Object,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D CinemachineDebug_GetScreenPos_m1C7476476BC6BB8D907CCF2D4B946C8B029872D8 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___client0, String_t* ___text1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (mClients == null)
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_0 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// mClients = new HashSet<Object>();
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_1 = (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*)il2cpp_codegen_object_new(HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A(L_1, HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A_RuntimeMethod_var);
		((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0), (void*)L_1);
	}

IL_0011:
	{
		// if (!mClients.Contains(client))
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_2 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___client0;
		NullCheck(L_2);
		bool L_4;
		L_4 = HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D(L_2, L_3, HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// mClients.Add(client);
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_5 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = ___client0;
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5(L_5, L_6, HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5_RuntimeMethod_var);
	}

IL_002a:
	{
		// var pos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_8;
		// Vector2 size = style.CalcSize(new GUIContent(text));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = ___style2;
		String_t* L_10 = ___text1;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_11 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_11, L_10, NULL);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_9, L_11, NULL);
		V_1 = L_12;
		// if (mClients != null)
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_13 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		// foreach (var c in mClients)
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_14 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		NullCheck(L_14);
		Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 L_15;
		L_15 = HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB(L_14, HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB_RuntimeMethod_var);
		V_2 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553((&V_2), Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_0051_1:
			{
				// foreach (var c in mClients)
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_16;
				L_16 = Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_inline((&V_2), Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_RuntimeMethod_var);
				// if (c == client)
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_17 = ___client0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_16, L_17, NULL);
				if (!L_18)
				{
					goto IL_0062_1;
				}
			}
			{
				// break;
				goto IL_008c;
			}

IL_0062_1:
			{
				// pos.y += size.y;
				float* L_19 = (&(&V_0)->___y_1);
				float* L_20 = L_19;
				float L_21 = *((float*)L_20);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
				float L_23 = L_22.___y_1;
				*((float*)L_20) = (float)((float)il2cpp_codegen_add(L_21, L_23));
			}

IL_0073_1:
			{
				// foreach (var c in mClients)
				bool L_24;
				L_24 = Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645((&V_2), Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		// return new Rect(pos, size);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_27;
		memset((&L_27), 0, sizeof(L_27));
		Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675((&L_27), L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Text.StringBuilder Cinemachine.Utility.CinemachineDebug::SBFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* CinemachineDebug_SBFromPool_mAA83D56A38ECFD61FC135792DC0778A7B152938D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mAvailableStringBuilders == null || mAvailableStringBuilders.Count == 0)
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_0 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_1 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_inline(L_1, List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		// return new StringBuilder();
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		return L_3;
	}

IL_0019:
	{
		// var sb = mAvailableStringBuilders[mAvailableStringBuilders.Count - 1];
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_4 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_5 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_inline(L_5, List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var);
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8(L_4, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8_RuntimeMethod_var);
		// mAvailableStringBuilders.RemoveAt(mAvailableStringBuilders.Count - 1);
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_8 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_9 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_inline(L_9, List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409(L_8, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409_RuntimeMethod_var);
		// sb.Length = 0;
		StringBuilder_t* L_11 = L_7;
		NullCheck(L_11);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_11, 0, NULL);
		// return sb;
		return L_11;
	}
}
// System.Void Cinemachine.Utility.CinemachineDebug::ReturnToPool(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineDebug_ReturnToPool_mBFBCCF1AEE29E2BD115AF5BCD172BBB8B95C5EA7 (StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mAvailableStringBuilders == null)
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_0 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// mAvailableStringBuilders = new List<StringBuilder>();
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_1 = (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*)il2cpp_codegen_object_new(List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138(L_1, List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138_RuntimeMethod_var);
		((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2), (void*)L_1);
	}

IL_0011:
	{
		// mAvailableStringBuilders.Add(sb);
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_2 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		StringBuilder_t* L_3 = ___sb0;
		NullCheck(L_2);
		List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_inline(L_2, L_3, List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.CinemachineDebug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineDebug__ctor_mAF77C21C69B520883959BEC3DE58BBDD83CE5F8E (CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_Multicast(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* currentDelegate = reinterpret_cast<OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenInst(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenStatic(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenStaticInvoker(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_ClosedStaticInvoker(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708 (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate__ctor_mB8767C1FEE32279209BC7F763E7C133C62B92FB0 (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_Multicast;
}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464 (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGUIDelegate_BeginInvoke_m7F8DBBFCF5F26BB61396A8DACB90A543E942EE20 (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate_EndInvoke_m333ABE0CEA01B43E00AE0D77A7CE8279DDF2604F (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Cinemachine.Utility.GaussianWindow1D_Vector3::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1D_Vector3__ctor_m24BDA3F6806B2C7687313112EF321052C4FFA574 (GaussianWindow1D_Vector3_t2392E8CA14D412847A8C8FFC9E548D1AF61A4D86* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(sigma, maxKernelRadius) {}
		float L_0 = ___sigma0;
		int32_t L_1 = ___maxKernelRadius1;
		GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09(__this, L_0, L_1, GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_RuntimeMethod_var);
		// : base(sigma, maxKernelRadius) {}
		return;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.GaussianWindow1D_Vector3::Compute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GaussianWindow1D_Vector3_Compute_m50CFE925DFF71745A8032D15E19D650B6A4AB4A4 (GaussianWindow1D_Vector3_t2392E8CA14D412847A8C8FFC9E548D1AF61A4D86* __this, int32_t ___windowPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 sum = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// for (int i = 0; i < KernelSize; ++i)
		V_1 = 0;
		goto IL_003f;
	}

IL_000a:
	{
		// sum += mData[windowPos] * mKernel[i];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ((GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C*)__this)->___mData_0;
		int32_t L_3 = ___windowPos0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ((GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C*)__this)->___mKernel_1;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_10, NULL);
		V_0 = L_11;
		// if (++windowPos == KernelSize)
		int32_t L_12 = ___windowPos0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___windowPos0 = L_13;
		int32_t L_14;
		L_14 = GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A(__this, GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_003b;
		}
	}
	{
		// windowPos = 0;
		___windowPos0 = 0;
	}

IL_003b:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A(__this, GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000a;
		}
	}
	{
		// return sum;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		return L_18;
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
// System.Void Cinemachine.Utility.GaussianWindow1D_Quaternion::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1D_Quaternion__ctor_m34E6A4BE5AEDDB27919FB447706477666FDEF7BE (GaussianWindow1D_Quaternion_t81313B62477A5C087C4DD0D5A4CAC929C2F7938B* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(sigma, maxKernelRadius) {}
		float L_0 = ___sigma0;
		int32_t L_1 = ___maxKernelRadius1;
		GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8(__this, L_0, L_1, GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_RuntimeMethod_var);
		// : base(sigma, maxKernelRadius) {}
		return;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.GaussianWindow1D_Quaternion::Compute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GaussianWindow1D_Quaternion_Compute_m7482A5084DE01B7B0AAF60567BF9FBBE2C3A1738 (GaussianWindow1D_Quaternion_t81313B62477A5C087C4DD0D5A4CAC929C2F7938B* __this, int32_t ___windowPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Quaternion sum = new Quaternion(0, 0, 0, 0);
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_0), (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		// Quaternion q = mData[mCurrentPos];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ((GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*)__this)->___mData_0;
		int32_t L_1 = ((GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*)__this)->___mCurrentPos_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// Quaternion qInverse = Quaternion.Inverse(q);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_4, NULL);
		V_2 = L_5;
		// for (int i = 0; i < KernelSize; ++i)
		V_3 = 0;
		goto IL_00da;
	}

IL_003b:
	{
		// float scale = mKernel[i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ((GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*)__this)->___mKernel_1;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// Quaternion q2 = qInverse * mData[windowPos];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_2;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_11 = ((GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*)__this)->___mData_0;
		int32_t L_12 = ___windowPos0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_10, L_14, NULL);
		V_5 = L_15;
		// if (Quaternion.Dot(Quaternion.identity, q2) < 0)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_5;
		float L_18;
		L_18 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_16, L_17, NULL);
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		// scale = -scale;
		float L_19 = V_4;
		V_4 = ((-L_19));
	}

IL_0071:
	{
		// sum.x += q2.x * scale;
		float* L_20 = (&(&V_0)->___x_0);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_5;
		float L_24 = L_23.___x_0;
		float L_25 = V_4;
		*((float*)L_21) = (float)((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(L_24, L_25))));
		// sum.y += q2.y * scale;
		float* L_26 = (&(&V_0)->___y_1);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_5;
		float L_30 = L_29.___y_1;
		float L_31 = V_4;
		*((float*)L_27) = (float)((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(L_30, L_31))));
		// sum.z += q2.z * scale;
		float* L_32 = (&(&V_0)->___z_2);
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_5;
		float L_36 = L_35.___z_2;
		float L_37 = V_4;
		*((float*)L_33) = (float)((float)il2cpp_codegen_add(L_34, ((float)il2cpp_codegen_multiply(L_36, L_37))));
		// sum.w += q2.w * scale;
		float* L_38 = (&(&V_0)->___w_3);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = V_5;
		float L_42 = L_41.___w_3;
		float L_43 = V_4;
		*((float*)L_39) = (float)((float)il2cpp_codegen_add(L_40, ((float)il2cpp_codegen_multiply(L_42, L_43))));
		// if (++windowPos == KernelSize)
		int32_t L_44 = ___windowPos0;
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		___windowPos0 = L_45;
		int32_t L_46;
		L_46 = GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC(__this, GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_RuntimeMethod_var);
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_00d6;
		}
	}
	{
		// windowPos = 0;
		___windowPos0 = 0;
	}

IL_00d6:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00da:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_48 = V_3;
		int32_t L_49;
		L_49 = GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC(__this, GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_RuntimeMethod_var);
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_003b;
		}
	}
	{
		// return q * Quaternion.Normalize(sum);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_Normalize_m8845A29F55B839D0CD43124B1AA34034BFCA9A7D_inline(L_51, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_50, L_52, NULL);
		return L_53;
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
// System.Void Cinemachine.Utility.GaussianWindow1D_CameraRotation::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1D_CameraRotation__ctor_m93E64892C4CC9FFE4D20A5AE0EDB3761E0D357C5 (GaussianWindow1D_CameraRotation_t038ADB42DAC4B627909A377F105CBD40260BBC98* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(sigma, maxKernelRadius) {}
		float L_0 = ___sigma0;
		int32_t L_1 = ___maxKernelRadius1;
		GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB(__this, L_0, L_1, GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_RuntimeMethod_var);
		// : base(sigma, maxKernelRadius) {}
		return;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.GaussianWindow1D_CameraRotation::Compute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GaussianWindow1D_CameraRotation_Compute_m5D42413D3C9A040A0E75B1B3FFFE24DA04628AD2 (GaussianWindow1D_CameraRotation_t038ADB42DAC4B627909A377F105CBD40260BBC98* __this, int32_t ___windowPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector2 sum = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// Vector2 v = mData[mCurrentPos];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ((GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*)__this)->___mData_0;
		int32_t L_2 = ((GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*)__this)->___mCurrentPos_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// for (int i = 0; i < KernelSize; ++i)
		V_2 = 0;
		goto IL_0093;
	}

IL_001c:
	{
		// Vector2 v2 = mData[windowPos] - v;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ((GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*)__this)->___mData_0;
		int32_t L_6 = ___windowPos0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_8, L_9, NULL);
		V_3 = L_10;
		// if (v2.y > 180f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_3;
		float L_12 = L_11.___y_1;
		if ((!(((float)L_12) > ((float)(180.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// v2.y -= 360f;
		float* L_13 = (&(&V_3)->___y_1);
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		*((float*)L_14) = (float)((float)il2cpp_codegen_subtract(L_15, (360.0f)));
	}

IL_004c:
	{
		// if (v2.y < -180f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_3;
		float L_17 = L_16.___y_1;
		if ((!(((float)L_17) < ((float)(-180.0f)))))
		{
			goto IL_0069;
		}
	}
	{
		// v2.y += 360f;
		float* L_18 = (&(&V_3)->___y_1);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_add(L_20, (360.0f)));
	}

IL_0069:
	{
		// sum += v2 * mKernel[i];
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ((GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*)__this)->___mKernel_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_22, L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_21, L_27, NULL);
		V_0 = L_28;
		// if (++windowPos == KernelSize)
		int32_t L_29 = ___windowPos0;
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		___windowPos0 = L_30;
		int32_t L_31;
		L_31 = GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7(__this, GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_RuntimeMethod_var);
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_008f;
		}
	}
	{
		// windowPos = 0;
		___windowPos0 = 0;
	}

IL_008f:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0093:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_33 = V_2;
		int32_t L_34;
		L_34 = GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7(__this, GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_001c;
		}
	}
	{
		// return v + sum;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_35, L_36, NULL);
		return L_37;
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
// System.Boolean Cinemachine.Utility.PositionPredictor::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PositionPredictor_IsEmpty_m61F4928BCB8526CD0A823F2B2A46FDE04905C97B (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty() { return !m_HavePos; }
		bool L_0 = __this->___m_HavePos_3;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::ApplyTransformDelta(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_ApplyTransformDelta_mDA012CCA329F143DDF342616369F0E75B2E2C97A (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionDelta0, const RuntimeMethod* method) 
{
	{
		// public void ApplyTransformDelta(Vector3 positionDelta) { m_Pos += positionDelta; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Pos_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___positionDelta0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		__this->___m_Pos_2 = L_2;
		// public void ApplyTransformDelta(Vector3 positionDelta) { m_Pos += positionDelta; }
		return;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_Reset_mDA454522FB1823437E5538169D712A2E18F956C5 (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, const RuntimeMethod* method) 
{
	{
		// m_HavePos = false;
		__this->___m_HavePos_3 = (bool)0;
		// m_SmoothDampVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_SmoothDampVelocity_1 = L_0;
		// m_Velocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_Velocity_0 = L_1;
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::AddPosition(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_AddPosition_mB5EFA6BB6598A9D52D1CE6BD50400E56938C433C (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___deltaTime1, float ___lookaheadTime2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float G_B6_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_2;
	memset((&G_B6_2), 0, sizeof(G_B6_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_3;
	memset((&G_B6_3), 0, sizeof(G_B6_3));
	PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* G_B6_4 = NULL;
	float G_B5_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_2;
	memset((&G_B5_2), 0, sizeof(G_B5_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_3;
	memset((&G_B5_3), 0, sizeof(G_B5_3));
	PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* G_B5_4 = NULL;
	int32_t G_B7_0 = 0;
	float G_B7_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_3;
	memset((&G_B7_3), 0, sizeof(G_B7_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_4;
	memset((&G_B7_4), 0, sizeof(G_B7_4));
	PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* G_B7_5 = NULL;
	{
		// if (deltaTime < 0)
		float L_0 = ___deltaTime1;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// Reset();
		PositionPredictor_Reset_mDA454522FB1823437E5538169D712A2E18F956C5(__this, NULL);
	}

IL_000e:
	{
		// if (m_HavePos && deltaTime > UnityVectorExtensions.Epsilon)
		bool L_1 = __this->___m_HavePos_3;
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		float L_2 = ___deltaTime1;
		if ((!(((float)L_2) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0075;
		}
	}
	{
		// var vel = (pos - m_Pos) / deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_Pos_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		float L_6 = ___deltaTime1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// bool slowing = vel.sqrMagnitude < m_Velocity.sqrMagnitude;
		float L_8;
		L_8 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___m_Velocity_0);
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(L_9, NULL);
		V_1 = (bool)((((float)L_8) < ((float)L_10))? 1 : 0);
		// m_Velocity = Vector3.SmoothDamp(
		//     m_Velocity, vel, ref m_SmoothDampVelocity, Smoothing / (slowing ? 30 : 10),
		//     float.PositiveInfinity, deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___m_Velocity_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___m_SmoothDampVelocity_1);
		float L_14 = __this->___Smoothing_4;
		bool L_15 = V_1;
		G_B5_0 = L_14;
		G_B5_1 = L_13;
		G_B5_2 = L_12;
		G_B5_3 = L_11;
		G_B5_4 = __this;
		if (L_15)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_13;
			G_B6_2 = L_12;
			G_B6_3 = L_11;
			G_B6_4 = __this;
			goto IL_0061;
		}
	}
	{
		G_B7_0 = ((int32_t)10);
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		G_B7_5 = G_B5_4;
		goto IL_0063;
	}

IL_0061:
	{
		G_B7_0 = ((int32_t)30);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
		G_B7_5 = G_B6_4;
	}

IL_0063:
	{
		float L_16 = ___deltaTime1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(G_B7_4, G_B7_3, G_B7_2, ((float)(G_B7_1/((float)G_B7_0))), (std::numeric_limits<float>::infinity()), L_16, NULL);
		NullCheck(G_B7_5);
		G_B7_5->___m_Velocity_0 = L_17;
	}

IL_0075:
	{
		// m_Pos = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___pos0;
		__this->___m_Pos_2 = L_18;
		// m_HavePos = true;
		__this->___m_HavePos_3 = (bool)1;
		// }
		return;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::PredictPositionDelta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionPredictor_PredictPositionDelta_mC16231F75C5C088B5CC2444D3C2FA12F6DACC4AD (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, float ___lookaheadTime0, const RuntimeMethod* method) 
{
	{
		// return m_Velocity * lookaheadTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Velocity_0;
		float L_1 = ___lookaheadTime0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::PredictPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionPredictor_PredictPosition_mB280F23A4D236037F339758BDEC4AD2DE89AB18F (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, float ___lookaheadTime0, const RuntimeMethod* method) 
{
	{
		// return m_Pos + PredictPositionDelta(lookaheadTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Pos_2;
		float L_1 = ___lookaheadTime0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = PositionPredictor_PredictPositionDelta_mC16231F75C5C088B5CC2444D3C2FA12F6DACC4AD(__this, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor__ctor_m98DC334F817608D8CA4FA09966193AA59A16DB25 (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single Cinemachine.Utility.Damper::DecayConstant(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_DecayConstant_m66A0B4920185F5E89CB4ACA436BBA7DDDB7AFBBC (float ___time0, float ___residual1, const RuntimeMethod* method) 
{
	{
		// return Mathf.Log(1f / residual) / time;
		float L_0 = ___residual1;
		float L_1;
		L_1 = logf(((float)((1.0f)/L_0)));
		float L_2 = ___time0;
		return ((float)(L_1/L_2));
	}
}
// System.Single Cinemachine.Utility.Damper::DecayedRemainder(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_DecayedRemainder_mFDDE3E237019D299FCB912A50836D5B89714F048 (float ___initial0, float ___decayConstant1, float ___deltaTime2, const RuntimeMethod* method) 
{
	{
		// return initial / Mathf.Exp(decayConstant * deltaTime);
		float L_0 = ___initial0;
		float L_1 = ___decayConstant1;
		float L_2 = ___deltaTime2;
		float L_3;
		L_3 = expf(((float)il2cpp_codegen_multiply(L_1, L_2)));
		return ((float)(L_0/L_3));
	}
}
// System.Single Cinemachine.Utility.Damper::Damp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_Damp_m3245F3453DB74DE11801C6EE15F163D5EAFC0CE4 (float ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (dampTime < Epsilon || Mathf.Abs(initial) < Epsilon)
		float L_0 = ___dampTime1;
		if ((((float)L_0) < ((float)(9.99999975E-05f))))
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = ___initial0;
		float L_2;
		L_2 = fabsf(L_1);
		if ((!(((float)L_2) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// return initial;
		float L_3 = ___initial0;
		return L_3;
	}

IL_0017:
	{
		// if (deltaTime < Epsilon)
		float L_4 = ___deltaTime2;
		if ((!(((float)L_4) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0025;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0025:
	{
		// float k = -kLogNegligibleResidual / dampTime; //DecayConstant(dampTime, kNegligibleResidual);
		float L_5 = ___dampTime1;
		V_0 = ((float)((4.60517025f)/L_5));
		// return initial * (1 - Mathf.Exp(-k * deltaTime));
		float L_6 = ___initial0;
		float L_7 = V_0;
		float L_8 = ___deltaTime2;
		float L_9;
		L_9 = expf(((float)il2cpp_codegen_multiply(((-L_7)), L_8)));
		return ((float)il2cpp_codegen_multiply(L_6, ((float)il2cpp_codegen_subtract((1.0f), L_9))));
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.Damper::Damp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Damper_Damp_m3FF6416E2538374C5805A252094351151793F5E7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initial0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dampTime1, float ___deltaTime2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 3; ++i)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// initial[i] = Damp(initial[i], dampTime[i], deltaTime);
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		float L_2;
		L_2 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___initial0), L_1, NULL);
		int32_t L_3 = V_0;
		float L_4;
		L_4 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___dampTime1), L_3, NULL);
		float L_5 = ___deltaTime2;
		float L_6;
		L_6 = Damper_Damp_m3245F3453DB74DE11801C6EE15F163D5EAFC0CE4(L_2, L_4, L_5, NULL);
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline((&___initial0), L_0, L_6, NULL);
		// for (int i = 0; i < 3; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// return initial;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___initial0;
		return L_9;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.Damper::Damp(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Damper_Damp_mBBBCCE7F67FF9678EE42AA0B0EBD7BC4FFEF2FB9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 3; ++i)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// initial[i] = Damp(initial[i], dampTime, deltaTime);
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		float L_2;
		L_2 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___initial0), L_1, NULL);
		float L_3 = ___dampTime1;
		float L_4 = ___deltaTime2;
		float L_5;
		L_5 = Damper_Damp_m3245F3453DB74DE11801C6EE15F163D5EAFC0CE4(L_2, L_3, L_4, NULL);
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline((&___initial0), L_0, L_5, NULL);
		// for (int i = 0; i < 3; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// return initial;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___initial0;
		return L_8;
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
// System.Void Cinemachine.Utility.HeadingTracker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker__ctor_m65E930C6FC3B44B9DE66B61332E4A960A14BE25B (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, int32_t ___filterSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Vector3 mLastGoodHeading = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___mLastGoodHeading_7 = L_0;
		// public HeadingTracker(int filterSize)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mHistory = new Item[filterSize];
		int32_t L_1 = ___filterSize0;
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_2 = (ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47*)(ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47*)SZArrayNew(ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___mHistory_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mHistory_0), (void*)L_2);
		// float historyHalfLife = filterSize / 5f; // somewhat arbitrarily
		int32_t L_3 = ___filterSize0;
		V_0 = ((float)(((float)L_3)/(5.0f)));
		// mDecayExponent = -Mathf.Log(2f) / historyHalfLife;
		float L_4;
		L_4 = logf((2.0f));
		float L_5 = V_0;
		((HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_StaticFields*)il2cpp_codegen_static_fields_for(HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var))->___mDecayExponent_8 = ((float)(((-L_4))/L_5));
		// ClearHistory();
		HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5(__this, NULL);
		// }
		return;
	}
}
// System.Int32 Cinemachine.Utility.HeadingTracker::get_FilterSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	{
		// public int FilterSize { get { return mHistory.Length; } }
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_0 = __this->___mHistory_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::ClearHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// mTop = mBottom = mCount = 0;
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->___mCount_3 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___mBottom_2 = L_2;
		int32_t L_3 = V_0;
		__this->___mTop_1 = L_3;
		// mWeightSum = 0;
		__this->___mWeightSum_5 = (0.0f);
		// mHeadingSum = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___mHeadingSum_4 = L_4;
		// }
		return;
	}
}
// System.Single Cinemachine.Utility.HeadingTracker::Decay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HeadingTracker_Decay_mCBB06FF8B9BC4A154A4EFC9DA910854ED0FB25F8 (float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static float Decay(float time) { return Mathf.Exp(time * mDecayExponent); }
		float L_0 = ___time0;
		float L_1 = ((HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_StaticFields*)il2cpp_codegen_static_fields_for(HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var))->___mDecayExponent_8;
		float L_2;
		L_2 = expf(((float)il2cpp_codegen_multiply(L_0, L_1)));
		return L_2;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::Add(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_Add_m9FC794FA982A8598BC1FA0DB46EFAA7507CB861D (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// if (FilterSize == 0)
		int32_t L_0;
		L_0 = HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151(__this, NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// mLastGoodHeading = velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___velocity0;
		__this->___mLastGoodHeading_7 = L_1;
		// return;
		return;
	}

IL_0010:
	{
		// float weight = velocity.magnitude;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___velocity0), NULL);
		V_0 = L_2;
		// if (weight > UnityVectorExtensions.Epsilon)
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(9.99999975E-05f)))))
		{
			goto IL_00eb;
		}
	}
	{
		// Item item = new Item();
		il2cpp_codegen_initobj((&V_1), sizeof(Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2));
		// item.velocity = velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___velocity0;
		(&V_1)->___velocity_0 = L_4;
		// item.weight = weight;
		float L_5 = V_0;
		(&V_1)->___weight_1 = L_5;
		// item.time = CinemachineCore.CurrentTime;
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = CinemachineCore_get_CurrentTime_mFA05B621BE52910A8C3A304CB715257011C9A782(NULL);
		(&V_1)->___time_2 = L_6;
		// if (mCount == FilterSize)
		int32_t L_7 = __this->___mCount_3;
		int32_t L_8;
		L_8 = HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151(__this, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_005b;
		}
	}
	{
		// PopBottom();
		HeadingTracker_PopBottom_mCB0D0A7AE4238580CB7FFAAD17497F7B532B57AE(__this, NULL);
	}

IL_005b:
	{
		// ++mCount;
		int32_t L_9 = __this->___mCount_3;
		__this->___mCount_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// mHistory[mTop] = item;
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_10 = __this->___mHistory_0;
		int32_t L_11 = __this->___mTop_1;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_12 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2)L_12);
		// if (++mTop == FilterSize)
		int32_t L_13 = __this->___mTop_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_2;
		__this->___mTop_1 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16;
		L_16 = HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151(__this, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_009b;
		}
	}
	{
		// mTop = 0;
		__this->___mTop_1 = 0;
	}

IL_009b:
	{
		// mWeightSum *= Decay(item.time - mWeightTime);
		float L_17 = __this->___mWeightSum_5;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_18 = V_1;
		float L_19 = L_18.___time_2;
		float L_20 = __this->___mWeightTime_6;
		float L_21;
		L_21 = HeadingTracker_Decay_mCBB06FF8B9BC4A154A4EFC9DA910854ED0FB25F8(((float)il2cpp_codegen_subtract(L_19, L_20)), NULL);
		__this->___mWeightSum_5 = ((float)il2cpp_codegen_multiply(L_17, L_21));
		// mWeightTime = item.time;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_22 = V_1;
		float L_23 = L_22.___time_2;
		__this->___mWeightTime_6 = L_23;
		// mWeightSum += weight;
		float L_24 = __this->___mWeightSum_5;
		float L_25 = V_0;
		__this->___mWeightSum_5 = ((float)il2cpp_codegen_add(L_24, L_25));
		// mHeadingSum += item.velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___mHeadingSum_4;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27.___velocity_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_28, NULL);
		__this->___mHeadingSum_4 = L_29;
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::PopBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_PopBottom_mCB0D0A7AE4238580CB7FFAAD17497F7B532B57AE (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	{
		// if (mCount > 0)
		int32_t L_0 = __this->___mCount_3;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		// float time = CinemachineCore.CurrentTime;
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CinemachineCore_get_CurrentTime_mFA05B621BE52910A8C3A304CB715257011C9A782(NULL);
		// Item item = mHistory[mBottom];
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_2 = __this->___mHistory_0;
		int32_t L_3 = __this->___mBottom_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (++mBottom == FilterSize)
		int32_t L_6 = __this->___mBottom_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_2;
		__this->___mBottom_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9;
		L_9 = HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151(__this, NULL);
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			G_B3_0 = L_1;
			goto IL_0043;
		}
	}
	{
		// mBottom = 0;
		__this->___mBottom_2 = 0;
		G_B3_0 = G_B2_0;
	}

IL_0043:
	{
		// --mCount;
		int32_t L_10 = __this->___mCount_3;
		__this->___mCount_3 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		// float decay = Decay(time - item.time);
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_11 = V_0;
		float L_12 = L_11.___time_2;
		float L_13;
		L_13 = HeadingTracker_Decay_mCBB06FF8B9BC4A154A4EFC9DA910854ED0FB25F8(((float)il2cpp_codegen_subtract(G_B3_0, L_12)), NULL);
		V_1 = L_13;
		// mWeightSum -= item.weight * decay;
		float L_14 = __this->___mWeightSum_5;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_15 = V_0;
		float L_16 = L_15.___weight_1;
		float L_17 = V_1;
		__this->___mWeightSum_5 = ((float)il2cpp_codegen_subtract(L_14, ((float)il2cpp_codegen_multiply(L_16, L_17))));
		// mHeadingSum -= item.velocity * decay;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___mHeadingSum_4;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19.___velocity_0;
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_18, L_22, NULL);
		__this->___mHeadingSum_4 = L_23;
		// if (mWeightSum <= UnityVectorExtensions.Epsilon || mCount == 0)
		float L_24 = __this->___mWeightSum_5;
		if ((((float)L_24) <= ((float)(9.99999975E-05f))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_25 = __this->___mCount_3;
		if (L_25)
		{
			goto IL_00ab;
		}
	}

IL_00a5:
	{
		// ClearHistory();
		HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5(__this, NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::DecayHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_DecayHistory_m9E2B8A0731C6C492AE78B36925860F4A3EFA1BB7 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float time = CinemachineCore.CurrentTime;
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CinemachineCore_get_CurrentTime_mFA05B621BE52910A8C3A304CB715257011C9A782(NULL);
		V_0 = L_0;
		// float decay = Decay(time - mWeightTime);
		float L_1 = V_0;
		float L_2 = __this->___mWeightTime_6;
		float L_3;
		L_3 = HeadingTracker_Decay_mCBB06FF8B9BC4A154A4EFC9DA910854ED0FB25F8(((float)il2cpp_codegen_subtract(L_1, L_2)), NULL);
		V_1 = L_3;
		// mWeightSum *= decay;
		float L_4 = __this->___mWeightSum_5;
		float L_5 = V_1;
		__this->___mWeightSum_5 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// mWeightTime = time;
		float L_6 = V_0;
		__this->___mWeightTime_6 = L_6;
		// if (mWeightSum < UnityVectorExtensions.Epsilon)
		float L_7 = __this->___mWeightSum_5;
		if ((!(((float)L_7) < ((float)(9.99999975E-05f)))))
		{
			goto IL_003d;
		}
	}
	{
		// ClearHistory();
		HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5(__this, NULL);
		return;
	}

IL_003d:
	{
		// mHeadingSum = mHeadingSum * decay;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___mHeadingSum_4;
		float L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		__this->___mHeadingSum_4 = L_10;
		// }
		return;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker::GetReliableHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HeadingTracker_GetReliableHeading_m3277A5C1F94F1269E38655527EB71AACF594F695 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (mWeightSum > UnityVectorExtensions.Epsilon
		//     && (mCount == mHistory.Length || mLastGoodHeading.AlmostZero()))
		float L_0 = __this->___mWeightSum_5;
		if ((!(((float)L_0) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___mCount_3;
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_2 = __this->___mHistory_0;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___mLastGoodHeading_7;
		bool L_4;
		L_4 = UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652(L_3, NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}

IL_002a:
	{
		// Vector3  h = mHeadingSum / mWeightSum;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___mHeadingSum_4;
		float L_6 = __this->___mWeightSum_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// if (!h.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		bool L_9;
		L_9 = UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652(L_8, NULL);
		if (L_9)
		{
			goto IL_0051;
		}
	}
	{
		// mLastGoodHeading = h.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___mLastGoodHeading_7 = L_10;
	}

IL_0051:
	{
		// return mLastGoodHeading;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___mLastGoodHeading_7;
		return L_11;
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
// UnityEngine.Vector3 Cinemachine.Utility.SplineHelpers::Bezier3(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineHelpers_Bezier3_mB25BD7261EDA22A9FB162738403E6DC66F70F326 (float ___t0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p23, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p34, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t0 = L_1;
		// float d = 1f - t;
		float L_2 = ___t0;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		// return d * d * d * p0 + 3f * d * d * t * p1
		//     + 3f * d * t * t * p2 + t * t * t * p3;
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), L_6, NULL);
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_8)), L_9)), L_10)), L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_12, NULL);
		float L_14 = V_0;
		float L_15 = ___t0;
		float L_16 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___p23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_14)), L_15)), L_16)), L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_18, NULL);
		float L_20 = ___t0;
		float L_21 = ___t0;
		float L_22 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___p34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_20, L_21)), L_22)), L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_24, NULL);
		return L_25;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.SplineHelpers::BezierTangent3(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineHelpers_BezierTangent3_m0CAB33B99E4DD03F36C592C5A95BCDC52C16BF27 (float ___t0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p23, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p34, const RuntimeMethod* method) 
{
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t0 = L_1;
		// return (-3f * p0 + 9f * p1 - 9f * p2 + 3f * p3) * (t * t)
		//     +  (6f * p0 - 12f * p1 + 6f * p2) * t
		//     -  3f * p0 + 3f * p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((-3.0f), L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((9.0f), L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___p23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((9.0f), L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___p34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_11, NULL);
		float L_13 = ___t0;
		float L_14 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((6.0f), L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((12.0f), L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___p23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((6.0f), L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_22, NULL);
		float L_24 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_31, NULL);
		return L_32;
	}
}
// System.Single Cinemachine.Utility.SplineHelpers::Bezier1(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineHelpers_Bezier1_mAA7872DF66FA529E419AE4B19F25BDD9B28A7041 (float ___t0, float ___p01, float ___p12, float ___p23, float ___p34, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t0 = L_1;
		// float d = 1f - t;
		float L_2 = ___t0;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		// return d * d * d * p0 + 3f * d * d * t * p1
		//     + 3f * d * t * t * p2 + t * t * t * p3;
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5 = V_0;
		float L_6 = ___p01;
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9 = ___t0;
		float L_10 = ___p12;
		float L_11 = V_0;
		float L_12 = ___t0;
		float L_13 = ___t0;
		float L_14 = ___p23;
		float L_15 = ___t0;
		float L_16 = ___t0;
		float L_17 = ___t0;
		float L_18 = ___p34;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), L_6)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_7)), L_8)), L_9)), L_10)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_11)), L_12)), L_13)), L_14)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, L_16)), L_17)), L_18))));
	}
}
// System.Single Cinemachine.Utility.SplineHelpers::BezierTangent1(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineHelpers_BezierTangent1_m41F1633A4094E5701EB543B445C8C1051CC4AA21 (float ___t0, float ___p01, float ___p12, float ___p23, float ___p34, const RuntimeMethod* method) 
{
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t0 = L_1;
		// return (-3f * p0 + 9f * p1 - 9f * p2 + 3f * p3) * t * t
		//     +  (6f * p0 - 12f * p1 + 6f * p2) * t
		//     -  3f * p0 + 3f * p1;
		float L_2 = ___p01;
		float L_3 = ___p12;
		float L_4 = ___p23;
		float L_5 = ___p34;
		float L_6 = ___t0;
		float L_7 = ___t0;
		float L_8 = ___p01;
		float L_9 = ___p12;
		float L_10 = ___p23;
		float L_11 = ___t0;
		float L_12 = ___p01;
		float L_13 = ___p12;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-3.0f), L_2)), ((float)il2cpp_codegen_multiply((9.0f), L_3)))), ((float)il2cpp_codegen_multiply((9.0f), L_4)))), ((float)il2cpp_codegen_multiply((3.0f), L_5)))), L_6)), L_7)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((6.0f), L_8)), ((float)il2cpp_codegen_multiply((12.0f), L_9)))), ((float)il2cpp_codegen_multiply((6.0f), L_10)))), L_11)))), ((float)il2cpp_codegen_multiply((3.0f), L_12)))), ((float)il2cpp_codegen_multiply((3.0f), L_13))));
	}
}
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPoints(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPoints_mF56B274A09DF5E4E77BC1BD1903C423FE9F1391A (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___knot0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl11, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_4 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// int numPoints = knot.Length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_0 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// if (numPoints <= 2)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		// if (numPoints == 2)
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		// ctrl1[0] = Vector4.Lerp(knot[0], knot[1], 0.33333f);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_4 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_6 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_6);
		NullCheck(L_7);
		int32_t L_8 = 0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_10 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_10);
		NullCheck(L_11);
		int32_t L_12 = 1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		L_14 = Vector4_Lerp_mE5FFF3D013F0880F7DF8C613E7CB44EBD7349DAB_inline(L_9, L_13, (0.333330005f), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_14);
		// ctrl2[0] = Vector4.Lerp(knot[0], knot[1], 0.66666f);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_15 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_15);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_17 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_18 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_17);
		NullCheck(L_18);
		int32_t L_19 = 0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_21 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_21);
		NullCheck(L_22);
		int32_t L_23 = 1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Vector4_Lerp_mE5FFF3D013F0880F7DF8C613E7CB44EBD7349DAB_inline(L_20, L_24, (0.666660011f), NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_25);
		return;
	}

IL_0052:
	{
		// else if (numPoints == 1)
		int32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		// ctrl1[0] = ctrl2[0] = knot[0];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_27 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_28 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_27);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_29 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_30 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_29);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_31 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_32 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_31);
		NullCheck(L_32);
		int32_t L_33 = 0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = L_34;
		V_5 = L_35;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_35);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36 = V_5;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_36);
	}

IL_0073:
	{
		// return;
		return;
	}

IL_0074:
	{
		// var a = new float[numPoints];
		int32_t L_37 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_37);
		V_1 = L_38;
		// var b = new float[numPoints];
		int32_t L_39 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_39);
		V_2 = L_40;
		// var c = new float[numPoints];
		int32_t L_41 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_41);
		V_3 = L_42;
		// var r = new float[numPoints];
		int32_t L_43 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_43);
		V_4 = L_44;
		// for (int axis = 0; axis < 4; ++axis)
		V_6 = 0;
		goto IL_02c9;
	}

IL_0099:
	{
		// int n = numPoints - 1;
		int32_t L_45 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		// a[0] = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = V_1;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0f));
		// b[0] = 2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = V_2;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(2.0f));
		// c[0] = 1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = V_3;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		// r[0] = knot[0][axis] + 2 * knot[1][axis];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = V_4;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_50 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_51 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_50);
		NullCheck(L_51);
		int32_t L_52 = V_6;
		float L_53;
		L_53 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_52, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_54 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_55 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_54);
		NullCheck(L_55);
		int32_t L_56 = V_6;
		float L_57;
		L_57 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), L_56, NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_add(L_53, ((float)il2cpp_codegen_multiply((2.0f), L_57)))));
		// for (int i = 1; i < n - 1; ++i)
		V_8 = 1;
		goto IL_0139;
	}

IL_00e4:
	{
		// a[i] = 1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = V_1;
		int32_t L_59 = V_8;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (float)(1.0f));
		// b[i] = 4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = V_2;
		int32_t L_61 = V_8;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (float)(4.0f));
		// c[i] = 1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_62 = V_3;
		int32_t L_63 = V_8;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (float)(1.0f));
		// r[i] = 4 * knot[i][axis] + 2 * knot[i+1][axis];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = V_4;
		int32_t L_65 = V_8;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_66 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_67 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_66);
		int32_t L_68 = V_8;
		NullCheck(L_67);
		int32_t L_69 = V_6;
		float L_70;
		L_70 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), L_69, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_71 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_72 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_71);
		int32_t L_73 = V_8;
		NullCheck(L_72);
		int32_t L_74 = V_6;
		float L_75;
		L_75 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_73, 1))))), L_74, NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((4.0f), L_70)), ((float)il2cpp_codegen_multiply((2.0f), L_75)))));
		// for (int i = 1; i < n - 1; ++i)
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0139:
	{
		// for (int i = 1; i < n - 1; ++i)
		int32_t L_77 = V_8;
		int32_t L_78 = V_7;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_78, 1)))))
		{
			goto IL_00e4;
		}
	}
	{
		// a[n - 1] = 2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = V_1;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_80, 1))), (float)(2.0f));
		// b[n - 1] = 7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_81 = V_2;
		int32_t L_82 = V_7;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_82, 1))), (float)(7.0f));
		// c[n - 1] = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_83 = V_3;
		int32_t L_84 = V_7;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_84, 1))), (float)(0.0f));
		// r[n - 1] = 8 * knot[n - 1][axis] + knot[n][axis];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = V_4;
		int32_t L_86 = V_7;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_87 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_88 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_87);
		int32_t L_89 = V_7;
		NullCheck(L_88);
		int32_t L_90 = V_6;
		float L_91;
		L_91 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_89, 1))))), L_90, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_92 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_93 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_92);
		int32_t L_94 = V_7;
		NullCheck(L_93);
		int32_t L_95 = V_6;
		float L_96;
		L_96 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94))), L_95, NULL);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_86, 1))), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((8.0f), L_91)), L_96)));
		// for (int i = 1; i < n; ++i)
		V_9 = 1;
		goto IL_01d1;
	}

IL_0197:
	{
		// float m = a[i] / b[i-1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97 = V_1;
		int32_t L_98 = V_9;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		float L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_101 = V_2;
		int32_t L_102 = V_9;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		float L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_10 = ((float)(L_100/L_104));
		// b[i] = b[i] - m * c[i-1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_105 = V_2;
		int32_t L_106 = V_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_107 = V_2;
		int32_t L_108 = V_9;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		float L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		float L_111 = V_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_112 = V_3;
		int32_t L_113 = V_9;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_subtract(L_113, 1));
		float L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (float)((float)il2cpp_codegen_subtract(L_110, ((float)il2cpp_codegen_multiply(L_111, L_115)))));
		// r[i] = r[i] - m * r[i-1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_116 = V_4;
		int32_t L_117 = V_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_118 = V_4;
		int32_t L_119 = V_9;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		float L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		float L_122 = V_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_123 = V_4;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		int32_t L_125 = ((int32_t)il2cpp_codegen_subtract(L_124, 1));
		float L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (float)((float)il2cpp_codegen_subtract(L_121, ((float)il2cpp_codegen_multiply(L_122, L_126)))));
		// for (int i = 1; i < n; ++i)
		int32_t L_127 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_01d1:
	{
		// for (int i = 1; i < n; ++i)
		int32_t L_128 = V_9;
		int32_t L_129 = V_7;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_0197;
		}
	}
	{
		// ctrl1[n-1][axis] = r[n-1] / b[n-1];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_130 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_131 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_130);
		int32_t L_132 = V_7;
		NullCheck(L_131);
		int32_t L_133 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_134 = V_4;
		int32_t L_135 = V_7;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_subtract(L_135, 1));
		float L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_138 = V_2;
		int32_t L_139 = V_7;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_subtract(L_139, 1));
		float L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline(((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_132, 1))))), L_133, ((float)(L_137/L_141)), NULL);
		// for (int i = n - 2; i >= 0; --i)
		int32_t L_142 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_142, 2));
		goto IL_0237;
	}

IL_01ff:
	{
		// ctrl1[i][axis] = (r[i] - c[i] * ctrl1[i + 1][axis]) / b[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_143 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_144 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_143);
		int32_t L_145 = V_11;
		NullCheck(L_144);
		int32_t L_146 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_147 = V_4;
		int32_t L_148 = V_11;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		float L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_151 = V_3;
		int32_t L_152 = V_11;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		float L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_155 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_156 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_155);
		int32_t L_157 = V_11;
		NullCheck(L_156);
		int32_t L_158 = V_6;
		float L_159;
		L_159 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_156)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_157, 1))))), L_158, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_160 = V_2;
		int32_t L_161 = V_11;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		float L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline(((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_145))), L_146, ((float)(((float)il2cpp_codegen_subtract(L_150, ((float)il2cpp_codegen_multiply(L_154, L_159))))/L_163)), NULL);
		// for (int i = n - 2; i >= 0; --i)
		int32_t L_164 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_164, 1));
	}

IL_0237:
	{
		// for (int i = n - 2; i >= 0; --i)
		int32_t L_165 = V_11;
		if ((((int32_t)L_165) >= ((int32_t)0)))
		{
			goto IL_01ff;
		}
	}
	{
		// for (int i = 0; i < n; i++)
		V_12 = 0;
		goto IL_0282;
	}

IL_0241:
	{
		// ctrl2[i][axis] = 2 * knot[i + 1][axis] - ctrl1[i + 1][axis];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_166 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_167 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_166);
		int32_t L_168 = V_12;
		NullCheck(L_167);
		int32_t L_169 = V_6;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_170 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_171 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_170);
		int32_t L_172 = V_12;
		NullCheck(L_171);
		int32_t L_173 = V_6;
		float L_174;
		L_174 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_171)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_172, 1))))), L_173, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_175 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_176 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_175);
		int32_t L_177 = V_12;
		NullCheck(L_176);
		int32_t L_178 = V_6;
		float L_179;
		L_179 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_176)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_177, 1))))), L_178, NULL);
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline(((L_167)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_168))), L_169, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_174)), L_179)), NULL);
		// for (int i = 0; i < n; i++)
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 1));
	}

IL_0282:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_181 = V_12;
		int32_t L_182 = V_7;
		if ((((int32_t)L_181) < ((int32_t)L_182)))
		{
			goto IL_0241;
		}
	}
	{
		// ctrl2[n - 1][axis] = 0.5f * (knot[n][axis] + ctrl1[n - 1][axis]);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_183 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_184 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_183);
		int32_t L_185 = V_7;
		NullCheck(L_184);
		int32_t L_186 = V_6;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_187 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_188 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_187);
		int32_t L_189 = V_7;
		NullCheck(L_188);
		int32_t L_190 = V_6;
		float L_191;
		L_191 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_188)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_189))), L_190, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_192 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_193 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_192);
		int32_t L_194 = V_7;
		NullCheck(L_193);
		int32_t L_195 = V_6;
		float L_196;
		L_196 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_193)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_194, 1))))), L_195, NULL);
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline(((L_184)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_185, 1))))), L_186, ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(L_191, L_196)))), NULL);
		// for (int axis = 0; axis < 4; ++axis)
		int32_t L_197 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_197, 1));
	}

IL_02c9:
	{
		// for (int axis = 0; axis < 4; ++axis)
		int32_t L_198 = V_6;
		if ((((int32_t)L_198) < ((int32_t)4)))
		{
			goto IL_0099;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPointsLooped(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPointsLooped_m8B1901AC903B71584D7A4F381F723F2DF41D319F (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___knot0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl11, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_2 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_3 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_4 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int numPoints = knot.Length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_0 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// if (numPoints < 2)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		// if (numPoints == 1)
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		// ctrl1[0] = ctrl2[0] = knot[0];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_4 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_6 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_6);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_8 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_8);
		NullCheck(L_9);
		int32_t L_10 = 0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = L_11;
		V_5 = L_12;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_12);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_5;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_13);
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// int margin = Mathf.Min(4, numPoints-1);
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(4, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), NULL);
		V_1 = L_15;
		// Vector4[] knotLooped = new Vector4[numPoints + 2 * margin];
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_18 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)il2cpp_codegen_multiply(2, L_17)))));
		V_2 = L_18;
		// Vector4[] ctrl1Looped = new Vector4[numPoints + 2 * margin];
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_19, ((int32_t)il2cpp_codegen_multiply(2, L_20)))));
		V_3 = L_21;
		// Vector4[] ctrl2Looped = new Vector4[numPoints + 2 * margin];
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_24 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_22, ((int32_t)il2cpp_codegen_multiply(2, L_23)))));
		V_4 = L_24;
		// for (int i = 0; i < margin; ++i)
		V_6 = 0;
		goto IL_008c;
	}

IL_005c:
	{
		// knotLooped[i] = knot[numPoints-(margin-i)];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_25 = V_2;
		int32_t L_26 = V_6;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_27 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_28 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_27);
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = V_6;
		NullCheck(L_28);
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)il2cpp_codegen_subtract(L_30, L_31))));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_33);
		// knotLooped[numPoints+margin+i] = knot[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		int32_t L_37 = V_6;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_38 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_39 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_38);
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_35, L_36)), L_37))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_42);
		// for (int i = 0; i < margin; ++i)
		int32_t L_43 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_008c:
	{
		// for (int i = 0; i < margin; ++i)
		int32_t L_44 = V_6;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_005c;
		}
	}
	{
		// for (int i = 0; i < numPoints; ++i)
		V_7 = 0;
		goto IL_00af;
	}

IL_0096:
	{
		// knotLooped[i + margin] = knot[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_46 = V_2;
		int32_t L_47 = V_7;
		int32_t L_48 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_49 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_50 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_49);
		int32_t L_51 = V_7;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, L_48))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_53);
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_54 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00af:
	{
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_55 = V_7;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0096;
		}
	}
	{
		// ComputeSmoothControlPoints(ref knotLooped, ref ctrl1Looped, ref ctrl2Looped);
		SplineHelpers_ComputeSmoothControlPoints_mF56B274A09DF5E4E77BC1BD1903C423FE9F1391A((&V_2), (&V_3), (&V_4), NULL);
		// for (int i = 0; i < numPoints; ++i)
		V_8 = 0;
		goto IL_00f1;
	}

IL_00c4:
	{
		// ctrl1[i] = ctrl1Looped[i + margin];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_57 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_58 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_57);
		int32_t L_59 = V_8;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_60 = V_3;
		int32_t L_61 = V_8;
		int32_t L_62 = V_1;
		NullCheck(L_60);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_64);
		// ctrl2[i] = ctrl2Looped[i + margin];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_65 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_66 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_65);
		int32_t L_67 = V_8;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_68 = V_4;
		int32_t L_69 = V_8;
		int32_t L_70 = V_1;
		NullCheck(L_68);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_69, L_70));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_72 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_72);
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_00f1:
	{
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_74 = V_8;
		int32_t L_75 = V_0;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00c4;
		}
	}
	{
		// }
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
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsNaN(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsNaN_m9E064699098E04ADD8B174395C1902E85BBCC179 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	{
		// return float.IsNaN(v.x) || float.IsNaN(v.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		bool L_2;
		L_2 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v0;
		float L_4 = L_3.___y_1;
		bool L_5;
		L_5 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_4, NULL);
		return L_5;
	}

IL_0019:
	{
		return (bool)1;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsNaN(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsNaN_mAED27A1EFF752377901140C13A7B586561F23745 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return float.IsNaN(v.x) || float.IsNaN(v.y) || float.IsNaN(v.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		bool L_2;
		L_2 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___v0;
		float L_4 = L_3.___y_3;
		bool L_5;
		L_5 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___v0;
		float L_7 = L_6.___z_4;
		bool L_8;
		L_8 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_7, NULL);
		return L_8;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_m5AF0D62D87EF8EF307260D87EA85BE2A4C35B85D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s12, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 s = s1 - s0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___s12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___s01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// float len2 = Vector3.SqrMagnitude(s);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4;
		L_4 = Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline(L_3, NULL);
		V_1 = L_4;
		// if (len2 < Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(9.99999975E-05f)))))
		{
			goto IL_001d;
		}
	}
	{
		// return 0; // degenrate segment
		return (0.0f);
	}

IL_001d:
	{
		// return Mathf.Clamp01(Vector3.Dot(p - s0, s) / len2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___s01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10;
		L_10 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_8, L_9, NULL);
		float L_11 = V_1;
		float L_12;
		L_12 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_10/L_11)), NULL);
		return L_12;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_m53E511FE9498F8B6FE6A0A001F2EE476BF4235A5 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s01, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s12, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector2 s = s1 - s0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___s12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___s01;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// float len2 = Vector2.SqrMagnitude(s);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		float L_4;
		L_4 = Vector2_SqrMagnitude_mC49B9FC3093AD872A60A0DEAE15B90CFC74DD80E_inline(L_3, NULL);
		V_1 = L_4;
		// if (len2 < Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(9.99999975E-05f)))))
		{
			goto IL_001d;
		}
	}
	{
		// return 0; // degenrate segment
		return (0.0f);
	}

IL_001d:
	{
		// return Mathf.Clamp01(Vector2.Dot(p - s0, s) / len2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___p0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___s01;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10;
		L_10 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_8, L_9, NULL);
		float L_11 = V_1;
		float L_12;
		L_12 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_10/L_11)), NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::ProjectOntoPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnityVectorExtensions_ProjectOntoPlane_m7B4042CE802D9E43593F9290EBCFFC1E1F1568A6 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	{
		// return (vector - Vector3.Dot(vector, planeNormal) * planeNormal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___planeNormal1;
		float L_3;
		L_3 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityVectorExtensions::SquareNormalize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnityVectorExtensions_SquareNormalize_mA45A9518904E5EF647E7D598B9ADA28EBF5D8E03 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var d = Mathf.Max(Mathf.Abs(v.x), Mathf.Abs(v.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = fabsf(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v0;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = fabsf(L_4);
		float L_6;
		L_6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// return d < Epsilon ? Vector2.zero : v / d;
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(9.99999975E-05f))))
		{
			goto IL_002c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___v0;
		float L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_8, L_9, NULL);
		return L_10;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_11;
	}
}
// System.Int32 Cinemachine.Utility.UnityVectorExtensions::FindIntersection(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityVectorExtensions_FindIntersection_m679EF9DB24788CA733A9B241B305BF94A1E9ACC8 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___p21, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___q12, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___q23, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___intersection4, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var p = p2 - p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// var q = q2 - q1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___q23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// var pq = q1 - p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_11, L_13, NULL);
		V_2 = L_14;
		// var pXq = p.Cross(q);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		float L_17;
		L_17 = UnityVectorExtensions_Cross_m4ABE9CEBFA9687AB7A79F2287ABA20A011A514C0(L_15, L_16, NULL);
		V_3 = L_17;
		// if (Mathf.Abs(pXq) < 0.00001f)
		float L_18 = V_3;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) < ((float)(9.99999975E-06f)))))
		{
			goto IL_01b9;
		}
	}
	{
		// intersection = Vector2.positiveInfinity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_get_positiveInfinity_m5F51F6F541EAD5ACCD5699BF1F219449D991E834_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_20 = L_21;
		// if (Mathf.Abs(pq.Cross(p)) < 0.00001f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		float L_24;
		L_24 = UnityVectorExtensions_Cross_m4ABE9CEBFA9687AB7A79F2287ABA20A011A514C0(L_22, L_23, NULL);
		float L_25;
		L_25 = fabsf(L_24);
		if ((!(((float)L_25) < ((float)(9.99999975E-06f)))))
		{
			goto IL_01b7;
		}
	}
	{
		// var dotPQ = Vector2.Dot(q, p);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		float L_28;
		L_28 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_26, L_27, NULL);
		V_6 = L_28;
		// if (dotPQ > 0 && (p1 - q2).sqrMagnitude < 0.001f)
		float L_29 = V_6;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_00b2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = ___q23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_31, L_33, NULL);
		V_8 = L_34;
		float L_35;
		L_35 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_8), NULL);
		if ((!(((float)L_35) < ((float)(0.00100000005f)))))
		{
			goto IL_00b2;
		}
	}
	{
		// intersection = q2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = ___q23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_37);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_36 = L_38;
		// return 4;
		return 4;
	}

IL_00b2:
	{
		// if (dotPQ < 0 && (p2 - q2).sqrMagnitude < 0.001f)
		float L_39 = V_6;
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_00eb;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = ___q23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_41, L_43, NULL);
		V_8 = L_44;
		float L_45;
		L_45 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_8), NULL);
		if ((!(((float)L_45) < ((float)(0.00100000005f)))))
		{
			goto IL_00eb;
		}
	}
	{
		// intersection = p2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_47 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_47);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_46 = L_48;
		// return 4;
		return 4;
	}

IL_00eb:
	{
		// var dot = Vector2.Dot(pq, p);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_0;
		float L_51;
		L_51 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_49, L_50, NULL);
		V_7 = L_51;
		// if (0 <= dot && dot <= Vector2.Dot(p, p))
		float L_52 = V_7;
		if ((!(((float)(0.0f)) <= ((float)L_52))))
		{
			goto IL_0186;
		}
	}
	{
		float L_53 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_0;
		float L_56;
		L_56 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_54, L_55, NULL);
		if ((!(((float)L_53) <= ((float)L_56))))
		{
			goto IL_0186;
		}
	}
	{
		// if (dot < 0.0001f)
		float L_57 = V_7;
		if ((!(((float)L_57) < ((float)(9.99999975E-05f)))))
		{
			goto IL_014d;
		}
	}
	{
		// if (dotPQ <= 0 && (p1 - q1).sqrMagnitude < 0.001f)
		float L_58 = V_6;
		if ((!(((float)L_58) <= ((float)(0.0f)))))
		{
			goto IL_0184;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_60, L_62, NULL);
		V_8 = L_63;
		float L_64;
		L_64 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_8), NULL);
		if ((!(((float)L_64) < ((float)(0.00100000005f)))))
		{
			goto IL_0184;
		}
	}
	{
		// intersection = p1; // p and q start at the same point and point away
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_65 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_66 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_66);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_65 = L_67;
		goto IL_0184;
	}

IL_014d:
	{
		// else if (dotPQ > 0 && (p2 - q1).sqrMagnitude < 0.001f)
		float L_68 = V_6;
		if ((!(((float)L_68) > ((float)(0.0f)))))
		{
			goto IL_0184;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_71 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_71);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_70, L_72, NULL);
		V_8 = L_73;
		float L_74;
		L_74 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_8), NULL);
		if ((!(((float)L_74) < ((float)(0.00100000005f)))))
		{
			goto IL_0184;
		}
	}
	{
		// intersection = p2; // p points at start of q
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_75 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_76 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_76);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_75 = L_77;
	}

IL_0184:
	{
		// return 4;   // colinear segments touch
		return 4;
	}

IL_0186:
	{
		// dot = Vector2.Dot(p1 - q1, q);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_78 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_78);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_80 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_80);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82;
		L_82 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_79, L_81, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = V_1;
		float L_84;
		L_84 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_82, L_83, NULL);
		V_7 = L_84;
		// if (0 <= dot && dot <= Vector2.Dot(q, q))
		float L_85 = V_7;
		if ((!(((float)(0.0f)) <= ((float)L_85))))
		{
			goto IL_01b5;
		}
	}
	{
		float L_86 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = V_1;
		float L_89;
		L_89 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_87, L_88, NULL);
		if ((!(((float)L_86) <= ((float)L_89))))
		{
			goto IL_01b5;
		}
	}
	{
		// return 4;   // colinear segments overlap
		return 4;
	}

IL_01b5:
	{
		// return 3;   // colinear segments don't touch
		return 3;
	}

IL_01b7:
	{
		// return 0; // the lines are parallel and not colinear
		return 0;
	}

IL_01b9:
	{
		// var t = pq.Cross(q) / pXq;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91 = V_1;
		float L_92;
		L_92 = UnityVectorExtensions_Cross_m4ABE9CEBFA9687AB7A79F2287ABA20A011A514C0(L_90, L_91, NULL);
		float L_93 = V_3;
		V_4 = ((float)(L_92/L_93));
		// intersection = p1 + t * p;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_94 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_95 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_95);
		float L_97 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99;
		L_99 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(L_97, L_98, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		L_100 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_96, L_99, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_94 = L_100;
		// var u = pq.Cross(p) / pXq;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_0;
		float L_103;
		L_103 = UnityVectorExtensions_Cross_m4ABE9CEBFA9687AB7A79F2287ABA20A011A514C0(L_101, L_102, NULL);
		float L_104 = V_3;
		V_5 = ((float)(L_103/L_104));
		// if (0 <= t && t <= 1 && 0 <= u && u <= 1)
		float L_105 = V_4;
		if ((!(((float)(0.0f)) <= ((float)L_105))))
		{
			goto IL_020f;
		}
	}
	{
		float L_106 = V_4;
		if ((!(((float)L_106) <= ((float)(1.0f)))))
		{
			goto IL_020f;
		}
	}
	{
		float L_107 = V_5;
		if ((!(((float)(0.0f)) <= ((float)L_107))))
		{
			goto IL_020f;
		}
	}
	{
		float L_108 = V_5;
		if ((!(((float)L_108) <= ((float)(1.0f)))))
		{
			goto IL_020f;
		}
	}
	{
		// return 2;   // segments touch
		return 2;
	}

IL_020f:
	{
		// return 1;   // segments don't touch but lines intersect
		return 1;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::Cross(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Cross_m4ABE9CEBFA9687AB7A79F2287ABA20A011A514C0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v21, const RuntimeMethod* method) 
{
	{
		// private static float Cross(this Vector2 v1, Vector2 v2) { return (v1.x * v2.y) - (v1.y * v2.x); }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v10;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v21;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___v10;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___v21;
		float L_7 = L_6.___x_0;
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityVectorExtensions::Abs(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnityVectorExtensions_Abs_m0091B636E0155F99A8DA16B61C9372C03BB67EDC (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	{
		// return new Vector2(Mathf.Abs(v.x), Mathf.Abs(v.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = fabsf(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v0;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = fabsf(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::Abs(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnityVectorExtensions_Abs_m00E8851E28863473A992945FDA86B4CA0F388D3E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return new Vector3(Mathf.Abs(v.x), Mathf.Abs(v.y), Mathf.Abs(v.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		float L_2;
		L_2 = fabsf(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___v0;
		float L_4 = L_3.___y_3;
		float L_5;
		L_5 = fabsf(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___v0;
		float L_7 = L_6.___z_4;
		float L_8;
		L_8 = fabsf(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsUniform(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsUniform_mD55546C76B4A999CE446261E535AF27FC7AD76AB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Abs(v.x - v.y) < Epsilon;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		return (bool)((((float)L_4) < ((float)(9.99999975E-05f)))? 1 : 0);
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsUniform(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsUniform_mAC18FF2205B1497324CFF4EF53ACF5D2D64A89E5 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Abs(v.x - v.y) < Epsilon && Math.Abs(v.x - v.z) < Epsilon;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		if ((!(((float)L_4) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0033;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___v0;
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___v0;
		float L_8 = L_7.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		return (bool)((((float)L_9) < ((float)(9.99999975E-05f)))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return v.sqrMagnitude < (Epsilon * Epsilon);
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___v0), NULL);
		return (bool)((((float)L_0) < ((float)(9.99999905E-09f)))? 1 : 0);
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_mFA715DF39B2BA00E0236B1DD527A53CE159A4C8C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v1.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&___v10), NULL);
		// v2.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&___v21), NULL);
		// return Mathf.Atan2((v1 - v2).magnitude, (v1 + v2).magnitude) * Mathf.Rad2Deg * 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___v21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___v21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_8;
		L_8 = atan2f(L_3, L_7);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (57.2957802f))), (2.0f)));
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_mA8EE238FB571BF476038E19AAF311CB42605282D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float angle = Angle(v1, v2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___v21;
		float L_2;
		L_2 = UnityVectorExtensions_Angle_mFA715DF39B2BA00E0236B1DD527A53CE159A4C8C(L_0, L_1, NULL);
		V_0 = L_2;
		// if (Mathf.Sign(Vector3.Dot(up, Vector3.Cross(v1, v2))) < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___up2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___v21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_4, L_5, NULL);
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_3, L_6, NULL);
		float L_8;
		L_8 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_7, NULL);
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// return -angle;
		float L_9 = V_0;
		return ((-L_9));
	}

IL_0024:
	{
		// return angle;
		float L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityVectorExtensions::SafeFromToRotation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityVectorExtensions_SafeFromToRotation_m911F765BB02BF6A73073D9FEF708ACED0D55E564 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var axis = Vector3.Cross(v1, v2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___v21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (axis.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		bool L_4;
		L_4 = UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652(L_3, NULL);
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		// axis = up; // in case they are pointing in opposite directions
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___up2;
		V_0 = L_5;
	}

IL_0012:
	{
		// return Quaternion.AngleAxis(Angle(v1, v2), axis);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___v21;
		float L_8;
		L_8 = UnityVectorExtensions_Angle_mFA715DF39B2BA00E0236B1DD527A53CE159A4C8C(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_8, L_9, NULL);
		return L_10;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::SlerpWithReferenceUp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnityVectorExtensions_SlerpWithReferenceUp_m7F71658D673D705E004E2C256CBF33911519A1EC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vB1, float ___t2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float dA = vA.magnitude;
		float L_0;
		L_0 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___vA0), NULL);
		V_0 = L_0;
		// float dB = vB.magnitude;
		float L_1;
		L_1 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___vB1), NULL);
		V_1 = L_1;
		// if (dA < Epsilon || dB < Epsilon)
		float L_2 = V_0;
		if ((((float)L_2) < ((float)(9.99999975E-05f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_3 = V_1;
		if ((!(((float)L_3) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0029;
		}
	}

IL_0020:
	{
		// return Vector3.Lerp(vA, vB, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vA0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___vB1;
		float L_6 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_0029:
	{
		// Vector3 dirA = vA / dA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vA0;
		float L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_8, L_9, NULL);
		// Vector3 dirB = vB / dB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___vB1;
		float L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_11, L_12, NULL);
		V_2 = L_13;
		// Quaternion qA = Quaternion.LookRotation(dirA, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___up3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_10, L_14, NULL);
		// Quaternion qB = Quaternion.LookRotation(dirB, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___up3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_16, L_17, NULL);
		V_3 = L_18;
		// Quaternion q = UnityQuaternionExtensions.SlerpWithReferenceUp(qA, qB, t, up);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_3;
		float L_20 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___up3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = UnityQuaternionExtensions_SlerpWithReferenceUp_m8D94F55CE71358BD2A6B38511E97BAB9EDC55464(L_15, L_19, L_20, L_21, NULL);
		// Vector3 dir = q * Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_22, L_23, NULL);
		// return dir * Mathf.Lerp(dA, dB, t);
		float L_25 = V_0;
		float L_26 = V_1;
		float L_27 = ___t2;
		float L_28;
		L_28 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_25, L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_28, NULL);
		return L_29;
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
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::SlerpWithReferenceUp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityQuaternionExtensions_SlerpWithReferenceUp_m8D94F55CE71358BD2A6B38511E97BAB9EDC55464 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___qA0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___qB1, float ___t2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var dirA = (qA * Vector3.forward).ProjectOntoPlane(up);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___qA0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___up3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = UnityVectorExtensions_ProjectOntoPlane_m7B4042CE802D9E43593F9290EBCFFC1E1F1568A6(L_2, L_3, NULL);
		V_0 = L_4;
		// var dirB = (qB * Vector3.forward).ProjectOntoPlane(up);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___qB1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___up3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = UnityVectorExtensions_ProjectOntoPlane_m7B4042CE802D9E43593F9290EBCFFC1E1F1568A6(L_7, L_8, NULL);
		V_1 = L_9;
		// if (dirA.AlmostZero() || dirB.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		bool L_11;
		L_11 = UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652(L_10, NULL);
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		bool L_13;
		L_13 = UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652(L_12, NULL);
		if (!L_13)
		{
			goto IL_003d;
		}
	}

IL_0034:
	{
		// return Quaternion.Slerp(qA, qB, t);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___qA0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___qB1;
		float L_16 = ___t2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_14, L_15, L_16, NULL);
		return L_17;
	}

IL_003d:
	{
		// var qBase = Quaternion.LookRotation(dirA, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___up3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_18, L_19, NULL);
		// var qBaseInv = Quaternion.Inverse(qBase);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_21, NULL);
		// Quaternion qA1 = qBaseInv * qA;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = L_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___qA0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_23, L_24, NULL);
		V_2 = L_25;
		// Quaternion qB1 = qBaseInv * qB;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___qB1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_23, L_26, NULL);
		V_3 = L_27;
		// var eA = qA1.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		V_4 = L_28;
		// var eB = qB1.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		V_5 = L_29;
		// return qBase * Quaternion.Euler(
		//     Mathf.LerpAngle(eA.x, eB.x, t),
		//     Mathf.LerpAngle(eA.y, eB.y, t),
		//     Mathf.LerpAngle(eA.z, eB.z, t));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_4;
		float L_31 = L_30.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_5;
		float L_33 = L_32.___x_2;
		float L_34 = ___t2;
		float L_35;
		L_35 = Mathf_LerpAngle_m0653422E15193C2E4A4E5AF05236B6315C789C23_inline(L_31, L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_4;
		float L_37 = L_36.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_5;
		float L_39 = L_38.___y_3;
		float L_40 = ___t2;
		float L_41;
		L_41 = Mathf_LerpAngle_m0653422E15193C2E4A4E5AF05236B6315C789C23_inline(L_37, L_39, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_4;
		float L_43 = L_42.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_5;
		float L_45 = L_44.___z_4;
		float L_46 = ___t2;
		float L_47;
		L_47 = Mathf_LerpAngle_m0653422E15193C2E4A4E5AF05236B6315C789C23_inline(L_43, L_45, L_46, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_35, L_41, L_47, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_21, L_48, NULL);
		return L_49;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::Normalized(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityQuaternionExtensions_Normalized_m62143839CCE5FA1B02E7953C1ABBB217CD9465FC (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector4 v = new Vector4(q.x, q.y, q.z, q.w).normalized;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___q0;
		float L_3 = L_2.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___q0;
		float L_5 = L_4.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___q0;
		float L_7 = L_6.___w_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline((&V_1), NULL);
		V_0 = L_9;
		// return new Quaternion(v.x, v.y, v.z, v.w);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_0;
		float L_11 = L_10.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = V_0;
		float L_13 = L_12.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = V_0;
		float L_15 = L_14.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_0;
		float L_17 = L_16.___w_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_18), L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityQuaternionExtensions::GetCameraRotationToTarget(UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnityQuaternionExtensions_GetCameraRotationToTarget_mFD825219F752B2C979529CDCD655530685428FE5 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orient0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtDir1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldUp2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (lookAtDir.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lookAtDir1;
		bool L_1;
		L_1 = UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return Vector2.zero;  // degenerate
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_2;
	}

IL_000e:
	{
		// Quaternion toLocal = Quaternion.Inverse(orient);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___orient0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_3, NULL);
		// Vector3 up = toLocal * worldUp;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___worldUp2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_5, L_6, NULL);
		V_0 = L_7;
		// lookAtDir = toLocal * lookAtDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lookAtDir1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_5, L_8, NULL);
		___lookAtDir1 = L_9;
		// float angleH = 0;
		V_1 = (0.0f);
		// Vector3 targetDirH = lookAtDir.ProjectOntoPlane(up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___lookAtDir1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = UnityVectorExtensions_ProjectOntoPlane_m7B4042CE802D9E43593F9290EBCFFC1E1F1568A6(L_10, L_11, NULL);
		V_3 = L_12;
		// if (!targetDirH.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		bool L_14;
		L_14 = UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652(L_13, NULL);
		if (L_14)
		{
			goto IL_0085;
		}
	}
	{
		// Vector3 currentDirH = Vector3.forward.ProjectOntoPlane(up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = UnityVectorExtensions_ProjectOntoPlane_m7B4042CE802D9E43593F9290EBCFFC1E1F1568A6(L_15, L_16, NULL);
		V_4 = L_17;
		// if (currentDirH.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
		bool L_19;
		L_19 = UnityVectorExtensions_AlmostZero_mDE7F8E130BF5949DFF14AE437C47F086F3E05652(L_18, NULL);
		if (!L_19)
		{
			goto IL_007b;
		}
	}
	{
		// if (Vector3.Dot(currentDirH, up) > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22;
		L_22 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_20, L_21, NULL);
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// currentDirH = Vector3.down.ProjectOntoPlane(up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = UnityVectorExtensions_ProjectOntoPlane_m7B4042CE802D9E43593F9290EBCFFC1E1F1568A6(L_23, L_24, NULL);
		V_4 = L_25;
		goto IL_007b;
	}

IL_006e:
	{
		// currentDirH = Vector3.up.ProjectOntoPlane(up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = UnityVectorExtensions_ProjectOntoPlane_m7B4042CE802D9E43593F9290EBCFFC1E1F1568A6(L_26, L_27, NULL);
		V_4 = L_28;
	}

IL_007b:
	{
		// angleH = UnityVectorExtensions.SignedAngle(currentDirH, targetDirH, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32;
		L_32 = UnityVectorExtensions_SignedAngle_mA8EE238FB571BF476038E19AAF311CB42605282D(L_29, L_30, L_31, NULL);
		V_1 = L_32;
	}

IL_0085:
	{
		// Quaternion q = Quaternion.AngleAxis(angleH, up);
		float L_33 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_33, L_34, NULL);
		V_2 = L_35;
		// float angleV = UnityVectorExtensions.SignedAngle(
		//     q * Vector3.forward, lookAtDir, q * Vector3.right);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___lookAtDir1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_40, L_41, NULL);
		float L_43;
		L_43 = UnityVectorExtensions_SignedAngle_mA8EE238FB571BF476038E19AAF311CB42605282D(L_38, L_39, L_42, NULL);
		// return new Vector2(angleV, angleH);
		float L_44 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_45), L_43, L_44, /*hidden argument*/NULL);
		return L_45;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::ApplyCameraRotation(UnityEngine.Quaternion,UnityEngine.Vector2,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityQuaternionExtensions_ApplyCameraRotation_m608B85CD86C6BE2FDD571446FA8CA596142C437C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orient0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldUp2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion q = Quaternion.AngleAxis(rot.x, Vector3.right);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___rot1;
		float L_1 = L_0.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_1, L_2, NULL);
		V_0 = L_3;
		// return (Quaternion.AngleAxis(rot.y, worldUp) * orient) * q;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___rot1;
		float L_5 = L_4.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___worldUp2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_5, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___orient0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_7, L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_9, L_10, NULL);
		return L_11;
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
// UnityEngine.Rect Cinemachine.Utility.UnityRectExtensions::Inflated(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UnityRectExtensions_Inflated_mF5A4FB7F7E25389F1CCB0B0F77C550BECC5ED031 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___r0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta1, const RuntimeMethod* method) 
{
	{
		// return new Rect(
		//     r.xMin - delta.x, r.yMin - delta.y,
		//     r.width + delta.x * 2, r.height + delta.y * 2);
		float L_0;
		L_0 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___r0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___delta1;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___r0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___delta1;
		float L_5 = L_4.___y_1;
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___r0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___delta1;
		float L_8 = L_7.___x_0;
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___r0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___delta1;
		float L_11 = L_10.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), ((float)il2cpp_codegen_subtract(L_0, L_2)), ((float)il2cpp_codegen_subtract(L_3, L_5)), ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_8, (2.0f))))), ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_11, (2.0f))))), /*hidden argument*/NULL);
		return L_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClipperOffset_set_MiterLimit_m81F85F0942E5A1B4A131627D7E7DFCF46BFCD859_inline (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double MiterLimit { get; set; }
		double L_0 = ___value0;
		__this->___U3CMiterLimitU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClipperOffset_set_ArcTolerance_mF1025B552D6EB0FA28D7E6807397DC0DC4DC93B0_inline (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double ArcTolerance { get; set; }
		double L_0 = ___value0;
		__this->___U3CArcToleranceU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* PolyNode_get_Childs_m35BF478E71CEEAEC1015E536C4144BDC1877C5FB_inline (PolyNode_t6632AEAB07BC9B993428D4EE7C9E18EDCE3BAD27* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Childs; }
		List_1_t6B363664E747D5A84578F8282376CB04CDF801F4* L_0 = __this->___m_Childs_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ClipperOffset_get_MiterLimit_m12626F15B3A2B944F81E05ADBB263C8C3479D7DD_inline (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, const RuntimeMethod* method) 
{
	{
		// public double MiterLimit { get; set; }
		double L_0 = __this->___U3CMiterLimitU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ClipperOffset_get_ArcTolerance_m25B298CB94489BE792C4EF8870B396D2158C3E92_inline (ClipperOffset_t1664F8E10796B23A83B922F9B7684B7F6831F725* __this, const RuntimeMethod* method) 
{
	{
		// public double ArcTolerance { get; set; }
		double L_0 = __this->___U3CArcToleranceU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Clipper_set_ReverseSolution_m4C3D2FEE37DDCCB590395F6A7199C8510813834A_inline (Clipper_t2CB022C7BAC01EB2FDE672FC25B30C7F7DE2303A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		bool L_0 = ___value0;
		__this->___U3CReverseSolutionU3Ek__BackingField_29 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 CinemachineBrain_get_CurrentCameraState_m4FD443F016CFCA5FCDFFF17E95A93162D18847C2_inline (CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* __this, const RuntimeMethod* method) 
{
	{
		// public CameraState CurrentCameraState { get; private set; }
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 L_0 = __this->___U3CCurrentCameraStateU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraState_get_NumCustomBlendables_mA7FC428A3F135FA88769EC45E2C5521F2D1169DB_inline (CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* __this, const RuntimeMethod* method) 
{
	{
		// public int NumCustomBlendables { get; private set; }
		int32_t L_0 = __this->___U3CNumCustomBlendablesU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Volume_set_profile_m89709CBB66123E4DD821570E2CC4D9AE3D42E769_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InternalProfile = value;
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_0 = ___value0;
		__this->___m_InternalProfile_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalProfile_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Volume_set_isGlobal_m5E2B89583386E5A6C63AD61D2A8DBCAB5533BF15_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_IsGlobal = value;
		bool L_0 = ___value0;
		__this->___m_IsGlobal_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB UniversalAdditionalCameraData_get_volumeLayerMask_m6CA98C050693650D8818151E9ADE480CCBF44BFC_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, const RuntimeMethod* method) 
{
	{
		// get => m_VolumeLayerMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_VolumeLayerMask_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m8845A29F55B839D0CD43124B1AA34034BFCA9A7D_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___q0;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = sqrtf(L_2);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_4) < ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_2 = L_7;
		goto IL_004a;
	}

IL_0022:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___q0;
		float L_9 = L_8.___x_0;
		float L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = ___q0;
		float L_12 = L_11.___y_1;
		float L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___q0;
		float L_15 = L_14.___z_2;
		float L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = ___q0;
		float L_18 = L_17.___w_3;
		float L_19 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_20), ((float)(L_9/L_10)), ((float)(L_12/L_13)), ((float)(L_15/L_16)), ((float)(L_18/L_19)), /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_004a;
	}

IL_004a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_2;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x_2;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y_3;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z_4;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = ___value1;
		__this->___x_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = ___value1;
		__this->___y_3 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = ___value1;
		__this->___z_4 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Lerp_mE5FFF3D013F0880F7DF8C613E7CB44EBD7349DAB_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___a0;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___b1;
		float L_5 = L_4.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___x_1;
		float L_8 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = ___b1;
		float L_12 = L_11.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = ___a0;
		float L_14 = L_13.___y_2;
		float L_15 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = ___a0;
		float L_17 = L_16.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18 = ___b1;
		float L_19 = L_18.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = ___a0;
		float L_21 = L_20.___z_3;
		float L_22 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = ___a0;
		float L_24 = L_23.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = ___b1;
		float L_26 = L_25.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27 = ___a0;
		float L_28 = L_27.___w_4;
		float L_29 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = __this->___x_1;
		V_2 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = __this->___y_2;
		V_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = __this->___z_3;
		V_2 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = __this->___w_4;
		V_2 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var)));
	}

IL_004c:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = ___value1;
		__this->___x_1 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = ___value1;
		__this->___y_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = ___value1;
		__this->___z_3 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = ___value1;
		__this->___w_4 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_RuntimeMethod_var)));
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_mC49B9FC3093AD872A60A0DEAE15B90CFC74DD80E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_positiveInfinity_m5F51F6F541EAD5ACCD5699BF1F219449D991E834_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___positiveInfinityVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a1;
		float L_1 = L_0.___x_0;
		float L_2 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a1;
		float L_4 = L_3.___y_1;
		float L_5 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m0653422E15193C2E4A4E5AF05236B6315C789C23_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = ___a0;
		float L_7 = V_0;
		float L_8 = ___t2;
		float L_9;
		L_9 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_8, NULL);
		V_2 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_Normalize_m1D1B879617A0F54904EDD0E59D356D605457002B_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m578BA59F69944F4E5EB262CFC17DCD1FB6F4610D_gshared_inline (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1892D847DB76252F6D5CA3132FE4ADBFFB0DDFA0_gshared_inline (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C* __this, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___item0, const RuntimeMethod* method) 
{
	IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13* L_1 = (IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		IntPointU5BU5D_t7B403FCBEBD7A3039D08F8F48FEDD0295B7FFD13* L_6 = V_0;
		int32_t L_7 = V_1;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674)L_8);
		return;
	}

IL_0034:
	{
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_9 = ___item0;
		((  void (*) (List_1_tFFB65DC939B85D88A1FA5032C24DA82DD9685B4C*, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m06668C0A3C120FA25245D89C14B0787E790F8D13_gshared_inline (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
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
		DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726* L_3 = (DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m19D310C566004810876F92AB311ACB62C609D3A8_gshared_inline (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18* __this, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ___item0, const RuntimeMethod* method) 
{
	DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726* L_1 = (DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DoublePointU5BU5D_t18EDD510CC695E744C86CB37099856288F1AB726* L_6 = V_0;
		int32_t L_7 = V_1;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1)L_8);
		return;
	}

IL_0034:
	{
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_9 = ___item0;
		((  void (*) (List_1_t9221D7A398CA969A7B1EA6FB9A356CE734881C18*, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Normalize_m1D1B879617A0F54904EDD0E59D356D605457002B_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1;
		L_1 = Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___a0;
		float L_2;
		L_2 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)L_2));
		V_0 = ((float)L_3);
		goto IL_0012;
	}

IL_0012:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
