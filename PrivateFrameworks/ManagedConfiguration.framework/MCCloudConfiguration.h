/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDictionary, NSObject<OS_dispatch_queue>;

@interface MCCloudConfiguration : NSObject  {
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSDictionary *_memberQueueDetails;
}

@property(copy) NSDictionary * details;
@property(retain) NSObject<OS_dispatch_queue> * memberQueue;
@property(retain) NSDictionary * memberQueueDetails;

+ (id)sharedConfiguration;

- (void)setDetails:(id)arg1;
- (id)details;
- (id)memberQueueDetails;
- (void)setMemberQueueDetails:(id)arg1;
- (void)refreshDetailsFromDisk;
- (BOOL)isSupervised;
- (void)setMemberQueue:(id)arg1;
- (id)memberQueue;
- (id)init;
- (void).cxx_destruct;

@end
