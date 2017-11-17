// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract interface IObserver :142
// {
uInterfaceType* IObserver_typeof();

struct IObserver
{
    void(*fp_OnNewAll)(uObject*, uObject*);
    static void OnNewAll(const uInterface& __this, uObject* values) { __this.VTable<IObserver>()->fp_OnNewAll(__this, values); }
};
// }

}}} // ::g::Fuse::Reactive
