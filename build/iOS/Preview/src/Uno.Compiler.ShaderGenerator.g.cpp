// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{
namespace ShaderGenerator{

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Compiler/ShaderGenerator/ShaderStageInlineAttribute.uno
// --------------------------------------------------------------------------------------------------------------

// public sealed class ShaderStageInlineAttribute :4
// {
static void ShaderStageInlineAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ShaderStageInlineAttribute__New1_fn, 0, true, type, 0));
}

uType* ShaderStageInlineAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(ShaderStageInlineAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute", options);
    type->fp_build_ = ShaderStageInlineAttribute_build;
    type->fp_ctor_ = (void*)ShaderStageInlineAttribute__New1_fn;
    return type;
}

// public generated ShaderStageInlineAttribute() :4
void ShaderStageInlineAttribute__ctor_1_fn(ShaderStageInlineAttribute* __this)
{
    __this->ctor_1();
}

// public generated ShaderStageInlineAttribute New() :4
void ShaderStageInlineAttribute__New1_fn(ShaderStageInlineAttribute** __retval)
{
    *__retval = ShaderStageInlineAttribute::New1();
}

// public generated ShaderStageInlineAttribute() [instance] :4
void ShaderStageInlineAttribute::ctor_1()
{
    ctor_();
}

// public generated ShaderStageInlineAttribute New() [static] :4
ShaderStageInlineAttribute* ShaderStageInlineAttribute::New1()
{
    ShaderStageInlineAttribute* obj1 = (ShaderStageInlineAttribute*)uNew(ShaderStageInlineAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Compiler::ShaderGenerator
