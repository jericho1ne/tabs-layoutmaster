// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostic.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DiagnosticType.h>
#include <Fuse.Marshal.h>
#include <Fuse.MarshalException.h>
#include <Fuse.Reactive.FuseJS.DiagnosticsImplModule.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerManager.h>
#include <Fuse.Reactive.FuseJS.TimerManager.Timer.h>
#include <Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.Value.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[8];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/Timer.uno
// ------------------------------------------------------------------------------

// private sealed class TimerModule.CallbackClosure :146
// {
static void TimerModule__CallbackClosure_build(uType* type)
{
    ::STRINGS[0] = uString::Const("func");
    ::STRINGS[1] = uString::Const("args");
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(TimerModule__CallbackClosure, _func), 0,
        uObject_typeof()->Array(), offsetof(TimerModule__CallbackClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(TimerModule__CallbackClosure, _context), 0);
}

uType* TimerModule__CallbackClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerModule__CallbackClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", options);
    type->fp_build_ = TimerModule__CallbackClosure_build;
    return type;
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :152
void TimerModule__CallbackClosure__ctor__fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    __this->ctor_(context, func, args);
}

// public void Callback() :162
void TimerModule__CallbackClosure__Callback_fn(TimerModule__CallbackClosure* __this)
{
    __this->Callback();
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :152
void TimerModule__CallbackClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args, TimerModule__CallbackClosure** __retval)
{
    *__retval = TimerModule__CallbackClosure::New1(context, func, args);
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [instance] :152
void TimerModule__CallbackClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    if (func == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"func"*/]));

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"args"*/]));

    _context = context;
    _func = func;
    _args = args;
}

