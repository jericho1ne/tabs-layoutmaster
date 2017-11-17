// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.WebSocket.NativeFunctionModule.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace WebSocket{

// /usr/local/share/uno/Packages/Fuse.WebSockets/1.4.0/WebSocketModule.uno
// -----------------------------------------------------------------------

// public abstract class NativeFunctionModule :10
// {
static void NativeFunctionModule_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(3,
        type, (uintptr_t)&NativeFunctionModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::Module_type* NativeFunctionModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeFunctionModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.WebSocket.NativeFunctionModule", options);
    type->fp_build_ = NativeFunctionModule_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// protected NativeFunctionModule(string name) :14
void NativeFunctionModule__ctor_2_fn(NativeFunctionModule* __this, uString* name)
{
    __this->ctor_2(name);
}

uSStrong<NativeFunctionModule*> NativeFunctionModule::_instance_;

// protected NativeFunctionModule(string name) [instance] :14
void NativeFunctionModule::ctor_2(uString* name)
{
    ctor_1();

    if (::g::Uno::String::IsNullOrEmpty(name))
        U_THROW(::g::Uno::ArgumentNullException::New6(name));

    if (NativeFunctionModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(NativeFunctionModule::_instance_ = this, name);
}
// }

// /usr/local/share/uno/Packages/Fuse.WebSockets/1.4.0/WebSocketModule.uno
// -----------------------------------------------------------------------

// public sealed class WebSocketClientModule :54
// {
static void WebSocketClientModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/WebSocketClient");
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(3);
}

::g::Fuse::Scripting::Module_type* WebSocketClientModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::WebSocket::NativeFunctionModule_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WebSocketClientModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.WebSocket.WebSocketClientModule", options);
    type->fp_build_ = WebSocketClientModule_build;
    type->fp_ctor_ = (void*)WebSocketClientModule__New2_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public WebSocketClientModule() :56
void WebSocketClientModule__ctor_3_fn(WebSocketClientModule* __this)
{
    __this->ctor_3();
}

// public WebSocketClientModule New() :56
void WebSocketClientModule__New2_fn(WebSocketClientModule** __retval)
{
    *__retval = WebSocketClientModule::New2();
}

// public void OnReset(object o, Uno.EventArgs e) :61
void WebSocketClientModule__OnReset_fn(WebSocketClientModule* __this, uObject* o, ::g::Uno::EventArgs* e)
{
    __this->OnReset(o, e);
}

// public WebSocketClientModule() [instance] :56
void WebSocketClientModule::ctor_3()
{
    ctor_2(::STRINGS[0/*"FuseJS/WebS...*/]);
    add_Reset(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)WebSocketClientModule__OnReset_fn, this));
}

// public void OnReset(object o, Uno.EventArgs e) [instance] :61
void WebSocketClientModule::OnReset(uObject* o, ::g::Uno::EventArgs* e)
{
}

// public WebSocketClientModule New() [static] :56
WebSocketClientModule* WebSocketClientModule::New2()
{
    WebSocketClientModule* obj1 = (WebSocketClientModule*)uNew(WebSocketClientModule_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::WebSocket
