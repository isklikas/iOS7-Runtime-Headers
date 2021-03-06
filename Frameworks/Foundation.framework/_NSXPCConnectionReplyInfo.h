/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSBlock, NSXPCInterface, NSDictionary;

@interface _NSXPCConnectionReplyInfo : NSObject  {
    NSBlock *_replyBlock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cleanupBlock;

    SEL _selector;
    NSXPCInterface *_interface;
    NSDictionary *_userInfo;
    unsigned long long _proxyNumber;
}

@property SEL selector;
@property(copy) NSBlock * replyBlock;
@property(copy) id errorBlock;
@property(copy) id cleanupBlock;
@property(retain) NSXPCInterface * interface;
@property(retain) NSDictionary * userInfo;
@property unsigned long long proxyNumber;


- (id)userInfo;
- (void)dealloc;
- (SEL)selector;
- (void)setProxyNumber:(unsigned long long)arg1;
- (void)setCleanupBlock:(id)arg1;
- (void)setErrorBlock:(id)arg1;
- (void)setReplyBlock:(id)arg1;
- (id)errorBlock;
- (id)cleanupBlock;
- (id)replyBlock;
- (void)setUserInfo:(id)arg1;
- (void)setInterface:(id)arg1;
- (id)interface;
- (unsigned long long)proxyNumber;
- (void)setSelector:(SEL)arg1;

@end
