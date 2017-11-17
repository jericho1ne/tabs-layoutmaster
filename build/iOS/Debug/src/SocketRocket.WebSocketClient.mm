// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.4.0/ios/SocketRocket/WebSocketClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <ios/SocketRocket/WebSocketClientObjc.h>
#include <ObjC.Object.h>
#include <SocketRocket.WebSocketClient.h>
#include <SRWebSocket.h>
#include <uObjC.Foreign.h>

namespace g{
namespace SocketRocket{

// public sealed extern class WebSocketClient :17
// {
static void WebSocketClient_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(WebSocketClient_type, interface0));
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(WebSocketClient, _webSocket), 0);
}

WebSocketClient_type* WebSocketClient_typeof()
{
    static uSStrong<WebSocketClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WebSocketClient);
    options.TypeSize = sizeof(WebSocketClient_type);
    type = (WebSocketClient_type*)uClassType::New("SocketRocket.WebSocketClient", options);
    type->fp_build_ = WebSocketClient_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))WebSocketClient__Dispose_fn;
    return type;
}

// public void Dispose() :101
void WebSocketClient__Dispose_fn(WebSocketClient* __this)
{
    __this->Dispose();
}

// public void Dispose() [instance] :101
void WebSocketClient::Dispose()
{
    _webSocket = NULL;
}
// }

}} // ::g::SocketRocket
