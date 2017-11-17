// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Marshal.h>
#include <Fuse.Scripting.AppInitialized.Closure.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.BoolChangedArgs.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.FactoryClosure-1.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeEventEmitterModule.EmitClosure.h>
#include <Fuse.Scripting.NativeEventEmitterModule.h>
#include <Fuse.Scripting.NativeEventEmitterModule.OnClosure.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Scripting.ScriptMethodInline.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ScriptPromise-3.FutureFactory-2.h>
#include <Fuse.Scripting.ScriptPromise-3.h>
#include <Fuse.Scripting.ScriptProperty.h>
#include <Fuse.Scripting.ScriptProperty-2.h>
#include <Fuse.Scripting.StringChangedArgs.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.Tuple.h>
#include <Uno.Tuple-2.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[13];
static uType* TYPES[23];

namespace g{
namespace Fuse{
namespace Scripting{

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/AppInitialized.uno
// ---------------------------------------------------------------------

// internal static class AppInitialized :15
// {
static void AppInitialized_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&AppInitialized::_initialized_, uFieldFlagsStatic);
}

uClassType* AppInitialized_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.AppInitialized", options);
    type->fp_build_ = AppInitialized_build;
    return type;
}

// public static void On(Fuse.Scripting.Context context, Uno.Action action) :19
void AppInitialized__On_fn(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    AppInitialized::On(context, action);
}

bool AppInitialized::_initialized_;

// public static void On(Fuse.Scripting.Context context, Uno.Action action) [static] :19
void AppInitialized::On(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    if (AppInitialized::_initialized_)
        uPtr(action)->InvokeVoid();
    else
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::UpdateManager::Dispatcher()), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)AppInitialized__Closure__Run_fn, AppInitialized__Closure::New1(context, action)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Types.uno
// ------------------------------------------------------------

// public abstract class Array :9
// {
static void Array_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Array_type, interface0));
}

Array_type* Array_typeof()
{
    static uSStrong<Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(Array_type);
    type = (Array_type*)uClassType::New("Fuse.Scripting.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Array__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    return type;
}

// protected generated Array() :9
void Array__ctor__fn(Array* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :16
void Array__Equals_fn(Array* __this, uObject* o, bool* __retval)
{
    Array* a = uAs<Array*>(o, Array_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :22
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Array() [instance] :9
void Array::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/IScriptEvent.uno
// -------------------------------------------------------------------

// public sealed class BoolChangedArgs :64
// {
static void BoolChangedArgs_build(uType* type)
{
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1);
}

uType* BoolChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::ValueChangedArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(BoolChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.BoolChangedArgs", options);
    type->fp_build_ = BoolChangedArgs_build;
    return type;
}

// public BoolChangedArgs(bool value) :66
void BoolChangedArgs__ctor_2_fn(BoolChangedArgs* __this, bool* value)
{
    __this->ctor_2(*value);
}

// public BoolChangedArgs New(bool value) :66
void BoolChangedArgs__New3_fn(bool* value, BoolChangedArgs** __retval)
{
    *__retval = BoolChangedArgs::New3(*value);
}

// public BoolChangedArgs(bool value) [instance] :66
void BoolChangedArgs::ctor_2(bool value)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value));
}

// public BoolChangedArgs New(bool value) [static] :66
BoolChangedArgs* BoolChangedArgs::New3(bool value)
{
    BoolChangedArgs* obj1 = (BoolChangedArgs*)uNew(BoolChangedArgs_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Types.uno
// ------------------------------------------------------------

// public delegate object Callback(object[] args) :126
uDelegateType* Callback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.Callback", 1, 0);
    type->SetSignature(uObject_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/AppInitialized.uno
// ---------------------------------------------------------------------

// private sealed class AppInitialized.Closure :36
// {
static void AppInitialized__Closure_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(0/*Invoke1<Uno.Action>*/, ::g::Uno::Action_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(AppInitialized__Closure, _context), 0,
        ::g::Uno::Action_typeof(), offsetof(AppInitialized__Closure, _action), 0);
}

uType* AppInitialized__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AppInitialized__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.AppInitialized.Closure", options);
    type->fp_build_ = AppInitialized__Closure_build;
    return type;
}

// public Closure(Fuse.Scripting.Context context, Uno.Action action) :41
void AppInitialized__Closure__ctor__fn(AppInitialized__Closure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    __this->ctor_(context, action);
}

// public Closure New(Fuse.Scripting.Context context, Uno.Action action) :41
void AppInitialized__Closure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* action, AppInitialized__Closure** __retval)
{
    *__retval = AppInitialized__Closure::New1(context, action);
}

// public void Run() :47
void AppInitialized__Closure__Run_fn(AppInitialized__Closure* __this)
{
    __this->Run();
}

// private static void RunJS(Uno.Action action) :52
void AppInitialized__Closure__RunJS_fn(uDelegate* action)
{
    AppInitialized__Closure::RunJS(action);
}

// public Closure(Fuse.Scripting.Context context, Uno.Action action) [instance] :41
void AppInitialized__Closure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    _context = context;
    _action = action;
}

// public void Run() [instance] :47
void AppInitialized__Closure::Run()
{
    ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[0/*Uno.Threading.IDispatcherExtensions.Invoke1<Uno.Action>*/], uPtr(_context)->Dispatcher(), uDelegate::New(::TYPES[1/*Uno.Action<Uno.Action>*/], (void*)AppInitialized__Closure__RunJS_fn), _action);
}

// public Closure New(Fuse.Scripting.Context context, Uno.Action action) [static] :41
AppInitialized__Closure* AppInitialized__Closure::New1(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    AppInitialized__Closure* obj1 = (AppInitialized__Closure*)uNew(AppInitialized__Closure_typeof());
    obj1->ctor_(context, action);
    return obj1;
}

// private static void RunJS(Uno.Action action) [static] :52
void AppInitialized__Closure::RunJS(uDelegate* action)
{
    ::g::Fuse::Scripting::AppInitialized::_initialized_ = true;
    uPtr(action)->InvokeVoid();
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Context.uno
// --------------------------------------------------------------

// public interfacemodifiers class Context :18
// {
static void Context_build(uType* type)
{
    ::STRINGS[0] = uString::Const("(Context)");
    ::STRINGS[1] = uString::Const("(function(count) { return new Array(count); })");
    ::STRINGS[2] = uString::Const("(function() { return new Object; })");
    ::STRINGS[3] = uString::Const("JSON.parse");
    ::TYPES[2] = ::g::Fuse::Scripting::IThreadWorker_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[5] = uObject_typeof()->Array();
    ::TYPES[6] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface0));
    type->SetFields(0,
        ::TYPES[2/*Fuse.Scripting.IThreadWorker*/], offsetof(Context, _worker), 0,
        ::TYPES[3/*Fuse.Scripting.Function*/], offsetof(Context, _parseJson), 0,
        ::TYPES[3/*Fuse.Scripting.Function*/], offsetof(Context, _newObject), 0,
        ::TYPES[3/*Fuse.Scripting.Function*/], offsetof(Context, _newArray), 0);
}

Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Fuse.Scripting.Context", options);
    type->fp_build_ = Context_build;
    return type;
}

// public Uno.Threading.IDispatcher get_Dispatcher() :74
void Context__get_Dispatcher_fn(Context* __this, uObject** __retval)
{
    *__retval = __this->Dispatcher();
}

// public void Invoke(Uno.Action<Fuse.Scripting.Context> action) :76
void Context__Invoke_fn(Context* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public Fuse.Scripting.Array NewArray(object[] values) :130
void Context__NewArray_fn(Context* __this, uArray* values, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->NewArray(values);
}

// public Fuse.Scripting.Object NewObject() :123
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->NewObject();
}

