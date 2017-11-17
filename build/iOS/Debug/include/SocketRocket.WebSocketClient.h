// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.4.0/ios/SocketRocket/WebSocketClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace SocketRocket{struct WebSocketClient;}}

namespace g{
namespace SocketRocket{

// public sealed extern class WebSocketClient :17
// {
struct WebSocketClient_type : uType
{
    ::g::Uno::IDisposable interface0;
};

WebSocketClient_type* WebSocketClient_typeof();
void WebSocketClient__Dispose_fn(WebSocketClient* __this);

struct WebSocketClient : uObject
{
    uStrong< ::g::ObjC::Object*> _webSocket;

    void Dispose();
};
// }

}} // ::g::SocketRocket
