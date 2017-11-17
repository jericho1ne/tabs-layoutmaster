// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <HttpRequest.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpRequestHandle.h>
#include <Uno.Net.Http.Implementation.iOSHttpSharedCache.h>
#include <Uno.String.h>

namespace g{
namespace Uno{
namespace Net{
namespace Http{
namespace Implementation{

// /usr/local/share/uno/Packages/Uno.Net.Http/1.4.3/Implementation/IHttpRequest.uno
// --------------------------------------------------------------------------------

// public abstract interface IHttpRequest :7
// {
uInterfaceType* IHttpRequest_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Net.Http.Implementation.IHttpRequest", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.4.3/Implementation/iOS/iOSHttpRequest.uno
// --------------------------------------------------------------------------------------

// internal sealed extern class iOSHttpRequest :11
// {
static void iOSHttpRequest_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof(), offsetof(iOSHttpRequest_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(iOSHttpRequest_type, interface1));
    type->SetFields(0,
        ::g::Uno::Net::Http::Implementation::iOSHttpRequestHandle_typeof(), offsetof(iOSHttpRequest, _requestHandle), 0);
}

iOSHttpRequest_type* iOSHttpRequest_typeof()
{
    static uSStrong<iOSHttpRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(iOSHttpRequest);
    options.TypeSize = sizeof(iOSHttpRequest_type);
    type = (iOSHttpRequest_type*)uClassType::New("Uno.Net.Http.Implementation.iOSHttpRequest", options);
    type->fp_build_ = iOSHttpRequest_build;
    type->interface0.fp_SendAsync = (void(*)(uObject*))iOSHttpRequest__SendAsync_fn;
    type->interface0.fp_GetResponseStatus = (void(*)(uObject*, int*))iOSHttpRequest__GetResponseStatus_fn;
    type->interface0.fp_GetResponseHeaders = (void(*)(uObject*, uString**))iOSHttpRequest__GetResponseHeaders_fn;
    type->interface0.fp_GetResponseContentByteArray = (void(*)(uObject*, uArray**))iOSHttpRequest__GetResponseContentByteArray_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))iOSHttpRequest__Dispose_fn;
    return type;
}

// internal iOSHttpRequest(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) :15
void iOSHttpRequest__ctor__fn(iOSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url)
{
    __this->ctor_(request, method, url);
}

// public void Dispose() :21
void iOSHttpRequest__Dispose_fn(iOSHttpRequest* __this)
{
    __this->Dispose();
}

// public byte[] GetResponseContentByteArray() :85
void iOSHttpRequest__GetResponseContentByteArray_fn(iOSHttpRequest* __this, uArray** __retval)
{
    *__retval = __this->GetResponseContentByteArray();
}

// public string GetResponseHeaders() :74
void iOSHttpRequest__GetResponseHeaders_fn(iOSHttpRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public int GetResponseStatus() :63
void iOSHttpRequest__GetResponseStatus_fn(iOSHttpRequest* __this, int* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// internal iOSHttpRequest New(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) :15
void iOSHttpRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url, iOSHttpRequest** __retval)
{
    *__retval = iOSHttpRequest::New1(request, method, url);
}

// public void SendAsync() :53
void iOSHttpRequest__SendAsync_fn(iOSHttpRequest* __this)
{
    __this->SendAsync();
}

// internal iOSHttpRequest(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) [instance] :15
void iOSHttpRequest::ctor_(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url)
{
    _requestHandle = new ::Uno::Net::Http::iOS::HttpRequest(request, method, url);
}

// public void Dispose() [instance] :21
void iOSHttpRequest::Dispose()
{
    delete _requestHandle;
    _requestHandle = NULL;
}

// public byte[] GetResponseContentByteArray() [instance] :85
uArray* iOSHttpRequest::GetResponseContentByteArray()
{
    return _requestHandle->GetResponseContentByteArray();
}

// public string GetResponseHeaders() [instance] :74
uString* iOSHttpRequest::GetResponseHeaders()
{
    return _requestHandle->GetResponseHeaders();
}

// public int GetResponseStatus() [instance] :63
int iOSHttpRequest::GetResponseStatus()
{
    return _requestHandle->GetResponseStatus();
}

// public void SendAsync() [instance] :53
void iOSHttpRequest::SendAsync()
{
    _requestHandle->SendAsync(NULL, 0);
}

// internal iOSHttpRequest New(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) [static] :15
iOSHttpRequest* iOSHttpRequest::New1(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url)
{
    iOSHttpRequest* obj1 = (iOSHttpRequest*)uNew(iOSHttpRequest_typeof());
    obj1->ctor_(request, method, url);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.4.3/Implementation/iOS/iOSHttpRequest.uno
// --------------------------------------------------------------------------------------

// internal extern struct iOSHttpRequestHandle :6
// {
static void iOSHttpRequestHandle_build(uType* type)
{
}

uStructType* iOSHttpRequestHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(::Uno::Net::Http::iOS::HttpRequest*);
    options.ValueSize = sizeof(::Uno::Net::Http::iOS::HttpRequest*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Http.Implementation.iOSHttpRequestHandle", options);
    type->fp_build_ = iOSHttpRequestHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.4.3/Implementation/iOS/iOSHttpSharedCache.uno
// ------------------------------------------------------------------------------------------

// internal static extern class iOSHttpSharedCache :6
// {
static void iOSHttpSharedCache_build(uType* type)
{
}

uClassType* iOSHttpSharedCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.Implementation.iOSHttpSharedCache", options);
    type->fp_build_ = iOSHttpSharedCache_build;
    return type;
}

// public static extern void SetupSharedCache([bool isCacheEnabled], [long sizeInBytes]) :9
void iOSHttpSharedCache__SetupSharedCache_fn(bool* isCacheEnabled_, int64_t* sizeInBytes_)
{
    iOSHttpSharedCache::SetupSharedCache(*isCacheEnabled_, *sizeInBytes_);
}

// public static extern void SetupSharedCache([bool isCacheEnabled], [long sizeInBytes]) [static] :9
void iOSHttpSharedCache::SetupSharedCache(bool isCacheEnabled_, int64_t sizeInBytes_)
{
    ::Uno::Net::Http::iOS::SetupSharedCache(isCacheEnabled_, size_t(sizeInBytes_));
}
// }

}}}}} // ::g::Uno::Net::Http::Implementation
