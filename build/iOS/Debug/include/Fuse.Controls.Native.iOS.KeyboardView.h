// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/iOS/KeyboardView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct KeyboardView;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class KeyboardView :6
// {
uType* KeyboardView_typeof();
void KeyboardView__ctor__fn(KeyboardView* __this);
void KeyboardView__Create_fn(::g::ObjC::Object** __retval);
void KeyboardView__get_Handle_fn(KeyboardView* __this, ::g::ObjC::Object** __retval);
void KeyboardView__New1_fn(KeyboardView** __retval);

struct KeyboardView : uObject
{
    uStrong< ::g::ObjC::Object*> _handle;

    void ctor_();
    ::g::ObjC::Object* Handle();
    static ::g::ObjC::Object* Create();
    static KeyboardView* New1();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
