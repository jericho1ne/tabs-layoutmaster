// This file was generated based on /Users/mpeteu/Sites/tabs-layoutmaster/TabsLayoutMaster.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.TabsLayoutMaster_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class TabsLayoutMaster_bundle :0
// {
// static TabsLayoutMaster_bundle() :0
static void TabsLayoutMaster_bundle__cctor__fn(uType* __type)
{
    TabsLayoutMaster_bundle::RobotoMedium6ee0d371_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"TabsLayoutM...*/]))->GetFile(::STRINGS[1/*"roboto-medi...*/]);
}

static void TabsLayoutMaster_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TabsLayoutMaster");
    ::STRINGS[1] = uString::Const("roboto-medium-44b3d1db.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&TabsLayoutMaster_bundle::RobotoMedium6ee0d371_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("RobotoMedium6ee0d371", 0));
}

uClassType* TabsLayoutMaster_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("TabsLayoutMaster_bundle", options);
    type->fp_build_ = TabsLayoutMaster_bundle_build;
    type->fp_cctor_ = TabsLayoutMaster_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> TabsLayoutMaster_bundle::RobotoMedium6ee0d371_;
// }

} // ::g