// public object ParseJson(string json) :114
void Context__ParseJson_fn(Context* __this, uString* json, uObject** __retval)
{
    *__retval = __this->ParseJson(json);
}

// public object Unwrap(object obj) :72
void Context__Unwrap_fn(Context* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Unwrap(obj);
}

// public object Wrap(object obj) :71
void Context__Wrap_fn(Context* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Wrap(obj);
}

// public Uno.Threading.IDispatcher get_Dispatcher() [instance] :74
uObject* Context::Dispatcher()
{
    return ::g::Fuse::Scripting::IThreadWorker::Dispatcher(uInterface(uPtr(_worker), ::TYPES[2/*Fuse.Scripting.IThreadWorker*/]));
}

// public void Invoke(Uno.Action<Fuse.Scripting.Context> action) [instance] :76
void Context::Invoke(uDelegate* action)
{
    ::g::Fuse::Scripting::IThreadWorker::Invoke(uInterface(uPtr(_worker), ::TYPES[2/*Fuse.Scripting.IThreadWorker*/]), action);
}

// public Fuse.Scripting.Array NewArray(object[] values) [instance] :130
::g::Fuse::Scripting::Array* Context::NewArray(uArray* values)
{
    if (_newArray == NULL)
        _newArray = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[0/*"(Context)"*/], ::STRINGS[1/*"(function(c...*/]), ::TYPES[3/*Fuse.Scripting.Function*/]);

    ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(uPtr(_newArray)->Call(uArray::Init<uObject*>(::TYPES[5/*object[]*/], 1, uBox<int>(::TYPES[21/*int*/], uPtr(values)->Length()))), ::TYPES[4/*Fuse.Scripting.Array*/]);

    for (int i = 0; i < values->Length(); i++)
        uPtr(a)->Item(i, uPtr(values)->Strong<uObject*>(i));

    return a;
}

// public Fuse.Scripting.Object NewObject() [instance] :123
::g::Fuse::Scripting::Object* Context::NewObject()
{
    if (_newObject == NULL)
        _newObject = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[0/*"(Context)"*/], ::STRINGS[2/*"(function()...*/]), ::TYPES[3/*Fuse.Scripting.Function*/]);

    return uCast< ::g::Fuse::Scripting::Object*>(uPtr(_newObject)->Call(uArray::New(::TYPES[5/*object[]*/], 0)), ::TYPES[6/*Fuse.Scripting.Object*/]);
}

// public object ParseJson(string json) [instance] :114
uObject* Context::ParseJson(uString* json)
{
    if (_parseJson == NULL)
        _parseJson = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[0/*"(Context)"*/], ::STRINGS[3/*"JSON.parse"*/]), ::TYPES[3/*Fuse.Scripting.Function*/]);

    return uPtr(_parseJson)->Call(uArray::Init<uObject*>(::TYPES[5/*object[]*/], 1, json));
}

// public object Unwrap(object obj) [instance] :72
uObject* Context::Unwrap(uObject* obj)
{
    return ::g::Fuse::Scripting::IThreadWorker::Unwrap(uInterface(uPtr(_worker), ::TYPES[2/*Fuse.Scripting.IThreadWorker*/]), obj);
}

// public object Wrap(object obj) [instance] :71
uObject* Context::Wrap(uObject* obj)
{
    return ::g::Fuse::Scripting::IThreadWorker::Wrap(uInterface(uPtr(_worker), ::TYPES[2/*Fuse.Scripting.IThreadWorker*/]), obj);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeEventEmitterModule.uno
// -------------------------------------------------------------------------------

// private sealed class NativeEventEmitterModule.EmitClosure :163
// {
static void NativeEventEmitterModule__EmitClosure_build(uType* type)
{
    ::STRINGS[4] = uString::Const("emit");
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(NativeEventEmitterModule__EmitClosure, _args), 0);
}

uType* NativeEventEmitterModule__EmitClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NativeEventEmitterModule__EmitClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEventEmitterModule.EmitClosure", options);
    type->fp_build_ = NativeEventEmitterModule__EmitClosure_build;
    return type;
}

// public EmitClosure(object[] args) :167
void NativeEventEmitterModule__EmitClosure__ctor__fn(NativeEventEmitterModule__EmitClosure* __this, uArray* args)
{
    __this->ctor_(args);
}

// public void Emit(Fuse.Scripting.Context c, Fuse.Scripting.Object o) :172
void NativeEventEmitterModule__EmitClosure__Emit_fn(NativeEventEmitterModule__EmitClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    __this->Emit(c, o);
}

// public EmitClosure New(object[] args) :167
void NativeEventEmitterModule__EmitClosure__New1_fn(uArray* args, NativeEventEmitterModule__EmitClosure** __retval)
{
    *__retval = NativeEventEmitterModule__EmitClosure::New1(args);
}

// public EmitClosure(object[] args) [instance] :167
void NativeEventEmitterModule__EmitClosure::ctor_(uArray* args)
{
    _args = args;
}

// public void Emit(Fuse.Scripting.Context c, Fuse.Scripting.Object o) [instance] :172
void NativeEventEmitterModule__EmitClosure::Emit(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    uPtr(o)->CallMethod(::STRINGS[4/*"emit"*/], _args);
}

// public EmitClosure New(object[] args) [static] :167
NativeEventEmitterModule__EmitClosure* NativeEventEmitterModule__EmitClosure::New1(uArray* args)
{
    NativeEventEmitterModule__EmitClosure* obj1 = (NativeEventEmitterModule__EmitClosure*)uNew(NativeEventEmitterModule__EmitClosure_typeof());
    obj1->ctor_(args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Types.uno
// ------------------------------------------------------------

// public sealed class Error :80
// {
static void Error_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* Error_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Error);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.Error", options);
    type->fp_build_ = Error_build;
    return type;
}

// public Error(string message) :82
void Error__ctor_3_fn(Error* __this, uString* message)
{
    __this->ctor_3(message);
}

// public Error New(string message) :82
void Error__New4_fn(uString* message, Error** __retval)
{
    *__retval = Error::New4(message);
}

// public Error(string message) [instance] :82
void Error::ctor_3(uString* message)
{
    ctor_1(message);
}

// public Error New(string message) [static] :82
Error* Error::New4(uString* message)
{
    Error* obj1 = (Error*)uNew(Error_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public enum ExecutionThread :8
uEnumType* ExecutionThread_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.ExecutionThread", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Any", 0LL,
        "JavaScript", 1LL,
        "MainThread", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Types.uno
// ------------------------------------------------------------

// public sealed class External :101
// {
static void External_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(External, Object), 0);
}

uType* External_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(External);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.External", options);
    type->fp_build_ = External_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))External__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))External__GetHashCode_fn;
    return type;
}

// public External(object o) :105
void External__ctor__fn(External* __this, uObject* o)
{
    __this->ctor_(o);
}

// public override sealed bool Equals(object o) :110
void External__Equals_fn(External* __this, uObject* o, bool* __retval)
{
    External* that = uAs<External*>(o, __this->__type);
    return *__retval = (that != NULL) && ::g::Uno::Object::Equals(uPtr(__this->Object), uPtr(that)->Object), void();
}

// public override sealed int GetHashCode() :116
void External__GetHashCode_fn(External* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->Object)), void();
}

// public External New(object o) :105
void External__New1_fn(uObject* o, External** __retval)
{
    *__retval = External::New1(o);
}

// public External(object o) [instance] :105
void External::ctor_(uObject* o)
{
    Object = o;
}

