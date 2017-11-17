// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/ScriptModule.Evaluate.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Module.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public partial class ScriptModule :10
// {
::g::Fuse::Scripting::Module_type* ScriptModule_typeof();
void ScriptModule__ctor_1_fn(ScriptModule* __this);
void ScriptModule__get_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval);
void ScriptModule__set_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource* value);

struct ScriptModule : ::g::Fuse::Scripting::Module
{
    static uSStrong<uString*> ModuleContainsAnErrorMessage_;
    static uSStrong<uString*>& ModuleContainsAnErrorMessage() { return ModuleContainsAnErrorMessage_; }
    uStrong< ::g::Uno::UX::FileSource*> _file;

    void ctor_1();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
};
// }

}}} // ::g::Fuse::Scripting
