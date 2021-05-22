#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27;
// System.IObservable`1<System.Object>
struct IObservable_1_tD298C95FFB6061193313830292FE8E817D37B5A4;
// System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>
struct IObserver_1_t561C25E59CB3AAA46670ABBC269E0BBC41B771FB;
// System.IObserver`1<System.Object>
struct IObserver_1_t9EBB98F865B275FC177A4A094F9E254B58B8A962;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D;
// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_t4B780A4E3E3227F03C8293177FBF72B8821892B5;
// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_t6810769B8DC572662D8E37F3281AC7BBD515DD58;
// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t7250C149CD5185E4BA38D3181CA2486168DB5B5D;
// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_tBB54AA43BF40FE0253BFDAC4BDF85E326C54E204;
// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_t173B6DEFAA5D7C80F7FF82A5B4EB6961D0D35D03;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8;
// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t8CB24E5B43B4C1CC44453A08ECFF76CF98C95C90;
// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_tE751D6A3F172D070978A746E5B49C8DE35B2329F;
// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_t26DD573480A9A11CA833BAC7F7CDC9C25387C606;
// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_t13537228185EA6EADD1988B0EA3197C9E7E3D0FA;
// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t77A3A4D5BF1D37F40302B8E71C277D99A6B1FB65;
// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D;
// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645;
// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932;
// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t1916CBEFD17AA1674F927430EF42C7EAEB835507;
// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8;
// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B;
// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838;
// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39;
// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E;
// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F;
// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448;
// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F;
// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_tAE56C446B45ECA54A1360388514A7D8851F5CC31;
// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78;
// System.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t07E73D53D775BAD4A57C11557731BF9696E1329B;
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// UniRx.Operators.IZipLatestObservable
struct IZipLatestObservable_tBC8E6DF6D33AD1BE66C2DD85334B17F8993603F7;
// UniRx.Operators.IZipObservable
struct IZipObservable_t0ECBDF53FECFF9407F1BE5BA0FD1156D07B45496;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* IZipLatestObservable_tBC8E6DF6D33AD1BE66C2DD85334B17F8993603F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipObservable_t0ECBDF53FECFF9407F1BE5BA0FD1156D07B45496_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IObservable_1U5BU5D_t07E73D53D775BAD4A57C11557731BF9696E1329B;
struct Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>
struct OperatorObservableBase_1_tB16C98CA8ACB1947DC9798221FBEED187248DFB0  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_tB16C98CA8ACB1947DC9798221FBEED187248DFB0, ___isRequiredSubscribeOnCurrentThread_0)); }
	inline bool get_isRequiredSubscribeOnCurrentThread_0() const { return ___isRequiredSubscribeOnCurrentThread_0; }
	inline bool* get_address_of_isRequiredSubscribeOnCurrentThread_0() { return &___isRequiredSubscribeOnCurrentThread_0; }
	inline void set_isRequiredSubscribeOnCurrentThread_0(bool value)
	{
		___isRequiredSubscribeOnCurrentThread_0 = value;
	}
};


// UniRx.Operators.OperatorObservableBase`1<System.Object>
struct OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC, ___isRequiredSubscribeOnCurrentThread_0)); }
	inline bool get_isRequiredSubscribeOnCurrentThread_0() const { return ___isRequiredSubscribeOnCurrentThread_0; }
	inline bool* get_address_of_isRequiredSubscribeOnCurrentThread_0() { return &___isRequiredSubscribeOnCurrentThread_0; }
	inline void set_isRequiredSubscribeOnCurrentThread_0(bool value)
	{
		___isRequiredSubscribeOnCurrentThread_0 = value;
	}
};


// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>
struct OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6  : public RuntimeObject
{
public:
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_1), (void*)value);
	}
};


// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>
struct OperatorObserverBase_2_tB93B26BFFDF6C6075F82E69B0A061C77D77A67C0  : public RuntimeObject
{
public:
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_tB93B26BFFDF6C6075F82E69B0A061C77D77A67C0, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_tB93B26BFFDF6C6075F82E69B0A061C77D77A67C0, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_1), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t1916CBEFD17AA1674F927430EF42C7EAEB835507  : public RuntimeObject
{
public:
	// UniRx.Operators.ZipLatestObservable`1/ZipLatest<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::parent
	ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * ___parent_0;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(ZipLatestObserver_t1916CBEFD17AA1674F927430EF42C7EAEB835507, ___parent_0)); }
	inline ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * get_parent_0() const { return ___parent_0; }
	inline ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ZipLatestObserver_t1916CBEFD17AA1674F927430EF42C7EAEB835507, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};


// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8  : public RuntimeObject
{
public:
	// System.Object UniRx.Operators.ZipLatestObserver`1::gate
	RuntimeObject * ___gate_0;
	// UniRx.Operators.IZipLatestObservable UniRx.Operators.ZipLatestObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipLatestObserver`1::index
	int32_t ___index_2;
	// T UniRx.Operators.ZipLatestObserver`1::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8, ___parent_1)); }
	inline RuntimeObject* get_parent_1() const { return ___parent_1; }
	inline RuntimeObject** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(RuntimeObject* value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_tAE56C446B45ECA54A1360388514A7D8851F5CC31  : public RuntimeObject
{
public:
	// UniRx.Operators.ZipObservable`1/Zip<T> UniRx.Operators.ZipObservable`1/Zip/ZipObserver::parent
	Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * ___parent_0;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip/ZipObserver::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(ZipObserver_tAE56C446B45ECA54A1360388514A7D8851F5CC31, ___parent_0)); }
	inline Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * get_parent_0() const { return ___parent_0; }
	inline Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ZipObserver_tAE56C446B45ECA54A1360388514A7D8851F5CC31, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};


// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78  : public RuntimeObject
{
public:
	// System.Object UniRx.Operators.ZipObserver`1::gate
	RuntimeObject * ___gate_0;
	// UniRx.Operators.IZipObservable UniRx.Operators.ZipObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipObserver`1::index
	int32_t ___index_2;
	// System.Collections.Generic.Queue`1<T> UniRx.Operators.ZipObserver`1::queue
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___queue_3;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78, ___parent_1)); }
	inline RuntimeObject* get_parent_1() const { return ___parent_1; }
	inline RuntimeObject** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(RuntimeObject* value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_queue_3() { return static_cast<int32_t>(offsetof(ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78, ___queue_3)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_queue_3() const { return ___queue_3; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_queue_3() { return &___queue_3; }
	inline void set_queue_3(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___queue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>
struct NthZipLatestObserverBase_1_t2976FC9EF30CE751E0C203A114D8695E217B3F3D  : public OperatorObserverBase_2_tB93B26BFFDF6C6075F82E69B0A061C77D77A67C0
{
public:
	// System.Int32 UniRx.Operators.NthZipLatestObserverBase`1::length
	int32_t ___length_2;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isStarted
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isStarted_3;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isCompleted
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isCompleted_4;

public:
	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(NthZipLatestObserverBase_1_t2976FC9EF30CE751E0C203A114D8695E217B3F3D, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_isStarted_3() { return static_cast<int32_t>(offsetof(NthZipLatestObserverBase_1_t2976FC9EF30CE751E0C203A114D8695E217B3F3D, ___isStarted_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isStarted_3() const { return ___isStarted_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isStarted_3() { return &___isStarted_3; }
	inline void set_isStarted_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isStarted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isStarted_3), (void*)value);
	}

	inline static int32_t get_offset_of_isCompleted_4() { return static_cast<int32_t>(offsetof(NthZipLatestObserverBase_1_t2976FC9EF30CE751E0C203A114D8695E217B3F3D, ___isCompleted_4)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isCompleted_4() const { return ___isCompleted_4; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isCompleted_4() { return &___isCompleted_4; }
	inline void set_isCompleted_4(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isCompleted_4), (void*)value);
	}
};


// UniRx.Operators.NthZipObserverBase`1<System.Object>
struct NthZipObserverBase_1_t656950E06BB2693C561C7D731C13A93A99EAE677  : public OperatorObserverBase_2_tB93B26BFFDF6C6075F82E69B0A061C77D77A67C0
{
public:
	// System.Collections.ICollection[] UniRx.Operators.NthZipObserverBase`1::queues
	ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* ___queues_2;
	// System.Boolean[] UniRx.Operators.NthZipObserverBase`1::isDone
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isDone_3;
	// System.Int32 UniRx.Operators.NthZipObserverBase`1::length
	int32_t ___length_4;

public:
	inline static int32_t get_offset_of_queues_2() { return static_cast<int32_t>(offsetof(NthZipObserverBase_1_t656950E06BB2693C561C7D731C13A93A99EAE677, ___queues_2)); }
	inline ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* get_queues_2() const { return ___queues_2; }
	inline ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8** get_address_of_queues_2() { return &___queues_2; }
	inline void set_queues_2(ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* value)
	{
		___queues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queues_2), (void*)value);
	}

	inline static int32_t get_offset_of_isDone_3() { return static_cast<int32_t>(offsetof(NthZipObserverBase_1_t656950E06BB2693C561C7D731C13A93A99EAE677, ___isDone_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isDone_3() const { return ___isDone_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isDone_3() { return &___isDone_3; }
	inline void set_isDone_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isDone_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isDone_3), (void*)value);
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(NthZipObserverBase_1_t656950E06BB2693C561C7D731C13A93A99EAE677, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}
};


// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D  : public OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6
{
public:
	// UniRx.Operators.ZipObservable`1<T> UniRx.Operators.ZipObservable`1/Zip::parent
	ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B * ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`1/Zip::gate
	RuntimeObject * ___gate_3;
	// System.Collections.Generic.Queue`1<T>[] UniRx.Operators.ZipObservable`1/Zip::queues
	Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40* ___queues_4;
	// System.Boolean[] UniRx.Operators.ZipObservable`1/Zip::isDone
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isDone_5;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip::length
	int32_t ___length_6;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D, ___parent_2)); }
	inline ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B * get_parent_2() const { return ___parent_2; }
	inline ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_queues_4() { return static_cast<int32_t>(offsetof(Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D, ___queues_4)); }
	inline Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40* get_queues_4() const { return ___queues_4; }
	inline Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40** get_address_of_queues_4() { return &___queues_4; }
	inline void set_queues_4(Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40* value)
	{
		___queues_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queues_4), (void*)value);
	}

	inline static int32_t get_offset_of_isDone_5() { return static_cast<int32_t>(offsetof(Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D, ___isDone_5)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isDone_5() const { return ___isDone_5; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isDone_5() { return &___isDone_5; }
	inline void set_isDone_5(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isDone_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isDone_5), (void*)value);
	}

	inline static int32_t get_offset_of_length_6() { return static_cast<int32_t>(offsetof(Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D, ___length_6)); }
	inline int32_t get_length_6() const { return ___length_6; }
	inline int32_t* get_address_of_length_6() { return &___length_6; }
	inline void set_length_6(int32_t value)
	{
		___length_6 = value;
	}
};


// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>
struct Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93  : public OperatorObserverBase_2_tB93B26BFFDF6C6075F82E69B0A061C77D77A67C0
{
public:
	// UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip::parent
	ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 * ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`3/Zip::gate
	RuntimeObject * ___gate_3;
	// System.Collections.Generic.Queue`1<TLeft> UniRx.Operators.ZipObservable`3/Zip::leftQ
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___leftQ_4;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::leftCompleted
	bool ___leftCompleted_5;
	// System.Collections.Generic.Queue`1<TRight> UniRx.Operators.ZipObservable`3/Zip::rightQ
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___rightQ_6;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::rightCompleted
	bool ___rightCompleted_7;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93, ___parent_2)); }
	inline ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 * get_parent_2() const { return ___parent_2; }
	inline ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_leftQ_4() { return static_cast<int32_t>(offsetof(Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93, ___leftQ_4)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_leftQ_4() const { return ___leftQ_4; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_leftQ_4() { return &___leftQ_4; }
	inline void set_leftQ_4(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___leftQ_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftQ_4), (void*)value);
	}

	inline static int32_t get_offset_of_leftCompleted_5() { return static_cast<int32_t>(offsetof(Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93, ___leftCompleted_5)); }
	inline bool get_leftCompleted_5() const { return ___leftCompleted_5; }
	inline bool* get_address_of_leftCompleted_5() { return &___leftCompleted_5; }
	inline void set_leftCompleted_5(bool value)
	{
		___leftCompleted_5 = value;
	}

	inline static int32_t get_offset_of_rightQ_6() { return static_cast<int32_t>(offsetof(Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93, ___rightQ_6)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_rightQ_6() const { return ___rightQ_6; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_rightQ_6() { return &___rightQ_6; }
	inline void set_rightQ_6(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___rightQ_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightQ_6), (void*)value);
	}

	inline static int32_t get_offset_of_rightCompleted_7() { return static_cast<int32_t>(offsetof(Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93, ___rightCompleted_7)); }
	inline bool get_rightCompleted_7() const { return ___rightCompleted_7; }
	inline bool* get_address_of_rightCompleted_7() { return &___rightCompleted_7; }
	inline void set_rightCompleted_7(bool value)
	{
		___rightCompleted_7 = value;
	}
};


// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8  : public OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6
{
public:
	// UniRx.Operators.ZipLatestObservable`1<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest::parent
	ZipLatestObservable_1_t77A3A4D5BF1D37F40302B8E71C277D99A6B1FB65 * ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`1/ZipLatest::gate
	RuntimeObject * ___gate_3;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest::length
	int32_t ___length_4;
	// T[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_5;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isStarted
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isStarted_6;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isCompleted
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isCompleted_7;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8, ___parent_2)); }
	inline ZipLatestObservable_1_t77A3A4D5BF1D37F40302B8E71C277D99A6B1FB65 * get_parent_2() const { return ___parent_2; }
	inline ZipLatestObservable_1_t77A3A4D5BF1D37F40302B8E71C277D99A6B1FB65 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(ZipLatestObservable_1_t77A3A4D5BF1D37F40302B8E71C277D99A6B1FB65 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_values_5() { return static_cast<int32_t>(offsetof(ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8, ___values_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_5() const { return ___values_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_5() { return &___values_5; }
	inline void set_values_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_5), (void*)value);
	}

	inline static int32_t get_offset_of_isStarted_6() { return static_cast<int32_t>(offsetof(ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8, ___isStarted_6)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isStarted_6() const { return ___isStarted_6; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isStarted_6() { return &___isStarted_6; }
	inline void set_isStarted_6(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isStarted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isStarted_6), (void*)value);
	}

	inline static int32_t get_offset_of_isCompleted_7() { return static_cast<int32_t>(offsetof(ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8, ___isCompleted_7)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isCompleted_7() const { return ___isCompleted_7; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isCompleted_7() { return &___isCompleted_7; }
	inline void set_isCompleted_7(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isCompleted_7), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`5::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`5::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`5::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5::resultSelector
	ZipLatestFunc_5_t8CB24E5B43B4C1CC44453A08ECFF76CF98C95C90 * ___resultSelector_5;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_5() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D, ___resultSelector_5)); }
	inline ZipLatestFunc_5_t8CB24E5B43B4C1CC44453A08ECFF76CF98C95C90 * get_resultSelector_5() const { return ___resultSelector_5; }
	inline ZipLatestFunc_5_t8CB24E5B43B4C1CC44453A08ECFF76CF98C95C90 ** get_address_of_resultSelector_5() { return &___resultSelector_5; }
	inline void set_resultSelector_5(ZipLatestFunc_5_t8CB24E5B43B4C1CC44453A08ECFF76CF98C95C90 * value)
	{
		___resultSelector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_5), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`6::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`6::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`6::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`6::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6::resultSelector
	ZipLatestFunc_6_tE751D6A3F172D070978A746E5B49C8DE35B2329F * ___resultSelector_6;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_6() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645, ___resultSelector_6)); }
	inline ZipLatestFunc_6_tE751D6A3F172D070978A746E5B49C8DE35B2329F * get_resultSelector_6() const { return ___resultSelector_6; }
	inline ZipLatestFunc_6_tE751D6A3F172D070978A746E5B49C8DE35B2329F ** get_address_of_resultSelector_6() { return &___resultSelector_6; }
	inline void set_resultSelector_6(ZipLatestFunc_6_tE751D6A3F172D070978A746E5B49C8DE35B2329F * value)
	{
		___resultSelector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_6), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`7::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`7::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`7::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`7::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`7::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7::resultSelector
	ZipLatestFunc_7_t26DD573480A9A11CA833BAC7F7CDC9C25387C606 * ___resultSelector_7;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_source6_6() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932, ___source6_6)); }
	inline RuntimeObject* get_source6_6() const { return ___source6_6; }
	inline RuntimeObject** get_address_of_source6_6() { return &___source6_6; }
	inline void set_source6_6(RuntimeObject* value)
	{
		___source6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source6_6), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_7() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932, ___resultSelector_7)); }
	inline ZipLatestFunc_7_t26DD573480A9A11CA833BAC7F7CDC9C25387C606 * get_resultSelector_7() const { return ___resultSelector_7; }
	inline ZipLatestFunc_7_t26DD573480A9A11CA833BAC7F7CDC9C25387C606 ** get_address_of_resultSelector_7() { return &___resultSelector_7; }
	inline void set_resultSelector_7(ZipLatestFunc_7_t26DD573480A9A11CA833BAC7F7CDC9C25387C606 * value)
	{
		___resultSelector_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_7), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`8::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`8::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`8::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`8::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`8::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`8::source6
	RuntimeObject* ___source6_6;
	// System.IObservable`1<T7> UniRx.Operators.ZipLatestObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8::resultSelector
	ZipLatestFunc_8_t13537228185EA6EADD1988B0EA3197C9E7E3D0FA * ___resultSelector_8;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_source6_6() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA, ___source6_6)); }
	inline RuntimeObject* get_source6_6() const { return ___source6_6; }
	inline RuntimeObject** get_address_of_source6_6() { return &___source6_6; }
	inline void set_source6_6(RuntimeObject* value)
	{
		___source6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source6_6), (void*)value);
	}

	inline static int32_t get_offset_of_source7_7() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA, ___source7_7)); }
	inline RuntimeObject* get_source7_7() const { return ___source7_7; }
	inline RuntimeObject** get_address_of_source7_7() { return &___source7_7; }
	inline void set_source7_7(RuntimeObject* value)
	{
		___source7_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source7_7), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_8() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA, ___resultSelector_8)); }
	inline ZipLatestFunc_8_t13537228185EA6EADD1988B0EA3197C9E7E3D0FA * get_resultSelector_8() const { return ___resultSelector_8; }
	inline ZipLatestFunc_8_t13537228185EA6EADD1988B0EA3197C9E7E3D0FA ** get_address_of_resultSelector_8() { return &___resultSelector_8; }
	inline void set_resultSelector_8(ZipLatestFunc_8_t13537228185EA6EADD1988B0EA3197C9E7E3D0FA * value)
	{
		___resultSelector_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_8), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B  : public OperatorObservableBase_1_tB16C98CA8ACB1947DC9798221FBEED187248DFB0
{
public:
	// System.IObservable`1<T>[] UniRx.Operators.ZipObservable`1::sources
	IObservable_1U5BU5D_t07E73D53D775BAD4A57C11557731BF9696E1329B* ___sources_1;

public:
	inline static int32_t get_offset_of_sources_1() { return static_cast<int32_t>(offsetof(ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B, ___sources_1)); }
	inline IObservable_1U5BU5D_t07E73D53D775BAD4A57C11557731BF9696E1329B* get_sources_1() const { return ___sources_1; }
	inline IObservable_1U5BU5D_t07E73D53D775BAD4A57C11557731BF9696E1329B** get_address_of_sources_1() { return &___sources_1; }
	inline void set_sources_1(IObservable_1U5BU5D_t07E73D53D775BAD4A57C11557731BF9696E1329B* value)
	{
		___sources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_1), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<TLeft> UniRx.Operators.ZipObservable`3::left
	RuntimeObject* ___left_1;
	// System.IObservable`1<TRight> UniRx.Operators.ZipObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3::selector
	Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * ___selector_3;

public:
	inline static int32_t get_offset_of_left_1() { return static_cast<int32_t>(offsetof(ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838, ___left_1)); }
	inline RuntimeObject* get_left_1() const { return ___left_1; }
	inline RuntimeObject** get_address_of_left_1() { return &___left_1; }
	inline void set_left_1(RuntimeObject* value)
	{
		___left_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___left_1), (void*)value);
	}

	inline static int32_t get_offset_of_right_2() { return static_cast<int32_t>(offsetof(ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838, ___right_2)); }
	inline RuntimeObject* get_right_2() const { return ___right_2; }
	inline RuntimeObject** get_address_of_right_2() { return &___right_2; }
	inline void set_right_2(RuntimeObject* value)
	{
		___right_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___right_2), (void*)value);
	}

	inline static int32_t get_offset_of_selector_3() { return static_cast<int32_t>(offsetof(ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838, ___selector_3)); }
	inline Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * get_selector_3() const { return ___selector_3; }
	inline Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 ** get_address_of_selector_3() { return &___selector_3; }
	inline void set_selector_3(Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * value)
	{
		___selector_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_3), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`4::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`4::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4::resultSelector
	ZipFunc_4_t4B780A4E3E3227F03C8293177FBF72B8821892B5 * ___resultSelector_4;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_4() { return static_cast<int32_t>(offsetof(ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39, ___resultSelector_4)); }
	inline ZipFunc_4_t4B780A4E3E3227F03C8293177FBF72B8821892B5 * get_resultSelector_4() const { return ___resultSelector_4; }
	inline ZipFunc_4_t4B780A4E3E3227F03C8293177FBF72B8821892B5 ** get_address_of_resultSelector_4() { return &___resultSelector_4; }
	inline void set_resultSelector_4(ZipFunc_4_t4B780A4E3E3227F03C8293177FBF72B8821892B5 * value)
	{
		___resultSelector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_4), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`5::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`5::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`5::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5::resultSelector
	ZipFunc_5_t6810769B8DC572662D8E37F3281AC7BBD515DD58 * ___resultSelector_5;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_5() { return static_cast<int32_t>(offsetof(ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E, ___resultSelector_5)); }
	inline ZipFunc_5_t6810769B8DC572662D8E37F3281AC7BBD515DD58 * get_resultSelector_5() const { return ___resultSelector_5; }
	inline ZipFunc_5_t6810769B8DC572662D8E37F3281AC7BBD515DD58 ** get_address_of_resultSelector_5() { return &___resultSelector_5; }
	inline void set_resultSelector_5(ZipFunc_5_t6810769B8DC572662D8E37F3281AC7BBD515DD58 * value)
	{
		___resultSelector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_5), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`6::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`6::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`6::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`6::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6::resultSelector
	ZipFunc_6_t7250C149CD5185E4BA38D3181CA2486168DB5B5D * ___resultSelector_6;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_6() { return static_cast<int32_t>(offsetof(ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F, ___resultSelector_6)); }
	inline ZipFunc_6_t7250C149CD5185E4BA38D3181CA2486168DB5B5D * get_resultSelector_6() const { return ___resultSelector_6; }
	inline ZipFunc_6_t7250C149CD5185E4BA38D3181CA2486168DB5B5D ** get_address_of_resultSelector_6() { return &___resultSelector_6; }
	inline void set_resultSelector_6(ZipFunc_6_t7250C149CD5185E4BA38D3181CA2486168DB5B5D * value)
	{
		___resultSelector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_6), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`7::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`7::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`7::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`7::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`7::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7::resultSelector
	ZipFunc_7_tBB54AA43BF40FE0253BFDAC4BDF85E326C54E204 * ___resultSelector_7;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_source6_6() { return static_cast<int32_t>(offsetof(ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448, ___source6_6)); }
	inline RuntimeObject* get_source6_6() const { return ___source6_6; }
	inline RuntimeObject** get_address_of_source6_6() { return &___source6_6; }
	inline void set_source6_6(RuntimeObject* value)
	{
		___source6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source6_6), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_7() { return static_cast<int32_t>(offsetof(ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448, ___resultSelector_7)); }
	inline ZipFunc_7_tBB54AA43BF40FE0253BFDAC4BDF85E326C54E204 * get_resultSelector_7() const { return ___resultSelector_7; }
	inline ZipFunc_7_tBB54AA43BF40FE0253BFDAC4BDF85E326C54E204 ** get_address_of_resultSelector_7() { return &___resultSelector_7; }
	inline void set_resultSelector_7(ZipFunc_7_tBB54AA43BF40FE0253BFDAC4BDF85E326C54E204 * value)
	{
		___resultSelector_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_7), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F  : public OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC
{
public:
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`8::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`8::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`8::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`8::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`8::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`8::source6
	RuntimeObject* ___source6_6;
	// System.IObservable`1<T7> UniRx.Operators.ZipObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8::resultSelector
	ZipFunc_8_t173B6DEFAA5D7C80F7FF82A5B4EB6961D0D35D03 * ___resultSelector_8;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_source6_6() { return static_cast<int32_t>(offsetof(ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F, ___source6_6)); }
	inline RuntimeObject* get_source6_6() const { return ___source6_6; }
	inline RuntimeObject** get_address_of_source6_6() { return &___source6_6; }
	inline void set_source6_6(RuntimeObject* value)
	{
		___source6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source6_6), (void*)value);
	}

	inline static int32_t get_offset_of_source7_7() { return static_cast<int32_t>(offsetof(ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F, ___source7_7)); }
	inline RuntimeObject* get_source7_7() const { return ___source7_7; }
	inline RuntimeObject** get_address_of_source7_7() { return &___source7_7; }
	inline void set_source7_7(RuntimeObject* value)
	{
		___source7_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source7_7), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_8() { return static_cast<int32_t>(offsetof(ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F, ___resultSelector_8)); }
	inline ZipFunc_8_t173B6DEFAA5D7C80F7FF82A5B4EB6961D0D35D03 * get_resultSelector_8() const { return ___resultSelector_8; }
	inline ZipFunc_8_t173B6DEFAA5D7C80F7FF82A5B4EB6961D0D35D03 ** get_address_of_resultSelector_8() { return &___resultSelector_8; }
	inline void set_resultSelector_8(ZipFunc_8_t173B6DEFAA5D7C80F7FF82A5B4EB6961D0D35D03 * value)
	{
		___resultSelector_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_8), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>