// public External New(object o) [static] :105
External* External::New1(uObject* o)
{
    External* obj1 = (External*)uNew(External_typeof());
    obj1->ctor_(o);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativePromise.uno
// --------------------------------------------------------------------

// internal sealed class FactoryClosure<T> :10
// {
static void FactoryClosure_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0), NULL), offsetof(FactoryClosure, _factory), 0,
        uObject_typeof()->Array(), offsetof(FactoryClosure, _args), 0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), offsetof(FactoryClosure, _promise), 0);
}

uType* FactoryClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(FactoryClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.FactoryClosure`1", options);
    type->fp_build_ = FactoryClosure_build;
    return type;
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :16
void FactoryClosure__ctor__fn(FactoryClosure* __this, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(factory, args, promise);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :16
void FactoryClosure__New1_fn(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise, FactoryClosure** __retval)
{
    *__retval = FactoryClosure::New1(__type, factory, args, promise);
}

// public void Run() :23
void FactoryClosure__Run_fn(FactoryClosure* __this)
{
    __this->Run();
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [instance] :16
void FactoryClosure::ctor_(uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    _factory = factory;
    _args = args;
    _promise = promise;
}

// public void Run() [instance] :23
void FactoryClosure::Run()
{
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT res(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    res = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    try
    {
        {
            res = (uPtr(_factory)->Invoke(&ret2, 1, (uArray*)_args), ret2);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_promise)->Reject(e);
        return;
    }

    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), res);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [static] :16
FactoryClosure* FactoryClosure::New1(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    FactoryClosure* obj1 = (FactoryClosure*)uNew(__type);
    obj1->ctor_(factory, args, promise);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/FileModule.uno
// -----------------------------------------------------------------

// public class FileModule :19
// {
static void FileModule_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Scripting::Module_type* FileModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Scripting.FileModule", options);
    type->fp_build_ = FileModule_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileModule(Uno.UX.FileSource fs) :21
void FileModule__ctor_2_fn(FileModule* __this, ::g::Uno::UX::FileSource* fs)
{
    __this->ctor_2(fs);
}

// public FileModule(Uno.UX.FileSource fs) [instance] :21
void FileModule::ctor_2(::g::Uno::UX::FileSource* fs)
{
    ctor_1();
    File(fs);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Types.uno
// ------------------------------------------------------------

// public abstract class Function :58
// {
static void Function_build(uType* type)
{
}

Function_type* Function_typeof()
{
    static uSStrong<Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(Function_type);
    type = (Function_type*)uClassType::New("Fuse.Scripting.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Function__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    return type;
}

// protected generated Function() :58
void Function__ctor__fn(Function* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :64
void Function__Equals_fn(Function* __this, uObject* o, bool* __retval)
{
    Function* a = uAs<Function*>(o, Function_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :70
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Function() [instance] :58
void Function::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativePromise.uno
// --------------------------------------------------------------------

// public delegate Uno.Threading.Future<T> FutureFactory<T>(object[] args) :7
uDelegateType* FutureFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.FutureFactory`1", 1, 1);
    type->SetSignature(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public delegate Uno.Threading.Future<TResult> ScriptPromise<TSelf, TResult, TJSResult>.FutureFactory<TSelf, TResult>(Fuse.Scripting.Context context, TSelf self, object[] args) :151
uDelegateType* ScriptPromise__FutureFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ScriptPromise`3.FutureFactory`2", 3, 5);
    type->SetSignature(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(4), NULL),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(3),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/IScriptEvent.uno
// -------------------------------------------------------------------

// public abstract interface IScriptObject :15
// {
uInterfaceType* IScriptObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IScriptObject", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Context.uno
// --------------------------------------------------------------

// public abstract interface IThreadWorker :10
// {
uInterfaceType* IThreadWorker_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IThreadWorker", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/JSObjectUtils.uno
// --------------------------------------------------------------------

// public static class JSObjectUtils :3
// {
static void JSObjectUtils_build(uType* type)
{
    ::STRINGS[5] = uString::Const("(Object Freeze)");
    ::STRINGS[6] = uString::Const("Object.freeze");
    ::TYPES[3] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[5] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Fuse::Marshal_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[8/*Fuse.Marshal*/]->MakeMethod(0/*ToType<T>*/, type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[8/*Fuse.Marshal*/]->MakeMethod(0/*ToType<T>*/, type->MethodTypes[1]->U(0), NULL));
}

uClassType* JSObjectUtils_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSObjectUtils", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->fp_build_ = JSObjectUtils_build;
    return type;
}

// public static void Freeze(Fuse.Scripting.Object ob, Fuse.Scripting.Context c) :30
void JSObjectUtils__Freeze_fn(::g::Fuse::Scripting::Object* ob, ::g::Fuse::Scripting::Context* c)
{
    JSObjectUtils::Freeze(ob, c);
}

// public static T ValueOrDefault<T>(Fuse.Scripting.Object obj, string name, T defaultValue) :5
void JSObjectUtils__ValueOrDefault_fn(uType* __type, ::g::Fuse::Scripting::Object* obj, uString* name, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Marshal.ToType<T>*/),
    };
    uT ret3(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uObject* v = uPtr(obj)->Item(name);

    if (v == NULL)
        return __retval.Store(__type->U(0), defaultValue), void();

    return __retval.Store((::g::Fuse::Marshal__ToType_fn(__types[0], v, &ret3), ret3)), void();
}

// public static T ValueOrDefault<T>(object[] args, int index, [T defaultValue]) :12
void JSObjectUtils__ValueOrDefault1_fn(uType* __type, uArray* args, int* index, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Marshal.ToType<T>*/),
    };
    uT ret4(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    int index_ = *index;

    if ((index_ < 0) || (index_ > (uPtr(args)->Length() - 1)))
        return __retval.Store(__type->U(0), defaultValue), void();

    return __retval.Store((::g::Fuse::Marshal__ToType_fn(__types[0], uPtr(args)->Strong<uObject*>(index_), &ret4), ret4)), void();
}

// public static void Freeze(Fuse.Scripting.Object ob, Fuse.Scripting.Context c) [static] :30
void JSObjectUtils::Freeze(::g::Fuse::Scripting::Object* ob, ::g::Fuse::Scripting::Context* c)
{
    ::g::Fuse::Scripting::Function* freeze = uCast< ::g::Fuse::Scripting::Function*>(uPtr(c)->Evaluate(::STRINGS[5/*"(Object Fre...*/], ::STRINGS[6/*"Object.freeze"*/]), ::TYPES[3/*Fuse.Scripting.Function*/]);
    uPtr(freeze)->Call(uArray::Init<uObject*>(::TYPES[5/*object[]*/], 1, ob));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Module.uno
// -------------------------------------------------------------

// public abstract class Module :7
// {
static void Module_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Module_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Module, _isEvaluated), 0);
}

Module_type* Module_typeof()
{
    static uSStrong<Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Module);
    options.TypeSize = sizeof(Module_type);
    type = (Module_type*)uClassType::New("Fuse.Scripting.Module", options);
    type->fp_build_ = Module_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Module__Dispose_fn;
    return type;
}

// protected generated Module() :7
void Module__ctor__fn(Module* __this)
{
    __this->ctor_();
}

// public void Dispose() :81
void Module__Dispose_fn(Module* __this)
{
    __this->Dispose();
}

// protected bool get_IsEvaluated() :41
void Module__get_IsEvaluated_fn(Module* __this, bool* __retval)
{
    *__retval = __this->IsEvaluated();
}

// protected generated Module() [instance] :7
void Module::ctor_()
{
}

