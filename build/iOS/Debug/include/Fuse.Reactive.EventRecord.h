// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/EventRecord.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IEventRecord.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct EventRecord;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class EventRecord :9
// {
struct EventRecord_type : uType
{
    ::g::Fuse::Reactive::IEventRecord interface0;
};

EventRecord_type* EventRecord_typeof();

struct EventRecord : uObject
{
};
// }

}}} // ::g::Fuse::Reactive
