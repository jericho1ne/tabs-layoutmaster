// This file was generated based on /usr/local/share/uno/Packages/Polyfills.Window/1.4.0/WindowModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.FileModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Polyfills{namespace Window{struct WindowModule;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Polyfills{
namespace Window{

// public sealed class WindowModule :10
// {
::g::Fuse::Scripting::Module_type* WindowModule_typeof();
void WindowModule__ctor_3_fn(WindowModule* __this);
void WindowModule__GetWindow_fn(::g::Uno::UX::FileSource** __retval);
void WindowModule__New3_fn(WindowModule** __retval);

struct WindowModule : ::g::Fuse::Scripting::FileModule
{
    static uSStrong<WindowModule*> _instance_;
    static uSStrong<WindowModule*>& _instance() { return _instance_; }
    static uSStrong< ::g::Uno::UX::FileSource*> _fileSourceInstance_;
    static uSStrong< ::g::Uno::UX::FileSource*>& _fileSourceInstance() { return _fileSourceInstance_; }

    void ctor_3();
    static ::g::Uno::UX::FileSource* GetWindow();
    static WindowModule* New3();
};
// }

}}} // ::g::Polyfills::Window
