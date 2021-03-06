/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVOutputSettingsAssistantVideoSettingsAdjuster>, <AVOutputSettingsAssistantBaseSettingsProvider>;

@interface AVOutputSettingsAssistantInternal : NSObject  {
    <AVOutputSettingsAssistantBaseSettingsProvider> *baseSettingsProvider;
    <AVOutputSettingsAssistantVideoSettingsAdjuster> *videoSettingsAdjuster;
    struct opaqueCMFormatDescription { } *sourceVideoFormat;
    struct opaqueCMFormatDescription { } *sourceAudioFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } sourceVideoAverageFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } sourceVideoMinFrameDuration;
}



@end
