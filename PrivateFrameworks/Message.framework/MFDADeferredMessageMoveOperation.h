/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSArray;

@interface MFDADeferredMessageMoveOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {
    NSArray *_sourceRemoteIDs;
    NSArray *_originalFlags;
    NSArray *_temporaryRemoteIDs;
    NSString *_sourceMailboxID;
    NSString *_destinationMailboxID;
}


- (id)initWithMessages:(id)arg1 temporaryIDs:(id)arg2 sourceMailbox:(id)arg3 destinationMailbox:(id)arg4;
- (BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