// public void Dispose() [instance] :81
void Module::Dispose()
{
}

// protected bool get_IsEvaluated() [instance] :41
bool Module::IsEvaluated()
{
    return _isEvaluated;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeFunction.uno
// ---------------------------------------------------------------------

// public delegate object NativeCallback(Fuse.Scripting.Context c, object[] args) :6
uDelegateType* NativeCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.NativeCallback", 2, 0);
    type->SetSignature(uObject_typeof(),
        ::g::Fuse::Scripting::Context_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeEvent.uno
// ------------------------------------------------------------------

// public sealed class NativeEvent :7
// {
static void NativeEvent_build(uType* type)
{
    ::STRINGS[7] = uString::Const("this.Context != null");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeEvent.uno");
    ::TYPES[9] = ::g::Uno::Collections::Queue_typeof()->MakeType(uObject_typeof()->Array(), NULL);
    ::TYPES[5] = uObject_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1/*Invoke1<object[], object>*/, ::TYPES[5/*object[]*/], uObject_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Func1_typeof()->MakeType(::TYPES[5/*object[]*/], uObject_typeof(), NULL);
    type->SetBase(::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL));
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(7,
        ::TYPES[9/*Uno.Collections.Queue<object[]>*/], offsetof(NativeEvent, _eventArgsQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeEvent, _queueEventsBeforeEvaluation), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(NativeEvent, _jsFunction), 0);
}

uType* NativeEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeProperty_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEvent", options);
    type->fp_build_ = NativeEvent_build;
    return type;
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) :13
void NativeEvent__ctor_4_fn(NativeEvent* __this, uString* name, bool* queueEventsBeforeHandlerIsSet)
{
    __this->ctor_4(name, *queueEventsBeforeHandlerIsSet);
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) :13
void NativeEvent__New4_fn(uString* name, bool* queueEventsBeforeHandlerIsSet, NativeEvent** __retval)
{
    *__retval = NativeEvent::New4(name, *queueEventsBeforeHandlerIsSet);
}

// internal object RaiseSync(object[] args) :44
void NativeEvent__RaiseSync_fn(NativeEvent* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->RaiseSync(args);
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) [instance] :13
void NativeEvent::ctor_4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    ctor_1(name);
    _eventArgsQueue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[9/*Uno.Collections.Queue<object[]>*/]));
    _queueEventsBeforeEvaluation = queueEventsBeforeHandlerIsSet;
}

// internal object RaiseSync(object[] args) [instance] :44
uObject* NativeEvent::RaiseSync(uArray* args)
{
    ::g::Uno::Diagnostics::Debug::Assert(Context() != NULL, ::STRINGS[7/*"this.Contex...*/], ::STRINGS[8/*"/usr/local/...*/], 46, uArray::New(::TYPES[5/*object[]*/], 0));

    if (_jsFunction != NULL)
        ::g::Uno::Threading::IDispatcherExtensions__Invoke11_fn(::TYPES[10/*Uno.Threading.IDispatcherExtensions.Invoke1<object[], object>*/], uPtr(Context())->Dispatcher(), uDelegate::New(::TYPES[11/*Uno.Func<object[], object>*/], uPtr(_jsFunction), offsetof(::g::Fuse::Scripting::Function_type, fp_Call)), args);

    return NULL;
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) [static] :13
NativeEvent* NativeEvent::New4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    NativeEvent* obj1 = (NativeEvent*)uNew(NativeEvent_typeof());
    obj1->ctor_4(name, queueEventsBeforeHandlerIsSet);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeEventEmitterModule.uno
// -------------------------------------------------------------------------------

// public class NativeEventEmitterModule :9
// {
static void NativeEventEmitterModule_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(3,
        uObject_typeof()->Array(), offsetof(NativeEventEmitterModule, _eventNames), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), NULL), offsetof(NativeEventEmitterModule, _listeningCallbacks), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(NativeEventEmitterModule, _this), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeEventEmitterModule, _initialized), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativeEventEmitterModule, _context), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeEventEmitterModule, _queueEventsBeforeInit), 0,
        uObject_typeof(), offsetof(NativeEventEmitterModule, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL), NULL), offsetof(NativeEventEmitterModule, _queuedEvents), 0);
}

::g::Fuse::Scripting::Module_type* NativeEventEmitterModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeEventEmitterModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Scripting.NativeEventEmitterModule", options);
    type->fp_build_ = NativeEventEmitterModule_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public NativeEventEmitterModule(bool queueEventsBeforeInit, object[] eventNames) :25
void NativeEventEmitterModule__ctor_2_fn(NativeEventEmitterModule* __this, bool* queueEventsBeforeInit, uArray* eventNames)
{
    __this->ctor_2(*queueEventsBeforeInit, eventNames);
}

// private void Dispatch(Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object> action, [bool alwaysQueueEventBeforeInit]) :127
void NativeEventEmitterModule__Dispatch_fn(NativeEventEmitterModule* __this, uDelegate* action, bool* alwaysQueueEventBeforeInit)
{
    __this->Dispatch(action, *alwaysQueueEventBeforeInit);
}

// protected void Emit(object[] args) :81
void NativeEventEmitterModule__Emit_fn(NativeEventEmitterModule* __this, uArray* args)
{
    __this->Emit(args);
}

// protected void On(object eventName, Fuse.Scripting.Callback listener) :156
void NativeEventEmitterModule__On_fn(NativeEventEmitterModule* __this, uObject* eventName, uDelegate* listener)
{
    __this->On(eventName, listener);
}

// protected void On(object eventName, Fuse.Scripting.NativeEvent nativeEvent) :147
void NativeEventEmitterModule__On1_fn(NativeEventEmitterModule* __this, uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent)
{
    __this->On1(eventName, nativeEvent);
}

// private void OnAppInitialized() :65
void NativeEventEmitterModule__OnAppInitialized_fn(NativeEventEmitterModule* __this)
{
    __this->OnAppInitialized();
}

// private void ResetListeners(object sender, Uno.EventArgs eventArgs) :33
void NativeEventEmitterModule__ResetListeners_fn(NativeEventEmitterModule* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->ResetListeners(sender, eventArgs);
}

// private void ResetListenersJS() :45
void NativeEventEmitterModule__ResetListenersJS_fn(NativeEventEmitterModule* __this)
{
    __this->ResetListenersJS();
}

// public NativeEventEmitterModule(bool queueEventsBeforeInit, object[] eventNames) [instance] :25
void NativeEventEmitterModule::ctor_2(bool queueEventsBeforeInit, uArray* eventNames)
{
    _listeningCallbacks = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), NULL)));
    _mutex = ::g::Uno::Object::New();
    _queuedEvents = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[6/*Fuse.Scripting.Object*/], NULL), NULL)));
    ctor_1();
    _queueEventsBeforeInit = queueEventsBeforeInit;
    _eventNames = eventNames;
    add_Reset(uDelegate::New(::TYPES[13/*Uno.EventHandler*/], (void*)NativeEventEmitterModule__ResetListeners_fn, this));
}

// private void Dispatch(Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object> action, [bool alwaysQueueEventBeforeInit]) [instance] :127
void NativeEventEmitterModule::Dispatch(uDelegate* action, bool alwaysQueueEventBeforeInit)
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            if (!_initialized)
            {
                if (alwaysQueueEventBeforeInit || _queueEventsBeforeInit)
                    ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_queuedEvents), action);

                ::g::Uno::Threading::Monitor::Exit(_mutex);
                return;
            }
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }

    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2/*Invoke2<Fuse.Scripting.Context, Fuse.Scripting.Object>*/, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[6/*Fuse.Scripting.Object*/], NULL), uPtr(_context)->Dispatcher(), action, _context, _this);
}

