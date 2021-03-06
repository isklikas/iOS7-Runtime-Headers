/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class Protocol, <BBXPCConnectionDelegate>, NSObject<OS_dispatch_queue>, <XPCProxyTarget>, NSObject<OS_xpc_object>;

@interface BBXPCConnection : NSObject  {
    id _remoteProxy;
    NSObject<OS_dispatch_queue> *_queue;
    <XPCProxyTarget> *_target;
    <BBXPCConnectionDelegate> *_delegate;
    BOOL _established;
    BOOL _invalidated;
    Protocol *_protocol;
}

@property <BBXPCConnectionDelegate> * delegate;
@property(readonly) id proxy;
@property(readonly) NSObject<OS_xpc_object> * connection;


- (BOOL)established;
- (id)initWithQueue:(id)arg1 target:(id)arg2 remoteProtocol:(id)arg3;
- (void)_noteConnectionStateDidChange:(BOOL)arg1;
- (id)proxy;
- (id)_queue;
- (void)_invalidateConnection;
- (id)init;
- (void)setDelegate:(id)arg1;
- (BOOL)isValid;
- (void)invalidate;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (void)resume;
- (id)connection;

@end
