// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/Timer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerManager;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class TimerModule :26
// {
::g::Fuse::Scripting::Module_type* TimerModule_typeof();
void TimerModule__ctor_2_fn(TimerModule* __this);
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TimerModule__New2_fn(TimerModule** __retval);
void TimerModule__OnReset_fn(TimerModule* __this, uObject* sender, ::g::Uno::EventArgs* args);

struct TimerModule : ::g::Fuse::Scripting::NativeModule
{
    uStrong< ::g::Fuse::Reactive::FuseJS::TimerManager*> _tm;
    static uSStrong<TimerModule*> _instance_;
    static uSStrong<TimerModule*>& _instance() { return _instance_; }

    void ctor_2();
    uObject* Create(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Delete(::g::Fuse::Scripting::Context* context, uArray* args);
    void OnReset(uObject* sender, ::g::Uno::EventArgs* args);
    static TimerModule* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
