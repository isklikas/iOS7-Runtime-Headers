/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, NSMapTable, NSMutableArray, MPAudioDeviceController, MPAVItem, NSDictionary, RadioStation;

@interface MPRadioAdObserver : NSObject <ADBannerViewDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPAudioDeviceController *_audioDeviceController;
    int _blankedStateNotifyToken;
    BOOL _blankedStateNotifyTokenIsValid;
    MPAVItem *_currentItem;
    int _lockStateNotifyToken;
    BOOL _lockStateNotifyTokenIsValid;
    double _minDurationToCountAsPlayed;
    NSDictionary *_pickedRoute;
    NSObject<OS_dispatch_source> *_playEventFlushTimerSource;
    int _policyEngineEnabledCount;
    NSMutableArray *_queuedAds;
    NSMapTable *_skipEventsByStationInfo;
    double _startTimeForCurrentItem;
    RadioStation *_station;
    int _visualEngagementCount;
    BOOL _visuallyEngaged;
    unsigned int _numberOfSkippedTracks;
}

@property(retain) RadioStation * station;
@property(getter=isVisuallyEngaged,readonly) BOOL visuallyEngaged;
@property(readonly) unsigned int numberOfSkippedTracks;

+ (id)sharedAdObserver;

- (unsigned int)numberOfSkippedTracks;
- (BOOL)isVisuallyEngaged;
- (void)willHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2;
- (void)endVisualEngagement;
- (void)didHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2;
- (void)beginVisualEngagement;
- (void)bannerViewStoryboardPresentationInDidComplete:(id)arg1;
- (void)bannerViewActionDidFinish:(id)arg1;
- (BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)_schedulePlayEventFlushTimer;
- (void)_reportPlaybackEndedForTimeout;
- (void)_disablePolicyEngine;
- (void)_enablePolicyEngine;
- (void)_itemAssetLoadedDidChangeNotification:(id)arg1;
- (void)_handleSkipForChangedItem:(id)arg1;
- (void)_sendPlayAndSkipEvents;
- (void)_addPlayEvents:(id)arg1 withStationInfo:(id)arg2;
- (id)_stationInfoForItem:(id)arg1;
- (id)_playEventForItem:(id)arg1;
- (double)_itemTimeForItem:(id)arg1 wasSkipped:(BOOL*)arg2 didAssetFailToLoad:(BOOL*)arg3;
- (void)_clearAssetCacheForItem:(id)arg1;
- (void)_updateVisualEngagementWithApplicationState:(int)arg1;
- (void)_cancelPlayEventFlushTimer;
- (BOOL)_isPolicyEngineEnabled;
- (void)_deviceOrientationDidChangeNotification:(id)arg1;
- (void)_radioConfigurationDidChangeNotification:(id)arg1;
- (void)_stationEntryResponseNotification:(id)arg1;
- (void)_hideAdViewNotification:(id)arg1;
- (void)_heartbeatChangedNotification:(id)arg1;
- (id)_adPolicyEngine;
- (void)_loadMinDurationToCountAsPlayedFromURLBag;
- (void)optimalTransmissionWindowDidOpen;
- (void)cancelQueuedAds;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)didScheduleAd:(id)arg1;
- (void)_songBeganResponseNotification:(id)arg1;
- (void)setStation:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (id)station;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
