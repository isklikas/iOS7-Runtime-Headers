/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAReminderAssistantPayload : AceObject <SAReminderPayload> {
}

@property(copy) NSString * utterance;

+ (id)assistantPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantPayload;

- (void)setUtterance:(id)arg1;
- (id)utterance;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
