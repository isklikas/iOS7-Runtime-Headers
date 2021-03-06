/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSNumber, NSURL, NSError;

@interface SKDownloadChangeset : NSObject <NSCopying> {
    NSNumber *_contentLength;
    NSURL *_contentURL;
    NSNumber *_downloadID;
    NSNumber *_downloadState;
    NSError *_error;
    NSNumber *_progress;
    NSNumber *_timeRemaining;
}

@property(copy) NSNumber * contentLength;
@property(copy) NSURL * contentURL;
@property(copy) NSNumber * downloadID;
@property(copy) NSNumber * downloadState;
@property(copy) NSError * error;
@property(copy) NSNumber * progress;
@property(copy) NSNumber * timeRemaining;

+ (id)changesetWithDownloadID:(id)arg1 state:(int)arg2;

- (void)setContentLength:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setTimeRemaining:(id)arg1;
- (id)downloadID;
- (void)setDownloadState:(id)arg1;
- (void)setDownloadID:(id)arg1;
- (id)timeRemaining;
- (id)downloadState;
- (id)contentURL;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setError:(id)arg1;
- (id)error;
- (id)progress;
- (void)setProgress:(id)arg1;
- (id)contentLength;

@end