// protected void Emit(object[] args) [instance] :81
void NativeEventEmitterModule::Emit(uArray* args)
{
    Dispatch(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[6/*Fuse.Scripting.Object*/], NULL), (void*)NativeEventEmitterModule__EmitClosure__Emit_fn, NativeEventEmitterModule__EmitClosure::New1(args)), false);
}

// protected void On(object eventName, Fuse.Scripting.Callback listener) [instance] :156
void NativeEventEmitterModule::On(uObject* eventName, uDelegate* listener)
{
    ::g::Uno::Tuple2* ret4;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_listeningCallbacks), (::g::Uno::Tuple__Create1_fn(::g::Uno::Tuple_typeof()->MakeMethod(0/*Create<object, Fuse.Scripting.Callback>*/, uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), eventName, listener, &ret4), ret4));
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }

    Dispatch(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[6/*Fuse.Scripting.Object*/], NULL), (void*)NativeEventEmitterModule__OnClosure__On_fn, NativeEventEmitterModule__OnClosure::New1(eventName, listener)), true);
}

// protected void On(object eventName, Fuse.Scripting.NativeEvent nativeEvent) [instance] :147
void NativeEventEmitterModule::On1(uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent)
{
    On(eventName, uDelegate::New(::g::Fuse::Scripting::Callback_typeof(), (void*)::g::Fuse::Scripting::NativeEvent__RaiseSync_fn, uPtr(nativeEvent)));
}

// private void OnAppInitialized() [instance] :65
void NativeEventEmitterModule::OnAppInitialized()
{
    uDelegate* ret5;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            _initialized = true;

            while (uPtr(_queuedEvents)->Count() > 0)
                uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_queuedEvents), &ret5), ret5))->Invoke(2, (::g::Fuse::Scripting::Context*)_context, (::g::Fuse::Scripting::Object*)_this);
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }
}

// private void ResetListeners(object sender, Uno.EventArgs eventArgs) [instance] :33
void NativeEventEmitterModule::ResetListeners(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            _initialized = false;
            uPtr(_queuedEvents)->Clear();
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }

    if (_context != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_context)->Dispatcher()), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)NativeEventEmitterModule__ResetListenersJS_fn, this));
}

// private void ResetListenersJS() [instance] :45
void NativeEventEmitterModule::ResetListenersJS()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Tuple2*> > ret6;
    uObject* ret7;
    uDelegate* ret8;
    uPtr(_this)->CallMethod(uString::Const("removeAllListeners"), uArray::New(::TYPES[5/*object[]*/], 0));
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Tuple2*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_listeningCallbacks), &ret6), ret6);

            try
            {
                {
                    while (enum1.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), NULL)))
                    {
                        ::g::Uno::Tuple2* l = enum1.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), NULL));
                        Dispatch(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[6/*Fuse.Scripting.Object*/], NULL), (void*)NativeEventEmitterModule__OnClosure__On_fn, NativeEventEmitterModule__OnClosure::New1((::g::Uno::Tuple2__get_Item1_fn(uPtr(l), &ret7), ret7), (::g::Uno::Tuple2__get_Item2_fn(uPtr(l), &ret8), ret8))), true);
                    }
                }
                {
                    enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), NULL));
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), NULL));
                }
                                throw __t;
            }
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }

    ::g::Fuse::Scripting::AppInitialized::On(_context, uDelegate::New(::g::Uno::Action_typeof(), (void*)NativeEventEmitterModule__OnAppInitialized_fn, this));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeFunction.uno
// ---------------------------------------------------------------------

// public sealed class NativeFunction :8
// {
static void NativeFunction_build(uType* type)
{
    type->SetFields(2,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(NativeFunction, _nativeCallback), 0);
}

uType* NativeFunction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeFunction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeFunction", options);
    type->fp_build_ = NativeFunction_build;
    return type;
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) :22
void NativeFunction__ctor_1_fn(NativeFunction* __this, uString* name, uDelegate* callback)
{
    __this->ctor_1(name, callback);
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) :22
void NativeFunction__New1_fn(uString* name, uDelegate* callback, NativeFunction** __retval)
{
    *__retval = NativeFunction::New1(name, callback);
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) [instance] :22
void NativeFunction::ctor_1(uString* name, uDelegate* callback)
{
    ctor_(name);
    _nativeCallback = callback;
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) [static] :22
NativeFunction* NativeFunction::New1(uString* name, uDelegate* callback)
{
    NativeFunction* obj1 = (NativeFunction*)uNew(NativeFunction_typeof());
    obj1->ctor_1(name, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeMember.uno
// -------------------------------------------------------------------

// public abstract class NativeMember :6
// {
static void NativeMember_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativeMember, _Context), 0,
        ::g::Uno::String_typeof(), offsetof(NativeMember, _Name), 0);
}

uType* NativeMember_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeMember);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeMember", options);
    type->fp_build_ = NativeMember_build;
    return type;
}

// protected internal NativeMember(string name) :11
void NativeMember__ctor__fn(NativeMember* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated Fuse.Scripting.Context get_Context() :9
void NativeMember__get_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(Fuse.Scripting.Context value) :9
void NativeMember__set_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context* value)
{
    __this->Context(value);
}

// protected generated string get_Name() :8
void NativeMember__get_Name_fn(NativeMember* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :8
void NativeMember__set_Name_fn(NativeMember* __this, uString* value)
{
    __this->Name(value);
}

// protected internal NativeMember(string name) [instance] :11
void NativeMember::ctor_(uString* name)
{
    Name(name);
}

// public generated Fuse.Scripting.Context get_Context() [instance] :9
::g::Fuse::Scripting::Context* NativeMember::Context()
{
    return _Context;
}

// private generated void set_Context(Fuse.Scripting.Context value) [instance] :9
void NativeMember::Context(::g::Fuse::Scripting::Context* value)
{
    _Context = value;
}

// protected generated string get_Name() [instance] :8
uString* NativeMember::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :8
void NativeMember::Name(uString* value)
{
    _Name = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeModule.uno
// -------------------------------------------------------------------

// public class NativeModule :6
// {
static void NativeModule_build(uType* type)
{
    ::STRINGS[9] = uString::Const("NativeModule(): Cannot add more members after first use");
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(1,
        ::TYPES[12/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/], offsetof(NativeModule, _members), 0,
        ::TYPES[13/*Uno.EventHandler*/], offsetof(NativeModule, Reset1), 0);
}

::g::Fuse::Scripting::Module_type* NativeModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Module_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Scripting.NativeModule", options);
    type->fp_build_ = NativeModule_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public generated NativeModule() :6
void NativeModule__ctor_1_fn(NativeModule* __this)
{
    __this->ctor_1();
}

// protected void AddMember(Fuse.Scripting.NativeMember member) :23
void NativeModule__AddMember_fn(NativeModule* __this, ::g::Fuse::Scripting::NativeMember* member)
{
    __this->AddMember(member);
}

// public generated void add_Reset(Uno.EventHandler value) :15
void NativeModule__add_Reset_fn(NativeModule* __this, uDelegate* value)
{
    __this->add_Reset(value);
}

// public generated void remove_Reset(Uno.EventHandler value) :15
void NativeModule__remove_Reset_fn(NativeModule* __this, uDelegate* value)
{
    __this->remove_Reset(value);
}

// public generated NativeModule() [instance] :6
void NativeModule::ctor_1()
{
    _members = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/]));
    ctor_();
}