// public void Callback() [instance] :162
void TimerModule__CallbackClosure::Callback()
{
    uPtr(_func)->Call(_args);
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [static] :152
TimerModule__CallbackClosure* TimerModule__CallbackClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    TimerModule__CallbackClosure* obj1 = (TimerModule__CallbackClosure*)uNew(TimerModule__CallbackClosure_typeof());
    obj1->ctor_(context, func, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/DiagnosticsImpl.uno
// ----------------------------------------------------------------------------------------

// public sealed class DiagnosticsImplModule :12
// {
static void DiagnosticsImplModule_build(uType* type)
{
    ::STRINGS[2] = uString::Const("FuseJS/DiagnosticsImpl");
    ::STRINGS[3] = uString::Const("report");
    ::STRINGS[4] = uString::Const("Report requires 2 arguments");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/DiagnosticsImpl.uno");
    ::STRINGS[6] = uString::Const("Report");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.DiagnosticType>*/, ::g::Fuse::DiagnosticType_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(3,
        type, (uintptr_t)&DiagnosticsImplModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::Module_type* DiagnosticsImplModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(DiagnosticsImplModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Reactive.FuseJS.DiagnosticsImplModule", options);
    type->fp_build_ = DiagnosticsImplModule_build;
    type->fp_ctor_ = (void*)DiagnosticsImplModule__New2_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public DiagnosticsImplModule() :16
void DiagnosticsImplModule__ctor_2_fn(DiagnosticsImplModule* __this)
{
    __this->ctor_2();
}

// public DiagnosticsImplModule New() :16
void DiagnosticsImplModule__New2_fn(DiagnosticsImplModule** __retval)
{
    *__retval = DiagnosticsImplModule::New2();
}

// private object Report(Fuse.Scripting.Context context, object[] args) :26
void DiagnosticsImplModule__Report_fn(DiagnosticsImplModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Report(context, args);
}

uSStrong<DiagnosticsImplModule*> DiagnosticsImplModule::_instance_;

// public DiagnosticsImplModule() [instance] :16
void DiagnosticsImplModule::ctor_2()
{
    ctor_1();

    if (DiagnosticsImplModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(DiagnosticsImplModule::_instance_ = this, ::STRINGS[2/*"FuseJS/Diag...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"report"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)DiagnosticsImplModule__Report_fn, this)));
}

// private object Report(Fuse.Scripting.Context context, object[] args) [instance] :26
uObject* DiagnosticsImplModule::Report(::g::Fuse::Scripting::Context* context, uArray* args)
{
    int ret2;
    uString* ret3;

    if (uPtr(args)->Length() != 2)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[4/*"Report requ...*/], this, ::STRINGS[5/*"/usr/local/...*/], 30, ::STRINGS[6/*"Report"*/]);
        return NULL;
    }

    int type = (::g::Fuse::Marshal__ToType_fn(::TYPES[1/*Fuse.Marshal.ToType<Fuse.DiagnosticType>*/], uPtr(args)->Strong<uObject*>(0), &ret2), ret2);
    uString* msg = (::g::Fuse::Marshal__ToType_fn(::TYPES[2/*Fuse.Marshal.ToType<string>*/], args->Strong<uObject*>(1), &ret3), ret3);
    ::g::Fuse::Diagnostics::Report(::g::Fuse::Diagnostic::New1(type, msg, NULL, NULL, 0, NULL, NULL));
    return NULL;
}

// public DiagnosticsImplModule New() [static] :16
DiagnosticsImplModule* DiagnosticsImplModule::New2()
{
    DiagnosticsImplModule* obj1 = (DiagnosticsImplModule*)uNew(DiagnosticsImplModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/Http.uno
// -----------------------------------------------------------------------------

// public sealed class Http :12
// {
static void Http_build(uType* type)
{
    ::STRINGS[7] = uString::Const("FuseJS/Http");
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(3,
        type, (uintptr_t)&Http::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::Module_type* Http_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Http);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Reactive.FuseJS.Http", options);
    type->fp_build_ = Http_build;
    type->fp_ctor_ = (void*)Http__New2_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Http() :15
void Http__ctor_2_fn(Http* __this)
{
    __this->ctor_2();
}

// public Http New() :15
void Http__New2_fn(Http** __retval)
{
    *__retval = Http::New2();
}

uSStrong<Http*> Http::_instance_;

// public Http() [instance] :15
void Http::ctor_2()
{
    ctor_1();

    if (Http::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Http::_instance_ = this, ::STRINGS[7/*"FuseJS/Http"*/]);
}

// public Http New() [static] :15
Http* Http::New2()
{
    Http* obj1 = (Http*)uNew(Http_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/Timer.uno
// ------------------------------------------------------------------------------

// private sealed class TimerManager.Timer :244
// {
static void TimerManager__Timer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(TimerManager__Timer, _timeout), 0,
        ::g::Uno::Action_typeof(), offsetof(TimerManager__Timer, _callback), 0,
        ::g::Uno::Bool_typeof(), offsetof(TimerManager__Timer, _repeat), 0,
        ::g::Uno::Bool_typeof(), offsetof(TimerManager__Timer, _isRunning), 0,
        ::g::Uno::Double_typeof(), offsetof(TimerManager__Timer, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(TimerManager__Timer, ID), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(TimerManager__Timer, OnStop), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&TimerManager__Timer::_id_, uFieldFlagsStatic);
}

uType* TimerManager__Timer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TimerManager__Timer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager.Timer", options);
    type->fp_build_ = TimerManager__Timer_build;
    return type;
}

// public Timer(double ms, Uno.Action callback, bool repeat) :259
void TimerManager__Timer__ctor__fn(TimerManager__Timer* __this, double* ms, uDelegate* callback, bool* repeat)
{
    __this->ctor_(*ms, callback, *repeat);
}

// public static double GetMilliseconds() :304
void TimerManager__Timer__GetMilliseconds_fn(double* __retval)
{
    *__retval = TimerManager__Timer::GetMilliseconds();
}

// public Timer New(double ms, Uno.Action callback, bool repeat) :259
void TimerManager__Timer__New1_fn(double* ms, uDelegate* callback, bool* repeat, TimerManager__Timer** __retval)
{
    *__retval = TimerManager__Timer::New1(*ms, callback, *repeat);
}

// private void Start() :268
void TimerManager__Timer__Start_fn(TimerManager__Timer* __this)
{
    __this->Start();
}

// public void Stop() :274
void TimerManager__Timer__Stop_fn(TimerManager__Timer* __this)
{
    __this->Stop();
}

int TimerManager__Timer::_id_;

// public Timer(double ms, Uno.Action callback, bool repeat) [instance] :259
void TimerManager__Timer::ctor_(double ms, uDelegate* callback, bool repeat)
{
    ID = (TimerManager__Timer::_id_++);
    _timeout = ms;
    _callback = callback;
    _repeat = repeat;
    Start();
}

// private void Start() [instance] :268
void TimerManager__Timer::Start()
{
    _startTime = TimerManager__Timer::GetMilliseconds();
    _isRunning = true;
}

// public void Stop() [instance] :274
void TimerManager__Timer::Stop()
{
    _isRunning = false;

    if (::g::Uno::Delegate::op_Inequality(OnStop, NULL))
        uPtr(OnStop)->InvokeVoid(uCRef<int>(ID));
}

// public static double GetMilliseconds() [static] :304
double TimerManager__Timer::GetMilliseconds()
{
    return (double)(::g::Uno::Diagnostics::Clock::GetTicks() / 10000LL);
}

// public Timer New(double ms, Uno.Action callback, bool repeat) [static] :259
TimerManager__Timer* TimerManager__Timer::New1(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* obj1 = (TimerManager__Timer*)uNew(TimerManager__Timer_typeof());
    obj1->ctor_(ms, callback, repeat);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/Timer.uno
// ------------------------------------------------------------------------------

// internal sealed class TimerManager :169
// {
static void TimerManager_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof(), NULL), offsetof(TimerManager, _timers), 0);
}

uType* TimerManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TimerManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager", options);
    type->fp_build_ = TimerManager_build;
    type->fp_ctor_ = (void*)TimerManager__New1_fn;
    return type;
}

// public generated TimerManager() :169
void TimerManager__ctor__fn(TimerManager* __this)
{
    __this->ctor_();
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) :190
void TimerManager__AddTimer_fn(TimerManager* __this, double* ms, uDelegate* callback, bool* repeat, int* __retval)
{
    *__retval = __this->AddTimer(*ms, callback, *repeat);
}

// public void DeleteAllTimers() :198
void TimerManager__DeleteAllTimers_fn(TimerManager* __this)
{
    __this->DeleteAllTimers();
}

// public bool DeleteTimer(int id) :206
void TimerManager__DeleteTimer_fn(TimerManager* __this, int* id, bool* __retval)
{
    *__retval = __this->DeleteTimer(*id);
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) :226
void TimerManager__GetTimer_fn(TimerManager* __this, int* id, TimerManager__Timer** __retval)
{
    *__retval = __this->GetTimer(*id);
}

// public generated TimerManager New() :169
void TimerManager__New1_fn(TimerManager** __retval)
{
    *__retval = TimerManager::New1();
}

// private void RemoveTimer(int id) :217
void TimerManager__RemoveTimer_fn(TimerManager* __this, int* id)
{
    __this->RemoveTimer(*id);
}

// public generated TimerManager() [instance] :169
void TimerManager::ctor_()
{
    _timers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof(), NULL)));
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) [instance] :190
int TimerManager::AddTimer(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* t = TimerManager__Timer::New1(ms, callback, repeat);
    t->OnStop = uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), (void*)TimerManager__RemoveTimer_fn, this);
    ::g::Uno::Collections::List__Add_fn(uPtr(_timers), t);
    return t->ID;
}

