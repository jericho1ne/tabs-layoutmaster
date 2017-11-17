// This file was generated based on /Users/mpeteu/Sites/tabs-layoutmaster/.uno/ux13/TabsLayoutMaster.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct TabsLayoutMaster_accessor_Tab_Text;}

namespace g{

// internal sealed class TabsLayoutMaster_accessor_Tab_Text :1
// {
::g::Uno::UX::PropertyAccessor_type* TabsLayoutMaster_accessor_Tab_Text_typeof();
void TabsLayoutMaster_accessor_Tab_Text__ctor_1_fn(TabsLayoutMaster_accessor_Tab_Text* __this);
void TabsLayoutMaster_accessor_Tab_Text__GetAsObject_fn(TabsLayoutMaster_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void TabsLayoutMaster_accessor_Tab_Text__get_Name_fn(TabsLayoutMaster_accessor_Tab_Text* __this, ::g::Uno::UX::Selector* __retval);
void TabsLayoutMaster_accessor_Tab_Text__New1_fn(TabsLayoutMaster_accessor_Tab_Text** __retval);
void TabsLayoutMaster_accessor_Tab_Text__get_PropertyType_fn(TabsLayoutMaster_accessor_Tab_Text* __this, uType** __retval);
void TabsLayoutMaster_accessor_Tab_Text__SetAsObject_fn(TabsLayoutMaster_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void TabsLayoutMaster_accessor_Tab_Text__get_SupportsOriginSetter_fn(TabsLayoutMaster_accessor_Tab_Text* __this, bool* __retval);

struct TabsLayoutMaster_accessor_Tab_Text : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return _name_; }

    void ctor_1();
    static TabsLayoutMaster_accessor_Tab_Text* New1();
};
// }

} // ::g