// protected void AddMember(Fuse.Scripting.NativeMember member) [instance] :23
void NativeModule::AddMember(::g::Fuse::Scripting::NativeMember* member)
{
    if (IsEvaluated())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"NativeModul...*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_members), member);
}

// public generated void add_Reset(Uno.EventHandler value) [instance] :15
void NativeModule::add_Reset(uDelegate* value)
{
    Reset1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Reset1, value), ::TYPES[13/*Uno.EventHandler*/]);
}

// public generated void remove_Reset(Uno.EventHandler value) [instance] :15
void NativeModule::remove_Reset(uDelegate* value)
{
    Reset1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Reset1, value), ::TYPES[13/*Uno.EventHandler*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativePromise.uno
// --------------------------------------------------------------------

// public sealed class NativePromise<T, TJSResult> :40
// {
static void NativePromise_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Scripting::FutureFactory_typeof();
    ::TYPES[15] = ::g::Uno::Threading::Promise_typeof();
    ::TYPES[16] = ::g::Uno::Threading::ThreadStart_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::FactoryClosure_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::FactoryClosure_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(2,
        ::TYPES[14/*Fuse.Scripting.FutureFactory`1*/]->MakeType(type->T(0), NULL), offsetof(NativePromise, _futureFactory), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativePromise, _resultConverter), 0,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0), NULL), offsetof(NativePromise, _func), 0);
}

uType* NativePromise_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 5;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(NativePromise);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2", options);
    type->fp_build_ = NativePromise_build;
    return type;
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :60
void NativePromise__ctor_1_fn(NativePromise* __this, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    __this->ctor_1(name, futureFactory, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :46
void NativePromise__ctor_2_fn(NativePromise* __this, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    __this->ctor_2(name, func, resultConverter);
}

// private Uno.Threading.Future<T> Factory(object[] args) :53
void NativePromise__Factory_fn(NativePromise* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Factory(args);
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :60
void NativePromise__New1_fn(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New1(__type, name, futureFactory, resultConverter);
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :46
void NativePromise__New2_fn(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New2(__type, name, func, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :60
void NativePromise::ctor_1(uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    ctor_(name);
    _futureFactory = futureFactory;
    _resultConverter = resultConverter;
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :46
void NativePromise::ctor_2(uString* name, uDelegate* func, uDelegate* resultConverter)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Scripting.FutureFactory<T>*/),
    };
    ctor_(name);
    _func = func;
    _futureFactory = uDelegate::New(__types[0], (void*)NativePromise__Factory_fn, this);
    _resultConverter = resultConverter;
}

// private Uno.Threading.Future<T> Factory(object[] args) [instance] :53
::g::Uno::Threading::Future1* NativePromise::Factory(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Threading.Promise<T>*/),
        __type->Precalced(0/*Fuse.Scripting.FactoryClosure<T>*/),
    };
    ::g::Uno::Threading::Promise* future = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[16/*Uno.Threading.ThreadStart*/], (void*)::g::Fuse::Scripting::FactoryClosure__Run_fn, (::g::Fuse::Scripting::FactoryClosure*)::g::Fuse::Scripting::FactoryClosure::New1(__types[1], _func, args, future)))->Start();
    return future;
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :60
NativePromise* NativePromise::New1(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    NativePromise* obj2 = (NativePromise*)uNew(__type);
    obj2->ctor_1(name, futureFactory, resultConverter);
    return obj2;
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :46
NativePromise* NativePromise::New2(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    NativePromise* obj1 = (NativePromise*)uNew(__type);
    obj1->ctor_2(name, func, resultConverter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeProperty.uno
// ---------------------------------------------------------------------

// public class NativeProperty<T, TJSValue> :8
// {
static void NativeProperty_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL), offsetof(NativeProperty, _setHandler), 0,
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL), offsetof(NativeProperty, _getHandler), 0,
        ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativeProperty, _valueConverter), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(NativeProperty, _isReadonly), 0);
}

uType* NativeProperty_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 7;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(NativeProperty);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeProperty`2", options);
    type->fp_build_ = NativeProperty_build;
    return type;
}

// public NativeProperty(string name) :16
void NativeProperty__ctor_1_fn(NativeProperty* __this, uString* name)
{
    __this->ctor_1(name);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :25
void NativeProperty__ctor_2_fn(NativeProperty* __this, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    __this->ctor_2(name, getHandler, setHandler, valueConverter);
}

// public NativeProperty(string name, TJSValue value) :19
void NativeProperty__ctor_3_fn(NativeProperty* __this, uString* name, void* value)
{
    __this->ctor_2(name, NULL, NULL, NULL);
    __this->_isReadonly = true;
    __this->_readonlyValue() = value;
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :25
void NativeProperty__New2_fn(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter, NativeProperty** __retval)
{
    *__retval = NativeProperty::New2(__type, name, getHandler, setHandler, valueConverter);
}

// public NativeProperty New(string name, TJSValue value) :19
void NativeProperty__New3_fn(uType* __type, uString* name, void* value, NativeProperty** __retval)
{
    NativeProperty* obj2 = (NativeProperty*)uNew(__type);
    NativeProperty__ctor_3_fn(obj2, name, value);
    return *__retval = obj2, void();
}

// public NativeProperty(string name) [instance] :16
void NativeProperty::ctor_1(uString* name)
{
    ctor_2(name, NULL, NULL, NULL);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [instance] :25
void NativeProperty::ctor_2(uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    ctor_(name);
    _setHandler = setHandler;
    _getHandler = getHandler;
    _valueConverter = valueConverter;
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [static] :25
NativeProperty* NativeProperty::New2(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    NativeProperty* obj3 = (NativeProperty*)uNew(__type);
    obj3->ctor_2(name, getHandler, setHandler, valueConverter);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Types.uno
// ------------------------------------------------------------

// public abstract class Object :32
// {
static void Object_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(Object_type, interface0));
}

Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Fuse.Scripting.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    return type;
}

// protected generated Object() :32
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :42
void Object__Equals_fn(Object* __this, uObject* o, bool* __retval)
{
    Object* a = uAs<Object*>(o, Object_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :48
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Object() [instance] :32
void Object::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeEventEmitterModule.uno
// -------------------------------------------------------------------------------

// private sealed class NativeEventEmitterModule.OnClosure :210
// {
static void NativeEventEmitterModule__OnClosure_build(uType* type)
{
    ::STRINGS[10] = uString::Const("on");
    ::TYPES[5] = uObject_typeof()->Array();
    type->SetFields(0,
        uObject_typeof(), offsetof(NativeEventEmitterModule__OnClosure, _eventName), 0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(NativeEventEmitterModule__OnClosure, _listener), 0);
}

uType* NativeEventEmitterModule__OnClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeEventEmitterModule__OnClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEventEmitterModule.OnClosure", options);
    type->fp_build_ = NativeEventEmitterModule__OnClosure_build;
    return type;
}

// public OnClosure(object eventName, Fuse.Scripting.Callback listener) :215
void NativeEventEmitterModule__OnClosure__ctor__fn(NativeEventEmitterModule__OnClosure* __this, uObject* eventName, uDelegate* listener)
{
    __this->ctor_(eventName, listener);
}

// public OnClosure New(object eventName, Fuse.Scripting.Callback listener) :215
void NativeEventEmitterModule__OnClosure__New1_fn(uObject* eventName, uDelegate* listener, NativeEventEmitterModule__OnClosure** __retval)
{
    *__retval = NativeEventEmitterModule__OnClosure::New1(eventName, listener);
}

// public void On(Fuse.Scripting.Context c, Fuse.Scripting.Object o) :221
void NativeEventEmitterModule__OnClosure__On_fn(NativeEventEmitterModule__OnClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    __this->On(c, o);
}

// public OnClosure(object eventName, Fuse.Scripting.Callback listener) [instance] :215
void NativeEventEmitterModule__OnClosure::ctor_(uObject* eventName, uDelegate* listener)
{
    _eventName = eventName;
    _listener = listener;
}

// public void On(Fuse.Scripting.Context c, Fuse.Scripting.Object o) [instance] :221
void NativeEventEmitterModule__OnClosure::On(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    uPtr(o)->CallMethod(::STRINGS[10/*"on"*/], uArray::Init<uObject*>(::TYPES[5/*object[]*/], 2, (uObject*)_eventName, (uDelegate*)_listener));
}

// public OnClosure New(object eventName, Fuse.Scripting.Callback listener) [static] :215
NativeEventEmitterModule__OnClosure* NativeEventEmitterModule__OnClosure::New1(uObject* eventName, uDelegate* listener)
{
    NativeEventEmitterModule__OnClosure* obj1 = (NativeEventEmitterModule__OnClosure*)uNew(NativeEventEmitterModule__OnClosure_typeof());
    obj1->ctor_(eventName, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativePromise.uno
// --------------------------------------------------------------------

// public delegate TJSResult ResultConverter<T, TJSResult>(Fuse.Scripting.Context context, T result) :8
uDelegateType* ResultConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativePromise.uno
// --------------------------------------------------------------------

// public delegate T ResultFactory<T>(object[] args) :6
uDelegateType* ResultFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultFactory`1", 1, 1);
    type->SetSignature(type->T(0),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptClass :301
// {
// static generated ScriptClass() :301
static void ScriptClass__cctor__fn(uType* __type)
{
    ScriptClass::_unoTypeToScriptClass_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[18/*Uno.Collections.Dictionary<Uno.Type, Fuse.Scripting.ScriptClass>*/]));
}

