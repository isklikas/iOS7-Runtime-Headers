/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSNumber, NSRecursiveLock, NSMutableSet;

@interface IMMobileNetworkManager : IMNetworkManager  {
    BOOL _registered;
    BOOL _shouldBringUpDataContext;
    BOOL _dataContextActive;
    NSRecursiveLock *_lock;
    NSMutableSet *_disableFastDormancyTokens;
    NSMutableSet *_wiFiAutoAssociationTokens;
    NSMutableSet *_cellAutoAssociationTokens;
    void *__suspendDormancyAssertion;
}

@property(readonly) BOOL isAirplaneModeEnabled;
@property(readonly) BOOL isWiFiEnabled;
@property(readonly) BOOL isWiFiAssociated;
@property(readonly) BOOL isWiFiCaptive;
@property(readonly) BOOL isHostingWiFiHotSpot;
@property(readonly) BOOL autoAssociateWiFi;
@property(readonly) BOOL autoAssociateCellular;
@property(readonly) BOOL disableFastDormancy;
@property(readonly) BOOL willTryToSearchForWiFiNetwork;
@property(readonly) BOOL willTryToAutoAssociateWiFiNetwork;
@property(readonly) NSNumber * wiFiSignalStrength;
@property(readonly) NSNumber * wiFiScaledRSSI;
@property(readonly) NSNumber * wiFiScaledRate;
@property(readonly) BOOL dataConnectionExists;
@property(readonly) BOOL has2GDataConnection;
@property(readonly) BOOL hasLTEDataConnection;
@property(readonly) BOOL isDataSwitchEnabled;
@property(readonly) BOOL isDataConnectionActive;
@property(readonly) BOOL inValidSIMState;
@property(readonly) BOOL isSIMLocked;
@property(readonly) BOOL isSIMRemoved;
@property void* _suspendDormancyAssertion;
@property(retain) NSRecursiveLock * lock;
@property(retain) NSMutableSet * wiFiAutoAssociationTokens;
@property(retain) NSMutableSet * cellularAutoAssociationTokens;
@property(retain) NSMutableSet * disableFastDormancyTokens;
@property BOOL registered;
@property BOOL shouldBringUpDataContext;
@property BOOL dataContextActive;


- (void)set_suspendDormancyAssertion:(void*)arg1;
- (void*)_suspendDormancyAssertion;
- (void)setDataContextActive:(BOOL)arg1;
- (BOOL)dataContextActive;
- (void)setShouldBringUpDataContext:(BOOL)arg1;
- (BOOL)shouldBringUpDataContext;
- (void)setRegistered:(BOOL)arg1;
- (BOOL)registered;
- (void)setCellularAutoAssociationTokens:(id)arg1;
- (id)cellularAutoAssociationTokens;
- (void)setWiFiAutoAssociationTokens:(id)arg1;
- (id)wiFiAutoAssociationTokens;
- (void)setDisableFastDormancyTokens:(id)arg1;
- (id)disableFastDormancyTokens;
- (BOOL)isDataSwitchEnabled;
- (BOOL)hasLTEDataConnection;
- (BOOL)has2GDataConnection;
- (BOOL)dataConnectionExists;
- (BOOL)inValidSIMState;
- (void)showSIMUnlock;
- (BOOL)isSIMLocked;
- (BOOL)isSIMRemoved;
- (void)_makeDataConnectionAvailable:(BOOL)arg1;
- (BOOL)_isDataConnectionAvailable;
- (void)_releaseCTServerConnection;
- (void)_createCTServerConnection;
- (void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)removeCellularAutoAssociationClientToken:(id)arg1;
- (void)addCellularAutoAssociationClientToken:(id)arg1;
- (BOOL)autoAssociateCellular;
- (void)showNetworkOptions;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (BOOL)autoAssociateWiFi;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
- (BOOL)disableFastDormancy;
- (void)_setFastDormancySuspended:(BOOL)arg1;
- (BOOL)isAirplaneModeEnabled;
- (void*)_getValueForKey:(id)arg1;
- (void)_initializeSCPrefs:(id)arg1;
- (void)_synchronize;
- (void)_adjustCelluarAutoAssociation;
- (void)__adjustFastDormancyTokens;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustFastDormancyTokens;
- (void)_adjustCellularAutoAssociation;
- (void)_adjustWiFiAutoAssociation;
- (BOOL)isDataConnectionActive;
- (void)setDataConnectionActive:(BOOL)arg1;
- (void)setLock:(id)arg1;
- (BOOL)isWiFiCaptive;
- (BOOL)isWiFiEnabled;
- (BOOL)isWiFiAssociated;
- (id)wiFiScaledRate;
- (id)wiFiScaledRSSI;
- (id)wiFiSignalStrength;
- (BOOL)willTryToSearchForWiFiNetwork;
- (BOOL)willTryToAutoAssociateWiFiNetwork;
- (BOOL)isHostingWiFiHotSpot;
- (void)_createWiFiManager;
- (void)refresh;
- (id)init;
- (void)dealloc;
- (id)lock;

@end
