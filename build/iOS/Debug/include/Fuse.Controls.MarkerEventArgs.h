// This file was generated based on '/Users/mpeteu/Library/Application Support/Fusetools/Packages/Fuse.Maps/1.4.0/MapView.Events.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct MarkerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class MarkerEventArgs :9
// {
uType* MarkerEventArgs_typeof();
void MarkerEventArgs__ctor_1_fn(MarkerEventArgs* __this, uString* label);
void MarkerEventArgs__New2_fn(uString* label, MarkerEventArgs** __retval);

struct MarkerEventArgs : ::g::Uno::EventArgs
{
    uStrong<uString*> Label;

    void ctor_1(uString* label);
    static MarkerEventArgs* New2(uString* label);
};
// }

}}} // ::g::Fuse::Controls
