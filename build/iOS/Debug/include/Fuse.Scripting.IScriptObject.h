// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/IScriptEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IScriptObject :15
// {
uInterfaceType* IScriptObject_typeof();

struct IScriptObject
{
    void(*fp_get_ScriptContext)(uObject*, ::g::Fuse::Scripting::Context**);
    static ::g::Fuse::Scripting::Context* ScriptContext(const uInterface& __this) { ::g::Fuse::Scripting::Context* __retval; return __this.VTable<IScriptObject>()->fp_get_ScriptContext(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
