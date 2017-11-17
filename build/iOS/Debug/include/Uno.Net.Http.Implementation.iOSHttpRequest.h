// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.4.3/Implementation/iOS/iOSHttpRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <HttpRequest.h>
#include <Uno.IDisposable.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{struct iOSHttpRequest;}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{
namespace Implementation{

// internal sealed extern class iOSHttpRequest :11
// {
struct iOSHttpRequest_type : uType
{
    ::g::Uno::Net::Http::Implementation::IHttpRequest interface0;
    ::g::Uno::IDisposable interface1;
};

iOSHttpRequest_type* iOSHttpRequest_typeof();
void iOSHttpRequest__ctor__fn(iOSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url);
void iOSHttpRequest__Dispose_fn(iOSHttpRequest* __this);
void iOSHttpRequest__GetResponseContentByteArray_fn(iOSHttpRequest* __this, uArray** __retval);
void iOSHttpRequest__GetResponseHeaders_fn(iOSHttpRequest* __this, uString** __retval);
void iOSHttpRequest__GetResponseStatus_fn(iOSHttpRequest* __this, int* __retval);
void iOSHttpRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url, iOSHttpRequest** __retval);
void iOSHttpRequest__SendAsync_fn(iOSHttpRequest* __this);

struct iOSHttpRequest : uObject
{
    ::Uno::Net::Http::iOS::HttpRequest* _requestHandle;

    void ctor_(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url);
    void Dispose();
    uArray* GetResponseContentByteArray();
    uString* GetResponseHeaders();
    int GetResponseStatus();
    void SendAsync();
    static iOSHttpRequest* New1(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url);
};
// }

}}}}} // ::g::Uno::Net::Http::Implementation
