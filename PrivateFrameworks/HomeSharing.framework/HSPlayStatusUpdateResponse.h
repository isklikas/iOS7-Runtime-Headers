/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSDictionary;

@interface HSPlayStatusUpdateResponse : HSResponse  {
    unsigned int _nextRevisionID;
    NSDictionary *_playStatusInformation;
    unsigned long long _nowPlayingContainerID;
    unsigned long long _nowPlayingContainerItemID;
    unsigned long long _nowPlayingDatabaseID;
    unsigned long long _nowPlayingItemID;
}

@property unsigned int nextRevisionID;
@property unsigned long long nowPlayingContainerID;
@property unsigned long long nowPlayingContainerItemID;
@property unsigned long long nowPlayingDatabaseID;
@property unsigned long long nowPlayingItemID;
@property(copy) NSDictionary * playStatusInformation;


- (id)playStatusInformation;
- (unsigned long long)nowPlayingItemID;
- (unsigned long long)nowPlayingDatabaseID;
- (unsigned long long)nowPlayingContainerItemID;
- (unsigned long long)nowPlayingContainerID;
- (unsigned int)nextRevisionID;
- (void)setPlayStatusInformation:(id)arg1;
- (void)setNowPlayingItemID:(unsigned long long)arg1;
- (void)setNowPlayingContainerItemID:(unsigned long long)arg1;
- (void)setNowPlayingContainerID:(unsigned long long)arg1;
- (void)setNowPlayingDatabaseID:(unsigned long long)arg1;
- (void)setNextRevisionID:(unsigned int)arg1;
- (void)dealloc;
- (id)description;

@end