static void ScriptClass_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), type, NULL);
    type->SetFields(0,
        ::g::Uno::Type_typeof(), offsetof(ScriptClass, _unoType), 0,
        ::g::Fuse::Scripting::ScriptMember_typeof()->Array(), offsetof(ScriptClass, _members), 0,
        ::TYPES[18/*Uno.Collections.Dictionary<Uno.Type, Fuse.Scripting.ScriptClass>*/], (uintptr_t)&ScriptClass::_unoTypeToScriptClass_, uFieldFlagsStatic);
}

uType* ScriptClass_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptClass);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptClass", options);
    type->fp_build_ = ScriptClass_build;
    type->fp_cctor_ = ScriptClass__cctor__fn;
    return type;
}

// private ScriptClass(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :330
void ScriptClass__ctor__fn(ScriptClass* __this, uType* unoType, uArray* members)
{
    __this->ctor_(unoType, members);
}

// private ScriptClass New(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :330
void ScriptClass__New1_fn(uType* unoType, uArray* members, ScriptClass** __retval)
{
    *__retval = ScriptClass::New1(unoType, members);
}

// public static void Register(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :336
void ScriptClass__Register_fn(uType* unoType, uArray* members)
{
    ScriptClass::Register(unoType, members);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ScriptClass::_unoTypeToScriptClass_;

// private ScriptClass(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [instance] :330
void ScriptClass::ctor_(uType* unoType, uArray* members)
{
    _unoType = unoType;
    _members = members;
}

// private ScriptClass New(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [static] :330
ScriptClass* ScriptClass::New1(uType* unoType, uArray* members)
{
    ScriptClass* obj1 = (ScriptClass*)uNew(ScriptClass_typeof());
    obj1->ctor_(unoType, members);
    return obj1;
}

// public static void Register(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [static] :336
void ScriptClass::Register(uType* unoType, uArray* members)
{
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ScriptClass::_unoTypeToScriptClass_), unoType, ScriptClass::New1(unoType, members));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public abstract class ScriptMember :15
// {
static void ScriptMember_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ScriptMember, Name), 0);
}

uType* ScriptMember_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScriptMember);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMember", options);
    type->fp_build_ = ScriptMember_build;
    return type;
}

// protected ScriptMember(string name) :19
void ScriptMember__ctor__fn(ScriptMember* __this, uString* name)
{
    __this->ctor_(name);
}

// protected ScriptMember(string name) [instance] :19
void ScriptMember::ctor_(uString* name)
{
    Name = name;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public abstract class ScriptMethod :59
// {
static void ScriptMethod_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Scripting::ExecutionThread_typeof(), offsetof(ScriptMethod, Thread), 0);
}

uType* ScriptMethod_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptMethod);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMethod", options);
    type->fp_build_ = ScriptMethod_build;
    return type;
}

// protected ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) :63
void ScriptMethod__ctor_1_fn(ScriptMethod* __this, uString* name, int* thread)
{
    __this->ctor_1(name, *thread);
}

// protected ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) [instance] :63
void ScriptMethod::ctor_1(uString* name, int thread)
{
    ctor_(name);
    Thread = thread;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptMethod<T> :86
// {
static void ScriptMethod1_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Func3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), uObject_typeof(), NULL), offsetof(ScriptMethod1, _method), 0,
        ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), NULL), offsetof(ScriptMethod1, _voidMethod), 0);
}

