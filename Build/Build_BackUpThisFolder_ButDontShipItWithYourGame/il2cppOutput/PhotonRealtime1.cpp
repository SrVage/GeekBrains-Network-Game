﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Realtime.Region>
struct Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Comparison`1<Photon.Realtime.Region>
struct Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Photon.Realtime.Player>
struct KeyCollection_t2E7011E95C7C03E97ABB05A3AB71DC306EDCD1C1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_t731311DC35E31CEB666B4A4099E518236EA55F79;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_t47635E10016E83A1E327B583977D1F043544FB48;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Photon.Realtime.Region>
struct Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Photon.Realtime.Player>
struct ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Photon.Realtime.Player>[]
struct EntryU5BU5D_tC0E0EE5A22C6108EDF486157331DB4F174EEB842;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD;
// Photon.Realtime.IInRoomCallbacks[]
struct IInRoomCallbacksU5BU5D_tA00A70333C292A9BEB141CC004CE71CFF2356D16;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Photon.Realtime.Region[]
struct RegionU5BU5D_t5DA667CCEF378FF757C663BF86CE27DDD0258B67;
// Photon.Realtime.RegionPinger[]
struct RegionPingerU5BU5D_t2230F591DBC189F962083CBED5438F5D0CE9E8B1;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Photon.Realtime.ErrorInfo
struct ErrorInfo_tBEC0163224E8E559901B5BA6D2DDDC2B15D013ED;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_tACE5277867F34445F8CAB737A6C60770A74FE635;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t62EB15B7BDBC1428F5BFAF50DA2086B74E2ACBDF;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C;
// Photon.Realtime.PhotonPing
struct PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D;
// Photon.Realtime.PingMono
struct PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// Photon.Realtime.RegionPinger
struct RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D;
// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD;
// Photon.Realtime.SupportLogger
struct SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7;
// Photon.Realtime.RegionHandler/<>c
struct U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B;
// Photon.Realtime.RegionHandler/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthModeOption_t7CA0F11229CF212E10897F367BEE70D85C01B1EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomAuthenticationType_t202E72650121EDA3F5EC694D792F2DEBC48E9D0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dns_tE6305F126E5677E1AFB444735257D41D0D0FE273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncryptionMode_tD26BF6E736ED3A0AE841EE96A761723407E6FF98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6F972EAFC64258DD491584080B232EC12BE33581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetFrameworks_tFA2579142253D3F9C8D7EBCB307EC5D21F20E76D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral01551127791BB14934414B8428B67FD51B390033;
IL2CPP_EXTERN_C String_t* _stringLiteral07FD03DD59FDAA80CC68099220C8227F2FA1CCFF;
IL2CPP_EXTERN_C String_t* _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
IL2CPP_EXTERN_C String_t* _stringLiteral158BCE3BED0666F14459D16BA73D781AC5421828;
IL2CPP_EXTERN_C String_t* _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1;
IL2CPP_EXTERN_C String_t* _stringLiteral1DC8F452741B98B4EDFFC344FFF572F7D4862E33;
IL2CPP_EXTERN_C String_t* _stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14;
IL2CPP_EXTERN_C String_t* _stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA731B2704F57E0D64A0B832502A59C9A647418;
IL2CPP_EXTERN_C String_t* _stringLiteral2D1D849A8EF3D0DDA637B8ADA1554F7B578F1CC2;
IL2CPP_EXTERN_C String_t* _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00;
IL2CPP_EXTERN_C String_t* _stringLiteral364A88210A85FAC1C4DEFDD902B8419D61C4EC78;
IL2CPP_EXTERN_C String_t* _stringLiteral38011452171D5D98758667404D6F17F5AF329293;
IL2CPP_EXTERN_C String_t* _stringLiteral39B336DD36B50FB46EDCCA9BA800A47C91B64279;
IL2CPP_EXTERN_C String_t* _stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8;
IL2CPP_EXTERN_C String_t* _stringLiteral3FBE4F3AA3E49A414AF5407C10B40EE841A2CC35;
IL2CPP_EXTERN_C String_t* _stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
IL2CPP_EXTERN_C String_t* _stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4AC887B4E0A467A6BA01B455BC69AFA2A62EE8A1;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB;
IL2CPP_EXTERN_C String_t* _stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2;
IL2CPP_EXTERN_C String_t* _stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2B738C07CAF0CE8EC4DF3FD24573F2DFFE3D56;
IL2CPP_EXTERN_C String_t* _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
IL2CPP_EXTERN_C String_t* _stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B;
IL2CPP_EXTERN_C String_t* _stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A;
IL2CPP_EXTERN_C String_t* _stringLiteral691FADBE26C2608C232E86F1289D3E5FCC330C03;
IL2CPP_EXTERN_C String_t* _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
IL2CPP_EXTERN_C String_t* _stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5B274AC719B863CB0A2DA066BD69F873B190F6;
IL2CPP_EXTERN_C String_t* _stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B;
IL2CPP_EXTERN_C String_t* _stringLiteral94C9907E8EDE0DCF9B99D296D066DF89F5E204E9;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
IL2CPP_EXTERN_C String_t* _stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C;
IL2CPP_EXTERN_C String_t* _stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6;
IL2CPP_EXTERN_C String_t* _stringLiteral9A237664FCA59B03D60331058EF83BB83DB96F01;
IL2CPP_EXTERN_C String_t* _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F;
IL2CPP_EXTERN_C String_t* _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
IL2CPP_EXTERN_C String_t* _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34;
IL2CPP_EXTERN_C String_t* _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
IL2CPP_EXTERN_C String_t* _stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746;
IL2CPP_EXTERN_C String_t* _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralB7A31DE996B60085FB46F6A81676B93820640015;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC5C042EF0B89D7EEE23EC7B3EC0EEEDD3426C182;
IL2CPP_EXTERN_C String_t* _stringLiteralCADE992351A796143F5F5164E100121E1080BF4C;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC;
IL2CPP_EXTERN_C String_t* _stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444;
IL2CPP_EXTERN_C String_t* _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
IL2CPP_EXTERN_C String_t* _stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014;
IL2CPP_EXTERN_C String_t* _stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356;
IL2CPP_EXTERN_C String_t* _stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F;
IL2CPP_EXTERN_C String_t* _stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076;
IL2CPP_EXTERN_C String_t* _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisString_t_m83994174718A60541647E1AB2F9D8623AA2F0EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m557418E6A53F984E197F6A3C3ADA44E138E1D406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mEBC1D35C521879EDAD619E7052994ACD33F820FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m495BFB5C44B03F3AA7BAFD42C8402C79F0232C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1E782EA6F5391DB82D60FEE691A90C3D1C4F33EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mE1AF94F3A6094D44AA9134C60DA2F088E57CDAC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m2F5BEDD4A6085065EA70F595BFA1E1CE042CC79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA5AB616306C5BCAC7B3D8F47BD7B6EF64A8FF181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC2C80EDEEAF30E7A119E1717467261BED99E1745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3398D14A05E2412648DB11B9241295E823D5C2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE264388527FA23682B6B043400981DCD1A9988E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m89DB79937F78A08F14854104DFCFFC69ECEC7BA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEDC8F407DD4D104C4860B611F3E798FA60450E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_ToStringFull_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m738BB955C326EC3A5243553ECAC88935D4406D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m40F74DA21027D2B46116887736CF4BB409E353BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F05F7D43DDEB99BA247449769702116FC0213D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m44448871C2719CD9108C0E02DB7555D32BDF853B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m0B725D43B3FB9E3C8EAA1A7E5D8434599E3FEA90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4C0DA27E4C601E9E62E0EE8D8935B0F794BDE585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC7422E6831309E243D7E8643662B5B418EC700D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mB727E65110C46E474669BF4072CE6A551A2EEFC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2DF75B0A34050A1C45547DC177A7BAD958ABD98D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9472C6B08751038DB6A2816D811C78DC410BC848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m29628CAB131318D06AB46CDC0C3ABE99DD950E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC60FEFBAA2B487DCA8B89B5EECEF2652261B31B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegionHandler_OnPreferredRegionPinged_m7A6AAFF96EEAAA7FC256D14368C8CB04FD53F444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegionHandler_OnRegionDone_m91713A4A56D38F895B0015A780C5B5F88E0997D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegionPinger_RegionPingPooled_mFC8A1094B28C7B5C655059C5AAD8C5C3FCCDBC8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegionPinger_RegionPingThreaded_m7285A4B2CFF3FBD0067D3826A1E1B8823CA7D12E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_BestRegionU3Eb__8_0_m4EAA846DDC5E10F1A8ABD156B8DA71CADB94E560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CPingMinimumOfRegionsU3Eb__0_m853ADC07B0DE103032168331EBD5E9CE9D6E2824_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC0E0EE5A22C6108EDF486157331DB4F174EEB842* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2E7011E95C7C03E97ABB05A3AB71DC306EDCD1C1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.IInRoomCallbacks>
struct List_1_t4F821CA2AA7004F1136ECCB4B0D0B5FDA0CED6CB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IInRoomCallbacksU5BU5D_tA00A70333C292A9BEB141CC004CE71CFF2356D16* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4F821CA2AA7004F1136ECCB4B0D0B5FDA0CED6CB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IInRoomCallbacksU5BU5D_tA00A70333C292A9BEB141CC004CE71CFF2356D16* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RegionU5BU5D_t5DA667CCEF378FF757C663BF86CE27DDD0258B67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RegionU5BU5D_t5DA667CCEF378FF757C663BF86CE27DDD0258B67* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RegionPingerU5BU5D_t2230F591DBC189F962083CBED5438F5D0CE9E8B1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RegionPingerU5BU5D_t2230F591DBC189F962083CBED5438F5D0CE9E8B1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7  : public RuntimeObject
{
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject* ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};

// Photon.Realtime.ErrorInfo
struct ErrorInfo_tBEC0163224E8E559901B5BA6D2DDDC2B15D013ED  : public RuntimeObject
{
	// System.String Photon.Realtime.ErrorInfo::Info
	String_t* ___Info_0;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED  : public RuntimeObject
{
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.OperationResponse::Parameters
	ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* ___Parameters_3;
};

// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3  : public RuntimeObject
{
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_t731311DC35E31CEB666B4A4099E518236EA55F79* ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD* ___wrapperPools_1;
};

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_16;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989* ___SocketImplementationConfig_18;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t* ___U3CSocketImplementationU3Ek__BackingField_19;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_20;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_21;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD* ___OnDisconnectMessage_22;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitResends
	int32_t ___SequenceDeltaLimitResends_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitSends
	int32_t ___SequenceDeltaLimitSends_28;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_29;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_30;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_31;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_37;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_38;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_39;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_42;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_44;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RandomizedSequenceNumbers_45;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_46;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsIncomingU3Ek__BackingField_47;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsOutgoingU3Ek__BackingField_48;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* ___U3CTrafficStatsGameLevelU3Ek__BackingField_49;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___trafficStatsStopwatch_50;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_51;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject* ___SendOutgoingLockObject_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject* ___DispatchLockObject_54;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject* ___EnqueueLock_55;
	// System.Type ExitGames.Client.Photon.PhotonPeer::payloadEncryptorType
	Type_t* ___payloadEncryptorType_56;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PayloadEncryptionSecret_57;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t* ___encryptorType_58;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_59;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_60;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_61;
};

struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_StaticFields
{
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeSocketLibAvailable
	bool ___NativeSocketLibAvailable_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativePayloadEncryptionLibAvailable
	bool ___NativePayloadEncryptionLibAvailable_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeDatagramEncryptionLibAvailable
	bool ___NativeDatagramEncryptionLibAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_43;
};

// Photon.Realtime.PhotonPing
struct PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D  : public RuntimeObject
{
	// System.String Photon.Realtime.PhotonPing::DebugString
	String_t* ___DebugString_0;
	// System.Boolean Photon.Realtime.PhotonPing::Successful
	bool ___Successful_1;
	// System.Boolean Photon.Realtime.PhotonPing::GotResult
	bool ___GotResult_2;
	// System.Int32 Photon.Realtime.PhotonPing::PingLength
	int32_t ___PingLength_3;
	// System.Byte[] Photon.Realtime.PhotonPing::PingBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PingBytes_4;
	// System.Byte Photon.Realtime.PhotonPing::PingId
	uint8_t ___PingId_5;
};

struct PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D_StaticFields
{
	// System.Random Photon.Realtime.PhotonPing::RandomIdProvider
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___RandomIdProvider_6;
};

// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C  : public RuntimeObject
{
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject* ___TagObject_8;
};

// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A  : public RuntimeObject
{
	// System.String Photon.Realtime.Region::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_0;
	// System.String Photon.Realtime.Region::<Cluster>k__BackingField
	String_t* ___U3CClusterU3Ek__BackingField_1;
	// System.String Photon.Realtime.Region::<HostAndPort>k__BackingField
	String_t* ___U3CHostAndPortU3Ek__BackingField_2;
	// System.Int32 Photon.Realtime.Region::<Ping>k__BackingField
	int32_t ___U3CPingU3Ek__BackingField_3;
};

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;
};

struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields
{
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t* ___PingImplementation_0;
	// System.UInt16 Photon.Realtime.RegionHandler::PortToPingOverride
	uint16_t ___PortToPingOverride_9;
};

// Photon.Realtime.RegionPinger
struct RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B  : public RuntimeObject
{
	// Photon.Realtime.Region Photon.Realtime.RegionPinger::region
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___region_4;
	// System.String Photon.Realtime.RegionPinger::regionAddress
	String_t* ___regionAddress_5;
	// System.Int32 Photon.Realtime.RegionPinger::CurrentAttempt
	int32_t ___CurrentAttempt_6;
	// System.Boolean Photon.Realtime.RegionPinger::<Done>k__BackingField
	bool ___U3CDoneU3Ek__BackingField_7;
	// System.Action`1<Photon.Realtime.Region> Photon.Realtime.RegionPinger::onDoneCall
	Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73* ___onDoneCall_8;
	// Photon.Realtime.PhotonPing Photon.Realtime.RegionPinger::ping
	PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* ___ping_9;
	// System.Collections.Generic.List`1<System.Int32> Photon.Realtime.RegionPinger::rttResults
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___rttResults_10;
};

struct RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields
{
	// System.Int32 Photon.Realtime.RegionPinger::Attempts
	int32_t ___Attempts_0;
	// System.Boolean Photon.Realtime.RegionPinger::IgnoreInitialAttempt
	bool ___IgnoreInitialAttempt_1;
	// System.Int32 Photon.Realtime.RegionPinger::MaxMilliseconsPerPing
	int32_t ___MaxMilliseconsPerPing_2;
	// System.Int32 Photon.Realtime.RegionPinger::PingWhenFailed
	int32_t ___PingWhenFailed_3;
};

// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;
};

// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
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

// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9  : public RuntimeObject
{
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;
};

struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9_StaticFields
{
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Default_2;
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

// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA  : public RuntimeObject
{
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;
};

struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields
{
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___Default_0;
};

// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7  : public RuntimeObject
{
	// System.String Photon.Realtime.WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.WebRpcResponse::<ResultCode>k__BackingField
	int32_t ___U3CResultCodeU3Ek__BackingField_1;
	// System.String Photon.Realtime.WebRpcResponse::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CParametersU3Ek__BackingField_3;
};

// Photon.Realtime.RegionHandler/<>c
struct U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B  : public RuntimeObject
{
};

struct U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_StaticFields
{
	// Photon.Realtime.RegionHandler/<>c Photon.Realtime.RegionHandler/<>c::<>9
	U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B* ___U3CU3E9_0;
	// System.Comparison`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler/<>c::<>9__8_0
	Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85* ___U3CU3E9__8_0_1;
};

// Photon.Realtime.RegionHandler/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A  : public RuntimeObject
{
	// System.String Photon.Realtime.RegionHandler/<>c__DisplayClass23_0::prevBestRegionCode
	String_t* ___prevBestRegionCode_0;
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

// System.Collections.Generic.List`1/Enumerator<Photon.Realtime.Region>
struct Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Photon.Realtime.RegionPinger>
struct Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* ____current_3;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A  : public Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA
{
};

struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A_StaticFields
{
	// System.Object[] ExitGames.Client.Photon.Hashtable::boxedByte
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___boxedByte_14;
};

// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488  : public List_1_t4F821CA2AA7004F1136ECCB4B0D0B5FDA0CED6CB
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.InRoomCallbacksContainer::client
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___client_6;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F  : public PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C
{
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_t47635E10016E83A1E327B583977D1F043544FB48* ___paramDictionaryPool_62;
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A 
{
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;
};

struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A_StaticFields
{
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___AlternativeUdpPorts_0;
};

// Photon.Realtime.PingMono
struct PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115  : public PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D
{
	// System.Net.Sockets.Socket Photon.Realtime.PingMono::sock
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___sock_7;
};

// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373  : public RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13
struct __StaticArrayInitTypeSizeU3D13_tB4D4C39ADAB2F68C29D8E4E332C05D5F6F56FB7A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D13_tB4D4C39ADAB2F68C29D8E4E332C05D5F6F56FB7A__padding[13];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6C220874B8288F2E9E07FEA41E6C8D50B90BBFF5  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t6C220874B8288F2E9E07FEA41E6C8D50B90BBFF5_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13 <PrivateImplementationDetails>::1995DEFE26C524A9CB3CF007B4A76A325342658A716A5F50C3B262D2F38DF919
	__StaticArrayInitTypeSizeU3D13_tB4D4C39ADAB2F68C29D8E4E332C05D5F6F56FB7A ___1995DEFE26C524A9CB3CF007B4A76A325342658A716A5F50C3B262D2F38DF919_0;
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

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject* ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7* ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02* ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;
};

struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_11;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Photon.Realtime.Region>
struct Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73  : public MulticastDelegate_t
{
};

// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74  : public MulticastDelegate_t
{
};

// System.Comparison`1<Photon.Realtime.Region>
struct Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Predicate`1<Photon.Realtime.Region>
struct Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Photon.Realtime.SupportLogger
struct SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Photon.Realtime.SupportLogger::LogTrafficStats
	bool ___LogTrafficStats_4;
	// System.Boolean Photon.Realtime.SupportLogger::loggedStillOfflineMessage
	bool ___loggedStillOfflineMessage_5;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::client
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___client_6;
	// System.Diagnostics.Stopwatch Photon.Realtime.SupportLogger::startStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___startStopwatch_7;
	// System.Boolean Photon.Realtime.SupportLogger::initialOnApplicationPauseSkipped
	bool ___initialOnApplicationPauseSkipped_8;
	// System.Int32 Photon.Realtime.SupportLogger::pingMax
	int32_t ___pingMax_9;
	// System.Int32 Photon.Realtime.SupportLogger::pingMin
	int32_t ___pingMin_10;
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
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_m9AF102A7BABD6965322C36DC5D5830F3CE9805A2_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Extensions::ToStringFull<System.Int32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m738BB955C326EC3A5243553ECAC88935D4406D30_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___data0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Region::SetCodeAndCluster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Region_SetCodeAndCluster_m6141C9974659DC2D9ECDCDB545B115BB073E5EA0 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___codeAsString0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Region::set_HostAndPort(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_HostAndPort_mE4C5000AE610E411D3EC570C36319D4AEA20017C_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Region::set_Ping(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Ping_m48411BF3B9D00DDB33173EA2F6BC6228BAA69F77_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Region::set_Code(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Code_m53F1EC8662E027CA4F315888F14210E482BE9208_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Region::set_Cluster(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Cluster_m5B0E1BC3189280551A43F03B3B23C358A6223167_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Region::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Region_ToString_m74F0905F3BA483A1DE94266319C287FD0139ADDD (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, bool ___compact0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Region::get_Cluster()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Cluster_mF985DDB15CF40F8554C614DFB4BC5BD21341CB84_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.Region::get_Ping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Region::get_HostAndPort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_HostAndPort_mA2E99034AF566055B326BB030BC8B5381FD8B0B1_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::get_EnabledRegions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Photon.Realtime.Region>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mCC12E16A989B49C0F8EC4DCAFEB9B24FA5E366AB (Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Photon.Realtime.Region>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_mB727E65110C46E474669BF4072CE6A551A2EEFC8 (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* __this, Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7*, Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// T System.Collections.Generic.List`1<Photon.Realtime.Region>::get_Item(System.Int32)
inline Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* List_1_get_Item_mC60FEFBAA2B487DCA8B89B5EECEF2652261B31B7 (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* (*) (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Photon.Realtime.Region Photon.Realtime.RegionHandler::get_BestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>::GetEnumerator()
inline Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9 List_1_GetEnumerator_m4C0DA27E4C601E9E62E0EE8D8935B0F794BDE585 (List_1_t6F972EAFC64258DD491584080B232EC12BE33581* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9 (*) (List_1_t6F972EAFC64258DD491584080B232EC12BE33581*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Photon.Realtime.RegionPinger>::Dispose()
inline void Enumerator_Dispose_mC2C80EDEEAF30E7A119E1717467261BED99E1745 (Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Photon.Realtime.RegionPinger>::get_Current()
inline RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* Enumerator_get_Current_mEDC8F407DD4D104C4860B611F3E798FA60450E06_inline (Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9* __this, const RuntimeMethod* method)
{
	return ((  RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* (*) (Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Photon.Realtime.RegionPinger::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionPinger_GetResults_mD9042E7C8D7555A05F60E0CC0A07C80DE66AAA00 (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151 (StringBuilder_t* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Photon.Realtime.RegionPinger>::MoveNext()
inline bool Enumerator_MoveNext_m3398D14A05E2412648DB11B9241295E823D5C2AC (Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Object ExitGames.Client.Photon.OperationResponse::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OperationResponse_get_Item_mEB2FFC5B967D14E344238A457F480DCD9E976422 (OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* __this, uint8_t ___parameterCode0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Realtime.Region>::.ctor(System.Int32)
inline void List_1__ctor_m9472C6B08751038DB6A2816D811C78DC410BC848 (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void Photon.Realtime.RegionHandler::set_EnabledRegions(System.Collections.Generic.List`1<Photon.Realtime.Region>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionHandler_set_EnabledRegions_m3BF5BE5F9A8957DD0E8023598AA6BA1EBE3A4E89_inline (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___value0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::ReplacePortWithAlternative(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_ReplacePortWithAlternative_mBA162CD96D145DDC7685D88E8786A1A333D101AE (String_t* ___address0, uint16_t ___replacementPort1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Region::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Region__ctor_m59D212DC55B944AF238DC66846FE3F3A20CE5A86 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___code0, String_t* ___address1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Realtime.Region>::Add(T)
inline void List_1_Add_m40F74DA21027D2B46116887736CF4BB409E353BA_inline (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* __this, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7*, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Array::Sort<System.String>(T[])
inline void Array_Sort_TisString_t_m83994174718A60541647E1AB2F9D8623AA2F0EBE (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, const RuntimeMethod* method)
{
	((  void (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_m9AF102A7BABD6965322C36DC5D5830F3CE9805A2_gshared)(___array0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>::.ctor()
inline void List_1__ctor_m2DF75B0A34050A1C45547DC177A7BAD958ABD98D (List_1_t6F972EAFC64258DD491584080B232EC12BE33581* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F972EAFC64258DD491584080B232EC12BE33581*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Photon.Realtime.RegionHandler/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_mA79F0C7820EDAA4B0F6986856AC62D6C469CB046 (U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Photon.Realtime.Region>::get_Count()
inline int32_t List_1_get_Count_m29628CAB131318D06AB46CDC0C3ABE99DD950E65_inline (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean Photon.Realtime.RegionHandler::get_IsPinging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RegionHandler_get_IsPinging_m5C6F194C3DF9C39DD3D21F18BC085F6E02B27444_inline (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RegionHandler::set_IsPinging(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionHandler_set_IsPinging_mC4A6997488105E3C320FC8E63A37DAC5986428C6_inline (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.RegionHandler::PingEnabledRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Photon.Realtime.Region>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mB09A8AA6D6B35125D357ED9DC1D9972B6C2E6F3D (Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<Photon.Realtime.Region>::Find(System.Predicate`1<T>)
inline Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* List_1_Find_m0B725D43B3FB9E3C8EAA1A7E5D8434599E3FEA90 (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* __this, Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE* ___match0, const RuntimeMethod* method)
{
	return ((  Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* (*) (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7*, Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Void System.Action`1<Photon.Realtime.Region>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m06F2653AB7C8D2CD0FE255398F824B8F0F129657 (Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Photon.Realtime.RegionPinger::.ctor(Photon.Realtime.Region,System.Action`1<Photon.Realtime.Region>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionPinger__ctor_mED39AD0EDA7299BD73F76DA4A188FEF77A74851C (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___region0, Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73* ___onDoneCallback1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>::Add(T)
inline void List_1_Add_m5F05F7D43DDEB99BA247449769702116FC0213D1_inline (List_1_t6F972EAFC64258DD491584080B232EC12BE33581* __this, RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F972EAFC64258DD491584080B232EC12BE33581*, RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Photon.Realtime.RegionPinger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionPinger_Start_m72A80783766B226657B08F2E00FB8DD1DC7E132A (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Photon.Realtime.RegionHandler>::Invoke(T)
inline void Action_1_Invoke_m644EE81CA4B81DDFEA8B6CE92652E07FF5AA7B23_inline (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74*, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>::Clear()
inline void List_1_Clear_m44448871C2719CD9108C0E02DB7555D32BDF853B_inline (List_1_t6F972EAFC64258DD491584080B232EC12BE33581* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F972EAFC64258DD491584080B232EC12BE33581*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Photon.Realtime.Region>::GetEnumerator()
inline Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A List_1_GetEnumerator_mC7422E6831309E243D7E8643662B5B418EC700D5 (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A (*) (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Photon.Realtime.Region>::Dispose()
inline void Enumerator_Dispose_mA5AB616306C5BCAC7B3D8F47BD7B6EF64A8FF181 (Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Photon.Realtime.Region>::get_Current()
inline Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* Enumerator_get_Current_m89DB79937F78A08F14854104DFCFFC69ECEC7BA7_inline (Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A* __this, const RuntimeMethod* method)
{
	return ((  Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* (*) (Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Photon.Realtime.Region>::MoveNext()
inline bool Enumerator_MoveNext_mE264388527FA23682B6B043400981DCD1A9988E8 (Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean Photon.Realtime.RegionPinger::get_Done()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RegionPinger_get_Done_m96AA7E6623A69F82927866205B03A63E384B09C7_inline (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RegionHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6EE418BB8AAB0FCB3C3BA11BEC981DCBD398804 (U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RegionPinger::set_Done(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionPinger_set_Done_m64D6447A0D217795ED8EC721E959BE79BB8B7C38_inline (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.PingMono::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMono__ctor_m59C42EA3D04741D81B17E017EDBA7888C033E212 (PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.RegionPinger::ResolveHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionPinger_ResolveHost_m3A8E072EBF278A26C7D23A9DA8EA2B9E795E1098 (String_t* ___hostName0, const RuntimeMethod* method) ;
// Photon.Realtime.PhotonPing Photon.Realtime.RegionPinger::GetPingImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* RegionPinger_GetPingImplementation_mC4C087A296BF9784DF0BA1B6945A72A3F259A89B (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared)(__this, ___capacity0, method);
}
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m71B28F18E224DDB44B711DB3D23B1226AA7547AC (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_mAEAB1948AF2ACB76B9873D2B2EE58C704CDEB3A1 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.RegionPinger::RegionPingThreaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionPinger_RegionPingThreaded_m7285A4B2CFF3FBD0067D3826A1E1B8823CA7D12E (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Debug::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_WriteLine_m7EB96D9F52E9424E48A1FAB9D6B6047002B7E7FB (String_t* ___message0, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Action`1<Photon.Realtime.Region>::Invoke(T)
inline void Action_1_Invoke_m279C67A59048D6854C835D1670BA7F50F16EB78A_inline (Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73* __this, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73*, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.String Photon.Realtime.Extensions::ToStringFull<System.Int32>(System.Collections.Generic.List`1<T>)
inline String_t* Extensions_ToStringFull_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m738BB955C326EC3A5243553ECAC88935D4406D30 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___data0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))Extensions_ToStringFull_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m738BB955C326EC3A5243553ECAC88935D4406D30_gshared)(___data0, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* Dns_GetHostAddresses_m0592CB7DB3F5665C412BCBE8297F198748114F90 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::get_LoadBalancingClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* Room_get_LoadBalancingClient_m841CF196A0BAE1D2262DD75E5ABF816B1C45542E_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Hashtable::Add(System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Add_mC74BB7662FF6F194D0E067509BD2AC3329C2EE41 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, uint8_t ___k0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpSetPropertiesOfRoom_mDB4F00727530FF42223D2277EA968383B82B2115 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___gameProperties0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___expectedProperties1, WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___webFlags2, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::get_Players()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::get_Count()
inline int32_t Dictionary_2_get_Count_mE1AF94F3A6094D44AA9134C60DA2F088E57CDAC2 (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::.ctor()
inline void Dictionary_2__ctor_m1E782EA6F5391DB82D60FEE691A90C3D1C4F33EF (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void Photon.Realtime.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo__ctor_mB7E51C34204DD4DF7C230FA103E4474F00458F13 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, String_t* ___roomName0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___roomProperties1, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.RoomOptions::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_m3A6FE1E13DC3BC7BD287449190CCD1F0DB9A4C86 (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.RoomOptions::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_m23FCA5D11C3B429B370D87A7E6BAAD032DFF6FC1 (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Room::set_BroadcastPropertiesChangeToAll(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_BroadcastPropertiesChangeToAll_mE035C1698B5FA3582F75A906E99CC73382B453E6_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Room::set_SuppressRoomEvents(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_SuppressRoomEvents_m0133AF9ADF7DB61EEA827F05F3C933F7897FE6AF_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Room::set_SuppressPlayerInfo(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_SuppressPlayerInfo_m1754FDFEB94E7491AD1B924784FD4C4627CE60A0_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Room::set_PublishUserId(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_PublishUserId_m3EEBD57B9CB236301891F207AF9D42920D3D4B4A_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Room::set_DeleteNullProperties(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_DeleteNullProperties_mA15EBF691112160C0098DB6F29E5A0EBC72C8B24_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_InternalCacheProperties_m63DC75C2047A0B7BA236F9B708E72F6B85B9DF87 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesToCache0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.InRoomCallbacksContainer::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InRoomCallbacksContainer_OnMasterClientSwitched_m269C36AC3F9705DBA052299E2799DBCC6AEF28CC (InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___newMasterClient0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// ExitGames.Client.Photon.Hashtable Photon.Realtime.Extensions::StripToStringKeys(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* Extensions_StripToStringKeys_m3227A871AF9209B839EB9DEE23229681191061FC (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___original0, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_Merge_mE10EBEEA26D184639FDA9CF0B125302A7EC4BB68 (RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Extensions::StripKeysWithNullValues(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_StripKeysWithNullValues_m21D97C2232289C808C8926341933B9D0F83A7F73 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___original0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.InRoomCallbacksContainer::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InRoomCallbacksContainer_OnRoomPropertiesUpdate_m0D96FF82986BB9A3001693BB6B65F0B81E71CDA2 (InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesThatChanged0, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::Remove(TKey)
inline bool Dictionary_2_Remove_mEBC1D35C521879EDAD619E7052994ACD33F820FB (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void Photon.Realtime.Player::set_RoomReference(Photon.Realtime.Room)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_RoomReference_m39E94C50F5580616B89B43EF1027749326845F1C_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___value0, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.Room::get_MasterClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_MasterClientId_mCE5793A018B91562F4EB190DBFEB3E87A882104D (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m557418E6A53F984E197F6A3C3ADA44E138E1D406 (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m2F5BEDD4A6085065EA70F595BFA1E1CE042CC79F (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* __this, int32_t ___key0, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B*, int32_t, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m495BFB5C44B03F3AA7BAFD42C8402C79F0232C30 (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* __this, int32_t ___key0, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B*, int32_t, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Byte Photon.Realtime.Room::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_mAC48EACD33E2EF6430A689C40DFF96C68B5C41D0 (RuntimeObject* ___origin0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.Hashtable::ContainsKey(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, uint8_t ___key0, const RuntimeMethod* method) ;
// System.Object ExitGames.Client.Photon.Hashtable::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, uint8_t ___key0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m60E2655747392B753F507AF760FD5F1CE2C25B02_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_MergeStringKeys_m94C359A20CC762B42BA8FE066215F05C4B006934 (RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_m516EEF1AC5B8F2EA206BCA29CE2A2F3D0EFD560C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___value0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m09D9D6D0033D5FBC62A3C4007CC716A85F4FC8EA (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_VitalStatsToString_m86E7FCEC18792D5BFE615BE0F3A094C7FF1E742E (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, bool ___all0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_AppId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PhotonPeer::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_Version_mF0DFCA957AA487800F8D46A2D968ABFE954158DC (const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Type ExitGames.Client.Photon.PhotonPeer::get_SocketImplementation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhotonPeer_get_SocketImplementation_mE28201437EE67C611F6330E4D18AF46C9CFFC628_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_UserId_mF095E7FB569A0CD2AEEBEA88FCADE18B9486148D (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_m0B745D57BFF19DFFD283825D461C0417024AAC79 (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PhotonPeer::get_PeerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_PeerID_m45C5EABD3528CBE69D022332411D035D0456D6B2 (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_CurrentServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CurrentServerAddress_mEECF2CACB633771F81D6F9A680CB4611F4E52ECB (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerIpAddress_m39ED914DE2093FDAE8B264A3AD9D3A97A02ED59D (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_CloudRegion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m0093F59A916A2AC5BB01A653D31ED2A45C9421F0_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_mADEB668E877F7A13C48E457DCDFBBDD6FA45A439 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_mF1E8384DB1F9A9F472D58031DE53E3A3ED718CB0 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::get_CurrentLobby()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String System.Int16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23 (int16_t* __this, const RuntimeMethod* method) ;
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_GameServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_mA5C7E86447BEEB303C5AB1C932FC9DA907407F01_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_mC018079D538BE027CAE1BE06562EF41064741AB3 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m412943F66C1497EC8FEB2FAECDAC09883941FC38 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m72117C40251F6016E6C2ADD79DD5F23B69A88AD4 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::get_Count()
inline int32_t List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_inline (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::TryGetValue(System.Byte,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5 (ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* __this, uint8_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mB6C7632B44C70579815DEF054DB5D61D5D1AD06D (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, uint8_t ___webhookFlags0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Photon.Realtime.Region::set_Code(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Region_set_Code_m53F1EC8662E027CA4F315888F14210E482BE9208 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Photon.Realtime.Region::get_Cluster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Region_get_Cluster_mF985DDB15CF40F8554C614DFB4BC5BD21341CB84 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string Cluster { get; private set; }
		String_t* L_0 = __this->___U3CClusterU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Photon.Realtime.Region::set_Cluster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Region_set_Cluster_m5B0E1BC3189280551A43F03B3B23C358A6223167 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Cluster { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CClusterU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClusterU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Photon.Realtime.Region::get_HostAndPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Region_get_HostAndPort_mA2E99034AF566055B326BB030BC8B5381FD8B0B1 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string HostAndPort { get; protected internal set; }
		String_t* L_0 = __this->___U3CHostAndPortU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Photon.Realtime.Region::set_HostAndPort(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Region_set_HostAndPort_mE4C5000AE610E411D3EC570C36319D4AEA20017C (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string HostAndPort { get; protected internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CHostAndPortU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHostAndPortU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.Region::get_Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public int Ping { get; set; }
		int32_t L_0 = __this->___U3CPingU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Photon.Realtime.Region::set_Ping(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Region_set_Ping_m48411BF3B9D00DDB33173EA2F6BC6228BAA69F77 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Ping { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CPingU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Photon.Realtime.Region::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Region__ctor_m59D212DC55B944AF238DC66846FE3F3A20CE5A86 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___code0, String_t* ___address1, const RuntimeMethod* method) 
{
	{
		// public Region(string code, string address)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.SetCodeAndCluster(code);
		String_t* L_0 = ___code0;
		Region_SetCodeAndCluster_m6141C9974659DC2D9ECDCDB545B115BB073E5EA0(__this, L_0, NULL);
		// this.HostAndPort = address;
		String_t* L_1 = ___address1;
		Region_set_HostAndPort_mE4C5000AE610E411D3EC570C36319D4AEA20017C_inline(__this, L_1, NULL);
		// this.Ping = int.MaxValue;
		Region_set_Ping_m48411BF3B9D00DDB33173EA2F6BC6228BAA69F77_inline(__this, ((int32_t)2147483647LL), NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Region::SetCodeAndCluster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Region_SetCodeAndCluster_m6141C9974659DC2D9ECDCDB545B115BB073E5EA0 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___codeAsString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B4_0 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B5_1 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B7_0 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B8_1 = NULL;
	{
		// if (codeAsString == null)
		String_t* L_0 = ___codeAsString0;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// this.Code = "";
		Region_set_Code_m53F1EC8662E027CA4F315888F14210E482BE9208_inline(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// this.Cluster = "";
		Region_set_Cluster_m5B0E1BC3189280551A43F03B3B23C358A6223167_inline(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// return;
		goto IL_0070;
	}

IL_0024:
	{
		// codeAsString = codeAsString.ToLower();
		String_t* L_2 = ___codeAsString0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_2, NULL);
		___codeAsString0 = L_3;
		// int slash = codeAsString.IndexOf('/');
		String_t* L_4 = ___codeAsString0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)47), NULL);
		V_0 = L_5;
		// this.Code = slash <= 0 ? codeAsString : codeAsString.Substring(0, slash);
		int32_t L_6 = V_0;
		G_B3_0 = __this;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			G_B4_0 = __this;
			goto IL_0044;
		}
	}
	{
		String_t* L_7 = ___codeAsString0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_8, NULL);
		G_B5_0 = L_9;
		G_B5_1 = G_B3_0;
		goto IL_0045;
	}

IL_0044:
	{
		String_t* L_10 = ___codeAsString0;
		G_B5_0 = L_10;
		G_B5_1 = G_B4_0;
	}

IL_0045:
	{
		NullCheck(G_B5_1);
		Region_set_Code_m53F1EC8662E027CA4F315888F14210E482BE9208_inline(G_B5_1, G_B5_0, NULL);
		// this.Cluster = slash <= 0 ? "" : codeAsString.Substring(slash+1, codeAsString.Length-slash-1);
		int32_t L_11 = V_0;
		G_B6_0 = __this;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			G_B7_0 = __this;
			goto IL_0065;
		}
	}
	{
		String_t* L_12 = ___codeAsString0;
		int32_t L_13 = V_0;
		String_t* L_14 = ___codeAsString0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		int32_t L_16 = V_0;
		NullCheck(L_12);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
		G_B8_0 = L_17;
		G_B8_1 = G_B6_0;
		goto IL_006a;
	}

IL_0065:
	{
		G_B8_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B8_1 = G_B7_0;
	}

IL_006a:
	{
		NullCheck(G_B8_1);
		Region_set_Cluster_m5B0E1BC3189280551A43F03B3B23C358A6223167_inline(G_B8_1, G_B8_0, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.String Photon.Realtime.Region::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Region_ToString_mC601D5437ABD4F51BDE91546121CD43F4E0746A5 (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return this.ToString(false);
		String_t* L_0;
		L_0 = Region_ToString_m74F0905F3BA483A1DE94266319C287FD0139ADDD(__this, (bool)0, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.Realtime.Region::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Region_ToString_m74F0905F3BA483A1DE94266319C287FD0139ADDD (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, bool ___compact0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7A31DE996B60085FB46F6A81676B93820640015);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// string regionCluster = this.Code;
		String_t* L_0;
		L_0 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(__this, NULL);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(this.Cluster))
		String_t* L_1;
		L_1 = Region_get_Cluster_mF985DDB15CF40F8554C614DFB4BC5BD21341CB84_inline(__this, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// regionCluster += "/" + this.Cluster;
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = Region_get_Cluster_mF985DDB15CF40F8554C614DFB4BC5BD21341CB84_inline(__this, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_5, NULL);
		V_0 = L_6;
	}

IL_002e:
	{
		// if (compact)
		bool L_7 = ___compact0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// return string.Format("{0}:{1}", regionCluster, this.Ping);
		String_t* L_9 = V_0;
		int32_t L_10;
		L_10 = Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20_inline(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_9, L_12, NULL);
		V_3 = L_13;
		goto IL_006d;
	}

IL_004d:
	{
		// return string.Format("{0}[{2}]: {1}ms", regionCluster, this.Ping, this.HostAndPort);
		String_t* L_14 = V_0;
		int32_t L_15;
		L_15 = Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20_inline(__this, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = Region_get_HostAndPort_mA2E99034AF566055B326BB030BC8B5381FD8B0B1_inline(__this, NULL);
		String_t* L_19;
		L_19 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralB7A31DE996B60085FB46F6A81676B93820640015, L_14, L_17, L_18, NULL);
		V_3 = L_19;
		goto IL_006d;
	}

IL_006d:
	{
		// }
		String_t* L_20 = V_3;
		return L_20;
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
// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::get_EnabledRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) 
{
	{
		// public List<Region> EnabledRegions { get; protected internal set; }
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_0 = __this->___U3CEnabledRegionsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Photon.Realtime.RegionHandler::set_EnabledRegions(System.Collections.Generic.List`1<Photon.Realtime.Region>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionHandler_set_EnabledRegions_m3BF5BE5F9A8957DD0E8023598AA6BA1EBE3A4E89 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Region> EnabledRegions { get; protected internal set; }
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_0 = ___value0;
		__this->___U3CEnabledRegionsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnabledRegionsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Photon.Realtime.Region Photon.Realtime.RegionHandler::get_BestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mB727E65110C46E474669BF4072CE6A551A2EEFC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC60FEFBAA2B487DCA8B89B5EECEF2652261B31B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_BestRegionU3Eb__8_0_m4EAA846DDC5E10F1A8ABD156B8DA71CADB94E560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* V_1 = NULL;
	bool V_2 = false;
	Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85* G_B6_0 = NULL;
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* G_B6_1 = NULL;
	Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85* G_B5_0 = NULL;
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* G_B5_1 = NULL;
	{
		// if (this.EnabledRegions == null)
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_0;
		L_0 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return null;
		V_1 = (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*)NULL;
		goto IL_0070;
	}

IL_0013:
	{
		// if (this.bestRegionCache != null)
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_2 = __this->___bestRegionCache_3;
		V_2 = (bool)((!(((RuntimeObject*)(Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// return this.bestRegionCache;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_4 = __this->___bestRegionCache_3;
		V_1 = L_4;
		goto IL_0070;
	}

IL_002a:
	{
		// this.EnabledRegions.Sort((a, b) => a.Ping.CompareTo(b.Ping) );
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_5;
		L_5 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var);
		Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85* L_6 = ((U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85* L_7 = L_6;
		G_B5_0 = L_7;
		G_B5_1 = L_5;
		if (L_7)
		{
			G_B6_0 = L_7;
			G_B6_1 = L_5;
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var);
		U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B* L_8 = ((U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85* L_9 = (Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85*)il2cpp_codegen_object_new(Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Comparison_1__ctor_mCC12E16A989B49C0F8EC4DCAFEB9B24FA5E366AB(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3Cget_BestRegionU3Eb__8_0_m4EAA846DDC5E10F1A8ABD156B8DA71CADB94E560_RuntimeMethod_var), NULL);
		Comparison_1_tA07BC65D9A5FE8BEDB024E10C5DBC2BBB72BFD85* L_10 = L_9;
		((U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_10);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
	}

IL_004f:
	{
		NullCheck(G_B6_1);
		List_1_Sort_mB727E65110C46E474669BF4072CE6A551A2EEFC8(G_B6_1, G_B6_0, List_1_Sort_mB727E65110C46E474669BF4072CE6A551A2EEFC8_RuntimeMethod_var);
		// this.bestRegionCache = this.EnabledRegions[0];
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_11;
		L_11 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
		NullCheck(L_11);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_12;
		L_12 = List_1_get_Item_mC60FEFBAA2B487DCA8B89B5EECEF2652261B31B7(L_11, 0, List_1_get_Item_mC60FEFBAA2B487DCA8B89B5EECEF2652261B31B7_RuntimeMethod_var);
		__this->___bestRegionCache_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bestRegionCache_3), (void*)L_12);
		// return this.bestRegionCache;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_13 = __this->___bestRegionCache_3;
		V_1 = L_13;
		goto IL_0070;
	}

IL_0070:
	{
		// }
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_14 = V_1;
		return L_14;
	}
}
// System.String Photon.Realtime.RegionHandler::get_SummaryToCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionHandler_get_SummaryToCache_m313FB26DCB72FB6D25EC366E51AF4118F8CD3722 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// if (this.BestRegion != null) {
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_0;
		L_0 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(__this, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		// return this.BestRegion.Code + ";" + this.BestRegion.Ping + ";" + this.availableRegionCodes;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_4;
		L_4 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_8;
		L_8 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20_inline(L_8, NULL);
		V_1 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = __this->___availableRegionCodes_2;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_13);
		String_t* L_14;
		L_14 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_12, NULL);
		V_2 = L_14;
		goto IL_0063;
	}

IL_005a:
	{
		// return this.availableRegionCodes;
		String_t* L_15 = __this->___availableRegionCodes_2;
		V_2 = L_15;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		String_t* L_16 = V_2;
		return L_16;
	}
}
// System.String Photon.Realtime.RegionHandler::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionHandler_GetResults_mF366790E15BFC845421FC12B7BC46F0C910429BD (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2C80EDEEAF30E7A119E1717467261BED99E1745_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3398D14A05E2412648DB11B9241295E823D5C2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEDC8F407DD4D104C4860B611F3E798FA60450E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4C0DA27E4C601E9E62E0EE8D8935B0F794BDE585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158BCE3BED0666F14459D16BA73D781AC5421828);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FBE4F3AA3E49A414AF5407C10B40EE841A2CC35);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// sb.AppendFormat("Region Pinging Result: {0}\n", this.BestRegion.ToString());
		StringBuilder_t* L_1 = V_0;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_2;
		L_2 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Region_ToString_m74F0905F3BA483A1DE94266319C287FD0139ADDD(L_2, (bool)0, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_1, _stringLiteral158BCE3BED0666F14459D16BA73D781AC5421828, L_3, NULL);
		// foreach (RegionPinger region in this.pingerList)
		List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_5 = __this->___pingerList_4;
		NullCheck(L_5);
		Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9 L_6;
		L_6 = List_1_GetEnumerator_m4C0DA27E4C601E9E62E0EE8D8935B0F794BDE585(L_5, List_1_GetEnumerator_m4C0DA27E4C601E9E62E0EE8D8935B0F794BDE585_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2C80EDEEAF30E7A119E1717467261BED99E1745((&V_1), Enumerator_Dispose_mC2C80EDEEAF30E7A119E1717467261BED99E1745_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_002e_1:
			{
				// foreach (RegionPinger region in this.pingerList)
				RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_7;
				L_7 = Enumerator_get_Current_mEDC8F407DD4D104C4860B611F3E798FA60450E06_inline((&V_1), Enumerator_get_Current_mEDC8F407DD4D104C4860B611F3E798FA60450E06_RuntimeMethod_var);
				V_2 = L_7;
				// sb.AppendFormat(region.GetResults() + "\n");
				StringBuilder_t* L_8 = V_0;
				RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = RegionPinger_GetResults_mD9042E7C8D7555A05F60E0CC0A07C80DE66AAA00(L_9, NULL);
				String_t* L_11;
				L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_10, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
				L_12 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
				NullCheck(L_8);
				StringBuilder_t* L_13;
				L_13 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_8, L_11, L_12, NULL);
			}

IL_0054_1:
			{
				// foreach (RegionPinger region in this.pingerList)
				bool L_14;
				L_14 = Enumerator_MoveNext_m3398D14A05E2412648DB11B9241295E823D5C2AC((&V_1), Enumerator_MoveNext_m3398D14A05E2412648DB11B9241295E823D5C2AC_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// sb.AppendFormat("Previous summary: {0}", this.previousSummaryProvided);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = __this->___previousSummaryProvided_8;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_15, _stringLiteral3FBE4F3AA3E49A414AF5407C10B40EE841A2CC35, L_16, NULL);
		// return sb.ToString();
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		V_3 = L_19;
		goto IL_0089;
	}

IL_0089:
	{
		// }
		String_t* L_20 = V_3;
		return L_20;
	}
}
// System.Void Photon.Realtime.RegionHandler::SetRegions(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionHandler_SetRegions_m34D3FD667DEEDD6035EBB826E68EE9C2B030D496 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___opGetRegions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisString_t_m83994174718A60541647E1AB2F9D8623AA2F0EBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m40F74DA21027D2B46116887736CF4BB409E353BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9472C6B08751038DB6A2816D811C78DC410BC848_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B8_0 = 0;
	{
		// if (opGetRegions.OperationCode != OperationCode.GetRegions)
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_0 = ___opGetRegions0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->___OperationCode_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)((int32_t)220)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_010e;
	}

IL_001b:
	{
		// if (opGetRegions.ReturnCode != ErrorCode.Ok)
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_3 = ___opGetRegions0;
		NullCheck(L_3);
		int16_t L_4 = L_3->___ReturnCode_1;
		V_3 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// return;
		goto IL_010e;
	}

IL_002e:
	{
		// string[] regions = opGetRegions[ParameterCode.Region] as string[];
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_6 = ___opGetRegions0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = OperationResponse_get_Item_mEB2FFC5B967D14E344238A457F480DCD9E976422(L_6, (uint8_t)((int32_t)210), NULL);
		V_0 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_7, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		// string[] servers = opGetRegions[ParameterCode.Address] as string[];
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_8 = ___opGetRegions0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = OperationResponse_get_Item_mEB2FFC5B967D14E344238A457F480DCD9E976422(L_8, (uint8_t)((int32_t)230), NULL);
		V_1 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_9, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		// if (regions == null || servers == null || regions.Length != servers.Length)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		NullCheck(L_13);
		G_B8_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0064;
	}

IL_0063:
	{
		G_B8_0 = 1;
	}

IL_0064:
	{
		V_4 = (bool)G_B8_0;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		// return;
		goto IL_010e;
	}

IL_0070:
	{
		// this.bestRegionCache = null;
		__this->___bestRegionCache_3 = (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bestRegionCache_3), (void*)(Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*)NULL);
		// this.EnabledRegions = new List<Region>(regions.Length);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_0;
		NullCheck(L_15);
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_16 = (List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7*)il2cpp_codegen_object_new(List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		List_1__ctor_m9472C6B08751038DB6A2816D811C78DC410BC848(L_16, ((int32_t)(((RuntimeArray*)L_15)->max_length)), List_1__ctor_m9472C6B08751038DB6A2816D811C78DC410BC848_RuntimeMethod_var);
		RegionHandler_set_EnabledRegions_m3BF5BE5F9A8957DD0E8023598AA6BA1EBE3A4E89_inline(__this, L_16, NULL);
		// for (int i = 0; i < regions.Length; i++)
		V_5 = 0;
		goto IL_00e9;
	}

IL_008b:
	{
		// string server = servers[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_1;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		// if (PortToPingOverride != 0)
		uint16_t L_21 = ((RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields*)il2cpp_codegen_static_fields_for(RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var))->___PortToPingOverride_9;
		V_8 = (bool)((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00b2;
		}
	}
	{
		// server = LoadBalancingClient.ReplacePortWithAlternative(servers[i], PortToPingOverride);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		uint16_t L_27 = ((RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields*)il2cpp_codegen_static_fields_for(RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var))->___PortToPingOverride_9;
		il2cpp_codegen_runtime_class_init_inline(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = LoadBalancingClient_ReplacePortWithAlternative_mBA162CD96D145DDC7685D88E8786A1A333D101AE(L_26, L_27, NULL);
		V_6 = L_28;
	}

IL_00b2:
	{
		// Region tmp = new Region(regions[i], server);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		String_t* L_33 = V_6;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_34 = (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*)il2cpp_codegen_object_new(Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Region__ctor_m59D212DC55B944AF238DC66846FE3F3A20CE5A86(L_34, L_32, L_33, NULL);
		V_7 = L_34;
		// if (string.IsNullOrEmpty(tmp.Code))
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_35 = V_7;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(L_35, NULL);
		bool L_37;
		L_37 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_36, NULL);
		V_9 = L_37;
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_00d4;
		}
	}
	{
		// continue;
		goto IL_00e3;
	}

IL_00d4:
	{
		// this.EnabledRegions.Add(tmp);
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_39;
		L_39 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_40 = V_7;
		NullCheck(L_39);
		List_1_Add_m40F74DA21027D2B46116887736CF4BB409E353BA_inline(L_39, L_40, List_1_Add_m40F74DA21027D2B46116887736CF4BB409E353BA_RuntimeMethod_var);
	}

IL_00e3:
	{
		// for (int i = 0; i < regions.Length; i++)
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00e9:
	{
		// for (int i = 0; i < regions.Length; i++)
		int32_t L_42 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_0;
		NullCheck(L_43);
		V_10 = (bool)((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))? 1 : 0);
		bool L_44 = V_10;
		if (L_44)
		{
			goto IL_008b;
		}
	}
	{
		// Array.Sort(regions);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = V_0;
		Array_Sort_TisString_t_m83994174718A60541647E1AB2F9D8623AA2F0EBE(L_45, Array_Sort_TisString_t_m83994174718A60541647E1AB2F9D8623AA2F0EBE_RuntimeMethod_var);
		// this.availableRegionCodes = string.Join(",", regions);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_0;
		String_t* L_47;
		L_47 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_46, NULL);
		__this->___availableRegionCodes_2 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___availableRegionCodes_2), (void*)L_47);
	}

IL_010e:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RegionHandler::get_IsPinging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_get_IsPinging_m5C6F194C3DF9C39DD3D21F18BC085F6E02B27444 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPinging { get; private set; }
		bool L_0 = __this->___U3CIsPingingU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Photon.Realtime.RegionHandler::set_IsPinging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionHandler_set_IsPinging_mC4A6997488105E3C320FC8E63A37DAC5986428C6 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPinging { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPingingU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void Photon.Realtime.RegionHandler::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionHandler__ctor_m5AB54F3B57DEDBBE99776A020AB2E80BFFF47D56 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, uint16_t ___masterServerPortOverride0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2DF75B0A34050A1C45547DC177A7BAD958ABD98D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6F972EAFC64258DD491584080B232EC12BE33581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<RegionPinger> pingerList = new List<RegionPinger>();
		List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_0 = (List_1_t6F972EAFC64258DD491584080B232EC12BE33581*)il2cpp_codegen_object_new(List_1_t6F972EAFC64258DD491584080B232EC12BE33581_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2DF75B0A34050A1C45547DC177A7BAD958ABD98D(L_0, List_1__ctor_m2DF75B0A34050A1C45547DC177A7BAD958ABD98D_RuntimeMethod_var);
		__this->___pingerList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pingerList_4), (void*)L_0);
		// public RegionHandler(ushort masterServerPortOverride = 0)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// PortToPingOverride = masterServerPortOverride;
		uint16_t L_1 = ___masterServerPortOverride0;
		((RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields*)il2cpp_codegen_static_fields_for(RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var))->___PortToPingOverride_9 = L_1;
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RegionHandler::PingMinimumOfRegions(System.Action`1<Photon.Realtime.RegionHandler>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_PingMinimumOfRegions_mBDA481EF544E14116455B0352A160D07B6AF5762 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCallback0, String_t* ___previousSummary1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F05F7D43DDEB99BA247449769702116FC0213D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m0B725D43B3FB9E3C8EAA1A7E5D8434599E3FEA90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m29628CAB131318D06AB46CDC0C3ABE99DD950E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionHandler_OnPreferredRegionPinged_m7A6AAFF96EEAAA7FC256D14368C8CB04FD53F444_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CPingMinimumOfRegionsU3Eb__0_m853ADC07B0DE103032168331EBD5E9CE9D6E2824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* V_5 = NULL;
	RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* V_17 = NULL;
	bool V_18 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B20_0 = 0;
	{
		U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A* L_0 = (U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass23_0__ctor_mA79F0C7820EDAA4B0F6986856AC62D6C469CB046(L_0, NULL);
		V_0 = L_0;
		// if (this.EnabledRegions == null || this.EnabledRegions.Count == 0)
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_1;
		L_1 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_2;
		L_2 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m29628CAB131318D06AB46CDC0C3ABE99DD950E65_inline(L_2, List_1_get_Count_m29628CAB131318D06AB46CDC0C3ABE99DD950E65_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_7 = (bool)G_B3_0;
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		V_8 = (bool)0;
		goto IL_01cf;
	}

IL_002f:
	{
		// if (this.IsPinging)
		bool L_5;
		L_5 = RegionHandler_get_IsPinging_m5C6F194C3DF9C39DD3D21F18BC085F6E02B27444_inline(__this, NULL);
		V_9 = L_5;
		bool L_6 = V_9;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// return false;
		V_8 = (bool)0;
		goto IL_01cf;
	}

IL_0044:
	{
		// this.IsPinging = true;
		RegionHandler_set_IsPinging_mC4A6997488105E3C320FC8E63A37DAC5986428C6_inline(__this, (bool)1, NULL);
		// this.onCompleteCall = onCompleteCallback;
		Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* L_7 = ___onCompleteCallback0;
		__this->___onCompleteCall_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onCompleteCall_5), (void*)L_7);
		// this.previousSummaryProvided = previousSummary;
		String_t* L_8 = ___previousSummary1;
		__this->___previousSummaryProvided_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousSummaryProvided_8), (void*)L_8);
		// if (string.IsNullOrEmpty(previousSummary))
		String_t* L_9 = ___previousSummary1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		V_10 = L_10;
		bool L_11 = V_10;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// return this.PingEnabledRegions();
		bool L_12;
		L_12 = RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B(__this, NULL);
		V_8 = L_12;
		goto IL_01cf;
	}

IL_0074:
	{
		// string[] values = previousSummary.Split(';');
		String_t* L_13 = ___previousSummary1;
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14;
		L_14 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_13, ((int32_t)59), 0, NULL);
		V_1 = L_14;
		// if (values.Length < 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_1;
		NullCheck(L_15);
		V_11 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) < ((int32_t)3))? 1 : 0);
		bool L_16 = V_11;
		if (!L_16)
		{
			goto IL_0098;
		}
	}
	{
		// return this.PingEnabledRegions();
		bool L_17;
		L_17 = RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B(__this, NULL);
		V_8 = L_17;
		goto IL_01cf;
	}

IL_0098:
	{
		// bool secondValueIsInt = Int32.TryParse(values[1], out prevBestRegionPing);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_20, (&V_2), NULL);
		V_3 = L_21;
		// if (!secondValueIsInt)
		bool L_22 = V_3;
		V_12 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_12;
		if (!L_23)
		{
			goto IL_00bb;
		}
	}
	{
		// return this.PingEnabledRegions();
		bool L_24;
		L_24 = RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B(__this, NULL);
		V_8 = L_24;
		goto IL_01cf;
	}

IL_00bb:
	{
		// string prevBestRegionCode = values[0];
		U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A* L_25 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = 0;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_25);
		L_25->___prevBestRegionCode_0 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___prevBestRegionCode_0), (void*)L_28);
		// string prevAvailableRegionCodes = values[2];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = 2;
		String_t* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_4 = L_31;
		// if (string.IsNullOrEmpty(prevBestRegionCode))
		U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33 = L_32->___prevBestRegionCode_0;
		bool L_34;
		L_34 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_33, NULL);
		V_13 = L_34;
		bool L_35 = V_13;
		if (!L_35)
		{
			goto IL_00e8;
		}
	}
	{
		// return this.PingEnabledRegions();
		bool L_36;
		L_36 = RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B(__this, NULL);
		V_8 = L_36;
		goto IL_01cf;
	}

IL_00e8:
	{
		// if (string.IsNullOrEmpty(prevAvailableRegionCodes))
		String_t* L_37 = V_4;
		bool L_38;
		L_38 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_37, NULL);
		V_14 = L_38;
		bool L_39 = V_14;
		if (!L_39)
		{
			goto IL_0103;
		}
	}
	{
		// return this.PingEnabledRegions();
		bool L_40;
		L_40 = RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B(__this, NULL);
		V_8 = L_40;
		goto IL_01cf;
	}

IL_0103:
	{
		// if (!this.availableRegionCodes.Equals(prevAvailableRegionCodes) || !this.availableRegionCodes.Contains(prevBestRegionCode))
		String_t* L_41 = __this->___availableRegionCodes_2;
		String_t* L_42 = V_4;
		NullCheck(L_41);
		bool L_43;
		L_43 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_0128;
		}
	}
	{
		String_t* L_44 = __this->___availableRegionCodes_2;
		U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A* L_45 = V_0;
		NullCheck(L_45);
		String_t* L_46 = L_45->___prevBestRegionCode_0;
		NullCheck(L_44);
		bool L_47;
		L_47 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_44, L_46, NULL);
		G_B20_0 = ((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		goto IL_0129;
	}

IL_0128:
	{
		G_B20_0 = 1;
	}

IL_0129:
	{
		V_15 = (bool)G_B20_0;
		bool L_48 = V_15;
		if (!L_48)
		{
			goto IL_013d;
		}
	}
	{
		// return this.PingEnabledRegions();
		bool L_49;
		L_49 = RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B(__this, NULL);
		V_8 = L_49;
		goto IL_01cf;
	}

IL_013d:
	{
		// if (prevBestRegionPing >= RegionPinger.PingWhenFailed)
		int32_t L_50 = V_2;
		il2cpp_codegen_runtime_class_init_inline(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		int32_t L_51 = ((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___PingWhenFailed_3;
		V_16 = (bool)((((int32_t)((((int32_t)L_50) < ((int32_t)L_51))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_16;
		if (!L_52)
		{
			goto IL_0159;
		}
	}
	{
		// return this.PingEnabledRegions();
		bool L_53;
		L_53 = RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B(__this, NULL);
		V_8 = L_53;
		goto IL_01cf;
	}

IL_0159:
	{
		// this.previousPing = prevBestRegionPing;
		int32_t L_54 = V_2;
		__this->___previousPing_6 = L_54;
		// Region preferred = this.EnabledRegions.Find(r => r.Code.Equals(prevBestRegionCode));
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_55;
		L_55 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
		U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A* L_56 = V_0;
		Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE* L_57 = (Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE*)il2cpp_codegen_object_new(Predicate_1_t77C0585D3195F2C3808C43E8DC1E6C1115EECCFE_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		Predicate_1__ctor_mB09A8AA6D6B35125D357ED9DC1D9972B6C2E6F3D(L_57, L_56, (intptr_t)((void*)U3CU3Ec__DisplayClass23_0_U3CPingMinimumOfRegionsU3Eb__0_m853ADC07B0DE103032168331EBD5E9CE9D6E2824_RuntimeMethod_var), NULL);
		NullCheck(L_55);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_58;
		L_58 = List_1_Find_m0B725D43B3FB9E3C8EAA1A7E5D8434599E3FEA90(L_55, L_57, List_1_Find_m0B725D43B3FB9E3C8EAA1A7E5D8434599E3FEA90_RuntimeMethod_var);
		V_5 = L_58;
		// RegionPinger singlePinger = new RegionPinger(preferred, this.OnPreferredRegionPinged);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_59 = V_5;
		Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73* L_60 = (Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73*)il2cpp_codegen_object_new(Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		Action_1__ctor_m06F2653AB7C8D2CD0FE255398F824B8F0F129657(L_60, __this, (intptr_t)((void*)RegionHandler_OnPreferredRegionPinged_m7A6AAFF96EEAAA7FC256D14368C8CB04FD53F444_RuntimeMethod_var), NULL);
		RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_61 = (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B*)il2cpp_codegen_object_new(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		RegionPinger__ctor_mED39AD0EDA7299BD73F76DA4A188FEF77A74851C(L_61, L_59, L_60, NULL);
		V_6 = L_61;
		// lock (this.pingerList)
		List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_62 = __this->___pingerList_4;
		V_17 = L_62;
		V_18 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b5:
			{// begin finally (depth: 1)
				{
					bool L_63 = V_18;
					if (!L_63)
					{
						goto IL_01c1;
					}
				}
				{
					List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_64 = V_17;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_64, NULL);
				}

IL_01c1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_65 = V_17;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_65, (&V_18), NULL);
			// this.pingerList.Add(singlePinger);
			List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_66 = __this->___pingerList_4;
			RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_67 = V_6;
			NullCheck(L_66);
			List_1_Add_m5F05F7D43DDEB99BA247449769702116FC0213D1_inline(L_66, L_67, List_1_Add_m5F05F7D43DDEB99BA247449769702116FC0213D1_RuntimeMethod_var);
			goto IL_01c2;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c2:
	{
		// singlePinger.Start();
		RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_68 = V_6;
		NullCheck(L_68);
		bool L_69;
		L_69 = RegionPinger_Start_m72A80783766B226657B08F2E00FB8DD1DC7E132A(L_68, NULL);
		// return true;
		V_8 = (bool)1;
		goto IL_01cf;
	}

IL_01cf:
	{
		// }
		bool L_70 = V_8;
		return L_70;
	}
}
// System.Void Photon.Realtime.RegionHandler::OnPreferredRegionPinged(Photon.Realtime.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionHandler_OnPreferredRegionPinged_m7A6AAFF96EEAAA7FC256D14368C8CB04FD53F444 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___preferredRegion0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (preferredRegion.Ping > this.previousPing * 1.50f)
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_0 = ___preferredRegion0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20_inline(L_0, NULL);
		int32_t L_2 = __this->___previousPing_6;
		V_0 = (bool)((((float)((float)L_1)) > ((float)((float)il2cpp_codegen_multiply(((float)L_2), (1.5f)))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// this.PingEnabledRegions();
		bool L_4;
		L_4 = RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B(__this, NULL);
		goto IL_003d;
	}

IL_0026:
	{
		// this.IsPinging = false;
		RegionHandler_set_IsPinging_mC4A6997488105E3C320FC8E63A37DAC5986428C6_inline(__this, (bool)0, NULL);
		// this.onCompleteCall(this);
		Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* L_5 = __this->___onCompleteCall_5;
		NullCheck(L_5);
		Action_1_Invoke_m644EE81CA4B81DDFEA8B6CE92652E07FF5AA7B23_inline(L_5, __this, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RegionHandler::PingEnabledRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_PingEnabledRegions_m3039EE37F97EACF2E631594E3480CED44D39F05B (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA5AB616306C5BCAC7B3D8F47BD7B6EF64A8FF181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE264388527FA23682B6B043400981DCD1A9988E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m89DB79937F78A08F14854104DFCFFC69ECEC7BA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F05F7D43DDEB99BA247449769702116FC0213D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m44448871C2719CD9108C0E02DB7555D32BDF853B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC7422E6831309E243D7E8643662B5B418EC700D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m29628CAB131318D06AB46CDC0C3ABE99DD950E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionHandler_OnRegionDone_m91713A4A56D38F895B0015A780C5B5F88E0997D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* V_2 = NULL;
	bool V_3 = false;
	Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A V_4;
	memset((&V_4), 0, sizeof(V_4));
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* V_5 = NULL;
	RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* V_6 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (this.EnabledRegions == null || this.EnabledRegions.Count == 0)
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_0;
		L_0 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_1;
		L_1 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m29628CAB131318D06AB46CDC0C3ABE99DD950E65_inline(L_1, List_1_get_Count_m29628CAB131318D06AB46CDC0C3ABE99DD950E65_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00b7;
	}

IL_0026:
	{
		// lock (this.pingerList)
		List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_4 = __this->___pingerList_4;
		V_2 = L_4;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a8:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_3;
					if (!L_5)
					{
						goto IL_00b2;
					}
				}
				{
					List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_6 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_7 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_7, (&V_3), NULL);
				// this.pingerList.Clear();
				List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_8 = __this->___pingerList_4;
				NullCheck(L_8);
				List_1_Clear_m44448871C2719CD9108C0E02DB7555D32BDF853B_inline(L_8, List_1_Clear_m44448871C2719CD9108C0E02DB7555D32BDF853B_RuntimeMethod_var);
				// foreach (Region region in this.EnabledRegions)
				List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_9;
				L_9 = RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline(__this, NULL);
				NullCheck(L_9);
				Enumerator_t24F1DED87061638E57B80C25DD0EF7F7BDCD164A L_10;
				L_10 = List_1_GetEnumerator_mC7422E6831309E243D7E8643662B5B418EC700D5(L_9, List_1_GetEnumerator_mC7422E6831309E243D7E8643662B5B418EC700D5_RuntimeMethod_var);
				V_4 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0096_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mA5AB616306C5BCAC7B3D8F47BD7B6EF64A8FF181((&V_4), Enumerator_Dispose_mA5AB616306C5BCAC7B3D8F47BD7B6EF64A8FF181_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_008b_2;
					}

IL_0055_2:
					{
						// foreach (Region region in this.EnabledRegions)
						Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_11;
						L_11 = Enumerator_get_Current_m89DB79937F78A08F14854104DFCFFC69ECEC7BA7_inline((&V_4), Enumerator_get_Current_m89DB79937F78A08F14854104DFCFFC69ECEC7BA7_RuntimeMethod_var);
						V_5 = L_11;
						// RegionPinger rp = new RegionPinger(region, this.OnRegionDone);
						Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_12 = V_5;
						Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73* L_13 = (Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73*)il2cpp_codegen_object_new(Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73_il2cpp_TypeInfo_var);
						NullCheck(L_13);
						Action_1__ctor_m06F2653AB7C8D2CD0FE255398F824B8F0F129657(L_13, __this, (intptr_t)((void*)RegionHandler_OnRegionDone_m91713A4A56D38F895B0015A780C5B5F88E0997D4_RuntimeMethod_var), NULL);
						RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_14 = (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B*)il2cpp_codegen_object_new(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
						NullCheck(L_14);
						RegionPinger__ctor_mED39AD0EDA7299BD73F76DA4A188FEF77A74851C(L_14, L_12, L_13, NULL);
						V_6 = L_14;
						// this.pingerList.Add(rp);
						List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_15 = __this->___pingerList_4;
						RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_16 = V_6;
						NullCheck(L_15);
						List_1_Add_m5F05F7D43DDEB99BA247449769702116FC0213D1_inline(L_15, L_16, List_1_Add_m5F05F7D43DDEB99BA247449769702116FC0213D1_RuntimeMethod_var);
						// rp.Start(); // TODO: check return value
						RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_17 = V_6;
						NullCheck(L_17);
						bool L_18;
						L_18 = RegionPinger_Start_m72A80783766B226657B08F2E00FB8DD1DC7E132A(L_17, NULL);
					}

IL_008b_2:
					{
						// foreach (Region region in this.EnabledRegions)
						bool L_19;
						L_19 = Enumerator_MoveNext_mE264388527FA23682B6B043400981DCD1A9988E8((&V_4), Enumerator_MoveNext_mE264388527FA23682B6B043400981DCD1A9988E8_RuntimeMethod_var);
						if (L_19)
						{
							goto IL_0055_2;
						}
					}
					{
						goto IL_00a5_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a5_1:
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00b7;
	}

IL_00b7:
	{
		// }
		bool L_20 = V_1;
		return L_20;
	}
}
// System.Void Photon.Realtime.RegionHandler::OnRegionDone(Photon.Realtime.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionHandler_OnRegionDone_m91713A4A56D38F895B0015A780C5B5F88E0997D4 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___region0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2C80EDEEAF30E7A119E1717467261BED99E1745_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3398D14A05E2412648DB11B9241295E823D5C2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEDC8F407DD4D104C4860B611F3E798FA60450E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4C0DA27E4C601E9E62E0EE8D8935B0F794BDE585_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* V_4 = NULL;
	bool V_5 = false;
	{
		// lock (this.pingerList)
		List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_0 = __this->___pingerList_4;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0087;
					}
				}
				{
					List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0087:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (this.IsPinging == false)
				bool L_4;
				L_4 = RegionHandler_get_IsPinging_m5C6F194C3DF9C39DD3D21F18BC085F6E02B27444_inline(__this, NULL);
				V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_0024_1;
				}
			}
			{
				// return;
				goto IL_0095;
			}

IL_0024_1:
			{
				// this.bestRegionCache = null;
				__this->___bestRegionCache_3 = (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___bestRegionCache_3), (void*)(Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A*)NULL);
				// foreach (RegionPinger pinger in this.pingerList)
				List_1_t6F972EAFC64258DD491584080B232EC12BE33581* L_6 = __this->___pingerList_4;
				NullCheck(L_6);
				Enumerator_t2181B7FAED63146F6EF17510AD109B922E7EA9D9 L_7;
				L_7 = List_1_GetEnumerator_m4C0DA27E4C601E9E62E0EE8D8935B0F794BDE585(L_6, List_1_GetEnumerator_m4C0DA27E4C601E9E62E0EE8D8935B0F794BDE585_RuntimeMethod_var);
				V_3 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0063_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mC2C80EDEEAF30E7A119E1717467261BED99E1745((&V_3), Enumerator_Dispose_mC2C80EDEEAF30E7A119E1717467261BED99E1745_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0058_2;
					}

IL_003a_2:
					{
						// foreach (RegionPinger pinger in this.pingerList)
						RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_8;
						L_8 = Enumerator_get_Current_mEDC8F407DD4D104C4860B611F3E798FA60450E06_inline((&V_3), Enumerator_get_Current_mEDC8F407DD4D104C4860B611F3E798FA60450E06_RuntimeMethod_var);
						V_4 = L_8;
						// if (!pinger.Done)
						RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* L_9 = V_4;
						NullCheck(L_9);
						bool L_10;
						L_10 = RegionPinger_get_Done_m96AA7E6623A69F82927866205B03A63E384B09C7_inline(L_9, NULL);
						V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
						bool L_11 = V_5;
						if (!L_11)
						{
							goto IL_0057_2;
						}
					}
					{
						// return;
						goto IL_0095;
					}

IL_0057_2:
					{
					}

IL_0058_2:
					{
						// foreach (RegionPinger pinger in this.pingerList)
						bool L_12;
						L_12 = Enumerator_MoveNext_m3398D14A05E2412648DB11B9241295E823D5C2AC((&V_3), Enumerator_MoveNext_m3398D14A05E2412648DB11B9241295E823D5C2AC_RuntimeMethod_var);
						if (L_12)
						{
							goto IL_003a_2;
						}
					}
					{
						goto IL_0072_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0072_1:
			{
				// this.IsPinging = false;
				RegionHandler_set_IsPinging_mC4A6997488105E3C320FC8E63A37DAC5986428C6_inline(__this, (bool)0, NULL);
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// this.onCompleteCall(this);
		Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* L_13 = __this->___onCompleteCall_5;
		NullCheck(L_13);
		Action_1_Invoke_m644EE81CA4B81DDFEA8B6CE92652E07FF5AA7B23_inline(L_13, __this, NULL);
	}

IL_0095:
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
// System.Void Photon.Realtime.RegionHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6E91DBF69B71C0FC7858708BE1EC7379C3EF5C12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B* L_0 = (U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B*)il2cpp_codegen_object_new(U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF6EE418BB8AAB0FCB3C3BA11BEC981DCBD398804(L_0, NULL);
		((U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Photon.Realtime.RegionHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6EE418BB8AAB0FCB3C3BA11BEC981DCBD398804 (U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Photon.Realtime.RegionHandler/<>c::<get_BestRegion>b__8_0(Photon.Realtime.Region,Photon.Realtime.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3Cget_BestRegionU3Eb__8_0_m4EAA846DDC5E10F1A8ABD156B8DA71CADB94E560 (U3CU3Ec_t891649040041B59581B2967B9809C6988EBE4C5B* __this, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___a0, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// this.EnabledRegions.Sort((a, b) => a.Ping.CompareTo(b.Ping) );
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20_inline(L_0, NULL);
		V_0 = L_1;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_2 = ___b1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20_inline(L_2, NULL);
		int32_t L_4;
		L_4 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&V_0), L_3, NULL);
		return L_4;
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
// System.Void Photon.Realtime.RegionHandler/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_mA79F0C7820EDAA4B0F6986856AC62D6C469CB046 (U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Photon.Realtime.RegionHandler/<>c__DisplayClass23_0::<PingMinimumOfRegions>b__0(Photon.Realtime.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass23_0_U3CPingMinimumOfRegionsU3Eb__0_m853ADC07B0DE103032168331EBD5E9CE9D6E2824 (U3CU3Ec__DisplayClass23_0_tBABD9E4284817FFE36F94C99ED67FB705EE2CD2A* __this, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___r0, const RuntimeMethod* method) 
{
	{
		// Region preferred = this.EnabledRegions.Find(r => r.Code.Equals(prevBestRegionCode));
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_0 = ___r0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(L_0, NULL);
		String_t* L_2 = __this->___prevBestRegionCode_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_2, NULL);
		return L_3;
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
// System.Boolean Photon.Realtime.RegionPinger::get_Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionPinger_get_Done_m96AA7E6623A69F82927866205B03A63E384B09C7 (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) 
{
	{
		// public bool Done { get; private set; }
		bool L_0 = __this->___U3CDoneU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Photon.Realtime.RegionPinger::set_Done(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionPinger_set_Done_m64D6447A0D217795ED8EC721E959BE79BB8B7C38 (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Done { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDoneU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void Photon.Realtime.RegionPinger::.ctor(Photon.Realtime.Region,System.Action`1<Photon.Realtime.Region>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionPinger__ctor_mED39AD0EDA7299BD73F76DA4A188FEF77A74851C (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___region0, Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73* ___onDoneCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int CurrentAttempt = 0;
		__this->___CurrentAttempt_6 = 0;
		// public RegionPinger(Region region, Action<Region> onDoneCallback)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.region = region;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_0 = ___region0;
		__this->___region_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___region_4), (void*)L_0);
		// this.region.Ping = PingWhenFailed;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_1 = __this->___region_4;
		il2cpp_codegen_runtime_class_init_inline(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		int32_t L_2 = ((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___PingWhenFailed_3;
		NullCheck(L_1);
		Region_set_Ping_m48411BF3B9D00DDB33173EA2F6BC6228BAA69F77_inline(L_1, L_2, NULL);
		// this.Done = false;
		RegionPinger_set_Done_m64D6447A0D217795ED8EC721E959BE79BB8B7C38_inline(__this, (bool)0, NULL);
		// this.onDoneCall = onDoneCallback;
		Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73* L_3 = ___onDoneCallback1;
		__this->___onDoneCall_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDoneCall_8), (void*)L_3);
		// }
		return;
	}
}
// Photon.Realtime.PhotonPing Photon.Realtime.RegionPinger::GetPingImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* RegionPinger_GetPingImplementation_mC4C087A296BF9784DF0BA1B6945A72A3F259A89B (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* V_4 = NULL;
	int32_t G_B3_0 = 0;
	{
		// PhotonPing ping = null;
		V_0 = (PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D*)NULL;
		// if (RegionHandler.PingImplementation == null || RegionHandler.PingImplementation == typeof(PingMono))
		Type_t* L_0 = ((RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields*)il2cpp_codegen_static_fields_for(RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var))->___PingImplementation_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, (Type_t*)NULL, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		Type_t* L_2 = ((RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields*)il2cpp_codegen_static_fields_for(RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var))->___PingImplementation_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// ping = new PingMono();
		PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115* L_7 = (PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115*)il2cpp_codegen_object_new(PingMono_t1B9633E04F8DAF4061258D91AC519069BC68F115_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PingMono__ctor_m59C42EA3D04741D81B17E017EDBA7888C033E212(L_7, NULL);
		V_0 = L_7;
	}

IL_0033:
	{
		// if (ping == null)
		PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* L_8 = V_0;
		V_2 = (bool)((((RuntimeObject*)(PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// if (RegionHandler.PingImplementation != null)
		Type_t* L_10 = ((RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields*)il2cpp_codegen_static_fields_for(RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var))->___PingImplementation_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_10, (Type_t*)NULL, NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		// ping = (PhotonPing)Activator.CreateInstance(RegionHandler.PingImplementation);
		Type_t* L_13 = ((RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields*)il2cpp_codegen_static_fields_for(RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_il2cpp_TypeInfo_var))->___PingImplementation_0;
		RuntimeObject* L_14;
		L_14 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_13, NULL);
		V_0 = ((PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D*)CastclassClass((RuntimeObject*)L_14, PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D_il2cpp_TypeInfo_var));
	}

IL_005d:
	{
	}

IL_005e:
	{
		// return ping;
		PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* L_15 = V_0;
		V_4 = L_15;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* L_16 = V_4;
		return L_16;
	}
}
// System.Boolean Photon.Realtime.RegionPinger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionPinger_Start_m72A80783766B226657B08F2E00FB8DD1DC7E132A (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionPinger_RegionPingPooled_mFC8A1094B28C7B5C655059C5AAD8C5C3FCCDBC8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionPinger_RegionPingThreaded_m7285A4B2CFF3FBD0067D3826A1E1B8823CA7D12E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D1D849A8EF3D0DDA637B8ADA1554F7B578F1CC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// string address = this.region.HostAndPort;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_0 = __this->___region_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Region_get_HostAndPort_mA2E99034AF566055B326BB030BC8B5381FD8B0B1_inline(L_0, NULL);
		V_0 = L_1;
		// int indexOfColon = address.LastIndexOf(':');
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_2, ((int32_t)58), NULL);
		V_1 = L_3;
		// if (indexOfColon > 1)
		int32_t L_4 = V_1;
		V_3 = (bool)((((int32_t)L_4) > ((int32_t)1))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// address = address.Substring(0, indexOfColon);
		String_t* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_6, 0, L_7, NULL);
		V_0 = L_8;
	}

IL_0029:
	{
		// this.regionAddress = ResolveHost(address);
		String_t* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = RegionPinger_ResolveHost_m3A8E072EBF278A26C7D23A9DA8EA2B9E795E1098(L_9, NULL);
		__this->___regionAddress_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regionAddress_5), (void*)L_10);
		// this.ping = this.GetPingImplementation();
		PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* L_11;
		L_11 = RegionPinger_GetPingImplementation_mC4C087A296BF9784DF0BA1B6945A72A3F259A89B(__this, NULL);
		__this->___ping_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ping_9), (void*)L_11);
		// this.Done = false;
		RegionPinger_set_Done_m64D6447A0D217795ED8EC721E959BE79BB8B7C38_inline(__this, (bool)0, NULL);
		// this.CurrentAttempt = 0;
		__this->___CurrentAttempt_6 = 0;
		// this.rttResults = new List<int>(Attempts);
		int32_t L_12 = ((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___Attempts_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, L_12, List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		__this->___rttResults_10 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rttResults_10), (void*)L_13);
		// bool queued = false;
		V_2 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// queued = ThreadPool.QueueUserWorkItem(this.RegionPingPooled);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_14 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_14, __this, (intptr_t)((void*)RegionPinger_RegionPingPooled_mFC8A1094B28C7B5C655059C5AAD8C5C3FCCDBC8B_RuntimeMethod_var), NULL);
		bool L_15;
		L_15 = ThreadPool_QueueUserWorkItem_m71B28F18E224DDB44B711DB3D23B1226AA7547AC(L_14, NULL);
		V_2 = L_15;
		goto IL_007f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0078;
		}
		throw e;
	}

CATCH_0078:
	{// begin catch(System.Object)
		// catch
		// queued = false;
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007f;
	}// end catch (depth: 1)

IL_007f:
	{
		// if (!queued)
		bool L_16 = V_2;
		V_4 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		// SupportClass.StartBackgroundCalls(this.RegionPingThreaded, 0, "RegionPing_" + this.region.Code + "_" + this.region.Cluster);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_18 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_18, __this, (intptr_t)((void*)RegionPinger_RegionPingThreaded_m7285A4B2CFF3FBD0067D3826A1E1B8823CA7D12E_RuntimeMethod_var), NULL);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_19 = __this->___region_4;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(L_19, NULL);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_21 = __this->___region_4;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Region_get_Cluster_mF985DDB15CF40F8554C614DFB4BC5BD21341CB84_inline(L_21, NULL);
		String_t* L_23;
		L_23 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral2D1D849A8EF3D0DDA637B8ADA1554F7B578F1CC2, L_20, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		uint8_t L_24;
		L_24 = SupportClass_StartBackgroundCalls_mAEAB1948AF2ACB76B9873D2B2EE58C704CDEB3A1(L_18, 0, L_23, NULL);
	}

IL_00c3:
	{
		// return true;
		V_5 = (bool)1;
		goto IL_00c8;
	}

IL_00c8:
	{
		// }
		bool L_25 = V_5;
		return L_25;
	}
}
// System.Void Photon.Realtime.RegionPinger::RegionPingPooled(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionPinger_RegionPingPooled_mFC8A1094B28C7B5C655059C5AAD8C5C3FCCDBC8B (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, RuntimeObject* ___context0, const RuntimeMethod* method) 
{
	{
		// this.RegionPingThreaded();
		bool L_0;
		L_0 = RegionPinger_RegionPingThreaded_m7285A4B2CFF3FBD0067D3826A1E1B8823CA7D12E(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RegionPinger::RegionPingThreaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionPinger_RegionPingThreaded_m7285A4B2CFF3FBD0067D3826A1E1B8823CA7D12E (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	Exception_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Exception_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// this.region.Ping = PingWhenFailed;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_0 = __this->___region_4;
		il2cpp_codegen_runtime_class_init_inline(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		int32_t L_1 = ((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___PingWhenFailed_3;
		NullCheck(L_0);
		Region_set_Ping_m48411BF3B9D00DDB33173EA2F6BC6228BAA69F77_inline(L_0, L_1, NULL);
		// float rttSum = 0.0f;
		V_0 = (0.0f);
		// int replyCount = 0;
		V_1 = 0;
		// Stopwatch sw = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_2, NULL);
		V_2 = L_2;
		// for (this.CurrentAttempt = 0; this.CurrentAttempt < Attempts; this.CurrentAttempt++)
		__this->___CurrentAttempt_6 = 0;
		goto IL_016d;
	}

IL_002c:
	{
		// bool overtime = false;
		V_3 = (bool)0;
		// sw.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = V_2;
		NullCheck(L_3);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_3, NULL);
		// sw.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_4 = V_2;
		NullCheck(L_4);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_4, NULL);
	}
	try
	{// begin try (depth: 1)
		// this.ping.StartPing(this.regionAddress);
		PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* L_5 = __this->___ping_9;
		String_t* L_6 = __this->___regionAddress_5;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean Photon.Realtime.PhotonPing::StartPing(System.String) */, L_5, L_6);
		goto IL_00a9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0053:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// System.Diagnostics.Debug.WriteLine("RegionPinger.RegionPingThreaded() catched an exception for ping.StartPing(). Exception: " + e + " Source: " + e.Source + " Message: " + e.Message);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07FD03DD59FDAA80CC68099220C8227F2FA1CCFF)));
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07FD03DD59FDAA80CC68099220C8227F2FA1CCFF)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
			Exception_t* L_11 = V_5;
			Exception_t* L_12 = L_11;
			G_B4_0 = L_12;
			G_B4_1 = 1;
			G_B4_2 = L_10;
			G_B4_3 = L_10;
			if (L_12)
			{
				G_B5_0 = L_12;
				G_B5_1 = 1;
				G_B5_2 = L_10;
				G_B5_3 = L_10;
				goto IL_006f;
			}
		}
		{
			G_B6_0 = ((String_t*)(NULL));
			G_B6_1 = G_B4_1;
			G_B6_2 = G_B4_2;
			G_B6_3 = G_B4_3;
			goto IL_0074;
		}

IL_006f:
		{
			NullCheck(G_B5_0);
			String_t* L_13;
			L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
			G_B6_0 = L_13;
			G_B6_1 = G_B5_1;
			G_B6_2 = G_B5_2;
			G_B6_3 = G_B5_3;
		}

IL_0074:
		{
			NullCheck(G_B6_2);
			ArrayElementTypeCheck (G_B6_2, G_B6_0);
			(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = G_B6_3;
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AC887B4E0A467A6BA01B455BC69AFA2A62EE8A1)));
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AC887B4E0A467A6BA01B455BC69AFA2A62EE8A1)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
			Exception_t* L_16 = V_5;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_Source() */, L_16);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_17);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC)));
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
			Exception_t* L_20 = V_5;
			NullCheck(L_20);
			String_t* L_21;
			L_21 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
			NullCheck(L_19);
			ArrayElementTypeCheck (L_19, L_21);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_21);
			String_t* L_22;
			L_22 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_19, NULL);
			Debug_WriteLine_m7EB96D9F52E9424E48A1FAB9D6B6047002B7E7FB(L_22, NULL);
			// break;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0183;
		}
	}// end catch (depth: 1)

IL_00a9:
	{
		goto IL_00d0;
	}

IL_00ab:
	{
		// if (sw.ElapsedMilliseconds >= MaxMilliseconsPerPing)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_23 = V_2;
		NullCheck(L_23);
		int64_t L_24;
		L_24 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		int32_t L_25 = ((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___MaxMilliseconsPerPing_2;
		V_6 = (bool)((((int32_t)((((int64_t)L_24) < ((int64_t)((int64_t)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00c8;
		}
	}
	{
		// overtime = true;
		V_3 = (bool)1;
		// break;
		goto IL_00e4;
	}

IL_00c8:
	{
		// System.Threading.Thread.Sleep(0);
		Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(0, NULL);
	}

IL_00d0:
	{
		// while (!this.ping.Done())
		PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* L_27 = __this->___ping_9;
		NullCheck(L_27);
		bool L_28;
		L_28 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean Photon.Realtime.PhotonPing::Done() */, L_27);
		V_7 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_7;
		if (L_29)
		{
			goto IL_00ab;
		}
	}

IL_00e4:
	{
		// sw.Stop();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_30 = V_2;
		NullCheck(L_30);
		Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC(L_30, NULL);
		// int rtt = (int)sw.ElapsedMilliseconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_31 = V_2;
		NullCheck(L_31);
		int64_t L_32;
		L_32 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_31, NULL);
		V_4 = ((int32_t)L_32);
		// this.rttResults.Add(rtt);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_33 = __this->___rttResults_10;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_33, L_34, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// if (IgnoreInitialAttempt && this.CurrentAttempt == 0)
		il2cpp_codegen_runtime_class_init_inline(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		bool L_35 = ((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___IgnoreInitialAttempt_1;
		if (!L_35)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_36 = __this->___CurrentAttempt_6;
		G_B15_0 = ((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		goto IL_0115;
	}

IL_0114:
	{
		G_B15_0 = 0;
	}

IL_0115:
	{
		V_8 = (bool)G_B15_0;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_0156;
	}

IL_011f:
	{
		// else if (this.ping.Successful && !overtime)
		PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* L_38 = __this->___ping_9;
		NullCheck(L_38);
		bool L_39 = L_38->___Successful_1;
		if (!L_39)
		{
			goto IL_0132;
		}
	}
	{
		bool L_40 = V_3;
		G_B20_0 = ((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		goto IL_0133;
	}

IL_0132:
	{
		G_B20_0 = 0;
	}

IL_0133:
	{
		V_9 = (bool)G_B20_0;
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_0156;
		}
	}
	{
		// rttSum += rtt;
		float L_42 = V_0;
		int32_t L_43 = V_4;
		V_0 = ((float)il2cpp_codegen_add(L_42, ((float)L_43)));
		// replyCount++;
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		// this.region.Ping = (int)((rttSum) / replyCount);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_45 = __this->___region_4;
		float L_46 = V_0;
		int32_t L_47 = V_1;
		NullCheck(L_45);
		Region_set_Ping_m48411BF3B9D00DDB33173EA2F6BC6228BAA69F77_inline(L_45, il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_46/((float)L_47)))), NULL);
	}

IL_0156:
	{
		// System.Threading.Thread.Sleep(10);
		Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(((int32_t)10), NULL);
		// for (this.CurrentAttempt = 0; this.CurrentAttempt < Attempts; this.CurrentAttempt++)
		int32_t L_48 = __this->___CurrentAttempt_6;
		__this->___CurrentAttempt_6 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_016d:
	{
		// for (this.CurrentAttempt = 0; this.CurrentAttempt < Attempts; this.CurrentAttempt++)
		int32_t L_49 = __this->___CurrentAttempt_6;
		il2cpp_codegen_runtime_class_init_inline(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		int32_t L_50 = ((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___Attempts_0;
		V_10 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (L_51)
		{
			goto IL_002c;
		}
	}

IL_0183:
	{
		// this.Done = true;
		RegionPinger_set_Done_m64D6447A0D217795ED8EC721E959BE79BB8B7C38_inline(__this, (bool)1, NULL);
		// this.ping.Dispose();
		PhotonPing_t91EEAACE3572A3ECBFD60B0EB88B7ADC0C7A6B0D* L_52 = __this->___ping_9;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(7 /* System.Void Photon.Realtime.PhotonPing::Dispose() */, L_52);
		// this.onDoneCall(this.region);
		Action_1_tE4E9B9131F210B39DCBA3BF8F226941D0D3EAF73* L_53 = __this->___onDoneCall_8;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_54 = __this->___region_4;
		NullCheck(L_53);
		Action_1_Invoke_m279C67A59048D6854C835D1670BA7F50F16EB78A_inline(L_53, L_54, NULL);
		// return false;
		V_11 = (bool)0;
		goto IL_01ae;
	}

IL_01ae:
	{
		// }
		bool L_55 = V_11;
		return L_55;
	}
}
// System.String Photon.Realtime.RegionPinger::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionPinger_GetResults_mD9042E7C8D7555A05F60E0CC0A07C80DE66AAA00 (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_ToStringFull_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m738BB955C326EC3A5243553ECAC88935D4406D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C042EF0B89D7EEE23EC7B3EC0EEEDD3426C182);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}: {1} ({2})", this.region.Code, this.region.Ping, this.rttResults.ToStringFull());
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_0 = __this->___region_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(L_0, NULL);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_2 = __this->___region_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20_inline(L_2, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = __this->___rttResults_10;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Extensions_ToStringFull_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m738BB955C326EC3A5243553ECAC88935D4406D30(L_6, Extensions_ToStringFull_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m738BB955C326EC3A5243553ECAC88935D4406D30_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralC5C042EF0B89D7EEE23EC7B3EC0EEEDD3426C182, L_1, L_5, L_7, NULL);
		V_0 = L_8;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.String Photon.Realtime.RegionPinger::ResolveHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionPinger_ResolveHost_m3A8E072EBF278A26C7D23A9DA8EA2B9E795E1098 (String_t* ___hostName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dns_tE6305F126E5677E1AFB444735257D41D0D0FE273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	Exception_t* V_12 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	Exception_t* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	{
		// if (hostName.StartsWith("wss://"))
		String_t* L_0 = ___hostName0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// hostName = hostName.Substring(6);
		String_t* L_3 = ___hostName0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_3, 6, NULL);
		___hostName0 = L_4;
	}

IL_001b:
	{
		// if (hostName.StartsWith("ws://"))
		String_t* L_5 = ___hostName0;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_5, _stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// hostName = hostName.Substring(5);
		String_t* L_8 = ___hostName0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_8, 5, NULL);
		___hostName0 = L_9;
	}

IL_0035:
	{
		// string ipv4Address = string.Empty;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_10;
	}
	try
	{// begin try (depth: 1)
		{
			// IPAddress[] address = Dns.GetHostAddresses(hostName);
			String_t* L_11 = ___hostName0;
			il2cpp_codegen_runtime_class_init_inline(Dns_tE6305F126E5677E1AFB444735257D41D0D0FE273_il2cpp_TypeInfo_var);
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_12;
			L_12 = Dns_GetHostAddresses_m0592CB7DB3F5665C412BCBE8297F198748114F90(L_11, NULL);
			V_3 = L_12;
			// if (address.Length == 1)
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_13 = V_3;
			NullCheck(L_13);
			V_4 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) == ((int32_t)1))? 1 : 0);
			bool L_14 = V_4;
			if (!L_14)
			{
				goto IL_005f_1;
			}
		}
		{
			// return address[0].ToString();
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_15 = V_3;
			NullCheck(L_15);
			int32_t L_16 = 0;
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
			V_5 = L_18;
			goto IL_0123;
		}

IL_005f_1:
		{
			// for (int index = 0; index < address.Length; index++)
			V_6 = 0;
			goto IL_00ba_1;
		}

IL_0064_1:
		{
			// IPAddress ipAddress = address[index];
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_19 = V_3;
			int32_t L_20 = V_6;
			NullCheck(L_19);
			int32_t L_21 = L_20;
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			V_7 = L_22;
			// if (ipAddress != null)
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_23 = V_7;
			V_8 = (bool)((!(((RuntimeObject*)(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)L_23) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_24 = V_8;
			if (!L_24)
			{
				goto IL_00b3_1;
			}
		}
		{
			// if (ipAddress.ToString().Contains(":"))
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_25 = V_7;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
			NullCheck(L_26);
			bool L_27;
			L_27 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_26, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
			V_9 = L_27;
			bool L_28 = V_9;
			if (!L_28)
			{
				goto IL_009d_1;
			}
		}
		{
			// return ipAddress.ToString();
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_29 = V_7;
			NullCheck(L_29);
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
			V_5 = L_30;
			goto IL_0123;
		}

IL_009d_1:
		{
			// if (string.IsNullOrEmpty(ipv4Address))
			String_t* L_31 = V_0;
			bool L_32;
			L_32 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_31, NULL);
			V_10 = L_32;
			bool L_33 = V_10;
			if (!L_33)
			{
				goto IL_00b2_1;
			}
		}
		{
			// ipv4Address = address.ToString();
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_34 = V_3;
			NullCheck((RuntimeObject*)L_34);
			String_t* L_35;
			L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_34);
			V_0 = L_35;
		}

IL_00b2_1:
		{
		}

IL_00b3_1:
		{
			// for (int index = 0; index < address.Length; index++)
			int32_t L_36 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00ba_1:
		{
			// for (int index = 0; index < address.Length; index++)
			int32_t L_37 = V_6;
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_38 = V_3;
			NullCheck(L_38);
			V_11 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))? 1 : 0);
			bool L_39 = V_11;
			if (L_39)
			{
				goto IL_0064_1;
			}
		}
		{
			goto IL_011e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ca;
		}
		throw e;
	}

CATCH_00ca:
	{// begin catch(System.Exception)
		{
			// catch (System.Exception e)
			V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// System.Diagnostics.Debug.WriteLine("RegionPinger.ResolveHost() catched an exception for Dns.GetHostAddresses(). Exception: " + e + " Source: " + e.Source + " Message: " + e.Message);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
			NullCheck(L_41);
			ArrayElementTypeCheck (L_41, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DC8F452741B98B4EDFFC344FFF572F7D4862E33)));
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DC8F452741B98B4EDFFC344FFF572F7D4862E33)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
			Exception_t* L_43 = V_12;
			Exception_t* L_44 = L_43;
			G_B18_0 = L_44;
			G_B18_1 = 1;
			G_B18_2 = L_42;
			G_B18_3 = L_42;
			if (L_44)
			{
				G_B19_0 = L_44;
				G_B19_1 = 1;
				G_B19_2 = L_42;
				G_B19_3 = L_42;
				goto IL_00e6;
			}
		}
		{
			G_B20_0 = ((String_t*)(NULL));
			G_B20_1 = G_B18_1;
			G_B20_2 = G_B18_2;
			G_B20_3 = G_B18_3;
			goto IL_00eb;
		}

IL_00e6:
		{
			NullCheck(G_B19_0);
			String_t* L_45;
			L_45 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B19_0);
			G_B20_0 = L_45;
			G_B20_1 = G_B19_1;
			G_B20_2 = G_B19_2;
			G_B20_3 = G_B19_3;
		}

IL_00eb:
		{
			NullCheck(G_B20_2);
			ArrayElementTypeCheck (G_B20_2, G_B20_0);
			(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = G_B20_3;
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AC887B4E0A467A6BA01B455BC69AFA2A62EE8A1)));
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AC887B4E0A467A6BA01B455BC69AFA2A62EE8A1)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
			Exception_t* L_48 = V_12;
			NullCheck(L_48);
			String_t* L_49;
			L_49 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_Source() */, L_48);
			NullCheck(L_47);
			ArrayElementTypeCheck (L_47, L_49);
			(L_47)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_49);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_47;
			NullCheck(L_50);
			ArrayElementTypeCheck (L_50, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC)));
			(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50;
			Exception_t* L_52 = V_12;
			NullCheck(L_52);
			String_t* L_53;
			L_53 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_52);
			NullCheck(L_51);
			ArrayElementTypeCheck (L_51, L_53);
			(L_51)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_53);
			String_t* L_54;
			L_54 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_51, NULL);
			Debug_WriteLine_m7EB96D9F52E9424E48A1FAB9D6B6047002B7E7FB(L_54, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_011e;
		}
	}// end catch (depth: 1)

IL_011e:
	{
		// return ipv4Address;
		String_t* L_55 = V_0;
		V_5 = L_55;
		goto IL_0123;
	}

IL_0123:
	{
		// }
		String_t* L_56 = V_5;
		return L_56;
	}
}
// System.Void Photon.Realtime.RegionPinger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionPinger__cctor_mAE2C850A7047516D8D4D244768E10240BCCE6918 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Attempts = 5;
		((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___Attempts_0 = 5;
		// public static bool IgnoreInitialAttempt = true;
		((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___IgnoreInitialAttempt_1 = (bool)1;
		// public static int MaxMilliseconsPerPing = 800; // enter a value you're sure some server can beat (have a lower rtt)
		((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___MaxMilliseconsPerPing_2 = ((int32_t)800);
		// public static int PingWhenFailed = Attempts * MaxMilliseconsPerPing;
		int32_t L_0 = ((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___Attempts_0;
		int32_t L_1 = ((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___MaxMilliseconsPerPing_2;
		((RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B_il2cpp_TypeInfo_var))->___PingWhenFailed_3 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
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
// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::get_LoadBalancingClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* Room_get_LoadBalancingClient_m841CF196A0BAE1D2262DD75E5ABF816B1C45542E (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingClient LoadBalancingClient { get; set; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___U3CLoadBalancingClientU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_LoadBalancingClient(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_LoadBalancingClient_mB8303EC161066BECFC6136E20976E45C3ADD19EC (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___value0, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingClient LoadBalancingClient { get; set; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = ___value0;
		__this->___U3CLoadBalancingClientU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.String Photon.Realtime.Room::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return this.name;
		String_t* L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___name_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Realtime.Room::get_IsOffline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_IsOffline_m14D438AAD4639B773956BBA5CA26272B9650BF49 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return isOffline;
		bool L_0 = __this->___isOffline_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Realtime.Room::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_IsOpen_m845E6C29A9421033DFDB47082560306B14160EDE (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return this.isOpen;
		bool L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isOpen_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.Room::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsOpen_m8BA8D4E6233E041B3242BA516B8BADCFF10117FA (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value != this.isOpen)
		bool L_0 = ___value0;
		bool L_1 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isOpen_6;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// if (!this.isOffline)
		bool L_3 = __this->___isOffline_14;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertiesOfRoom(new Hashtable() { { GamePropertyKey.IsOpen, value } });
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5;
		L_5 = Room_get_LoadBalancingClient_m841CF196A0BAE1D2262DD75E5ABF816B1C45542E_inline(__this, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_6 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_6, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_7 = L_6;
		bool L_8 = ___value0;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		Hashtable_Add_mC74BB7662FF6F194D0E067509BD2AC3329C2EE41(L_7, (uint8_t)((int32_t)253), L_10, NULL);
		NullCheck(L_5);
		bool L_11;
		L_11 = LoadBalancingClient_OpSetPropertiesOfRoom_mDB4F00727530FF42223D2277EA968383B82B2115(L_5, L_7, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
	}

IL_0046:
	{
	}

IL_0047:
	{
		// this.isOpen = value;
		bool L_12 = ___value0;
		((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isOpen_6 = L_12;
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_IsVisible_m90197113E0FFF19D6B2D5B20335B8BBC4A626160 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return this.isVisible;
		bool L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isVisible_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.Room::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsVisible_m88B1F48E1CDB171A2ECB10D9289596FA45EC74D7 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value != this.isVisible)
		bool L_0 = ___value0;
		bool L_1 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isVisible_7;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// if (!this.isOffline)
		bool L_3 = __this->___isOffline_14;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertiesOfRoom(new Hashtable() { { GamePropertyKey.IsVisible, value } });
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5;
		L_5 = Room_get_LoadBalancingClient_m841CF196A0BAE1D2262DD75E5ABF816B1C45542E_inline(__this, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_6 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_6, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_7 = L_6;
		bool L_8 = ___value0;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		Hashtable_Add_mC74BB7662FF6F194D0E067509BD2AC3329C2EE41(L_7, (uint8_t)((int32_t)254), L_10, NULL);
		NullCheck(L_5);
		bool L_11;
		L_11 = LoadBalancingClient_OpSetPropertiesOfRoom_mDB4F00727530FF42223D2277EA968383B82B2115(L_5, L_7, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
	}

IL_0046:
	{
	}

IL_0047:
	{
		// this.isVisible = value;
		bool L_12 = ___value0;
		((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isVisible_7 = L_12;
		// }
		return;
	}
}
// System.Byte Photon.Realtime.Room::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_MaxPlayers_m366A4F5F9AE034C75EE5D68F0D42BD5D44FF92D4 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// return this.maxPlayers;
		uint8_t L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___maxPlayers_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte Photon.Realtime.Room::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE1AF94F3A6094D44AA9134C60DA2F088E57CDAC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	{
		// if (this.Players == null)
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_0;
		L_0 = Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065(__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return 0;
		V_1 = (uint8_t)0;
		goto IL_0022;
	}

IL_0013:
	{
		// return (byte)this.Players.Count;
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_2;
		L_2 = Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_mE1AF94F3A6094D44AA9134C60DA2F088E57CDAC2(L_2, Dictionary_2_get_Count_mE1AF94F3A6094D44AA9134C60DA2F088E57CDAC2_RuntimeMethod_var);
		V_1 = (uint8_t)((int32_t)(uint8_t)L_3);
		goto IL_0022;
	}

IL_0022:
	{
		// }
		uint8_t L_4 = V_1;
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::get_Players()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* V_0 = NULL;
	{
		// return this.players;
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_0 = __this->___players_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_1 = V_0;
		return L_1;
	}
}
// System.String[] Photon.Realtime.Room::get_ExpectedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Room_get_ExpectedUsers_m019AFBBF8602E417F5B072C313F1B44AD1B1D1A6 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// get { return this.expectedUsers; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___expectedUsers_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.expectedUsers; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Photon.Realtime.Room::get_PlayerTtl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_PlayerTtl_m091CABB26DF4C1E1E12ADEF25F8734218CD09773 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return this.playerTtl; }
		int32_t L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___playerTtl_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.playerTtl; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Photon.Realtime.Room::get_EmptyRoomTtl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_EmptyRoomTtl_m8BEB98E1DCCB3421E8AF5C4D7CEF273655171F93 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return this.emptyRoomTtl; }
		int32_t L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___emptyRoomTtl_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.emptyRoomTtl; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Photon.Realtime.Room::get_MasterClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_MasterClientId_mCE5793A018B91562F4EB190DBFEB3E87A882104D (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int MasterClientId { get { return this.masterClientId; } }
		int32_t L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___masterClientId_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int MasterClientId { get { return this.masterClientId; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String[] Photon.Realtime.Room::get_PropertiesListedInLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Room_get_PropertiesListedInLobby_m1BFA1D775B04FC6B3DAEE9C77E42F3BDBAA75CBD (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// return this.propertiesListedInLobby;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___propertiesListedInLobby_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Realtime.Room::get_AutoCleanUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_AutoCleanUp_m39EDB8FDC6F3A0798F29FFD08DB41C3B24150B96 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return this.autoCleanUp;
		bool L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___autoCleanUp_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Realtime.Room::get_BroadcastPropertiesChangeToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_BroadcastPropertiesChangeToAll_m3127C5952EEA729C0B5C9F257C59A7EA0C693C7F (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	{
		// public bool BroadcastPropertiesChangeToAll { get; private set; }
		bool L_0 = __this->___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_BroadcastPropertiesChangeToAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_BroadcastPropertiesChangeToAll_mE035C1698B5FA3582F75A906E99CC73382B453E6 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool BroadcastPropertiesChangeToAll { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_SuppressRoomEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_SuppressRoomEvents_m4F22FB5CC70A50D266A5982DCEC2237BEC15F811 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	{
		// public bool SuppressRoomEvents { get; private set; }
		bool L_0 = __this->___U3CSuppressRoomEventsU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_SuppressRoomEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_SuppressRoomEvents_m0133AF9ADF7DB61EEA827F05F3C933F7897FE6AF (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SuppressRoomEvents { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSuppressRoomEventsU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Void Photon.Realtime.Room::set_SuppressPlayerInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_SuppressPlayerInfo_m1754FDFEB94E7491AD1B924784FD4C4627CE60A0 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SuppressPlayerInfo { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSuppressPlayerInfoU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void Photon.Realtime.Room::set_PublishUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_PublishUserId_m3EEBD57B9CB236301891F207AF9D42920D3D4B4A (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool PublishUserId { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CPublishUserIdU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Void Photon.Realtime.Room::set_DeleteNullProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_DeleteNullProperties_mA15EBF691112160C0098DB6F29E5A0EBC72C8B24 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool DeleteNullProperties { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDeleteNullPropertiesU3Ek__BackingField_20 = L_0;
		return;
	}
}
// System.Void Photon.Realtime.Room::.ctor(System.String,Photon.Realtime.RoomOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_m8C0D6B3C04C9AC3ACF48A964E742B6153303F4B5 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, String_t* ___roomName0, RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___options1, bool ___isOffline2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1E782EA6F5391DB82D60FEE691A90C3D1C4F33EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* G_B2_0 = NULL;
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B1_1 = NULL;
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B3_2 = NULL;
	{
		// private Dictionary<int, Player> players = new Dictionary<int, Player>();
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_0 = (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B*)il2cpp_codegen_object_new(Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m1E782EA6F5391DB82D60FEE691A90C3D1C4F33EF(L_0, Dictionary_2__ctor_m1E782EA6F5391DB82D60FEE691A90C3D1C4F33EF_RuntimeMethod_var);
		__this->___players_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___players_15), (void*)L_0);
		// public Room(string roomName, RoomOptions options, bool isOffline = false) : base(roomName, options != null ? options.CustomRoomProperties : null)
		String_t* L_1 = ___roomName0;
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_2 = ___options1;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0013:
	{
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_3 = ___options1;
		NullCheck(L_3);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_4 = L_3->___CustomRoomProperties_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		RoomInfo__ctor_mB7E51C34204DD4DF7C230FA103E4474F00458F13(G_B3_2, G_B3_1, G_B3_0, NULL);
		// if (options != null)
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_5 = ___options1;
		V_0 = (bool)((!(((RuntimeObject*)(RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		// this.isVisible = options.IsVisible;
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_7 = ___options1;
		NullCheck(L_7);
		bool L_8;
		L_8 = RoomOptions_get_IsVisible_m3A6FE1E13DC3BC7BD287449190CCD1F0DB9A4C86(L_7, NULL);
		((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isVisible_7 = L_8;
		// this.isOpen = options.IsOpen;
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_9 = ___options1;
		NullCheck(L_9);
		bool L_10;
		L_10 = RoomOptions_get_IsOpen_m23FCA5D11C3B429B370D87A7E6BAAD032DFF6FC1(L_9, NULL);
		((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isOpen_6 = L_10;
		// this.maxPlayers = options.MaxPlayers;
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_11 = ___options1;
		NullCheck(L_11);
		uint8_t L_12 = L_11->___MaxPlayers_2;
		((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___maxPlayers_2 = L_12;
		// this.propertiesListedInLobby = options.CustomRoomPropertiesForLobby;
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_13 = ___options1;
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13->___CustomRoomPropertiesForLobby_7;
		((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___propertiesListedInLobby_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___propertiesListedInLobby_11), (void*)L_14);
	}

IL_005a:
	{
		// this.isOffline = isOffline;
		bool L_15 = ___isOffline2;
		__this->___isOffline_14 = L_15;
		// }
		return;
	}
}
// System.Void Photon.Realtime.Room::InternalCacheRoomFlags(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_InternalCacheRoomFlags_m02C8F78D51B9E4366DC12C7B9F93946C0D88C054 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, int32_t ___roomFlags0, const RuntimeMethod* method) 
{
	{
		// this.BroadcastPropertiesChangeToAll = (roomFlags & (int)RoomOptionBit.BroadcastPropsChangeToAll) != 0;
		int32_t L_0 = ___roomFlags0;
		Room_set_BroadcastPropertiesChangeToAll_mE035C1698B5FA3582F75A906E99CC73382B453E6_inline(__this, (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0), NULL);
		// this.SuppressRoomEvents = (roomFlags & (int)RoomOptionBit.SuppressRoomEvents) != 0;
		int32_t L_1 = ___roomFlags0;
		Room_set_SuppressRoomEvents_m0133AF9ADF7DB61EEA827F05F3C933F7897FE6AF_inline(__this, (bool)((!(((uint32_t)((int32_t)(L_1&4))) <= ((uint32_t)0)))? 1 : 0), NULL);
		// this.SuppressPlayerInfo = (roomFlags & (int)RoomOptionBit.SuppressPlayerInfo) != 0;
		int32_t L_2 = ___roomFlags0;
		Room_set_SuppressPlayerInfo_m1754FDFEB94E7491AD1B924784FD4C4627CE60A0_inline(__this, (bool)((!(((uint32_t)((int32_t)(L_2&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0), NULL);
		// this.PublishUserId = (roomFlags & (int)RoomOptionBit.PublishUserId) != 0;
		int32_t L_3 = ___roomFlags0;
		Room_set_PublishUserId_m3EEBD57B9CB236301891F207AF9D42920D3D4B4A_inline(__this, (bool)((!(((uint32_t)((int32_t)(L_3&8))) <= ((uint32_t)0)))? 1 : 0), NULL);
		// this.DeleteNullProperties = (roomFlags & (int)RoomOptionBit.DeleteNullProps) != 0;
		int32_t L_4 = ___roomFlags0;
		Room_set_DeleteNullProperties_mA15EBF691112160C0098DB6F29E5A0EBC72C8B24_inline(__this, (bool)((!(((uint32_t)((int32_t)(L_4&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0), NULL);
		// this.autoCleanUp = (roomFlags & (int)RoomOptionBit.DeleteCacheOnLeave) != 0;
		int32_t L_5 = ___roomFlags0;
		((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___autoCleanUp_8 = (bool)((!(((uint32_t)((int32_t)(L_5&2))) <= ((uint32_t)0)))? 1 : 0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Room::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_InternalCacheProperties_m3DFA28AC85F83AD5972A6F7CF64D33AC75EE94D1 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesToCache0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// int oldMasterId = this.masterClientId;
		int32_t L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___masterClientId_10;
		V_0 = L_0;
		// base.InternalCacheProperties(propertiesToCache);    // important: updating the properties fields has no way to do callbacks on change
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = ___propertiesToCache0;
		RoomInfo_InternalCacheProperties_m63DC75C2047A0B7BA236F9B708E72F6B85B9DF87(__this, L_1, NULL);
		// if (oldMasterId != 0 && this.masterClientId != oldMasterId)
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___masterClientId_10;
		int32_t L_4 = V_0;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// this.LoadBalancingClient.InRoomCallbackTargets.OnMasterClientSwitched(this.GetPlayer(this.masterClientId));
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_6;
		L_6 = Room_get_LoadBalancingClient_m841CF196A0BAE1D2262DD75E5ABF816B1C45542E_inline(__this, NULL);
		NullCheck(L_6);
		InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* L_7 = L_6->___InRoomCallbackTargets_25;
		int32_t L_8 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___masterClientId_10;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_9;
		L_9 = VirtualFuncInvoker2< Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, int32_t, bool >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean) */, __this, L_8, (bool)0);
		NullCheck(L_7);
		InRoomCallbacksContainer_OnMasterClientSwitched_m269C36AC3F9705DBA052299E2799DBCC6AEF28CC(L_7, L_9, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetCustomProperties_m1322C1AAEA9D930269B2721A15A89D63A17F6DBE (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesToSet0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___expectedProperties1, WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___webFlags2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// if (propertiesToSet == null || propertiesToSet.Count == 0)
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = ___propertiesToSet0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = ___propertiesToSet0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(L_1, Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0083;
	}

IL_0019:
	{
		// Hashtable customProps = propertiesToSet.StripToStringKeys() as Hashtable;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_4 = ___propertiesToSet0;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_5;
		L_5 = Extensions_StripToStringKeys_m3227A871AF9209B839EB9DEE23229681191061FC(L_4, NULL);
		V_0 = L_5;
		// if (this.isOffline)
		bool L_6 = __this->___isOffline_14;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		// if (customProps.Count == 0)
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(L_8, Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0083;
	}

IL_003f:
	{
		// this.CustomProperties.Merge(customProps);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_11;
		L_11 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422(__this, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		Extensions_Merge_mE10EBEEA26D184639FDA9CF0B125302A7EC4BB68(L_11, L_12, NULL);
		// this.CustomProperties.StripKeysWithNullValues();
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_13;
		L_13 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422(__this, NULL);
		Extensions_StripKeysWithNullValues_m21D97C2232289C808C8926341933B9D0F83A7F73(L_13, NULL);
		// this.LoadBalancingClient.InRoomCallbackTargets.OnRoomPropertiesUpdate(propertiesToSet);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_14;
		L_14 = Room_get_LoadBalancingClient_m841CF196A0BAE1D2262DD75E5ABF816B1C45542E_inline(__this, NULL);
		NullCheck(L_14);
		InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* L_15 = L_14->___InRoomCallbackTargets_25;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_16 = ___propertiesToSet0;
		NullCheck(L_15);
		InRoomCallbacksContainer_OnRoomPropertiesUpdate_m0D96FF82986BB9A3001693BB6B65F0B81E71CDA2(L_15, L_16, NULL);
		goto IL_007f;
	}

IL_006d:
	{
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(customProps, expectedProperties, webFlags);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_17;
		L_17 = Room_get_LoadBalancingClient_m841CF196A0BAE1D2262DD75E5ABF816B1C45542E_inline(__this, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_18 = V_0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_19 = ___expectedProperties1;
		WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* L_20 = ___webFlags2;
		NullCheck(L_17);
		bool L_21;
		L_21 = LoadBalancingClient_OpSetPropertiesOfRoom_mDB4F00727530FF42223D2277EA968383B82B2115(L_17, L_18, L_19, L_20, NULL);
		V_2 = L_21;
		goto IL_0083;
	}

IL_007f:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		bool L_22 = V_2;
		return L_22;
	}
}
// System.Void Photon.Realtime.Room::RemovePlayer(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_RemovePlayer_m8ABB1BF0CEB39BAF063460E3892A644909EC9252 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mEBC1D35C521879EDAD619E7052994ACD33F820FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Players.Remove(player.ActorNumber);
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_0;
		L_0 = Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___player0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_Remove_mEBC1D35C521879EDAD619E7052994ACD33F820FB(L_0, L_2, Dictionary_2_Remove_mEBC1D35C521879EDAD619E7052994ACD33F820FB_RuntimeMethod_var);
		// player.RoomReference = null;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_4 = ___player0;
		NullCheck(L_4);
		Player_set_RoomReference_m39E94C50F5580616B89B43EF1027749326845F1C_inline(L_4, (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Room::RemovePlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_RemovePlayer_m69BBA7D3260A83A7D04717E85C6DD92512234A02 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// this.RemovePlayer(this.GetPlayer(id));
		int32_t L_0 = ___id0;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1;
		L_1 = VirtualFuncInvoker2< Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, int32_t, bool >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean) */, __this, L_0, (bool)0);
		VirtualActionInvoker1< Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* >::Invoke(6 /* System.Void Photon.Realtime.Room::RemovePlayer(Photon.Realtime.Player) */, __this, L_1);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::SetMasterClient(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetMasterClient_m79017732137AE7C5EE56FC3BDFD1326488C4686C (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___masterClientPlayer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_0 = NULL;
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (this.isOffline)
		bool L_0 = __this->___isOffline_14;
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_005b;
	}

IL_0010:
	{
		// Hashtable newProps = new Hashtable() { { GamePropertyKey.MasterClientId, masterClientPlayer.ActorNumber } };
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_2, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_3 = L_2;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_4 = ___masterClientPlayer0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A(L_4, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		Hashtable_Add_mC74BB7662FF6F194D0E067509BD2AC3329C2EE41(L_3, (uint8_t)((int32_t)248), L_7, NULL);
		V_0 = L_3;
		// Hashtable prevProps = new Hashtable() { { GamePropertyKey.MasterClientId, this.MasterClientId } };
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_8 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_8, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_9 = L_8;
		int32_t L_10;
		L_10 = Room_get_MasterClientId_mCE5793A018B91562F4EB190DBFEB3E87A882104D(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		Hashtable_Add_mC74BB7662FF6F194D0E067509BD2AC3329C2EE41(L_9, (uint8_t)((int32_t)248), L_12, NULL);
		V_1 = L_9;
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(newProps, prevProps);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_13;
		L_13 = Room_get_LoadBalancingClient_m841CF196A0BAE1D2262DD75E5ABF816B1C45542E_inline(__this, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_14 = V_0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_15 = V_1;
		NullCheck(L_13);
		bool L_16;
		L_16 = LoadBalancingClient_OpSetPropertiesOfRoom_mDB4F00727530FF42223D2277EA968383B82B2115(L_13, L_14, L_15, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		V_3 = L_16;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean Photon.Realtime.Room::AddPlayer(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_AddPlayer_m79A39E3642C8EC9ECE0077A2590AC69D7F0EABB5 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m557418E6A53F984E197F6A3C3ADA44E138E1D406_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!this.Players.ContainsKey(player.ActorNumber))
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_0;
		L_0 = Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___player0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m557418E6A53F984E197F6A3C3ADA44E138E1D406(L_0, L_2, Dictionary_2_ContainsKey_m557418E6A53F984E197F6A3C3ADA44E138E1D406_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// this.StorePlayer(player);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_5 = ___player0;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_6;
		L_6 = VirtualFuncInvoker1< Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* >::Invoke(9 /* Photon.Realtime.Player Photon.Realtime.Room::StorePlayer(Photon.Realtime.Player) */, __this, L_5);
		// return true;
		V_1 = (bool)1;
		goto IL_002a;
	}

IL_0026:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// Photon.Realtime.Player Photon.Realtime.Room::StorePlayer(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* Room_StorePlayer_mC1AFC4C10639C2D881091A95632E2F1C71851FB2 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m2F5BEDD4A6085065EA70F595BFA1E1CE042CC79F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* V_0 = NULL;
	{
		// this.Players[player.ActorNumber] = player;
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_0;
		L_0 = Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___player0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A(L_1, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_3 = ___player0;
		NullCheck(L_0);
		Dictionary_2_set_Item_m2F5BEDD4A6085065EA70F595BFA1E1CE042CC79F(L_0, L_2, L_3, Dictionary_2_set_Item_m2F5BEDD4A6085065EA70F595BFA1E1CE042CC79F_RuntimeMethod_var);
		// player.RoomReference = this;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_4 = ___player0;
		NullCheck(L_4);
		Player_set_RoomReference_m39E94C50F5580616B89B43EF1027749326845F1C_inline(L_4, __this, NULL);
		// return player;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_5 = ___player0;
		V_0 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_6 = V_0;
		return L_6;
	}
}
// Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* Room_GetPlayer_m9EA5536DF2030D9B9B723BC53536B65B41D022D2 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, int32_t ___id0, bool ___findMaster1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m495BFB5C44B03F3AA7BAFD42C8402C79F0232C30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* V_1 = NULL;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* V_2 = NULL;
	int32_t G_B4_0 = 0;
	{
		// int idToFind = (findMaster && id == 0) ? this.MasterClientId : id;
		bool L_0 = ___findMaster1;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = ___id0;
		if (!L_1)
		{
			goto IL_000a;
		}
	}

IL_0007:
	{
		int32_t L_2 = ___id0;
		G_B4_0 = L_2;
		goto IL_0010;
	}

IL_000a:
	{
		int32_t L_3;
		L_3 = Room_get_MasterClientId_mCE5793A018B91562F4EB190DBFEB3E87A882104D(__this, NULL);
		G_B4_0 = L_3;
	}

IL_0010:
	{
		V_0 = G_B4_0;
		// Player result = null;
		V_1 = (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*)NULL;
		// this.Players.TryGetValue(idToFind, out result);
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_4;
		L_4 = Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065(__this, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_m495BFB5C44B03F3AA7BAFD42C8402C79F0232C30(L_4, L_5, (&V_1), Dictionary_2_TryGetValue_m495BFB5C44B03F3AA7BAFD42C8402C79F0232C30_RuntimeMethod_var);
		// return result;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_7 = V_1;
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_8 = V_2;
		return L_8;
	}
}
// System.String Photon.Realtime.Room::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_ToString_m66F32FAC2CB0523E8309691F4E5A50AF4849FBCD (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___name_9;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		bool L_4 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isVisible_7;
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002b:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = G_B3_3;
		bool L_6 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isOpen_6;
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003d;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0042;
	}

IL_003d:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0042:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = G_B6_3;
		uint8_t L_8 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___maxPlayers_2;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		uint8_t L_12;
		L_12 = Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A(__this, NULL);
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(G_B6_4, L_11, NULL);
		V_0 = L_15;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.String Photon.Realtime.Room::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_ToStringFull_mC592523E5F5327D78E30D24C6224BC4DA50F6E3D (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.\ncustomProps: {5}", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount, this.CustomProperties.ToStringFull());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___name_9;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		bool L_4 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isVisible_7;
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002b:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = G_B3_3;
		bool L_6 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___isOpen_6;
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003d;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0042;
	}

IL_003d:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0042:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = G_B6_3;
		uint8_t L_8 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___maxPlayers_2;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		uint8_t L_12;
		L_12 = Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A(__this, NULL);
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_16;
		L_16 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Extensions_ToStringFull_mAC48EACD33E2EF6430A689C40DFF96C68B5C41D0(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_17);
		String_t* L_18;
		L_18 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(G_B6_4, L_15, NULL);
		V_0 = L_18;
		goto IL_0075;
	}

IL_0075:
	{
		// }
		String_t* L_19 = V_0;
		return L_19;
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
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_0 = NULL;
	{
		// return this.customProperties;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = __this->___customProperties_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return this.name;
		String_t* L_0 = __this->___name_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->___U3CPlayerCountU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m60E2655747392B753F507AF760FD5F1CE2C25B02 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPlayerCountU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Byte Photon.Realtime.RoomInfo::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RoomInfo_get_MaxPlayers_mA59AFE46C3C2CB64D2DC7F6DB200187913DDAF24 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// return this.maxPlayers;
		uint8_t L_0 = __this->___maxPlayers_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsOpen_m9ED1B11B219CC568D44FAEB8BE79276CC0066FBA (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return this.isOpen;
		bool L_0 = __this->___isOpen_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsVisible_m395C48045B9EE47BC9246AFDC378694B5E47F7CA (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return this.isVisible;
		bool L_0 = __this->___isVisible_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo__ctor_mB7E51C34204DD4DF7C230FA103E4474F00458F13 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, String_t* ___roomName0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___roomProperties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Hashtable customProperties = new Hashtable();
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_0, NULL);
		__this->___customProperties_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customProperties_1), (void*)L_0);
		// protected byte maxPlayers = 0;
		__this->___maxPlayers_2 = (uint8_t)0;
		// protected int emptyRoomTtl = 0;
		__this->___emptyRoomTtl_3 = 0;
		// protected int playerTtl = 0;
		__this->___playerTtl_4 = 0;
		// protected bool isOpen = true;
		__this->___isOpen_6 = (bool)1;
		// protected bool isVisible = true;
		__this->___isVisible_7 = (bool)1;
		// protected bool autoCleanUp = true;
		__this->___autoCleanUp_8 = (bool)1;
		// protected internal RoomInfo(string roomName, Hashtable roomProperties)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.InternalCacheProperties(roomProperties);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = ___roomProperties1;
		VirtualActionInvoker1< Hashtable_tD626399B3ADFD501225241D7366103F35472542A* >::Invoke(4 /* System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable) */, __this, L_1);
		// this.name = roomName;
		String_t* L_2 = ___roomName0;
		__this->___name_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_9), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_Equals_m08325774F94189E228DD394F9DDFBE242DC9020D (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// RoomInfo otherRoomInfo = other as RoomInfo;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)IsInstClass((RuntimeObject*)L_0, RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D_il2cpp_TypeInfo_var));
		// return (otherRoomInfo != null && this.Name.Equals(otherRoomInfo.name));
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_2;
		L_2 = RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF(__this, NULL);
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___name_9;
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_GetHashCode_mDBC0A71D6BCE880B76090EC8089D50204D800B15 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return this.name.GetHashCode();
		String_t* L_0 = __this->___name_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String Photon.Realtime.RoomInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToString_m3FBEFFC9EA83EB7AEAB9103BBB75AF977D8DE55A (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___name_9;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		bool L_4 = __this->___isVisible_7;
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002b:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = G_B3_3;
		bool L_6 = __this->___isOpen_6;
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003d;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0042;
	}

IL_003d:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0042:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = G_B6_3;
		uint8_t L_8 = __this->___maxPlayers_2;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(G_B6_4, L_11, NULL);
		V_0 = L_15;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_InternalCacheProperties_m63DC75C2047A0B7BA236F9B708E72F6B85B9DF87 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesToCache0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B4_0 = 0;
	{
		// if (propertiesToCache == null || propertiesToCache.Count == 0 || this.customProperties.Equals(propertiesToCache))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = ___propertiesToCache0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = ___propertiesToCache0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(L_1, Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_3 = __this->___customProperties_1;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_4 = ___propertiesToCache0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 1;
	}

IL_001b:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		// return;
		goto IL_020e;
	}

IL_0025:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.Removed))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_7 = ___propertiesToCache0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_7, (uint8_t)((int32_t)251), NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		// this.RemovedFromList = (bool)propertiesToCache[GamePropertyKey.Removed];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_10 = ___propertiesToCache0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_10, (uint8_t)((int32_t)251), NULL);
		__this->___RemovedFromList_0 = ((*(bool*)((bool*)(bool*)UnBox(L_11, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		// if (this.RemovedFromList)
		bool L_12 = __this->___RemovedFromList_0;
		V_2 = L_12;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		// return;
		goto IL_020e;
	}

IL_005b:
	{
	}

IL_005c:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MaxPlayers))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_14 = ___propertiesToCache0;
		NullCheck(L_14);
		bool L_15;
		L_15 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_14, (uint8_t)((int32_t)255), NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0083;
		}
	}
	{
		// this.maxPlayers = (byte)propertiesToCache[GamePropertyKey.MaxPlayers];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_17 = ___propertiesToCache0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_17, (uint8_t)((int32_t)255), NULL);
		__this->___maxPlayers_2 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_18, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
	}

IL_0083:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsOpen))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_19 = ___propertiesToCache0;
		NullCheck(L_19);
		bool L_20;
		L_20 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_19, (uint8_t)((int32_t)253), NULL);
		V_4 = L_20;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		// this.isOpen = (bool)propertiesToCache[GamePropertyKey.IsOpen];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_22 = ___propertiesToCache0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_22, (uint8_t)((int32_t)253), NULL);
		__this->___isOpen_6 = ((*(bool*)((bool*)(bool*)UnBox(L_23, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_00ac:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsVisible))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_24 = ___propertiesToCache0;
		NullCheck(L_24);
		bool L_25;
		L_25 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_24, (uint8_t)((int32_t)254), NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		// this.isVisible = (bool)propertiesToCache[GamePropertyKey.IsVisible];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_27 = ___propertiesToCache0;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_27, (uint8_t)((int32_t)254), NULL);
		__this->___isVisible_7 = ((*(bool*)((bool*)(bool*)UnBox(L_28, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_00d5:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PlayerCount))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_29 = ___propertiesToCache0;
		NullCheck(L_29);
		bool L_30;
		L_30 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_29, (uint8_t)((int32_t)252), NULL);
		V_6 = L_30;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00ff;
		}
	}
	{
		// this.PlayerCount = (int)((byte)propertiesToCache[GamePropertyKey.PlayerCount]);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_32 = ___propertiesToCache0;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_32, (uint8_t)((int32_t)252), NULL);
		RoomInfo_set_PlayerCount_m60E2655747392B753F507AF760FD5F1CE2C25B02_inline(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_33, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
	}

IL_00ff:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.CleanupCacheOnLeave))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_34 = ___propertiesToCache0;
		NullCheck(L_34);
		bool L_35;
		L_35 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_34, (uint8_t)((int32_t)249), NULL);
		V_7 = L_35;
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_0128;
		}
	}
	{
		// this.autoCleanUp = (bool)propertiesToCache[GamePropertyKey.CleanupCacheOnLeave];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_37 = ___propertiesToCache0;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_37, (uint8_t)((int32_t)249), NULL);
		__this->___autoCleanUp_8 = ((*(bool*)((bool*)(bool*)UnBox(L_38, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_0128:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MasterClientId))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_39 = ___propertiesToCache0;
		NullCheck(L_39);
		bool L_40;
		L_40 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_39, (uint8_t)((int32_t)248), NULL);
		V_8 = L_40;
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_0151;
		}
	}
	{
		// this.masterClientId = (int)propertiesToCache[GamePropertyKey.MasterClientId];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_42 = ___propertiesToCache0;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_42, (uint8_t)((int32_t)248), NULL);
		__this->___masterClientId_10 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_43, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_0151:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PropsListedInLobby))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_44 = ___propertiesToCache0;
		NullCheck(L_44);
		bool L_45;
		L_45 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_44, (uint8_t)((int32_t)250), NULL);
		V_9 = L_45;
		bool L_46 = V_9;
		if (!L_46)
		{
			goto IL_017a;
		}
	}
	{
		// this.propertiesListedInLobby = propertiesToCache[GamePropertyKey.PropsListedInLobby] as string[];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_47 = ___propertiesToCache0;
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_47, (uint8_t)((int32_t)250), NULL);
		__this->___propertiesListedInLobby_11 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_48, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propertiesListedInLobby_11), (void*)((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_48, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)));
	}

IL_017a:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.ExpectedUsers))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_49 = ___propertiesToCache0;
		NullCheck(L_49);
		bool L_50;
		L_50 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_49, (uint8_t)((int32_t)247), NULL);
		V_10 = L_50;
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_01a3;
		}
	}
	{
		// this.expectedUsers = (string[])propertiesToCache[GamePropertyKey.ExpectedUsers];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_52 = ___propertiesToCache0;
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_52, (uint8_t)((int32_t)247), NULL);
		__this->___expectedUsers_5 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_53, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___expectedUsers_5), (void*)((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_53, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)));
	}

IL_01a3:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.EmptyRoomTtl))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_54 = ___propertiesToCache0;
		NullCheck(L_54);
		bool L_55;
		L_55 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_54, (uint8_t)((int32_t)245), NULL);
		V_11 = L_55;
		bool L_56 = V_11;
		if (!L_56)
		{
			goto IL_01cc;
		}
	}
	{
		// this.emptyRoomTtl = (int)propertiesToCache[GamePropertyKey.EmptyRoomTtl];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_57 = ___propertiesToCache0;
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_57, (uint8_t)((int32_t)245), NULL);
		__this->___emptyRoomTtl_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_58, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_01cc:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.PlayerTtl))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_59 = ___propertiesToCache0;
		NullCheck(L_59);
		bool L_60;
		L_60 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_59, (uint8_t)((int32_t)246), NULL);
		V_12 = L_60;
		bool L_61 = V_12;
		if (!L_61)
		{
			goto IL_01f5;
		}
	}
	{
		// this.playerTtl = (int)propertiesToCache[GamePropertyKey.PlayerTtl];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_62 = ___propertiesToCache0;
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_62, (uint8_t)((int32_t)246), NULL);
		__this->___playerTtl_4 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_63, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_01f5:
	{
		// this.customProperties.MergeStringKeys(propertiesToCache);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_64 = __this->___customProperties_1;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_65 = ___propertiesToCache0;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		Extensions_MergeStringKeys_m94C359A20CC762B42BA8FE066215F05C4B006934(L_64, L_65, NULL);
		// this.customProperties.StripKeysWithNullValues();
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_66 = __this->___customProperties_1;
		Extensions_StripKeysWithNullValues_m21D97C2232289C808C8926341933B9D0F83A7F73(L_66, NULL);
	}

IL_020e:
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
// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* SupportLogger_get_Client_m3F15DB2AB82BF840798089CEC8D9F798129EF7ED (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* V_0 = NULL;
	{
		// get { return this.client; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.client; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_m516EEF1AC5B8F2EA206BCA29CE2A2F3D0EFD560C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (this.client != value)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_0) == ((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		// if (this.client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_3 = __this->___client_6;
		V_1 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// this.client.RemoveCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5 = __this->___client_6;
		NullCheck(L_5);
		LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A(L_5, __this, NULL);
	}

IL_002e:
	{
		// this.client = value;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_6 = ___value0;
		__this->___client_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_6), (void*)L_6);
		// if (this.client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_7 = __this->___client_6;
		V_2 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// this.client.AddCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_9 = __this->___client_6;
		NullCheck(L_9);
		LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8(L_9, __this, NULL);
	}

IL_0051:
	{
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_Start_mEF5755517007326571A5BD067E423B06CDB25B20 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// this.LogBasics();
		SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB(__this, NULL);
		// if (this.startStopwatch == null)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___startStopwatch_7;
		V_0 = (bool)((((RuntimeObject*)(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_2, NULL);
		__this->___startStopwatch_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startStopwatch_7), (void*)L_2);
		// this.startStopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = __this->___startStopwatch_7;
		NullCheck(L_3);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_3, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDestroy_mA3759505591EF6386997E686F6C63A7860C14D61 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	{
		// this.Client = null; // will remove this SupportLogger as callback target
		SupportLogger_set_Client_m516EEF1AC5B8F2EA206BCA29CE2A2F3D0EFD560C(__this, (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationPause_m3C665BEB01364A8D08F776B48DB6B9FDF910C5FE (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, bool ___pause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral364A88210A85FAC1C4DEFDD902B8419D61C4EC78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	{
		// if (!this.initialOnApplicationPauseSkipped)
		bool L_0 = __this->___initialOnApplicationPauseSkipped_8;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// this.initialOnApplicationPauseSkipped = true;
		__this->___initialOnApplicationPauseSkipped_8 = (bool)1;
		// return;
		goto IL_005c;
	}

IL_0018:
	{
		// Debug.Log(string.Format("{0} SupportLogger OnApplicationPause({1}). Client: {2}.", this.GetFormattedTimestamp(), pause, this.client == null ? "null" : this.client.State.ToString()));
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		bool L_3 = ___pause0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_6 = __this->___client_6;
		G_B3_0 = L_5;
		G_B3_1 = L_2;
		G_B3_2 = _stringLiteral364A88210A85FAC1C4DEFDD902B8419D61C4EC78;
		if (!L_6)
		{
			G_B4_0 = L_5;
			G_B4_1 = L_2;
			G_B4_2 = _stringLiteral364A88210A85FAC1C4DEFDD902B8419D61C4EC78;
			goto IL_004c;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_7 = __this->___client_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C(L_7, NULL);
		V_1 = L_8;
		Il2CppFakeBox<int32_t> L_9(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_10;
		L_10 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_9), NULL);
		G_B5_0 = L_10;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0051;
	}

IL_004c:
	{
		G_B5_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0051:
	{
		String_t* L_11;
		L_11 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(G_B5_3, G_B5_2, G_B5_1, G_B5_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationQuit_m5D31C9746EB41F478159A481A2F42B979BA3EBCB (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	{
		// this.CancelInvoke();
		MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_mADEB668E877F7A13C48E457DCDFBBDD6FA45A439 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("LogStats", 10, 10);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00, (10.0f), (10.0f), NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_mC018079D538BE027CAE1BE06562EF41064741AB3 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("LogStats");
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_mF1E8384DB1F9A9F472D58031DE53E3A3ED718CB0 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("TrackValues", 0.5f, 0.5f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D, (0.5f), (0.5f), NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m412943F66C1497EC8FEB2FAECDAC09883941FC38 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("TrackValues");
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D, NULL);
		// }
		return;
	}
}
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B336DD36B50FB46EDCCA9BA800A47C91B64279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// if (this.startStopwatch == null)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___startStopwatch_7;
		V_1 = (bool)((((RuntimeObject*)(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_2, NULL);
		__this->___startStopwatch_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startStopwatch_7), (void*)L_2);
		// this.startStopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = __this->___startStopwatch_7;
		NullCheck(L_3);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_3, NULL);
	}

IL_0027:
	{
		// TimeSpan span = this.startStopwatch.Elapsed;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_4 = __this->___startStopwatch_7;
		NullCheck(L_4);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_4, NULL);
		V_0 = L_5;
		// if (span.Minutes > 0)
		int32_t L_6;
		L_6 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F((&V_0), NULL);
		V_2 = (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		// return string.Format("[{0}:{1}.{1}]", span.Minutes, span.Seconds, span.Milliseconds);
		int32_t L_8;
		L_8 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F((&V_0), NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11;
		L_11 = TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B((&V_0), NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		int32_t L_14;
		L_14 = TimeSpan_get_Milliseconds_m09D9D6D0033D5FBC62A3C4007CC716A85F4FC8EA((&V_0), NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral39B336DD36B50FB46EDCCA9BA800A47C91B64279, L_10, L_13, L_16, NULL);
		V_3 = L_17;
		goto IL_0098;
	}

IL_0073:
	{
		// return string.Format("[{0}.{1}]", span.Seconds, span.Milliseconds);
		int32_t L_18;
		L_18 = TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B((&V_0), NULL);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		int32_t L_21;
		L_21 = TimeSpan_get_Milliseconds_m09D9D6D0033D5FBC62A3C4007CC716A85F4FC8EA((&V_0), NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F, L_20, L_23, NULL);
		V_3 = L_24;
		goto IL_0098;
	}

IL_0098:
	{
		// }
		String_t* L_25 = V_3;
		return L_25;
	}
}
// System.Void Photon.Realtime.SupportLogger::TrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_TrackValues_mA1B658F169546E0992EDB43CF5943E7C05B692EB (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (this.client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		V_0 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// int currentRtt = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___client_6;
		NullCheck(L_2);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_3;
		L_3 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A(L_3, NULL);
		V_1 = L_4;
		// if (currentRtt > this.pingMax)
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___pingMax_9;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// this.pingMax = currentRtt;
		int32_t L_8 = V_1;
		__this->___pingMax_9 = L_8;
	}

IL_0036:
	{
		// if (currentRtt < this.pingMin)
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___pingMin_10;
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// this.pingMin = currentRtt;
		int32_t L_12 = V_1;
		__this->___pingMin_10 = L_12;
	}

IL_004c:
	{
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m72117C40251F6016E6C2ADD79DD5F23B69A88AD4 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5B274AC719B863CB0A2DA066BD69F873B190F6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.client == null || this.client.State == ClientState.PeerCreated)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___client_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		goto IL_007c;
	}

IL_0021:
	{
		// if (this.LogTrafficStats)
		bool L_4 = __this->___LogTrafficStats_4;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007c;
		}
	}
	{
		// Debug.Log(string.Format("{0} SupportLogger {1} Ping min/max: {2}/{3}", this.GetFormattedTimestamp() , this.client.LoadBalancingPeer.VitalStatsToString(false) , this.pingMin , this.pingMax));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		String_t* L_8;
		L_8 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_10 = __this->___client_6;
		NullCheck(L_10);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_11;
		L_11 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = PhotonPeer_VitalStatsToString_m86E7FCEC18792D5BFE615BE0F3A094C7FF1E742E(L_11, (bool)0, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		int32_t L_14 = __this->___pingMin_10;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = __this->___pingMax_9;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral8E5B274AC719B863CB0A2DA066BD69F873B190F6, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_21, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthModeOption_t7CA0F11229CF212E10897F367BEE70D85C01B1EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAuthenticationType_t202E72650121EDA3F5EC694D792F2DEBC48E9D0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptionMode_tD26BF6E736ED3A0AE841EE96A761723407E6FF98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetFrameworks_tFA2579142253D3F9C8D7EBCB307EC5D21F20E76D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BA731B2704F57E0D64A0B832502A59C9A647418);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C2B738C07CAF0CE8EC4DF3FD24573F2DFFE3D56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691FADBE26C2608C232E86F1289D3E5FCC330C03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94C9907E8EDE0DCF9B99D296D066DF89F5E204E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A237664FCA59B03D60331058EF83BB83DB96F01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCADE992351A796143F5F5164E100121E1080BF4C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	uint8_t V_6 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_2 = NULL;
	String_t* G_B13_3 = NULL;
	StringBuilder_t* G_B13_4 = NULL;
	int32_t G_B12_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_2 = NULL;
	String_t* G_B12_3 = NULL;
	StringBuilder_t* G_B12_4 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_3 = NULL;
	String_t* G_B14_4 = NULL;
	StringBuilder_t* G_B14_5 = NULL;
	{
		// if (this.client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		V_0 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_028a;
		}
	}
	{
		// List<string> buildProperties = new List<string>(10);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_2, ((int32_t)10), List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		V_1 = L_2;
		// buildProperties.Add(Application.unityVersion);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = V_1;
		String_t* L_4;
		L_4 = Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387(NULL);
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// buildProperties.Add(Application.platform.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = V_1;
		int32_t L_6;
		L_6 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_4 = L_6;
		Il2CppFakeBox<int32_t> L_7(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// buildProperties.Add("ENABLE_IL2CPP");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_1;
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, _stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// buildProperties.Add("DEBUG");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = V_1;
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// buildProperties.Add("NET_STANDARD_2_0");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = V_1;
		NullCheck(L_11);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, _stringLiteral94C9907E8EDE0DCF9B99D296D066DF89F5E204E9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_12 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_12, NULL);
		V_2 = L_12;
		// string appIdShort = string.IsNullOrEmpty(this.client.AppId) || this.client.AppId.Length < 8 ? this.client.AppId : string.Concat(this.client.AppId.Substring(0, 8), "***");
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_13 = __this->___client_6;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline(L_13, NULL);
		bool L_15;
		L_15 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_14, NULL);
		if (L_15)
		{
			goto IL_00ae;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_16 = __this->___client_6;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline(L_16, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)8)))
		{
			goto IL_00ae;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_19 = __this->___client_6;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_20, 0, 8, NULL);
		String_t* L_22;
		L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_21, _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34, NULL);
		G_B5_0 = L_22;
		goto IL_00b9;
	}

IL_00ae:
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_23 = __this->___client_6;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline(L_23, NULL);
		G_B5_0 = L_24;
	}

IL_00b9:
	{
		V_3 = G_B5_0;
		// sb.AppendFormat("{0} SupportLogger Info: ", this.GetFormattedTimestamp());
		StringBuilder_t* L_25 = V_2;
		String_t* L_26;
		L_26 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_25, _stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746, L_26, NULL);
		// sb.AppendFormat("AppID: \"{0}\" AppVersion: \"{1}\" Client: v{2} ({4}) Build: {3} ", appIdShort, this.client.AppVersion, PhotonPeer.Version, string.Join(", ", buildProperties.ToArray()), this.client.LoadBalancingPeer.TargetFramework);
		StringBuilder_t* L_28 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
		String_t* L_31 = V_3;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_30;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_33 = __this->___client_6;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline(L_33, NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_32;
		il2cpp_codegen_runtime_class_init_inline(PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_il2cpp_TypeInfo_var);
		String_t* L_36;
		L_36 = PhotonPeer_get_Version_mF0DFCA957AA487800F8D46A2D968ABFE954158DC(NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_35;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_38 = V_1;
		NullCheck(L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_38, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_40;
		L_40 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_39, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_37;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_42 = __this->___client_6;
		NullCheck(L_42);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_43;
		L_43 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_42, NULL);
		NullCheck(L_43);
		int32_t L_44 = ((PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C*)L_43)->___TargetFramework_8;
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(TargetFrameworks_tFA2579142253D3F9C8D7EBCB307EC5D21F20E76D_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_46);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_46);
		NullCheck(L_28);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_28, _stringLiteral9A237664FCA59B03D60331058EF83BB83DB96F01, L_41, NULL);
		// if (this.client != null && this.client.LoadBalancingPeer != null && this.client.LoadBalancingPeer.SocketImplementation != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_48 = __this->___client_6;
		if (!L_48)
		{
			goto IL_0150;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_49 = __this->___client_6;
		NullCheck(L_49);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_50;
		L_50 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_49, NULL);
		if (!L_50)
		{
			goto IL_0150;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_51 = __this->___client_6;
		NullCheck(L_51);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_52;
		L_52 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_51, NULL);
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = PhotonPeer_get_SocketImplementation_mE28201437EE67C611F6330E4D18AF46C9CFFC628_inline(L_52, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_53, (Type_t*)NULL, NULL);
		G_B9_0 = ((int32_t)(L_54));
		goto IL_0151;
	}

IL_0150:
	{
		G_B9_0 = 0;
	}

IL_0151:
	{
		V_5 = (bool)G_B9_0;
		bool L_55 = V_5;
		if (!L_55)
		{
			goto IL_017a;
		}
	}
	{
		// sb.AppendFormat("Socket: {0} ", this.client.LoadBalancingPeer.SocketImplementation.Name);
		StringBuilder_t* L_56 = V_2;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_57 = __this->___client_6;
		NullCheck(L_57);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_58;
		L_58 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_57, NULL);
		NullCheck(L_58);
		Type_t* L_59;
		L_59 = PhotonPeer_get_SocketImplementation_mE28201437EE67C611F6330E4D18AF46C9CFFC628_inline(L_58, NULL);
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_59);
		NullCheck(L_56);
		StringBuilder_t* L_61;
		L_61 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_56, _stringLiteral2BA731B2704F57E0D64A0B832502A59C9A647418, L_60, NULL);
	}

IL_017a:
	{
		// sb.AppendFormat("UserId: \"{0}\" AuthType: {1} AuthMode: {2} {3} ", this.client.UserId, (this.client.AuthValues != null) ? this.client.AuthValues.AuthType.ToString() : "N/A", this.client.AuthMode, this.client.EncryptionMode);
		StringBuilder_t* L_62 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = L_63;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_65 = __this->___client_6;
		NullCheck(L_65);
		String_t* L_66;
		L_66 = LoadBalancingClient_get_UserId_mF095E7FB569A0CD2AEEBEA88FCADE18B9486148D(L_65, NULL);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_66);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67 = L_64;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_68 = __this->___client_6;
		NullCheck(L_68);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_69;
		L_69 = LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline(L_68, NULL);
		G_B12_0 = 1;
		G_B12_1 = L_67;
		G_B12_2 = L_67;
		G_B12_3 = _stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A;
		G_B12_4 = L_62;
		if (L_69)
		{
			G_B13_0 = 1;
			G_B13_1 = L_67;
			G_B13_2 = L_67;
			G_B13_3 = _stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A;
			G_B13_4 = L_62;
			goto IL_01aa;
		}
	}
	{
		G_B14_0 = _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		G_B14_4 = G_B12_3;
		G_B14_5 = G_B12_4;
		goto IL_01c9;
	}

IL_01aa:
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_70 = __this->___client_6;
		NullCheck(L_70);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_71;
		L_71 = LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline(L_70, NULL);
		NullCheck(L_71);
		uint8_t L_72;
		L_72 = AuthenticationValues_get_AuthType_m0B745D57BFF19DFFD283825D461C0417024AAC79(L_71, NULL);
		V_6 = L_72;
		Il2CppFakeBox<uint8_t> L_73(CustomAuthenticationType_t202E72650121EDA3F5EC694D792F2DEBC48E9D0B_il2cpp_TypeInfo_var, (&V_6));
		String_t* L_74;
		L_74 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_73), NULL);
		G_B14_0 = L_74;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		G_B14_4 = G_B13_3;
		G_B14_5 = G_B13_4;
	}

IL_01c9:
	{
		NullCheck(G_B14_2);
		ArrayElementTypeCheck (G_B14_2, G_B14_0);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (RuntimeObject*)G_B14_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_75 = G_B14_3;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_76 = __this->___client_6;
		NullCheck(L_76);
		int32_t L_77 = L_76->___AuthMode_5;
		int32_t L_78 = L_77;
		RuntimeObject* L_79 = Box(AuthModeOption_t7CA0F11229CF212E10897F367BEE70D85C01B1EE_il2cpp_TypeInfo_var, &L_78);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_79);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_79);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_80 = L_75;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_81 = __this->___client_6;
		NullCheck(L_81);
		int32_t L_82 = L_81->___EncryptionMode_6;
		int32_t L_83 = L_82;
		RuntimeObject* L_84 = Box(EncryptionMode_tD26BF6E736ED3A0AE841EE96A761723407E6FF98_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_84);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_84);
		NullCheck(G_B14_5);
		StringBuilder_t* L_85;
		L_85 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(G_B14_5, G_B14_4, L_80, NULL);
		// sb.AppendFormat("State: {0} ", this.client.State);
		StringBuilder_t* L_86 = V_2;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_87 = __this->___client_6;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C(L_87, NULL);
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, &L_89);
		NullCheck(L_86);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_86, _stringLiteral691FADBE26C2608C232E86F1289D3E5FCC330C03, L_90, NULL);
		// sb.AppendFormat("PeerID: {0} ", this.client.LoadBalancingPeer.PeerID);
		StringBuilder_t* L_92 = V_2;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_93 = __this->___client_6;
		NullCheck(L_93);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_94;
		L_94 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_93, NULL);
		NullCheck(L_94);
		String_t* L_95;
		L_95 = PhotonPeer_get_PeerID_m45C5EABD3528CBE69D022332411D035D0456D6B2(L_94, NULL);
		NullCheck(L_92);
		StringBuilder_t* L_96;
		L_96 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_92, _stringLiteral5C2B738C07CAF0CE8EC4DF3FD24573F2DFFE3D56, L_95, NULL);
		// sb.AppendFormat("NameServer: {0} Current Server: {1} IP: {2} Region: {3} ", this.client.NameServerHost, this.client.CurrentServerAddress, this.client.LoadBalancingPeer.ServerIpAddress, this.client.CloudRegion);
		StringBuilder_t* L_97 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_99 = L_98;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_100 = __this->___client_6;
		NullCheck(L_100);
		String_t* L_101 = L_100->___NameServerHost_10;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_101);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_101);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_102 = L_99;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_103 = __this->___client_6;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = LoadBalancingClient_get_CurrentServerAddress_mEECF2CACB633771F81D6F9A680CB4611F4E52ECB(L_103, NULL);
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, L_104);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_104);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = L_102;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_106 = __this->___client_6;
		NullCheck(L_106);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_107;
		L_107 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_106, NULL);
		NullCheck(L_107);
		String_t* L_108;
		L_108 = PhotonPeer_get_ServerIpAddress_m39ED914DE2093FDAE8B264A3AD9D3A97A02ED59D(L_107, NULL);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_108);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_108);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109 = L_105;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_110 = __this->___client_6;
		NullCheck(L_110);
		String_t* L_111;
		L_111 = LoadBalancingClient_get_CloudRegion_m0093F59A916A2AC5BB01A653D31ED2A45C9421F0_inline(L_110, NULL);
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, L_111);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_111);
		NullCheck(L_97);
		StringBuilder_t* L_112;
		L_112 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_97, _stringLiteralCADE992351A796143F5F5164E100121E1080BF4C, L_109, NULL);
		// Debug.LogWarning(sb.ToString());
		StringBuilder_t* L_113 = V_2;
		NullCheck(L_113);
		String_t* L_114;
		L_114 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_113);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_114, NULL);
	}

IL_028a:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnected_mD3B22C9C910F781EE997FC39C70C57E47EE6A264 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnected().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// this.pingMax = 0;
		__this->___pingMax_9 = 0;
		// this.pingMin = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___client_6;
		NullCheck(L_2);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_3;
		L_3 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A(L_3, NULL);
		__this->___pingMin_10 = L_4;
		// this.LogBasics();
		SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB(__this, NULL);
		// if (this.LogTrafficStats)
		bool L_5 = __this->___LogTrafficStats_4;
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = false;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_7 = __this->___client_6;
		NullCheck(L_7);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_8;
		L_8 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_7, NULL);
		NullCheck(L_8);
		PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A(L_8, (bool)0, NULL);
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = true;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_9 = __this->___client_6;
		NullCheck(L_9);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_10;
		L_10 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_9, NULL);
		NullCheck(L_10);
		PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A(L_10, (bool)1, NULL);
		// this.StartLogStats();
		SupportLogger_StartLogStats_mADEB668E877F7A13C48E457DCDFBBDD6FA45A439(__this, NULL);
	}

IL_0072:
	{
		// this.StartTrackValues();
		SupportLogger_StartTrackValues_mF1E8384DB1F9A9F472D58031DE53E3A3ED718CB0(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnectedToMaster_mD427D6E609E4A9D4874F6DD6F9C81C66F604C5F9 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnectedToMaster().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnFriendListUpdate_mDE9F8B869A076E670499C05A87C14624B1C2A796 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___friendList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnFriendListUpdate(friendList).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedLobby_mD59E20234D3CD2213A5A32B57F57977BCF7D6316 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580);
		s_Il2CppMethodInitialized = true;
	}
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedLobby(" + this.client.CurrentLobby + ").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___client_6;
		NullCheck(L_1);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_2;
		L_2 = LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline(L_1, NULL);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
			G_B2_2 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B2_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0023:
	{
		String_t* L_5;
		L_5 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftLobby_m1C90343E99542FD0BC28ABB43F38B96D94D6CAD2 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftLobby().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreateRoomFailed_m7D690C17A8BDD55B25AB53117D83EC876DF1DFB0 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreateRoomFailed(" + returnCode+","+message+").");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23((&___returnCode0), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_10;
		L_10 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedRoom_m3A23B652C43C78F7A8805F59F1CDB5AAB2B051B9 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01551127791BB14934414B8428B67FD51B390033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		s_Il2CppMethodInitialized = true;
	}
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral01551127791BB14934414B8428B67FD51B390033);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral01551127791BB14934414B8428B67FD51B390033);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5 = __this->___client_6;
		NullCheck(L_5);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_6;
		L_6 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_5, NULL);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = 2;
		G_B1_2 = L_4;
		G_B1_3 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = 2;
			G_B2_2 = L_4;
			G_B2_3 = L_4;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0031;
	}

IL_002c:
	{
		NullCheck(G_B2_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0031:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = G_B3_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_11 = __this->___client_6;
		NullCheck(L_11);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_12;
		L_12 = LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline(L_11, NULL);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_13 = L_12;
		G_B4_0 = L_13;
		G_B4_1 = 4;
		G_B4_2 = L_10;
		G_B4_3 = L_10;
		if (L_13)
		{
			G_B5_0 = L_13;
			G_B5_1 = 4;
			G_B5_2 = L_10;
			G_B5_3 = L_10;
			goto IL_004e;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0053;
	}

IL_004e:
	{
		NullCheck(G_B5_0);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0053:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B6_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_17 = __this->___client_6;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LoadBalancingClient_get_GameServerAddress_mA5C7E86447BEEB303C5AB1C932FC9DA907407F01_inline(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_19, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRoomFailed_m32A3F8899D7522A49FA9FB2D89F42D80F461F17F (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRoomFailed(" + returnCode+","+message+").");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23((&___returnCode0), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_10;
		L_10 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRandomFailed_mECC76BE7463BC2384FBADA3C9706DF4710E2182C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRandomFailed(" + returnCode+","+message+").");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23((&___returnCode0), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_10;
		L_10 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreatedRoom_m043CFC6CFE8CCC0A65CC8DF058C5AE522250A7AA (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		s_Il2CppMethodInitialized = true;
	}
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreatedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5 = __this->___client_6;
		NullCheck(L_5);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_6;
		L_6 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_5, NULL);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = 2;
		G_B1_2 = L_4;
		G_B1_3 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = 2;
			G_B2_2 = L_4;
			G_B2_3 = L_4;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0031;
	}

IL_002c:
	{
		NullCheck(G_B2_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0031:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = G_B3_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_11 = __this->___client_6;
		NullCheck(L_11);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_12;
		L_12 = LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline(L_11, NULL);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_13 = L_12;
		G_B4_0 = L_13;
		G_B4_1 = 4;
		G_B4_2 = L_10;
		G_B4_3 = L_10;
		if (L_13)
		{
			G_B5_0 = L_13;
			G_B5_1 = 4;
			G_B5_2 = L_10;
			G_B5_3 = L_10;
			goto IL_004e;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0053;
	}

IL_004e:
	{
		NullCheck(G_B5_0);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0053:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B6_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_17 = __this->___client_6;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LoadBalancingClient_get_GameServerAddress_mA5C7E86447BEEB303C5AB1C932FC9DA907407F01_inline(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_19, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftRoom_m510C8001E5416983156439C7EEE8A4412F876C04 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftRoom().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDisconnected_mB5C49E9A276CDB10F79A55EEADD13E26C872B60D (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, int32_t ___cause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StopLogStats();
		SupportLogger_StopLogStats_mC018079D538BE027CAE1BE06562EF41064741AB3(__this, NULL);
		// this.StopTrackValues();
		SupportLogger_StopTrackValues_m412943F66C1497EC8FEB2FAECDAC09883941FC38(__this, NULL);
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnDisconnected(" + cause + ").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Il2CppFakeBox<int32_t> L_1(DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var, (&___cause0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_0, _stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6, L_2, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// this.LogBasics();
		SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB(__this, NULL);
		// this.LogStats();
		SupportLogger_LogStats_m72117C40251F6016E6C2ADD79DD5F23B69A88AD4(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRegionListReceived_m749E7FB1F17547A4554CAC14202987D3D44B6012 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___regionHandler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRegionListReceived(regionHandler).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomListUpdate_m450F482954D0552A1A485B3D9EDF04CE6504A0B7 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* ___roomList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomListUpdate(roomList). roomList.Count: " + roomList.Count);
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* L_1 = ___roomList0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_inline(L_1, List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, _stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerEnteredRoom_m3A95539841186E4BE507E8669FED27A80451BB44 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___newPlayer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerEnteredRoom(" + newPlayer+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___newPlayer0;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
			G_B2_2 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0019;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0019:
	{
		String_t* L_4;
		L_4 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerLeftRoom_mB553DDBB74D41C43C9CE7FC442661BEC407C9C01 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___otherPlayer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerLeftRoom(" + otherPlayer+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___otherPlayer0;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
			G_B2_2 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0019;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0019:
	{
		String_t* L_4;
		L_4 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomPropertiesUpdate_mEEF8238140F87680A9160C4FCDF6B829DE871F47 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesThatChanged0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomPropertiesUpdate(propertiesThatChanged).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerPropertiesUpdate_mB570E44B70302BF3E549AD45FBD3128942D75E0D (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___targetPlayer0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___changedProps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerPropertiesUpdate(targetPlayer,changedProps).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnMasterClientSwitched_m65A6694B44A97EE48571F343E61EAC73447FD5DA (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___newMasterClient0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnMasterClientSwitched(" + newMasterClient+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___newMasterClient0;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
			G_B2_2 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0019;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0019:
	{
		String_t* L_4;
		L_4 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationResponse_m411540477C7F20D1FDDD57B7D81DC7107142D534 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationResponse(" + data.ToStringFull()+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___data0;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Extensions_ToStringFull_mAC48EACD33E2EF6430A689C40DFF96C68B5C41D0(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_0, _stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C, L_2, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationFailed_m3B4F972D2BEF59F3207E71CCE40C16FBA13B1C79 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, String_t* ___debugMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationFailed(" + debugMessage+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1 = ___debugMessage0;
		String_t* L_2;
		L_2 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_0, _stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356, L_1, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLobbyStatisticsUpdate_mB378AC02004C2294D98752EC70F7154AA57011BE (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLobbyStatisticsUpdate(lobbyStatistics).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnErrorInfo(Photon.Realtime.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnErrorInfo_m7EFA6DF6FFFE77118BC704CCBE06CDD4A3791A23 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, ErrorInfo_tBEC0163224E8E559901B5BA6D2DDDC2B15D013ED* ___errorInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(errorInfo.ToString());
		ErrorInfo_tBEC0163224E8E559901B5BA6D2DDDC2B15D013ED* L_0 = ___errorInfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger__ctor_mA19F932C333F278D7038BA82B5A8731E6D3BC5B5 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	{
		// public bool LogTrafficStats = true;
		__this->___LogTrafficStats_4 = (bool)1;
		// private bool initialOnApplicationPauseSkipped = false;
		__this->___initialOnApplicationPauseSkipped_8 = (bool)0;
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
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m07F774596848E8D7638725CCDDD315B2306E5DE7 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m54C63D7CA0AB1521398A01C8C720D581F65564CC (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->___U3CResultCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CResultCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m1A6458393A9B1F01BAD460ADF1F01AAEBBD429C7 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse__ctor_mE668F820EB3B8CF1E65495CC490285A9585EF011 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// public WebRpcResponse(OperationResponse response)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.UriPath, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_0 = ___response0;
		NullCheck(L_0);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_1 = L_0->___Parameters_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_1, (uint8_t)((int32_t)209), (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// this.Name = value as string;
		RuntimeObject* L_4 = V_0;
		WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), NULL);
	}

IL_002d:
	{
		// this.ResultCode = -1;
		WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline(__this, (-1), NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnCode, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_5 = ___response0;
		NullCheck(L_5);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_6 = L_5->___Parameters_3;
		NullCheck(L_6);
		bool L_7;
		L_7 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_6, (uint8_t)((int32_t)207), (&V_0), NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// this.ResultCode = (byte)value;
		RuntimeObject* L_9 = V_0;
		WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_9, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
	}

IL_005a:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcParameters, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_10 = ___response0;
		NullCheck(L_10);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_11 = L_10->___Parameters_3;
		NullCheck(L_11);
		bool L_12;
		L_12 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_11, (uint8_t)((int32_t)208), (&V_0), NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		// this.Parameters = value as Dictionary<string, object>;
		RuntimeObject* L_14 = V_0;
		WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133_inline(__this, ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_14, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var)), NULL);
	}

IL_007f:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnMessage, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_15 = ___response0;
		NullCheck(L_15);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_16 = L_15->___Parameters_3;
		NullCheck(L_16);
		bool L_17;
		L_17 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_16, (uint8_t)((int32_t)206), (&V_0), NULL);
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a6;
		}
	}
	{
		// this.Message = value as string;
		RuntimeObject* L_19 = V_0;
		WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), NULL);
	}

IL_00a6:
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
// System.Boolean Photon.Realtime.WebFlags::get_HttpForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_HttpForward_mE953246AA2C870572F2E41210166F3DB34983801 (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		uint8_t L_0 = __this->___WebhookFlags_1;
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mB6C7632B44C70579815DEF054DB5D61D5D1AD06D (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, uint8_t ___webhookFlags0, const RuntimeMethod* method) 
{
	{
		// public WebFlags(byte webhookFlags)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// WebhookFlags = webhookFlags;
		uint8_t L_0 = ___webhookFlags0;
		__this->___WebhookFlags_1 = L_0;
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__cctor_m98CF3DCDC8909AA2A9959727459D715818C45D79 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly static WebFlags Default = new WebFlags(0);
		WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* L_0 = (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)il2cpp_codegen_object_new(WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WebFlags__ctor_mB6C7632B44C70579815DEF054DB5D61D5D1AD06D(L_0, (uint8_t)0, NULL);
		((WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_HostAndPort_mE4C5000AE610E411D3EC570C36319D4AEA20017C_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string HostAndPort { get; protected internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CHostAndPortU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHostAndPortU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Ping_m48411BF3B9D00DDB33173EA2F6BC6228BAA69F77_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Ping { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CPingU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Code_m53F1EC8662E027CA4F315888F14210E482BE9208_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Cluster_m5B0E1BC3189280551A43F03B3B23C358A6223167_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Cluster { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CClusterU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClusterU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Cluster_mF985DDB15CF40F8554C614DFB4BC5BD21341CB84_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string Cluster { get; private set; }
		String_t* L_0 = __this->___U3CClusterU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Region_get_Ping_m6D480D031D69AD25407DB7ACFCA3AC5DCB151C20_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public int Ping { get; set; }
		int32_t L_0 = __this->___U3CPingU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_HostAndPort_mA2E99034AF566055B326BB030BC8B5381FD8B0B1_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string HostAndPort { get; protected internal set; }
		String_t* L_0 = __this->___U3CHostAndPortU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* RegionHandler_get_EnabledRegions_mB11BEECC5E087234C1D2B163F5DBD88415665C47_inline (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) 
{
	{
		// public List<Region> EnabledRegions { get; protected internal set; }
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_0 = __this->___U3CEnabledRegionsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionHandler_set_EnabledRegions_m3BF5BE5F9A8957DD0E8023598AA6BA1EBE3A4E89_inline (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Region> EnabledRegions { get; protected internal set; }
		List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* L_0 = ___value0;
		__this->___U3CEnabledRegionsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnabledRegionsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RegionHandler_get_IsPinging_m5C6F194C3DF9C39DD3D21F18BC085F6E02B27444_inline (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPinging { get; private set; }
		bool L_0 = __this->___U3CIsPingingU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionHandler_set_IsPinging_mC4A6997488105E3C320FC8E63A37DAC5986428C6_inline (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPinging { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPingingU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RegionPinger_get_Done_m96AA7E6623A69F82927866205B03A63E384B09C7_inline (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, const RuntimeMethod* method) 
{
	{
		// public bool Done { get; private set; }
		bool L_0 = __this->___U3CDoneU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionPinger_set_Done_m64D6447A0D217795ED8EC721E959BE79BB8B7C38_inline (RegionPinger_t953E42BC59C48354AE8AAB91E932BB79CB49930B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Done { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDoneU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* Room_get_LoadBalancingClient_m841CF196A0BAE1D2262DD75E5ABF816B1C45542E_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingClient LoadBalancingClient { get; set; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___U3CLoadBalancingClientU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_BroadcastPropertiesChangeToAll_mE035C1698B5FA3582F75A906E99CC73382B453E6_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool BroadcastPropertiesChangeToAll { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_SuppressRoomEvents_m0133AF9ADF7DB61EEA827F05F3C933F7897FE6AF_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SuppressRoomEvents { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSuppressRoomEventsU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_SuppressPlayerInfo_m1754FDFEB94E7491AD1B924784FD4C4627CE60A0_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SuppressPlayerInfo { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CSuppressPlayerInfoU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_PublishUserId_m3EEBD57B9CB236301891F207AF9D42920D3D4B4A_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool PublishUserId { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CPublishUserIdU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_DeleteNullProperties_mA15EBF691112160C0098DB6F29E5A0EBC72C8B24_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool DeleteNullProperties { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDeleteNullPropertiesU3Ek__BackingField_20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_RoomReference_m39E94C50F5580616B89B43EF1027749326845F1C_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___value0, const RuntimeMethod* method) 
{
	{
		// protected internal Room RoomReference { get; set; }
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0 = ___value0;
		__this->___U3CRoomReferenceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRoomReferenceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->___U3CPlayerCountU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m60E2655747392B753F507AF760FD5F1CE2C25B02_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPlayerCountU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_0 = __this->___U3CLoadBalancingPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string AppId { get; set; }
		String_t* L_0 = __this->___U3CAppIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->___U3CAppVersionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhotonPeer_get_SocketImplementation_mE28201437EE67C611F6330E4D18AF46C9CFFC628_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CSocketImplementationU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_0 = __this->___U3CAuthValuesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m0093F59A916A2AC5BB01A653D31ED2A45C9421F0_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string CloudRegion { get; private set; }
		String_t* L_0 = __this->___U3CCloudRegionU3Ek__BackingField_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public TypedLobby CurrentLobby { get; internal set; }
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_0 = __this->___U3CCurrentLobbyU3Ek__BackingField_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0 = __this->___U3CCurrentRoomU3Ek__BackingField_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_mA5C7E86447BEEB303C5AB1C932FC9DA907407F01_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string GameServerAddress { get; protected internal set; }
		String_t* L_0 = __this->___U3CGameServerAddressU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CResultCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
