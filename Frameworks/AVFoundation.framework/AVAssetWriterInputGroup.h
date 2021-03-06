/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVAssetWriterInput, AVAssetWriterInputGroupInternal;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup  {
    AVAssetWriterInputGroupInternal *_internal;
}

@property(readonly) NSArray * inputs;
@property(readonly) AVAssetWriterInput * defaultInput;

+ (id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2;

- (id)inputs;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
- (id)initWithInputs:(id)arg1 defaultInput:(id)arg2;
- (id)defaultInput;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)options;

@end
