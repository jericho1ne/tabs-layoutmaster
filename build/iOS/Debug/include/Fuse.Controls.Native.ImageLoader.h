// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.0/ImageLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ImageLoader :63
// {
uClassType* ImageLoader_typeof();
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle);

struct ImageLoader : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _imageHandleCache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _imageHandleCache() { return _imageHandleCache_; }

    static void ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle);
};
// }

}}}} // ::g::Fuse::Controls::Native