// public void DeleteAllTimers() [instance] :198
void TimerManager::DeleteAllTimers()
{
    TimerManager__Timer* ret2;

    for (int i = uPtr(_timers)->Count() - 1; i >= 0; i--)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret2), ret2))->Stop();
}

// public bool DeleteTimer(int id) [instance] :206
bool TimerManager::DeleteTimer(int id)
{
    TimerManager__Timer* timer = GetTimer(id);

    if (timer != NULL)
    {
        uPtr(timer)->Stop();
        return true;
    }

    return false;
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) [instance] :226
TimerManager__Timer* TimerManager::GetTimer(int id)
{
    TimerManager__Timer* ret4;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
    {
        TimerManager__Timer* timer = (::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret4), ret4);

        if (uPtr(timer)->ID == id)
            return timer;
    }

    return NULL;
}

// private void RemoveTimer(int id) [instance] :217
void TimerManager::RemoveTimer(int id)
{
    TimerManager__Timer* ret5;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret5), ret5))->ID == id)
            uPtr(_timers)->RemoveAt(i);
}

// public generated TimerManager New() [static] :169
TimerManager* TimerManager::New1()
{
    TimerManager* obj1 = (TimerManager*)uNew(TimerManager_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/Timer.uno
// ------------------------------------------------------------------------------

// public sealed class TimerModule :26
// {
static void TimerModule_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Reactive::FuseJS::TimerManager_typeof(), offsetof(TimerModule, _tm), 0,
        type, (uintptr_t)&TimerModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::Module_type* TimerModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TimerModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Reactive.FuseJS.TimerModule", options);
    type->fp_build_ = TimerModule_build;
    type->fp_ctor_ = (void*)TimerModule__New2_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public TimerModule() :43
void TimerModule__ctor_2_fn(TimerModule* __this)
{
    __this->ctor_2();
}

// private object Create(Fuse.Scripting.Context context, object[] args) :80
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Create(context, args);
}

// private object Delete(Fuse.Scripting.Context context, object[] args) :121
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Delete(context, args);
}

