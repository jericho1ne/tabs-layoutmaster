// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNative_bundle.h>
#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.Blitter.h>
#include <Fuse.Controls.Native.ICircleView.h>
#include <Fuse.Controls.Native.IGraphicsView.h>
#include <Fuse.Controls.Native.IImageView.h>
#include <Fuse.Controls.Native.ILabelView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Fuse.Controls.Native.IOffscreenRenderer.h>
#include <Fuse.Controls.Native.IOffscreenRendererHost.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IRangeView.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IRectangleView.h>
#include <Fuse.Controls.Native.IScrollView.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IToggleView.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Fuse.Controls.Native.IViewHandleRenderer.h>
#include <Fuse.Controls.Native.IViewHost.h>
#include <Fuse.Controls.Native.NativeRootViewport.h>
#include <Fuse.Controls.Native.OffscreenRendering.h>
#include <Fuse.Controls.Native.ViewExtensions.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Controls.Native.ViewHandle.Invalidation.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Font.h>
#include <Fuse.IFrame.h>
#include <Fuse.Resources.ImageSource.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/NativeRenderer.uno
// ---------------------------------------------------------------------------

// internal sealed extern class Blitter :241
// {
// static generated Blitter() :241
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Blitter, _ios), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Blitter, Blit_v_f88335dd_3_4_1), 0,
        ::TYPES[0/*float2[]*/], offsetof(Blitter, Blit_verts_f88335dd_3_3_5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Blitter, _draw_f88335dd), 0,
        type, (uintptr_t)&Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :241
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :248
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :241
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :241
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :241
void Blitter::ctor_()
{
    _ios = true;
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :248
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Controls.Native.Blitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_f88335dd.BlendEnabled(true);
    _draw_f88335dd.DepthTestEnabled(false);
    _draw_f88335dd.CullFace(0);
    _draw_f88335dd.BlendSrcAlpha(7);
    _draw_f88335dd.BlendDstRgb(3);
    _draw_f88335dd.Const(0, _ios);
    _draw_f88335dd.Use();
    _draw_f88335dd.Attrib1(1, 2, Blit_v_f88335dd_3_4_1, 8, 0);
    _draw_f88335dd.Uniform2(2, size);
    _draw_f88335dd.Uniform2(3, pos);
    _draw_f88335dd.Uniform12(4, localToClipTransform);
    _draw_f88335dd.Sampler2(5, vt);
    _draw_f88335dd.DrawArrays(uPtr(Blit_verts_f88335dd_3_3_5)->Length());
}

// private generated void init_DrawCalls() [instance] :241
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Controls.Native.Blitter", "init_DrawCalls()");
    uArray* verts_f88335dd_3_3_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_f88335dd_3_4_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_f88335dd_3_3_0), 0);
    Blit_verts_f88335dd_3_3_5 = verts_f88335dd_3_3_0;
    _draw_f88335dd = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::Blitter65ac1d08());
}