struct Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1  : public NthZipObserverBase_1_t656950E06BB2693C561C7D731C13A93A99EAE677
{
public:
	// UniRx.Operators.ZipObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4/Zip::parent
	ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`4/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`4/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`4/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`4/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1, ___parent_5)); }
	inline ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808  : public NthZipObserverBase_1_t656950E06BB2693C561C7D731C13A93A99EAE677
{
public:
	// UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5/Zip::parent
	ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`5/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`5/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`5/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`5/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`5/Zip::q4
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q4_10;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808, ___parent_5)); }
	inline ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}

	inline static int32_t get_offset_of_q4_10() { return static_cast<int32_t>(offsetof(Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808, ___q4_10)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q4_10() const { return ___q4_10; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q4_10() { return &___q4_10; }
	inline void set_q4_10(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q4_10), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09  : public NthZipObserverBase_1_t656950E06BB2693C561C7D731C13A93A99EAE677
{
public:
	// UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6/Zip::parent
	ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`6/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`6/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`6/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`6/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`6/Zip::q4
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`6/Zip::q5
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q5_11;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09, ___parent_5)); }
	inline ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}

	inline static int32_t get_offset_of_q4_10() { return static_cast<int32_t>(offsetof(Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09, ___q4_10)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q4_10() const { return ___q4_10; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q4_10() { return &___q4_10; }
	inline void set_q4_10(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q4_10), (void*)value);
	}

	inline static int32_t get_offset_of_q5_11() { return static_cast<int32_t>(offsetof(Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09, ___q5_11)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q5_11() const { return ___q5_11; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q5_11() { return &___q5_11; }
	inline void set_q5_11(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q5_11), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75  : public NthZipObserverBase_1_t656950E06BB2693C561C7D731C13A93A99EAE677
{
public:
	// UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7/Zip::parent
	ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`7/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`7/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`7/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`7/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`7/Zip::q4
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`7/Zip::q5
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`7/Zip::q6
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q6_12;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75, ___parent_5)); }
	inline ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}

	inline static int32_t get_offset_of_q4_10() { return static_cast<int32_t>(offsetof(Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75, ___q4_10)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q4_10() const { return ___q4_10; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q4_10() { return &___q4_10; }
	inline void set_q4_10(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q4_10), (void*)value);
	}

	inline static int32_t get_offset_of_q5_11() { return static_cast<int32_t>(offsetof(Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75, ___q5_11)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q5_11() const { return ___q5_11; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q5_11() { return &___q5_11; }
	inline void set_q5_11(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q5_11), (void*)value);
	}

	inline static int32_t get_offset_of_q6_12() { return static_cast<int32_t>(offsetof(Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75, ___q6_12)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q6_12() const { return ___q6_12; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q6_12() { return &___q6_12; }
	inline void set_q6_12(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q6_12), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_tFE288625F1A712CC45FAE011730910DD457970CC  : public NthZipObserverBase_1_t656950E06BB2693C561C7D731C13A93A99EAE677
{
public:
	// UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8/Zip::parent
	ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`8/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`8/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`8/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`8/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`8/Zip::q4
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`8/Zip::q5
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`8/Zip::q6
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q6_12;
	// System.Collections.Generic.Queue`1<T7> UniRx.Operators.ZipObservable`8/Zip::q7
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q7_13;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_tFE288625F1A712CC45FAE011730910DD457970CC, ___parent_5)); }
	inline ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_tFE288625F1A712CC45FAE011730910DD457970CC, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_tFE288625F1A712CC45FAE011730910DD457970CC, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_tFE288625F1A712CC45FAE011730910DD457970CC, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_tFE288625F1A712CC45FAE011730910DD457970CC, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}

	inline static int32_t get_offset_of_q4_10() { return static_cast<int32_t>(offsetof(Zip_tFE288625F1A712CC45FAE011730910DD457970CC, ___q4_10)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q4_10() const { return ___q4_10; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q4_10() { return &___q4_10; }
	inline void set_q4_10(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q4_10), (void*)value);
	}

	inline static int32_t get_offset_of_q5_11() { return static_cast<int32_t>(offsetof(Zip_tFE288625F1A712CC45FAE011730910DD457970CC, ___q5_11)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q5_11() const { return ___q5_11; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q5_11() { return &___q5_11; }
	inline void set_q5_11(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q5_11), (void*)value);
	}

	inline static int32_t get_offset_of_q6_12() { return static_cast<int32_t>(offsetof(Zip_tFE288625F1A712CC45FAE011730910DD457970CC, ___q6_12)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q6_12() const { return ___q6_12; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q6_12() { return &___q6_12; }
	inline void set_q6_12(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q6_12), (void*)value);
	}

	inline static int32_t get_offset_of_q7_13() { return static_cast<int32_t>(offsetof(Zip_tFE288625F1A712CC45FAE011730910DD457970CC, ___q7_13)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q7_13() const { return ___q7_13; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q7_13() { return &___q7_13; }
	inline void set_q7_13(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q7_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q7_13), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61  : public NthZipLatestObserverBase_1_t2976FC9EF30CE751E0C203A114D8695E217B3F3D
{
public:
	// UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5/ZipLatest::parent
	ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`5/ZipLatest::gate
	RuntimeObject * ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c1
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c2
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c3
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c4
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c4_10;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61, ___parent_5)); }
	inline ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * get_parent_5() const { return ___parent_5; }
	inline ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_c1_7() { return static_cast<int32_t>(offsetof(ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61, ___c1_7)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c1_7() const { return ___c1_7; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c1_7() { return &___c1_7; }
	inline void set_c1_7(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c1_7), (void*)value);
	}

	inline static int32_t get_offset_of_c2_8() { return static_cast<int32_t>(offsetof(ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61, ___c2_8)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c2_8() const { return ___c2_8; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c2_8() { return &___c2_8; }
	inline void set_c2_8(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c2_8), (void*)value);
	}

	inline static int32_t get_offset_of_c3_9() { return static_cast<int32_t>(offsetof(ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61, ___c3_9)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c3_9() const { return ___c3_9; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c3_9() { return &___c3_9; }
	inline void set_c3_9(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c3_9), (void*)value);
	}

	inline static int32_t get_offset_of_c4_10() { return static_cast<int32_t>(offsetof(ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61, ___c4_10)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c4_10() const { return ___c4_10; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c4_10() { return &___c4_10; }
	inline void set_c4_10(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c4_10), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565  : public NthZipLatestObserverBase_1_t2976FC9EF30CE751E0C203A114D8695E217B3F3D
{
public:
	// UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6/ZipLatest::parent
	ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`6/ZipLatest::gate
	RuntimeObject * ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c1
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c2
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c3
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c4
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c5
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c5_11;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565, ___parent_5)); }
	inline ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * get_parent_5() const { return ___parent_5; }
	inline ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_c1_7() { return static_cast<int32_t>(offsetof(ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565, ___c1_7)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c1_7() const { return ___c1_7; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c1_7() { return &___c1_7; }
	inline void set_c1_7(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c1_7), (void*)value);
	}

	inline static int32_t get_offset_of_c2_8() { return static_cast<int32_t>(offsetof(ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565, ___c2_8)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c2_8() const { return ___c2_8; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c2_8() { return &___c2_8; }
	inline void set_c2_8(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c2_8), (void*)value);
	}

	inline static int32_t get_offset_of_c3_9() { return static_cast<int32_t>(offsetof(ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565, ___c3_9)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c3_9() const { return ___c3_9; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c3_9() { return &___c3_9; }
	inline void set_c3_9(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c3_9), (void*)value);
	}

	inline static int32_t get_offset_of_c4_10() { return static_cast<int32_t>(offsetof(ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565, ___c4_10)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c4_10() const { return ___c4_10; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c4_10() { return &___c4_10; }
	inline void set_c4_10(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c4_10), (void*)value);
	}

	inline static int32_t get_offset_of_c5_11() { return static_cast<int32_t>(offsetof(ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565, ___c5_11)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c5_11() const { return ___c5_11; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c5_11() { return &___c5_11; }
	inline void set_c5_11(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c5_11), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37  : public NthZipLatestObserverBase_1_t2976FC9EF30CE751E0C203A114D8695E217B3F3D
{
public:
	// UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7/ZipLatest::parent
	ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`7/ZipLatest::gate
	RuntimeObject * ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c1
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c2
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c3
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c4
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c5
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c6
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c6_12;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37, ___parent_5)); }
	inline ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * get_parent_5() const { return ___parent_5; }
	inline ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_c1_7() { return static_cast<int32_t>(offsetof(ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37, ___c1_7)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c1_7() const { return ___c1_7; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c1_7() { return &___c1_7; }
	inline void set_c1_7(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c1_7), (void*)value);
	}

	inline static int32_t get_offset_of_c2_8() { return static_cast<int32_t>(offsetof(ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37, ___c2_8)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c2_8() const { return ___c2_8; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c2_8() { return &___c2_8; }
	inline void set_c2_8(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c2_8), (void*)value);
	}

	inline static int32_t get_offset_of_c3_9() { return static_cast<int32_t>(offsetof(ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37, ___c3_9)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c3_9() const { return ___c3_9; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c3_9() { return &___c3_9; }
	inline void set_c3_9(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c3_9), (void*)value);
	}

	inline static int32_t get_offset_of_c4_10() { return static_cast<int32_t>(offsetof(ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37, ___c4_10)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c4_10() const { return ___c4_10; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c4_10() { return &___c4_10; }
	inline void set_c4_10(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c4_10), (void*)value);
	}

	inline static int32_t get_offset_of_c5_11() { return static_cast<int32_t>(offsetof(ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37, ___c5_11)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c5_11() const { return ___c5_11; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c5_11() { return &___c5_11; }
	inline void set_c5_11(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c5_11), (void*)value);
	}

	inline static int32_t get_offset_of_c6_12() { return static_cast<int32_t>(offsetof(ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37, ___c6_12)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c6_12() const { return ___c6_12; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c6_12() { return &___c6_12; }
	inline void set_c6_12(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c6_12), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821  : public NthZipLatestObserverBase_1_t2976FC9EF30CE751E0C203A114D8695E217B3F3D
{
public:
	// UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8/ZipLatest::parent
	ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`8/ZipLatest::gate
	RuntimeObject * ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c1
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c2
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c3
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c4
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c5
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c6
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c6_12;
	// UniRx.Operators.ZipLatestObserver`1<T7> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c7
	ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * ___c7_13;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821, ___parent_5)); }
	inline ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * get_parent_5() const { return ___parent_5; }
	inline ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_c1_7() { return static_cast<int32_t>(offsetof(ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821, ___c1_7)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c1_7() const { return ___c1_7; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c1_7() { return &___c1_7; }
	inline void set_c1_7(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c1_7), (void*)value);
	}

	inline static int32_t get_offset_of_c2_8() { return static_cast<int32_t>(offsetof(ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821, ___c2_8)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c2_8() const { return ___c2_8; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c2_8() { return &___c2_8; }
	inline void set_c2_8(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c2_8), (void*)value);
	}

	inline static int32_t get_offset_of_c3_9() { return static_cast<int32_t>(offsetof(ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821, ___c3_9)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c3_9() const { return ___c3_9; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c3_9() { return &___c3_9; }
	inline void set_c3_9(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c3_9), (void*)value);
	}

	inline static int32_t get_offset_of_c4_10() { return static_cast<int32_t>(offsetof(ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821, ___c4_10)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c4_10() const { return ___c4_10; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c4_10() { return &___c4_10; }
	inline void set_c4_10(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c4_10), (void*)value);
	}

	inline static int32_t get_offset_of_c5_11() { return static_cast<int32_t>(offsetof(ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821, ___c5_11)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c5_11() const { return ___c5_11; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c5_11() { return &___c5_11; }
	inline void set_c5_11(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c5_11), (void*)value);
	}

	inline static int32_t get_offset_of_c6_12() { return static_cast<int32_t>(offsetof(ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821, ___c6_12)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c6_12() const { return ___c6_12; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c6_12() { return &___c6_12; }
	inline void set_c6_12(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c6_12), (void*)value);
	}

	inline static int32_t get_offset_of_c7_13() { return static_cast<int32_t>(offsetof(ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821, ___c7_13)); }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * get_c7_13() const { return ___c7_13; }
	inline ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 ** get_address_of_c7_13() { return &___c7_13; }
	inline void set_c7_13(ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * value)
	{
		___c7_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c7_13), (void*)value);
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
struct Exception_t  : public RuntimeObject
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

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_t4B780A4E3E3227F03C8293177FBF72B8821892B5  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_t6810769B8DC572662D8E37F3281AC7BBD515DD58  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t7250C149CD5185E4BA38D3181CA2486168DB5B5D  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_tBB54AA43BF40FE0253BFDAC4BDF85E326C54E204  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_t173B6DEFAA5D7C80F7FF82A5B4EB6961D0D35D03  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t8CB24E5B43B4C1CC44453A08ECFF76CF98C95C90  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_tE751D6A3F172D070978A746E5B49C8DE35B2329F  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_t26DD573480A9A11CA833BAC7F7CDC9C25387C606  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_t13537228185EA6EADD1988B0EA3197C9E7E3D0FA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t07E73D53D775BAD4A57C11557731BF9696E1329B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * m_Items[1];

public:
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_5__ctor_m809B5845629EE902FED8517B016E1F82E76E657A_gshared (ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, ZipLatestFunc_5_t8CB24E5B43B4C1CC44453A08ECFF76CF98C95C90 * ___resultSelector4, const RuntimeMethod* method)
{
	ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * G_B4_0 = NULL;
	ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * G_B1_0 = NULL;
	ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * G_B2_0 = NULL;
	ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *)(__this));
		if (L_1)
		{
			G_B4_0 = ((ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *)(__this));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *)(G_B1_0));
		if (L_3)
		{
			G_B4_0 = ((ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *)(G_B1_0));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *)(G_B2_0));
		if (L_5)
		{
			G_B4_0 = ((ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *)(G_B2_0));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = ((ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *)(G_B3_0));
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = ((ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *)(G_B4_0));
	}

IL_0023:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B5_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B5_1, (bool)G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___source10;
		__this->set_source1_1(L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___source21;
		__this->set_source2_2(L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___source32;
		__this->set_source3_3(L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___source43;
		__this->set_source4_4(L_11);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_5_t8CB24E5B43B4C1CC44453A08ECFF76CF98C95C90 * L_12 = ___resultSelector4;
		__this->set_resultSelector_5(L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_5_SubscribeCore_m4BCA9D795873F87F210250DF54E2196DE7CBF9C3_gshared (ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(4, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61 * L_2 = (ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61 *, int32_t, ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_2, (int32_t)4, (ZipLatestObservable_5_tA377A73DC51F9D3F11AC153C320291FD079D7C7D *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ZipLatest_t553DC9783A4F6DD38E71DA28E72FCE44B1E6CE61 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_6__ctor_m31079A5BA4EAB1CAAA568E65E192CC743A451A75_gshared (ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, ZipLatestFunc_6_tE751D6A3F172D070978A746E5B49C8DE35B2329F * ___resultSelector5, const RuntimeMethod* method)
{
	ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * G_B5_0 = NULL;
	ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * G_B1_0 = NULL;
	ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * G_B2_0 = NULL;
	ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * G_B3_0 = NULL;
	ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(__this));
		if (L_1)
		{
			G_B5_0 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(__this));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(G_B1_0));
		if (L_3)
		{
			G_B5_0 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(G_B1_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(G_B2_0));
		if (L_5)
		{
			G_B5_0 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(G_B2_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(G_B3_0));
		if (L_7)
		{
			G_B5_0 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(G_B3_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(G_B4_0));
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = ((ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)(G_B5_0));
	}

IL_002c:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B6_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B6_1, (bool)G_B6_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___source10;
		__this->set_source1_1(L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___source21;
		__this->set_source2_2(L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___source32;
		__this->set_source3_3(L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___source43;
		__this->set_source4_4(L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___source54;
		__this->set_source5_5(L_14);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_6_tE751D6A3F172D070978A746E5B49C8DE35B2329F * L_15 = ___resultSelector5;
		__this->set_resultSelector_6(L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_6_SubscribeCore_m365E70A741B30117DADF8ABA985C7DADE3F7B27B_gshared (ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(5, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565 * L_2 = (ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565 *, int32_t, ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_2, (int32_t)5, (ZipLatestObservable_6_tAD1A02D818E20E691F7D2D61B9CE4A320771E645 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((ZipLatest_t4A460D47B0F39AFCA0CDB0EBF82A850A4F91F565 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_7__ctor_m42911EDEE63CA6685844F8FD07B9D0E71444EC92_gshared (ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, ZipLatestFunc_7_t26DD573480A9A11CA833BAC7F7CDC9C25387C606 * ___resultSelector6, const RuntimeMethod* method)
{
	ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * G_B6_0 = NULL;
	ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * G_B1_0 = NULL;
	ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * G_B2_0 = NULL;
	ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * G_B3_0 = NULL;
	ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * G_B4_0 = NULL;
	ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(__this));
		if (L_1)
		{
			G_B6_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(__this));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B1_0));
		if (L_3)
		{
			G_B6_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B1_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B2_0));
		if (L_5)
		{
			G_B6_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B2_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B3_0));
		if (L_7)
		{
			G_B6_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B3_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B4_0));
		if (L_9)
		{
			G_B6_0 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B4_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B5_0));
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = ((ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)(G_B6_0));
	}

IL_0035:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B7_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B7_1, (bool)G_B7_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___source10;
		__this->set_source1_1(L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___source21;
		__this->set_source2_2(L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___source32;
		__this->set_source3_3(L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___source43;
		__this->set_source4_4(L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___source54;
		__this->set_source5_5(L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___source65;
		__this->set_source6_6(L_17);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_7_t26DD573480A9A11CA833BAC7F7CDC9C25387C606 * L_18 = ___resultSelector6;
		__this->set_resultSelector_7(L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_7_SubscribeCore_m0B7FEC877161E541632E5D96A27E10127C9C48FD_gshared (ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(6, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37 * L_2 = (ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		((  void (*) (ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37 *, int32_t, ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)(L_2, (int32_t)6, (ZipLatestObservable_7_tD0ED12A808A02226198628FC3969FDEA48DB8932 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((ZipLatest_t111921563CCB0CE5C57BD84F4E1C1824C1B17E37 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,System.IObservable`1<T7>,UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_8__ctor_mDAFDBEE183079C4F04B2568FE79DE621A2AD6F83_gshared (ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, RuntimeObject* ___source76, ZipLatestFunc_8_t13537228185EA6EADD1988B0EA3197C9E7E3D0FA * ___resultSelector7, const RuntimeMethod* method)
{
	ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * G_B7_0 = NULL;
	ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * G_B1_0 = NULL;
	ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * G_B2_0 = NULL;
	ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * G_B3_0 = NULL;
	ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * G_B4_0 = NULL;
	ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * G_B5_0 = NULL;
	ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(__this));
		if (L_1)
		{
			G_B7_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(__this));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B1_0));
		if (L_3)
		{
			G_B7_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B1_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B2_0));
		if (L_5)
		{
			G_B7_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B2_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B3_0));
		if (L_7)
		{
			G_B7_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B3_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B4_0));
		if (L_9)
		{
			G_B7_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B4_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B6_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B5_0));
		if (L_11)
		{
			G_B7_0 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B5_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___source76;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((RuntimeObject*)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B6_0));
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = ((ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)(G_B7_0));
	}

IL_003e:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B8_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B8_1, (bool)G_B8_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___source10;
		__this->set_source1_1(L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___source21;
		__this->set_source2_2(L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___source32;
		__this->set_source3_3(L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___source43;
		__this->set_source4_4(L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___source54;
		__this->set_source5_5(L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___source65;
		__this->set_source6_6(L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___source76;
		__this->set_source7_7(L_20);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_8_t13537228185EA6EADD1988B0EA3197C9E7E3D0FA * L_21 = ___resultSelector7;
		__this->set_resultSelector_8(L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_8_SubscribeCore_mB4F6AE126F214CA5B25861C1D724B7B805DB7AA2_gshared (ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(7, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821 * L_2 = (ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821 *, int32_t, ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_2, (int32_t)7, (ZipLatestObservable_8_tAED1BAAD7CB2BD494C44C09AC6133DD6352E20FA *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ZipLatest_tC16EBF24E6795A25500F945A86CE14F7BB46C821 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`1/ZipLatest<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver__ctor_m3923D31D31FE8C57CAAF8B360B6CF498AD23588B_gshared (ZipLatestObserver_t1916CBEFD17AA1674F927430EF42C7EAEB835507 * __this, ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * ___parent0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// public ZipLatestObserver(ZipLatest parent, int index)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.parent = parent;
		ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		// this.index = index;
		int32_t L_1 = ___index1;
		__this->set_index_1(L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnNext_m9032E98A3C43FCC442C0B284E20F30B7C76949E7_gshared (ZipLatestObserver_t1916CBEFD17AA1674F927430EF42C7EAEB835507 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_0 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.values[index] = value;
		ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_3 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
		NullCheck(L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3->get_values_5();
		int32_t L_5 = (int32_t)__this->get_index_1();
		RuntimeObject * L_6 = ___value0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)L_6);
		// parent.Publish(index);
		ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_7 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
		int32_t L_8 = (int32_t)__this->get_index_1();
		NullCheck((ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)L_7);
		((  void (*) (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		IL2CPP_LEAVE(0x4A, FINALLY_0040);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_0049;
			}
		}

IL_0043:
		{
			RuntimeObject * L_10 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_10, /*hidden argument*/NULL);
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnError_mC40D8D9EACDE9536FE25A5BC39305C45230205D4_gshared (ZipLatestObserver_t1916CBEFD17AA1674F927430EF42C7EAEB835507 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_0 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.OnError(ex);
		ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_3 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
		Exception_t * L_4 = ___ex0;
		NullCheck((OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6 *)L_3);
		VirtActionInvoker1< Exception_t * >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6 *)L_3, (Exception_t *)L_4);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_6, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnCompleted_m8491BE57378CBB995DDD502B8C16E089DCBA717C_gshared (ZipLatestObserver_t1916CBEFD17AA1674F927430EF42C7EAEB835507 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_0 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
			// parent.isCompleted[index] = true;
			ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_3 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
			NullCheck(L_3);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_3->get_isCompleted_7();
			int32_t L_5 = (int32_t)__this->get_index_1();
			NullCheck(L_4);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (bool)1);
			// var allTrue = true;
			V_2 = (bool)1;
			// for (int i = 0; i < parent.length; i++)
			V_3 = (int32_t)0;
			goto IL_0046;
		}

IL_002f:
		{
			// if (!parent.isCompleted[i])
			ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_6 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
			NullCheck(L_6);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_7 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_6->get_isCompleted_7();
			int32_t L_8 = V_3;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			uint8_t L_10 = (uint8_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			if (L_10)
			{
				goto IL_0042;
			}
		}

IL_003e:
		{
			// allTrue = false;
			V_2 = (bool)0;
			// break;
			goto IL_0054;
		}

IL_0042:
		{
			// for (int i = 0; i < parent.length; i++)
			int32_t L_11 = V_3;
			V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		}

IL_0046:
		{
			// for (int i = 0; i < parent.length; i++)
			int32_t L_12 = V_3;
			ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_13 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
			NullCheck(L_13);
			int32_t L_14 = (int32_t)L_13->get_length_4();
			if ((((int32_t)L_12) < ((int32_t)L_14)))
			{
				goto IL_002f;
			}
		}

IL_0054:
		{
			// if (allTrue)
			bool L_15 = V_2;
			if (!L_15)
			{
				goto IL_0062;
			}
		}

IL_0057:
		{
			// parent.OnCompleted();
			ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 * L_16 = (ZipLatest_tC9AD74780C01C91D1C079A8B1614C64BB80090C8 *)__this->get_parent_0();
			NullCheck((OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6 *)L_16);
			VirtActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6 *)L_16);
		}

IL_0062:
		{
			// }
			IL2CPP_LEAVE(0x6E, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_006d;
			}
		}

IL_0067:
		{
			RuntimeObject * L_18 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_18, /*hidden argument*/NULL);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(100)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
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
// T UniRx.Operators.ZipLatestObserver`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestObserver_1_get_Value_mD4D08438B458AEE81298D23D615D4D6763BAC1B3_gshared (ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * __this, const RuntimeMethod* method)
{
	{
		// public T Value { get { return value; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_3();
		return (RuntimeObject *)L_0;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipLatestObservable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1__ctor_mE08704AC5FDC58B16520BE2A22CE3EFD47A3038F_gshared (ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * __this, RuntimeObject * ___gate0, RuntimeObject* ___parent1, int32_t ___index2, const RuntimeMethod* method)
{
	{
		// public ZipLatestObserver(object gate, IZipLatestObservable parent, int index)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.gate = gate;
		RuntimeObject * L_0 = ___gate0;
		__this->set_gate_0(L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___parent1;
		__this->set_parent_1(L_1);
		// this.index = index;
		int32_t L_2 = ___index2;
		__this->set_index_2(L_2);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnNext_mA09C2EBC63D9C912D25DFC72BD868D15064C583A_gshared (ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_tBC8E6DF6D33AD1BE66C2DD85334B17F8993603F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// this.value = value;
		RuntimeObject * L_2 = ___value0;
		__this->set_value_3(L_2);
		// parent.Publish(index);
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_parent_1();
		int32_t L_4 = (int32_t)__this->get_index_2();
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipLatestObservable::Publish(System.Int32) */, IZipLatestObservable_tBC8E6DF6D33AD1BE66C2DD85334B17F8993603F7_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (int32_t)L_4);
		// }
		IL2CPP_LEAVE(0x35, FINALLY_002b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_6, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x35, IL_0035)
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnError_mC4873B44B318D8F81C20FBD7D2856F6D01556415_gshared (ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_tBC8E6DF6D33AD1BE66C2DD85334B17F8993603F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.Fail(error);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_parent_1();
		Exception_t * L_3 = ___error0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.Operators.IZipLatestObservable::Fail(System.Exception) */, IZipLatestObservable_tBC8E6DF6D33AD1BE66C2DD85334B17F8993603F7_il2cpp_TypeInfo_var, (RuntimeObject*)L_2, (Exception_t *)L_3);
		// }
		IL2CPP_LEAVE(0x29, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0022:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_5, /*hidden argument*/NULL);
		}

IL_0028:
		{
			IL2CPP_END_FINALLY(31)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x29, IL_0029)
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnCompleted_m03112B32B92F0EA008AABD5AA38B40CFC5D64CB0_gshared (ZipLatestObserver_1_tD21F0AF6C14B3D61C4EB1187F718ECE4919EA4C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_tBC8E6DF6D33AD1BE66C2DD85334B17F8993603F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.Done(index);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_parent_1();
		int32_t L_3 = (int32_t)__this->get_index_2();
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipLatestObservable::Done(System.Int32) */, IZipLatestObservable_tBC8E6DF6D33AD1BE66C2DD85334B17F8993603F7_il2cpp_TypeInfo_var, (RuntimeObject*)L_2, (int32_t)L_3);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
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
// System.Void UniRx.Operators.ZipObservable`1<System.Object>::.ctor(System.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_1__ctor_m9D6C75C40293BA45ABC0D90C787D4BCDFAD46AD8_gshared (ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B * __this, IObservable_1U5BU5D_t07E73D53D775BAD4A57C11557731BF9696E1329B* ___sources0, const RuntimeMethod* method)
{
	{
		// : base(true)
		NullCheck((OperatorObservableBase_1_tB16C98CA8ACB1947DC9798221FBEED187248DFB0 *)__this);
		((  void (*) (OperatorObservableBase_1_tB16C98CA8ACB1947DC9798221FBEED187248DFB0 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((OperatorObservableBase_1_tB16C98CA8ACB1947DC9798221FBEED187248DFB0 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_t07E73D53D775BAD4A57C11557731BF9696E1329B* L_0 = ___sources0;
		__this->set_sources_1(L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1<System.Object>::SubscribeCore(System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_1_SubscribeCore_mD1B3D40E7462A09ED4C1F15E44AF24137681D6F2_gshared (ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_2 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *, ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ZipObservable_1_t8CC7A74801A18C6583DA46C75FFD98751124EA0B *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<TLeft>,System.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_3__ctor_m61C1090CEC69CCAB97AD5D1BEA71780295C7D063_gshared (ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 * __this, RuntimeObject* ___left0, RuntimeObject* ___right1, Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * ___selector2, const RuntimeMethod* method)
{
	ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 * G_B2_0 = NULL;
	ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 * G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 *)(__this));
		if (L_1)
		{
			G_B2_0 = ((ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 *)(__this));
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___right1;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = ((ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 *)(G_B1_0));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = ((ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 *)(G_B2_0));
	}

IL_0012:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B3_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B3_1, (bool)G_B3_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___left0;
		__this->set_left_1(L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___right1;
		__this->set_right_2(L_5);
		// this.selector = selector;
		Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * L_6 = ___selector2;
		__this->set_selector_3(L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_3_SubscribeCore_mAFD750D908F33DF87B2909FD1FBE76C578304D65_gshared (ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93 * L_2 = (Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93 *, ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (ZipObservable_3_t57798890D55C28E038157219D559DECF100EA838 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Zip_t5C91F64363B347FDB8BA7A83B4D6B0F2AF6B1F93 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,UniRx.Operators.ZipFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_4__ctor_mC14F119281BB720EEE602C4C45F087EC23C52973_gshared (ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, ZipFunc_4_t4B780A4E3E3227F03C8293177FBF72B8821892B5 * ___resultSelector3, const RuntimeMethod* method)
{
	ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 * G_B3_0 = NULL;
	ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 * G_B1_0 = NULL;
	ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 * G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 *)(__this));
		if (L_1)
		{
			G_B3_0 = ((ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 *)(__this));
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 *)(G_B1_0));
		if (L_3)
		{
			G_B3_0 = ((ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 *)(G_B1_0));
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = ((ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 *)(G_B2_0));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = ((ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 *)(G_B3_0));
	}

IL_001a:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B4_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B4_1, (bool)G_B4_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___source10;
		__this->set_source1_1(L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___source21;
		__this->set_source2_2(L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___source32;
		__this->set_source3_3(L_8);
		// this.resultSelector = resultSelector;
		ZipFunc_4_t4B780A4E3E3227F03C8293177FBF72B8821892B5 * L_9 = ___resultSelector3;
		__this->set_resultSelector_4(L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_4_SubscribeCore_m6AB89F8F2444D84C41D412DFD9AF7EB449447651_gshared (ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1 * L_2 = (Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1 *, ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_2, (ZipObservable_4_tE93E0031101E455B39DC31B0CCE00B6B4D04CF39 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Zip_tED54EE240B89141B5CF984AF0CFECC124CB544B1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_5__ctor_m9DA3A3F0C3402CB9CD2FA622A0542EDAD0A5F0A5_gshared (ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, ZipFunc_5_t6810769B8DC572662D8E37F3281AC7BBD515DD58 * ___resultSelector4, const RuntimeMethod* method)
{
	ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * G_B4_0 = NULL;
	ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * G_B1_0 = NULL;
	ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * G_B2_0 = NULL;
	ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *)(__this));
		if (L_1)
		{
			G_B4_0 = ((ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *)(__this));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *)(G_B1_0));
		if (L_3)
		{
			G_B4_0 = ((ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *)(G_B1_0));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *)(G_B2_0));
		if (L_5)
		{
			G_B4_0 = ((ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *)(G_B2_0));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = ((ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *)(G_B3_0));
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = ((ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *)(G_B4_0));
	}

IL_0023:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B5_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B5_1, (bool)G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___source10;
		__this->set_source1_1(L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___source21;
		__this->set_source2_2(L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___source32;
		__this->set_source3_3(L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___source43;
		__this->set_source4_4(L_11);
		// this.resultSelector = resultSelector;
		ZipFunc_5_t6810769B8DC572662D8E37F3281AC7BBD515DD58 * L_12 = ___resultSelector4;
		__this->set_resultSelector_5(L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_5_SubscribeCore_mB96D89F23F0902CBEFE97D454C0ED421EA97DB27_gshared (ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808 * L_2 = (Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808 *, ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_2, (ZipObservable_5_t2A40328BCEC065DF450DC77DCEC89E958D6B7E4E *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Zip_tF02E06D3B3119CFA336CB8161E20625BD1B9B808 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_6__ctor_m00842DBBFE00C9D15B14050F6718BDEEDE3BD993_gshared (ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, ZipFunc_6_t7250C149CD5185E4BA38D3181CA2486168DB5B5D * ___resultSelector5, const RuntimeMethod* method)
{
	ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * G_B5_0 = NULL;
	ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * G_B1_0 = NULL;
	ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * G_B2_0 = NULL;
	ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * G_B3_0 = NULL;
	ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(__this));
		if (L_1)
		{
			G_B5_0 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(__this));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(G_B1_0));
		if (L_3)
		{
			G_B5_0 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(G_B1_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(G_B2_0));
		if (L_5)
		{
			G_B5_0 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(G_B2_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(G_B3_0));
		if (L_7)
		{
			G_B5_0 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(G_B3_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(G_B4_0));
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = ((ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)(G_B5_0));
	}

IL_002c:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B6_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B6_1, (bool)G_B6_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___source10;
		__this->set_source1_1(L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___source21;
		__this->set_source2_2(L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___source32;
		__this->set_source3_3(L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___source43;
		__this->set_source4_4(L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___source54;
		__this->set_source5_5(L_14);
		// this.resultSelector = resultSelector;
		ZipFunc_6_t7250C149CD5185E4BA38D3181CA2486168DB5B5D * L_15 = ___resultSelector5;
		__this->set_resultSelector_6(L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_6_SubscribeCore_mDCDF80289543E5E7BBFA13A4E6448B82AE6485F4_gshared (ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09 * L_2 = (Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09 *, ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_2, (ZipObservable_6_tBF86697DD3953A3DD0A434236BB9C88C4E9D7B9F *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Zip_t96405C8E05749FA122A94D520E5BE654EB0EBB09 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_7__ctor_mD3818E28DB404D74530F55F7909C787E594AF80F_gshared (ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, ZipFunc_7_tBB54AA43BF40FE0253BFDAC4BDF85E326C54E204 * ___resultSelector6, const RuntimeMethod* method)
{
	ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * G_B6_0 = NULL;
	ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * G_B1_0 = NULL;
	ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * G_B2_0 = NULL;
	ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * G_B3_0 = NULL;
	ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * G_B4_0 = NULL;
	ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(__this));
		if (L_1)
		{
			G_B6_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(__this));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B1_0));
		if (L_3)
		{
			G_B6_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B1_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B2_0));
		if (L_5)
		{
			G_B6_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B2_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B3_0));
		if (L_7)
		{
			G_B6_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B3_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B4_0));
		if (L_9)
		{
			G_B6_0 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B4_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B5_0));
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = ((ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)(G_B6_0));
	}

IL_0035:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B7_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B7_1, (bool)G_B7_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___source10;
		__this->set_source1_1(L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___source21;
		__this->set_source2_2(L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___source32;
		__this->set_source3_3(L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___source43;
		__this->set_source4_4(L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___source54;
		__this->set_source5_5(L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___source65;
		__this->set_source6_6(L_17);
		// this.resultSelector = resultSelector;
		ZipFunc_7_tBB54AA43BF40FE0253BFDAC4BDF85E326C54E204 * L_18 = ___resultSelector6;
		__this->set_resultSelector_7(L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_7_SubscribeCore_m0FAC8D9C640BA3CC4462A03A8DF9243A88F4E847_gshared (ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75 * L_2 = (Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		((  void (*) (Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75 *, ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)(L_2, (ZipObservable_7_t92F365143A130D8936F70D60E066639EA351D448 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((Zip_tEAEA8E210160ED4E501914F7B6508B9752B7CE75 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,System.IObservable`1<T7>,UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_8__ctor_m777F3967A3A377923697EE36AF8728A672CCAFC6_gshared (ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, RuntimeObject* ___source76, ZipFunc_8_t173B6DEFAA5D7C80F7FF82A5B4EB6961D0D35D03 * ___resultSelector7, const RuntimeMethod* method)
{
	ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * G_B7_0 = NULL;
	ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * G_B1_0 = NULL;
	ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * G_B2_0 = NULL;
	ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * G_B3_0 = NULL;
	ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * G_B4_0 = NULL;
	ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * G_B5_0 = NULL;
	ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(__this));
		if (L_1)
		{
			G_B7_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(__this));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B1_0));
		if (L_3)
		{
			G_B7_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B1_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B2_0));
		if (L_5)
		{
			G_B7_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B2_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B3_0));
		if (L_7)
		{
			G_B7_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B3_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B4_0));
		if (L_9)
		{
			G_B7_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B4_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B6_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B5_0));
		if (L_11)
		{
			G_B7_0 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B5_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___source76;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((RuntimeObject*)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B6_0));
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = ((ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)(G_B7_0));
	}

IL_003e:
	{
		NullCheck((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B8_1);
		((  void (*) (OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((OperatorObservableBase_1_tE8F06C764779526E49686496000B95E9695BC7CC *)G_B8_1, (bool)G_B8_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___source10;
		__this->set_source1_1(L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___source21;
		__this->set_source2_2(L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___source32;
		__this->set_source3_3(L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___source43;
		__this->set_source4_4(L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___source54;
		__this->set_source5_5(L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___source65;
		__this->set_source6_6(L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___source76;
		__this->set_source7_7(L_20);
		// this.resultSelector = resultSelector;
		ZipFunc_8_t173B6DEFAA5D7C80F7FF82A5B4EB6961D0D35D03 * L_21 = ___resultSelector7;
		__this->set_resultSelector_8(L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_8_SubscribeCore_mE52C539825CB1DDE0D9A6608B93C3638F4F4EA73_gshared (ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_tFE288625F1A712CC45FAE011730910DD457970CC * L_2 = (Zip_tFE288625F1A712CC45FAE011730910DD457970CC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (Zip_tFE288625F1A712CC45FAE011730910DD457970CC *, ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_2, (ZipObservable_8_tC0620FB37B631AAD2680B56273368960F7EEFD6F *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((Zip_tFE288625F1A712CC45FAE011730910DD457970CC *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tFE288625F1A712CC45FAE011730910DD457970CC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Zip_tFE288625F1A712CC45FAE011730910DD457970CC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::.ctor(UniRx.Operators.ZipObservable`1/Zip<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver__ctor_m66409D92BA2E6F0304716AD62774B4066AD06AD3_gshared (ZipObserver_tAE56C446B45ECA54A1360388514A7D8851F5CC31 * __this, Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * ___parent0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// public ZipObserver(Zip parent, int index)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.parent = parent;
		Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		// this.index = index;
		int32_t L_1 = ___index1;
		__this->set_index_1(L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnNext_mD549A64FC40CBA5D2F04B1583D51A75AF99B0F12_gshared (ZipObserver_tAE56C446B45ECA54A1360388514A7D8851F5CC31 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_0 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.queues[index].Enqueue(value);
		Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_3 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
		NullCheck(L_3);
		Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40* L_4 = (Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40*)L_3->get_queues_4();
		int32_t L_5 = (int32_t)__this->get_index_1();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_7 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject * L_8 = ___value0;
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_7);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// parent.Dequeue(index);
		Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_9 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
		int32_t L_10 = (int32_t)__this->get_index_1();
		NullCheck((Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)L_9);
		((  void (*) (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		IL2CPP_LEAVE(0x4B, FINALLY_0041);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_0044:
		{
			RuntimeObject * L_12 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_12, /*hidden argument*/NULL);
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(65)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnError_m4963FFDCFC612103AAABED25CB589CCF6A708068_gshared (ZipObserver_tAE56C446B45ECA54A1360388514A7D8851F5CC31 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_0 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.OnError(ex);
		Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_3 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
		Exception_t * L_4 = ___ex0;
		NullCheck((OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6 *)L_3);
		VirtActionInvoker1< Exception_t * >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6 *)L_3, (Exception_t *)L_4);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_6, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnCompleted_m15E57AD7DE88A647DDC9F52AC5ABF15D6B2F40A2_gshared (ZipObserver_tAE56C446B45ECA54A1360388514A7D8851F5CC31 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_0 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
			// parent.isDone[index] = true;
			Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_3 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
			NullCheck(L_3);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_3->get_isDone_5();
			int32_t L_5 = (int32_t)__this->get_index_1();
			NullCheck(L_4);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (bool)1);
			// var allTrue = true;
			V_2 = (bool)1;
			// for (int i = 0; i < parent.length; i++)
			V_3 = (int32_t)0;
			goto IL_0046;
		}

IL_002f:
		{
			// if (!parent.isDone[i])
			Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_6 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
			NullCheck(L_6);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_7 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_6->get_isDone_5();
			int32_t L_8 = V_3;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			uint8_t L_10 = (uint8_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			if (L_10)
			{
				goto IL_0042;
			}
		}

IL_003e:
		{
			// allTrue = false;
			V_2 = (bool)0;
			// break;
			goto IL_0054;
		}

IL_0042:
		{
			// for (int i = 0; i < parent.length; i++)
			int32_t L_11 = V_3;
			V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		}

IL_0046:
		{
			// for (int i = 0; i < parent.length; i++)
			int32_t L_12 = V_3;
			Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_13 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
			NullCheck(L_13);
			int32_t L_14 = (int32_t)L_13->get_length_6();
			if ((((int32_t)L_12) < ((int32_t)L_14)))
			{
				goto IL_002f;
			}
		}

IL_0054:
		{
			// if (allTrue)
			bool L_15 = V_2;
			if (!L_15)
			{
				goto IL_0062;
			}
		}

IL_0057:
		{
			// parent.OnCompleted();
			Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D * L_16 = (Zip_tB2FEA63E878C39429812290770BD1F62AB80BF0D *)__this->get_parent_0();
			NullCheck((OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6 *)L_16);
			VirtActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_t6250FABBAEB93A38D123AC3803250D91392B98F6 *)L_16);
		}

IL_0062:
		{
			// }
			IL2CPP_LEAVE(0x6E, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_006d;
			}
		}

IL_0067:
		{
			RuntimeObject * L_18 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_18, /*hidden argument*/NULL);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(100)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
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
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipObservable,System.Int32,System.Collections.Generic.Queue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1__ctor_mCD49AC686858FD7E96CAC1A5A68A5AFCB9EE3D36_gshared (ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78 * __this, RuntimeObject * ___gate0, RuntimeObject* ___parent1, int32_t ___index2, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___queue3, const RuntimeMethod* method)
{
	{
		// public ZipObserver(object gate, IZipObservable parent, int index, Queue<T> queue)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.gate = gate;
		RuntimeObject * L_0 = ___gate0;
		__this->set_gate_0(L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___parent1;
		__this->set_parent_1(L_1);
		// this.index = index;
		int32_t L_2 = ___index2;
		__this->set_index_2(L_2);
		// this.queue = queue;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_3 = ___queue3;
		__this->set_queue_3(L_3);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnNext_mAFBA00C1A35721E923AEC7A296BD7F11E9B5E905_gshared (ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t0ECBDF53FECFF9407F1BE5BA0FD1156D07B45496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// queue.Enqueue(value);
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_queue_3();
		RuntimeObject * L_3 = ___value0;
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// parent.Dequeue(index);
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_parent_1();
		int32_t L_5 = (int32_t)__this->get_index_2();
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipObservable::Dequeue(System.Int32) */, IZipObservable_t0ECBDF53FECFF9407F1BE5BA0FD1156D07B45496_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, (int32_t)L_5);
		// }
		IL2CPP_LEAVE(0x3A, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			RuntimeObject * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_7, /*hidden argument*/NULL);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnError_mC8AFE6282FDE7D11733BB41711DBA564553A68EE_gshared (ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t0ECBDF53FECFF9407F1BE5BA0FD1156D07B45496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.Fail(error);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_parent_1();
		Exception_t * L_3 = ___error0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.Operators.IZipObservable::Fail(System.Exception) */, IZipObservable_t0ECBDF53FECFF9407F1BE5BA0FD1156D07B45496_il2cpp_TypeInfo_var, (RuntimeObject*)L_2, (Exception_t *)L_3);
		// }
		IL2CPP_LEAVE(0x29, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0022:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_5, /*hidden argument*/NULL);
		}

IL_0028:
		{
			IL2CPP_END_FINALLY(31)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x29, IL_0029)
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnCompleted_m2C83E0107322DEEBE7FC6214DCAB4D098D43F67A_gshared (ZipObserver_1_tB28746943784DADD0186C76955CF856BF58FAA78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t0ECBDF53FECFF9407F1BE5BA0FD1156D07B45496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.Done(index);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_parent_1();
		int32_t L_3 = (int32_t)__this->get_index_2();
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipObservable::Done(System.Int32) */, IZipObservable_t0ECBDF53FECFF9407F1BE5BA0FD1156D07B45496_il2cpp_TypeInfo_var, (RuntimeObject*)L_2, (int32_t)L_3);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
