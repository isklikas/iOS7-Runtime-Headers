/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray;

@interface TSUSharedLocale : NSObject  {
    struct __CFLocale { } *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)sharedLocale;
+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)datePreferencesChanged:(id)arg1;
- (id)init;
- (struct __CFLocale { }*)currentLocale;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