// public generated Blitter New() [static] :241
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface ICircleView :109
// {
uInterfaceType* ICircleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ICircleView", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("set_EffectiveEndAngleDegrees", NULL, NULL, offsetof(ICircleView, fp_set_EffectiveEndAngleDegrees), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_EndAngleDegrees", NULL, NULL, offsetof(ICircleView, fp_set_EndAngleDegrees), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_StartAngleDegrees", NULL, NULL, offsetof(ICircleView, fp_set_StartAngleDegrees), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_UseAngle", NULL, NULL, offsetof(ICircleView, fp_set_UseAngle), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IGraphicsView :13
// {
uInterfaceType* IGraphicsView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IGraphicsView", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("BeginDraw", NULL, NULL, offsetof(IGraphicsView, fp_BeginDraw), false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("EndDraw", NULL, NULL, offsetof(IGraphicsView, fp_EndDraw), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IImageView :92
// {
uInterfaceType* IImageView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IImageView", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("set_ImageSource", NULL, NULL, offsetof(IImageView, fp_set_ImageSource), false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSource_typeof()),
        new uFunction("set_TintColor", NULL, NULL, offsetof(IImageView, fp_set_TintColor), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("UpdateImageTransform", NULL, NULL, offsetof(IImageView, fp_UpdateImageTransform), false, uVoid_typeof(), 4, ::g::Uno::Float_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface ILabelView :19
// {
uInterfaceType* ILabelView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILabelView", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("set_Text", NULL, NULL, offsetof(ILabelView, fp_set_Text), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface ILeafView :11
// {
uInterfaceType* ILeafView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILeafView", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/ImageLoader.uno
// ------------------------------------------------------------------------

// internal sealed extern class ImageHandle :15
// {
static void ImageHandle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ImageHandle is disposed");
    type->SetDependencies(
        ::g::Fuse::Controls::Native::ImageLoader_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ImageHandle_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(ImageHandle, _handle), 0,
        ::g::Uno::String_typeof(), offsetof(ImageHandle, _name), 0,
        ::g::Uno::Int_typeof(), offsetof(ImageHandle, _pinCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageHandle, _isDisposed), 0);
}

ImageHandle_type* ImageHandle_typeof()
{
    static uSStrong<ImageHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ImageHandle);
    options.TypeSize = sizeof(ImageHandle_type);
    type = (ImageHandle_type*)uClassType::New("Fuse.Controls.Native.ImageHandle", options);
    type->fp_build_ = ImageHandle_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageHandle__Dispose_fn;
    return type;
}

// public ImageHandle(string name, object handle) :36
void ImageHandle__ctor__fn(ImageHandle* __this, uString* name, uObject* handle)
{
    __this->ctor_(name, handle);
}

// public void Dispose() :49
void ImageHandle__Dispose_fn(ImageHandle* __this)
{
    __this->Dispose();
}

// public object get_Handle() :19
void ImageHandle__get_Handle_fn(ImageHandle* __this, uObject** __retval)
{
    *__retval = __this->Handle();
}

