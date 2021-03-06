/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_queue>, NSArray, NSData, NSDictionary, <AVAudioPlayerDelegate>, NSURL;

@interface AudioPlayerImpl : NSObject  {
    <AVAudioPlayerDelegate> *_delegate;
    NSData *_data;
    NSURL *_url;
    NSDictionary *_actualSettings;
    bool_playRetain;
    NSArray *_channelAssignments;
    struct AVAudioPlayerCpp { struct __CFData {} *x1; struct __CFURL {} *x2; struct __CFDictionary {} *x3; struct AudioStreamBasicDescription { double x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; unsigned int x_4_1_9; } x4; struct AudioStreamBasicDescription { double x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; unsigned int x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; unsigned int x_5_1_9; } x5; unsigned int x6; char *x7; unsigned int x8; struct AudioFormatListItem {} *x9; unsigned int x10; struct OpaqueAudioFileID {} *x11; struct OpaqueAudioQueue {} *x12; long long x13; long long x14; long long x15; double x16; double x17; double x18; unsigned int x19; double x20; int x21; struct AudioFilePacketTableInfo { long long x_22_1_1; int x_22_1_2; int x_22_1_3; } x22; int x23; int x24; boolx25; boolx26; boolx27; boolx28; unsigned int x29; boolx30; boolx31; boolx32; boolx33; double x34; double x35; double x36; double x37; double x38; double x39; unsigned int x40; struct AudioQueueLevelMeterState {} *x41; struct AudioQueueBuffer {} *x42[3]; struct AudioQueueBuffer {} *x43; int x44; boolx45; boolx46; boolx47; boolx48; boolx49; struct AudioQueueBuffer {} *x50; boolx51; unsigned long long x52; boolx53; boolx54; boolx55; boolx56; long long x57; int x58; unsigned int x59; unsigned int x60; void *x61; int (*x62)(); unsigned int x63; struct AudioChannelLayout {} *x64; unsigned int x65; struct TEMP_AudioQueueChannelAssignment {} *x66; } *_localPlayer;
    NSObject<OS_dispatch_queue> *_gcd;
}


- (id)init;
- (void)dealloc;

@end
