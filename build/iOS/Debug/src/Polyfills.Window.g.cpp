// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[3];

namespace g{
namespace Polyfills{
namespace Window{

// /usr/local/share/uno/Packages/Polyfills.Window/1.4.0/WindowModule.uno
// ---------------------------------------------------------------------

// public sealed class WindowModule :10
// {
static void WindowModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Polyfills/Window");
    ::STRINGS[1] = uString::Const("Polyfills.Window");
    ::STRINGS[2] = uString::Const("js/Window.js");
    type->SetDependencies(
        ::g::Uno::UX::FileSource_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(2,
        type, (uintptr_t)&WindowModule::_instance_, uFieldFlagsStatic,
        ::g::Uno::UX::FileSource_typeof(), (uintptr_t)&WindowModule::_fileSourceInstance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::Module_type* WindowModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::FileModule_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(WindowModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Polyfills.Window.WindowModule", options);
    type->fp_build_ = WindowModule_build;
    type->fp_ctor_ = (void*)WindowModule__New3_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public WindowModule() :28
void WindowModule__ctor_3_fn(WindowModule* __this)
{
    __this->ctor_3();
}

// private static Uno.UX.FileSource GetWindow() :20
void WindowModule__GetWindow_fn(::g::Uno::UX::FileSource** __retval)
{
    *__retval = WindowModule::GetWindow();
}

// public WindowModule New() :28
void WindowModule__New3_fn(WindowModule** __retval)
{
    *__retval = WindowModule::New3();
}

uSStrong<WindowModule*> WindowModule::_instance_;
uSStrong< ::g::Uno::UX::FileSource*> WindowModule::_fileSourceInstance_;

// public WindowModule() [instance] :28
void WindowModule::ctor_3()
{
    ctor_2(WindowModule::GetWindow());

    if (WindowModule::_instance_ == NULL)
        ::g::Uno::UX::Resource::SetGlobalKey(WindowModule::_instance_ = this, ::STRINGS[0/*"Polyfills/W...*/]);
}

// private static Uno.UX.FileSource GetWindow() [static] :20
::g::Uno::UX::FileSource* WindowModule::GetWindow()
{
    if (WindowModule::_fileSourceInstance_ == NULL)
        WindowModule::_fileSourceInstance_ = ::g::Uno::UX::FileSource::op_Implicit(uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[1/*"Polyfills.W...*/]))->GetFile(::STRINGS[2/*"js/Window.js"*/]));

    return WindowModule::_fileSourceInstance_;
}

// public WindowModule New() [static] :28
WindowModule* WindowModule::New3()
{
    WindowModule* obj1 = (WindowModule*)uNew(WindowModule_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Polyfills::Window
