// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.4.0/FileModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct FileModule;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public class FileModule :19
// {
::g::Fuse::Scripting::Module_type* FileModule_typeof();
void FileModule__ctor_2_fn(FileModule* __this, ::g::Uno::UX::FileSource* fs);

struct FileModule : ::g::Fuse::Scripting::ScriptModule
{
    void ctor_2(::g::Uno::UX::FileSource* fs);
};
// }

}}} // ::g::Fuse::Scripting
