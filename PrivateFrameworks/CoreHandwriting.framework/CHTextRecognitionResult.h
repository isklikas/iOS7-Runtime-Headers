/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@class NSString, NSArray;

@interface CHTextRecognitionResult : CHRecognitionResult  {
    double _score;
    NSString *_string;
    BOOL _rare;
    NSArray *_wordRanges;
    NSArray *_wordIDs;
}

@property(readonly) double score;
@property(readonly) BOOL rare;
@property(readonly) NSString * string;
@property(readonly) NSArray * wordRanges;
@property(readonly) NSArray * wordIDs;


- (id)wordIDs;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(BOOL)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5;
- (id)wordRanges;
- (BOOL)rare;
- (id)string;
- (void)dealloc;
- (double)score;

@end