// public TimerModule New() :43
void TimerModule__New2_fn(TimerModule** __retval)
{
    *__retval = TimerModule::New2();
}

// private void OnReset(object sender, Uno.EventArgs args) :56
void TimerModule__OnReset_fn(TimerModule* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnReset(sender, args);
}

uSStrong<TimerModule*> TimerModule::_instance_;

// public TimerModule() [instance] :43
void TimerModule::ctor_2()
{
    ctor_1();

    if (TimerModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(TimerModule::_instance_ = this, uString::Const("FuseJS/Timer"));
    _tm = ::g::Fuse::Reactive::FuseJS::TimerManager::New1();
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(uString::Const("create"), uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Create_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(uString::Const("delete"), uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Delete_fn, this)));
    add_Reset(uDelegate::New(::g::Uno::EventHandler_typeof(), (void*)TimerModule__OnReset_fn, this));
}

// private object Create(Fuse.Scripting.Context context, object[] args) [instance] :80
uObject* TimerModule::Create(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 3)
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("create(): requires at least three arguments")));

    if (!uIs((uObject*)uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::Function_typeof()))
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("create(): first argument must be a function")));

    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::Function_typeof());
    double ms = ::g::Fuse::Scripting::Value::ToNumber(args->Strong<uObject*>(1));
    bool repeat = uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(2));
    uArray* innerArgs = uArray::New(uObject_typeof()->Array(), args->Length() - 3);

    for (int i = 0; i < innerArgs->Length(); i++)
        uPtr(innerArgs)->Strong<uObject*>(i) = uPtr(args)->Strong<uObject*>(3 + i);

    return uBox<int>(::g::Uno::Int_typeof(), uPtr(_tm)->AddTimer(ms, uDelegate::New(::g::Uno::Action_typeof(), (void*)TimerModule__CallbackClosure__Callback_fn, TimerModule__CallbackClosure::New1(context, func, innerArgs)), repeat));
}

// private object Delete(Fuse.Scripting.Context context, object[] args) [instance] :121
uObject* TimerModule::Delete(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("delete(): requires one argument")));

    try
    {
        {
            int handle = ::g::Fuse::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0));
            uPtr(_tm)->DeleteTimer(handle);
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::g::Fuse::MarshalException_typeof()))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            ::g::Fuse::Diagnostics::UserWarning(uString::Const("Timer.delete(): The parameter is not a valid timer handle"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/Timer.uno"), 133, uString::Const("Delete"));
        }
        else         throw __t;
    }

    return NULL;
}

// private void OnReset(object sender, Uno.EventArgs args) [instance] :56
void TimerModule::OnReset(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (_tm != NULL)
        uPtr(_tm)->DeleteAllTimers();
}

// public TimerModule New() [static] :43
TimerModule* TimerModule::New2()
{
    TimerModule* obj1 = (TimerModule*)uNew(TimerModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Reactive::FuseJS