// public string get_Name() :29
void ImageHandle__get_Name_fn(ImageHandle* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public ImageHandle New(string name, object handle) :36
void ImageHandle__New1_fn(uString* name, uObject* handle, ImageHandle** __retval)
{
    *__retval = ImageHandle::New1(name, handle);
}

// public void Pin() :43
void ImageHandle__Pin_fn(ImageHandle* __this)
{
    __this->Pin();
}

// public ImageHandle(string name, object handle) [instance] :36
void ImageHandle::ctor_(uString* name, uObject* handle)
{
    _handle = handle;
    _name = name;
    Pin();
}

// public void Dispose() [instance] :49
void ImageHandle::Dispose()
{
    uStackFrame __("Fuse.Controls.Native.ImageHandle", "Dispose()");

    if (!_isDisposed)
    {
        _pinCount--;

        if (_pinCount == 0)
        {
            ::g::Fuse::Controls::Native::ImageLoader::ReleaseHandle(this);
            _isDisposed = true;
        }
    }
}

// public object get_Handle() [instance] :19
uObject* ImageHandle::Handle()
{
    uStackFrame __("Fuse.Controls.Native.ImageHandle", "get_Handle()");

    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"ImageHandle...*/]));

    return _handle;
}

// public string get_Name() [instance] :29
uString* ImageHandle::Name()
{
    return _name;
}

// public void Pin() [instance] :43
void ImageHandle::Pin()
{
    _pinCount++;
}

// public ImageHandle New(string name, object handle) [static] :36
ImageHandle* ImageHandle::New1(uString* name, uObject* handle)
{
    ImageHandle* obj1 = (ImageHandle*)uNew(ImageHandle_typeof());
    obj1->ctor_(name, handle);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface INativeViewRenderer :129
// {
uInterfaceType* INativeViewRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.INativeViewRenderer", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Draw", NULL, NULL, offsetof(INativeViewRenderer, fp_Draw), false, uVoid_typeof(), 4, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Invalidate", NULL, NULL, offsetof(INativeViewRenderer, fp_Invalidate), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.4.0/ViewHandle.iOS.uno
// -----------------------------------------------------------------

// public enum ViewHandle.InputMode :16
uEnumType* ViewHandle__InputMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.ViewHandle.InputMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Automatic", 0LL,
        "Manual", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.4.0/ViewHandle.iOS.uno
// -----------------------------------------------------------------

// public enum ViewHandle.Invalidation :22
uEnumType* ViewHandle__Invalidation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.ViewHandle.Invalidation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "OnInvalidateVisual", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IOffscreenRenderer :152
// {
uInterfaceType* IOffscreenRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IOffscreenRenderer", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("DisableOffscreen", NULL, NULL, offsetof(IOffscreenRenderer, fp_DisableOffscreen), false, uVoid_typeof(), 0),
        new uFunction("EnableOffscreen", NULL, NULL, offsetof(IOffscreenRenderer, fp_EnableOffscreen), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IOffscreenRendererHost :147
// {
uInterfaceType* IOffscreenRendererHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IOffscreenRendererHost", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_RenderToTexture", NULL, NULL, offsetof(IOffscreenRendererHost, fp_get_RenderToTexture), false, ::g::Uno::Bool_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IRangeView :55
// {
uInterfaceType* IRangeView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRangeView", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("set_Progress", NULL, NULL, offsetof(IRangeView, fp_set_Progress), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IRangeViewHost :60
// {
uInterfaceType* IRangeViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRangeViewHost", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("OnProgressChanged", NULL, NULL, offsetof(IRangeViewHost, fp_OnProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_RelativeUserStep", NULL, NULL, offsetof(IRangeViewHost, fp_get_RelativeUserStep), false, ::g::Uno::Double_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IRectangleView :104
// {
uInterfaceType* IRectangleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRectangleView", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("set_CornerRadius", NULL, NULL, offsetof(IRectangleView, fp_set_CornerRadius), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IScrollView :117
// {
uInterfaceType* IScrollView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollView", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("set_AllowedScrollDirections", NULL, NULL, offsetof(IScrollView, fp_set_AllowedScrollDirections), false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction("set_ScrollPosition", NULL, NULL, offsetof(IScrollView, fp_set_ScrollPosition), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IScrollViewHost :123
// {
uInterfaceType* IScrollViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollViewHost", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("OnScrollPositionChanged", NULL, NULL, offsetof(IScrollViewHost, fp_OnScrollPositionChanged), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_PixelsPerPoint", NULL, NULL, offsetof(IScrollViewHost, fp_get_PixelsPerPoint), false, ::g::Uno::Float_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IShapeView :99
// {
uInterfaceType* IShapeView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IShapeView", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Update", NULL, NULL, offsetof(IShapeView, fp_Update), false, uVoid_typeof(), 3, ::g::Fuse::Drawing::Brush_typeof()->Array(), ::g::Fuse::Drawing::Stroke_typeof()->Array(), ::g::Uno::Float_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface ITextEdit :66
// {
uInterfaceType* ITextEdit_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextEdit", 0, 0);
    type->Reflection.SetFunctions(13,
        new uFunction("set_ActionStyle", NULL, NULL, offsetof(ITextEdit, fp_set_ActionStyle), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionStyle_typeof()),
        new uFunction("set_AutoCapitalizationHint", NULL, NULL, offsetof(ITextEdit, fp_set_AutoCapitalizationHint), false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCapitalizationHint_typeof()),
        new uFunction("set_AutoCorrectHint", NULL, NULL, offsetof(ITextEdit, fp_set_AutoCorrectHint), false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCorrectHint_typeof()),
        new uFunction("set_CaretColor", NULL, NULL, offsetof(ITextEdit, fp_set_CaretColor), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("FocusGained", NULL, NULL, offsetof(ITextEdit, fp_FocusGained), false, uVoid_typeof(), 0),
        new uFunction("FocusLost", NULL, NULL, offsetof(ITextEdit, fp_FocusLost), false, uVoid_typeof(), 0),
        new uFunction("set_InputHint", NULL, NULL, offsetof(ITextEdit, fp_set_InputHint), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputHint_typeof()),
        new uFunction("set_IsMultiline", NULL, NULL, offsetof(ITextEdit, fp_set_IsMultiline), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsPassword", NULL, NULL, offsetof(ITextEdit, fp_set_IsPassword), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsReadOnly", NULL, NULL, offsetof(ITextEdit, fp_set_IsReadOnly), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_PlaceholderColor", NULL, NULL, offsetof(ITextEdit, fp_set_PlaceholderColor), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_PlaceholderText", NULL, NULL, offsetof(ITextEdit, fp_set_PlaceholderText), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("set_SelectionColor", NULL, NULL, offsetof(ITextEdit, fp_set_SelectionColor), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface ITextEditHost :37
// {
uInterfaceType* ITextEditHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextEditHost", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("OnFocusGained", NULL, NULL, offsetof(ITextEditHost, fp_OnFocusGained), false, uVoid_typeof(), 0),
        new uFunction("OnFocusLost", NULL, NULL, offsetof(ITextEditHost, fp_OnFocusLost), false, uVoid_typeof(), 0),
        new uFunction("OnInputAction", NULL, NULL, offsetof(ITextEditHost, fp_OnInputAction), false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Controls::TextInputActionType_typeof()),
        new uFunction("OnValueChanged", NULL, NULL, offsetof(ITextEditHost, fp_OnValueChanged), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface ITextView :24
// {
uInterfaceType* ITextView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextView", 0, 0);
    type->Reflection.SetFunctions(9,
        new uFunction("set_Font", NULL, NULL, offsetof(ITextView, fp_set_Font), false, uVoid_typeof(), 1, ::g::Fuse::Font_typeof()),
        new uFunction("set_FontSize", NULL, NULL, offsetof(ITextView, fp_set_FontSize), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_LineSpacing", NULL, NULL, offsetof(ITextView, fp_set_LineSpacing), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_MaxLength", NULL, NULL, offsetof(ITextView, fp_set_MaxLength), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_TextAlignment", NULL, NULL, offsetof(ITextView, fp_set_TextAlignment), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextAlignment_typeof()),
        new uFunction("set_TextColor", NULL, NULL, offsetof(ITextView, fp_set_TextColor), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_TextTruncation", NULL, NULL, offsetof(ITextView, fp_set_TextTruncation), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextTruncation_typeof()),
        new uFunction("set_TextWrapping", NULL, NULL, offsetof(ITextView, fp_set_TextWrapping), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextWrapping_typeof()),
        new uFunction("set_Value", NULL, NULL, offsetof(ITextView, fp_set_Value), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IToggleView :45
// {
uInterfaceType* IToggleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleView", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("set_Value", NULL, NULL, offsetof(IToggleView, fp_set_Value), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IToggleViewHost :50
// {
uInterfaceType* IToggleViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleViewHost", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnValueChanged", NULL, NULL, offsetof(IToggleViewHost, fp_OnValueChanged), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IView :9
// {
uInterfaceType* IView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IView", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IViewGroup :83
// {
uInterfaceType* IViewGroup_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IViewGroup", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Add", NULL, NULL, offsetof(IViewGroup, fp_Add), false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::IView_typeof()),
        new uFunction("Add", NULL, NULL, offsetof(IViewGroup, fp_Add1), false, uVoid_typeof(), 2, ::g::Fuse::Controls::Native::IView_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("set_ClipToBounds", NULL, NULL, offsetof(IViewGroup, fp_set_ClipToBounds), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_HitTestEnabled", NULL, NULL, offsetof(IViewGroup, fp_set_HitTestEnabled), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Remove", NULL, NULL, offsetof(IViewGroup, fp_Remove), false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::IView_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/NativeRenderer.uno
// ---------------------------------------------------------------------------

// public abstract extern interface IViewHandleRenderer :10
// {
uInterfaceType* IViewHandleRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IViewHandleRenderer", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Draw", NULL, NULL, offsetof(IViewHandleRenderer, fp_Draw), false, uVoid_typeof(), 5, ::g::Fuse::Controls::Native::ViewHandle_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Invalidate", NULL, NULL, offsetof(IViewHandleRenderer, fp_Invalidate), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public abstract interface IViewHost :135
// {
uInterfaceType* IViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IViewHost", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Insert", NULL, NULL, offsetof(IViewHost, fp_Insert), false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::ViewHandle_typeof()),
        new uFunction("Remove", NULL, NULL, offsetof(IViewHost, fp_Remove), false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::ViewHandle_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/NativeRootViewport.uno
// -------------------------------------------------------------------------------

// internal sealed extern class NativeRootViewport :6
// {
static void NativeRootViewport_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::RootViewport_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::RootViewport_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::RootViewport_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::RootViewport_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::RootViewport_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface11),
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::RootViewport_type, interface12),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::RootViewport_type, interface13),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(::g::Fuse::RootViewport_type, interface14));
    type->SetFields(76,
        ::g::Fuse::Controls::Native::ViewHandle_typeof(), offsetof(NativeRootViewport, _rootView), 0);
}

::g::Fuse::RootViewport_type* NativeRootViewport_typeof()
{
    static uSStrong< ::g::Fuse::RootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RootViewport_typeof();
    options.FieldCount = 77;
    options.InterfaceCount = 15;
    options.ObjectSize = sizeof(NativeRootViewport);
    options.TypeSize = sizeof(::g::Fuse::RootViewport_type);
    type = (::g::Fuse::RootViewport_type*)uClassType::New("Fuse.Controls.Native.NativeRootViewport", options);
    type->fp_build_ = NativeRootViewport_build;
    type->interface13.fp_Dispose = (void(*)(uObject*))::g::Fuse::RootViewport__UnoIDisposableDispose_fn;
    type->interface12.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Fuse::Ray*))::g::Fuse::RootViewport__PointToWorldRay_fn;
    type->interface12.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Fuse::Ray*, ::g::Fuse::Visual*, ::g::Fuse::Ray*))::g::Fuse::RootViewport__WorldToLocalRay_fn;
    type->interface14.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::RootViewport__get_PixelsPerPoint_fn;
    type->interface14.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_Size_fn;
    type->interface14.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_PixelSize_fn;
    type->interface14.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewTransform_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NativeRootViewport(Fuse.Controls.Native.ViewHandle rootView) :20
void NativeRootViewport__ctor_5_fn(NativeRootViewport* __this, ::g::Fuse::Controls::Native::ViewHandle* rootView)
{
    __this->ctor_5(rootView);
}

// public NativeRootViewport(Fuse.Controls.Native.ViewHandle rootView, Fuse.IFrame frame) :15
void NativeRootViewport__ctor_6_fn(NativeRootViewport* __this, ::g::Fuse::Controls::Native::ViewHandle* rootView, uObject* frame)
{
    __this->ctor_6(rootView, frame);
}

// public NativeRootViewport New(Fuse.Controls.Native.ViewHandle rootView) :20
void NativeRootViewport__New4_fn(::g::Fuse::Controls::Native::ViewHandle* rootView, NativeRootViewport** __retval)
{
    *__retval = NativeRootViewport::New4(rootView);
}

// public NativeRootViewport New(Fuse.Controls.Native.ViewHandle rootView, Fuse.IFrame frame) :15
void NativeRootViewport__New5_fn(::g::Fuse::Controls::Native::ViewHandle* rootView, uObject* frame, NativeRootViewport** __retval)
{
    *__retval = NativeRootViewport::New5(rootView, frame);
}

// public Fuse.Controls.Native.ViewHandle get_RootView() :10
void NativeRootViewport__get_RootView_fn(NativeRootViewport* __this, ::g::Fuse::Controls::Native::ViewHandle** __retval)
{
    *__retval = __this->RootView();
}

// public NativeRootViewport(Fuse.Controls.Native.ViewHandle rootView) [instance] :20
void NativeRootViewport::ctor_5(::g::Fuse::Controls::Native::ViewHandle* rootView)
{
    uStackFrame __("Fuse.Controls.Native.NativeRootViewport", ".ctor(Fuse.Controls.Native.ViewHandle)");
    ctor_3();
    _rootView = rootView;
}

// public NativeRootViewport(Fuse.Controls.Native.ViewHandle rootView, Fuse.IFrame frame) [instance] :15
void NativeRootViewport::ctor_6(::g::Fuse::Controls::Native::ViewHandle* rootView, uObject* frame)
{
    uStackFrame __("Fuse.Controls.Native.NativeRootViewport", ".ctor(Fuse.Controls.Native.ViewHandle,Fuse.IFrame)");
    ctor_4(frame);
    _rootView = rootView;
}

// public Fuse.Controls.Native.ViewHandle get_RootView() [instance] :10
::g::Fuse::Controls::Native::ViewHandle* NativeRootViewport::RootView()
{
    return _rootView;
}

// public NativeRootViewport New(Fuse.Controls.Native.ViewHandle rootView) [static] :20
NativeRootViewport* NativeRootViewport::New4(::g::Fuse::Controls::Native::ViewHandle* rootView)
{
    NativeRootViewport* obj2 = (NativeRootViewport*)uNew(NativeRootViewport_typeof());
    obj2->ctor_5(rootView);
    return obj2;
}

// public NativeRootViewport New(Fuse.Controls.Native.ViewHandle rootView, Fuse.IFrame frame) [static] :15
NativeRootViewport* NativeRootViewport::New5(::g::Fuse::Controls::Native::ViewHandle* rootView, uObject* frame)
{
    NativeRootViewport* obj1 = (NativeRootViewport*)uNew(NativeRootViewport_typeof());
    obj1->ctor_6(rootView, frame);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// public enum OffscreenRendering :141
uEnumType* OffscreenRendering_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.OffscreenRendering", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Enabled", 0LL,
        "Disabled", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/Interfaces.uno
// -----------------------------------------------------------------------

// internal static extern class ViewExtensions :159
// {
static void ViewExtensions_build(uType* type)
{
    ::STRINGS[1] = uString::Const(" is not a Fuse.Controls.Native.iOS.View");
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::View_typeof();
}

uClassType* ViewExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ViewExtensions", options);
    type->fp_build_ = ViewExtensions_build;
    return type;
}

// public static extern ObjC.Object GetNativeHandle(Fuse.Controls.Native.IView view) :171
void ViewExtensions__GetNativeHandle_fn(uObject* view, ::g::ObjC::Object** __retval)
{
    *__retval = ViewExtensions::GetNativeHandle(view);
}

// public static extern ObjC.Object GetNativeHandle(Fuse.Controls.Native.IView view) [static] :171
::g::ObjC::Object* ViewExtensions::GetNativeHandle(uObject* view)
{
    uStackFrame __("Fuse.Controls.Native.ViewExtensions", "GetNativeHandle(Fuse.Controls.Native.IView)");

    if (uIs(view, ::TYPES[1/*Fuse.Controls.Native.iOS.View*/]))
        return uPtr(uCast< ::g::Fuse::Controls::Native::iOS::View*>(view, ::TYPES[1/*Fuse.Controls.Native.iOS.View*/]))->Handle();
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(view, ::STRINGS[1/*" is not a F...*/])));
}
// }

}}}} // ::g::Fuse::Controls::Native
