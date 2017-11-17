// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.4.3/HttpMessageHandlerRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class HttpMessageHandlerRequest :8
// {
struct HttpMessageHandlerRequest_type : uType
{
    ::g::Uno::IDisposable interface0;
};

HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof();
void HttpMessageHandlerRequest__ctor__fn(HttpMessageHandlerRequest* __this, ::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher);
void HttpMessageHandlerRequest__add_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__CheckDisposed_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__CompleteRequest_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__Dispose_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__add_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__add_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__GetResponseContentByteArray_fn(HttpMessageHandlerRequest* __this, uArray** __retval);
void HttpMessageHandlerRequest__GetResponseHeaders_fn(HttpMessageHandlerRequest* __this, uString** __retval);
void HttpMessageHandlerRequest__GetResponseStatus_fn(HttpMessageHandlerRequest* __this, int* __retval);
void HttpMessageHandlerRequest__get_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* __retval);
void HttpMessageHandlerRequest__set_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* value);
void HttpMessageHandlerRequest__IsComplete_fn(HttpMessageHandlerRequest* __this, bool* __retval);
void HttpMessageHandlerRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher, HttpMessageHandlerRequest** __retval);
void HttpMessageHandlerRequest__OnAborted_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnDone_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnError_fn(HttpMessageHandlerRequest* __this, uString* platformspesificErrorMessage);
void HttpMessageHandlerRequest__OnStateChanged_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnTimeout_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__SendAsync_fn(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__SetResponseType_fn(HttpMessageHandlerRequest* __this, int* responseType);
void HttpMessageHandlerRequest__get_State_fn(HttpMessageHandlerRequest* __this, int* __retval);
void HttpMessageHandlerRequest__set_State_fn(HttpMessageHandlerRequest* __this, int* value);
void HttpMessageHandlerRequest__add_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__add_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value);
void HttpMessageHandlerRequest__remove_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value);

struct HttpMessageHandlerRequest : uObject
{
    uStrong< ::g::Uno::Net::Http::HttpMessageHandler*> _httpMessageHandler;
    uStrong<uObject*> _httpRequest;
    uStrong<uObject*> _dispatcher;
    uStrong<uString*> _method;
    uStrong<uString*> _url;
    int _state;
    int _responseType;
    uStrong<uArray*> _optionalPayloadCache;
    uStrong<uDelegate*> Aborted1;
    uStrong<uDelegate*> Done1;
    uStrong<uDelegate*> Error1;
    uStrong<uDelegate*> StateChanged1;
    uStrong<uDelegate*> Timeout1;

    void ctor_(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher);
    void add_Aborted(uDelegate* value);
    void remove_Aborted(uDelegate* value);
    void CheckDisposed();
    void CompleteRequest();
    void Dispose();
    void add_Done(uDelegate* value);
    void remove_Done(uDelegate* value);
    void add_Error(uDelegate* value);
    void remove_Error(uDelegate* value);
    uArray* GetResponseContentByteArray();
    uString* GetResponseHeaders();
    int GetResponseStatus();
    int HttpResponseType();
    void HttpResponseType(int value);
    bool IsComplete();
    void OnAborted();
    void OnDone();
    void OnError(uString* platformspesificErrorMessage);
    void OnStateChanged();
    void OnTimeout();
    void SendAsync();
    void SetResponseType(int responseType);
    int State();
    void State(int value);
    void add_StateChanged(uDelegate* value);
    void remove_StateChanged(uDelegate* value);
    void add_Timeout(uDelegate* value);
    void remove_Timeout(uDelegate* value);
    static HttpMessageHandlerRequest* New1(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher);
};
// }

}}}} // ::g::Uno::Net::Http
