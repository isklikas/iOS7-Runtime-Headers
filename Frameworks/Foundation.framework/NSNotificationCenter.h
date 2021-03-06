/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotificationCenter : NSObject  {
    void *_impl;
    void *_callback;
    void *_pad[11];
}

+ (id)defaultCenter;
+ (void)_postNotificationName:(id)arg1;

- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;
- (id)init;
- (BOOL)isEmpty;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotification:(id)arg1;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)__mainThreadPostNotification:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2;

@end
