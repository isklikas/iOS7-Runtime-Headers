/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAWebSiteSearchStarted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)siteSearchStartedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siteSearchStarted;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