uType* ScriptMethod1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ScriptMethod1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMethod`1", options);
    type->fp_build_ = ScriptMethod1_build;
    return type;
}

// public ScriptMethod(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) :96
void ScriptMethod1__ctor_2_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread)
{
    __this->ctor_2(name, method, *thread);
}

// public ScriptMethod(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) :91
void ScriptMethod1__ctor_3_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread)
{
    __this->ctor_3(name, method, *thread);
}

// public ScriptMethod New(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) :96
void ScriptMethod1__New1_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval)
{
    *__retval = ScriptMethod1::New1(__type, name, method, *thread);
}

// public ScriptMethod New(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) :91
void ScriptMethod1__New2_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval)
{
    *__retval = ScriptMethod1::New2(__type, name, method, *thread);
}

// public ScriptMethod(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) [instance] :96
void ScriptMethod1::ctor_2(uString* name, uDelegate* method, int thread)
{
    ctor_1(name, thread);
    _voidMethod = method;
}

// public ScriptMethod(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) [instance] :91
void ScriptMethod1::ctor_3(uString* name, uDelegate* method, int thread)
{
    ctor_1(name, thread);
    _method = method;
}

// public ScriptMethod New(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) [static] :96
ScriptMethod1* ScriptMethod1::New1(uType* __type, uString* name, uDelegate* method, int thread)
{
    ScriptMethod1* obj2 = (ScriptMethod1*)uNew(__type);
    obj2->ctor_2(name, method, thread);
    return obj2;
}

// public ScriptMethod New(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) [static] :91
ScriptMethod1* ScriptMethod1::New2(uType* __type, uString* name, uDelegate* method, int thread)
{
    ScriptMethod1* obj1 = (ScriptMethod1*)uNew(__type);
    obj1->ctor_3(name, method, thread);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptMethodInline :71
// {
static void ScriptMethodInline_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(ScriptMethodInline, Code), 0);
}

uType* ScriptMethodInline_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptMethodInline);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMethodInline", options);
    type->fp_build_ = ScriptMethodInline_build;
    return type;
}

// public ScriptMethodInline(string name, Fuse.Scripting.ExecutionThread thread, string code) :75
void ScriptMethodInline__ctor_2_fn(ScriptMethodInline* __this, uString* name, int* thread, uString* code)
{
    __this->ctor_2(name, *thread, code);
}

// public ScriptMethodInline New(string name, Fuse.Scripting.ExecutionThread thread, string code) :75
void ScriptMethodInline__New1_fn(uString* name, int* thread, uString* code, ScriptMethodInline** __retval)
{
    *__retval = ScriptMethodInline::New1(name, *thread, code);
}

// public ScriptMethodInline(string name, Fuse.Scripting.ExecutionThread thread, string code) [instance] :75
void ScriptMethodInline::ctor_2(uString* name, int thread, uString* code)
{
    ctor_1(name, thread);
    Code = code;
}

// public ScriptMethodInline New(string name, Fuse.Scripting.ExecutionThread thread, string code) [static] :75
ScriptMethodInline* ScriptMethodInline::New1(uString* name, int thread, uString* code)
{
    ScriptMethodInline* obj1 = (ScriptMethodInline*)uNew(ScriptMethodInline_typeof());
    obj1->ctor_2(name, thread, code);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptModule.Evaluate.uno
// ----------------------------------------------------------------------------

// public partial class ScriptModule :10
// {
// static generated ScriptModule() :10
static void ScriptModule__cctor__fn(uType* __type)
{
    ScriptModule::ModuleContainsAnErrorMessage_ = ::STRINGS[11/*"require(): ...*/];
}

static void ScriptModule_build(uType* type)
{
    ::STRINGS[11] = uString::Const("require(): module contains an error: ");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(1,
        ::g::Uno::UX::FileSource_typeof(), offsetof(ScriptModule, _file), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&ScriptModule::ModuleContainsAnErrorMessage_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::Module_type* ScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Module_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Scripting.ScriptModule", options);
    type->fp_build_ = ScriptModule_build;
    type->fp_cctor_ = ScriptModule__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public generated ScriptModule() :10
void ScriptModule__ctor_1_fn(ScriptModule* __this)
{
    __this->ctor_1();
}

// public Uno.UX.FileSource get_File() :20
void ScriptModule__get_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :21
void ScriptModule__set_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

uSStrong<uString*> ScriptModule::ModuleContainsAnErrorMessage_;

// public generated ScriptModule() [instance] :10
void ScriptModule::ctor_1()
{
    ctor_();
}

// public Uno.UX.FileSource get_File() [instance] :20
::g::Uno::UX::FileSource* ScriptModule::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :21
void ScriptModule::File(::g::Uno::UX::FileSource* value)
{
    _file = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptPromise<TSelf, TResult, TJSResult> :149
// {
static void ScriptPromise_build(uType* type)
{
    type->SetFields(2);
}

uType* ScriptPromise_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 2;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(ScriptPromise);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptPromise`3", options);
    type->fp_build_ = ScriptPromise_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public abstract class ScriptProperty :35
// {
static void ScriptProperty_build(uType* type)
{
    ::STRINGS[12] = uString::Const("");
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(ScriptProperty, Modifier), 0);
}

uType* ScriptProperty_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptProperty);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptProperty", options);
    type->fp_build_ = ScriptProperty_build;
    return type;
}

// protected ScriptProperty(string name, [string modifier]) :38
void ScriptProperty__ctor_1_fn(ScriptProperty* __this, uString* name, uString* modifier)
{
    __this->ctor_1(name, modifier);
}

// protected ScriptProperty(string name, [string modifier]) [instance] :38
void ScriptProperty::ctor_1(uString* name, uString* modifier)
{
    ctor_(name);
    Modifier = ((modifier != NULL) ? modifier : ::STRINGS[12/*""*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptProperty<TOwner, TValue> :45
// {
static void ScriptProperty1_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), ::g::Uno::UX::Property1_typeof()->MakeType(type->T(1), NULL), NULL), offsetof(ScriptProperty1, _getter), 0);
}

uType* ScriptProperty1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptProperty_typeof();
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ScriptProperty1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptProperty`2", options);
    type->fp_build_ = ScriptProperty1_build;
    return type;
}

// public ScriptProperty(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) :53
void ScriptProperty1__ctor_2_fn(ScriptProperty1* __this, uString* name, uDelegate* getter, uString* modifier)
{
    __this->ctor_2(name, getter, modifier);
}

// public ScriptProperty New(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) :53
void ScriptProperty1__New1_fn(uType* __type, uString* name, uDelegate* getter, uString* modifier, ScriptProperty1** __retval)
{
    *__retval = ScriptProperty1::New1(__type, name, getter, modifier);
}

// public ScriptProperty(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) [instance] :53
void ScriptProperty1::ctor_2(uString* name, uDelegate* getter, uString* modifier)
{
    ctor_1(name, modifier);
    _getter = getter;
}

// public ScriptProperty New(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) [static] :53
ScriptProperty1* ScriptProperty1::New1(uType* __type, uString* name, uDelegate* getter, uString* modifier)
{
    ScriptProperty1* obj1 = (ScriptProperty1*)uNew(__type);
    obj1->ctor_2(name, getter, modifier);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/IScriptEvent.uno
// -------------------------------------------------------------------

// public sealed class StringChangedArgs :42
// {
static void StringChangedArgs_build(uType* type)
{
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1);
}

uType* StringChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::ValueChangedArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StringChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.StringChangedArgs", options);
    type->fp_build_ = StringChangedArgs_build;
    return type;
}

// public StringChangedArgs(string newValue) :44
void StringChangedArgs__ctor_2_fn(StringChangedArgs* __this, uString* newValue)
{
    __this->ctor_2(newValue);
}

// public StringChangedArgs New(string newValue) :44
void StringChangedArgs__New3_fn(uString* newValue, StringChangedArgs** __retval)
{
    *__retval = StringChangedArgs::New3(newValue);
}

// public StringChangedArgs(string newValue) [instance] :44
void StringChangedArgs::ctor_2(uString* newValue)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, newValue);
}

// public StringChangedArgs New(string newValue) [static] :44
StringChangedArgs* StringChangedArgs::New3(uString* newValue)
{
    StringChangedArgs* obj1 = (StringChangedArgs*)uNew(StringChangedArgs_typeof());
    obj1->ctor_2(newValue);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/Types.uno
// ------------------------------------------------------------

// public static class Value :85
// {
static void Value_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Double_typeof();
    ::TYPES[20] = ::g::Uno::Float_typeof();
    ::TYPES[21] = ::g::Uno::Int_typeof();
    ::TYPES[22] = ::g::Uno::UInt_typeof();
}

uClassType* Value_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Value", options);
    type->fp_build_ = Value_build;
    return type;
}

// public static double ToNumber(object obj) :87
void Value__ToNumber_fn(uObject* obj, double* __retval)
{
    *__retval = Value::ToNumber(obj);
}

// public static double ToNumber(object obj) [static] :87
double Value::ToNumber(uObject* obj)
{
    if (uIs(obj, ::TYPES[19/*double*/]))
        return uUnbox<double>(::TYPES[19/*double*/], obj);

    if (uIs(obj, ::TYPES[20/*float*/]))
        return (double)uUnbox<float>(::TYPES[20/*float*/], obj);

    if (uIs(obj, ::TYPES[21/*int*/]))
        return (double)uUnbox<int>(::TYPES[21/*int*/], obj);

    if (uIs(obj, ::TYPES[22/*uint*/]))
        return (double)uUnbox<uint32_t>(::TYPES[22/*uint*/], obj);

    return 0.0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/NativeProperty.uno
// ---------------------------------------------------------------------

// public delegate TJSValue ValueConverter<T, TJSValue>(Fuse.Scripting.Context context, T originalValue) :6
uDelegateType* ValueConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ValueConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

}}} // ::g::Fuse::Scripting
