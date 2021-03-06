/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBXpcConnection, NSMutableDictionary, <CBCentralManagerDelegate>;

@interface CBCentralManager : NSObject <CBXpcConnectionDelegate> {
    <CBCentralManagerDelegate> *_delegate;
    int _state;
    NSMutableDictionary *_peripherals;
    BOOL _isScanning;
    CBXpcConnection *_connection;
}

@property <CBCentralManagerDelegate> * delegate;
@property(readonly) int state;


- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)stopScan;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (id)retrievePairedPeripherals;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (void)retrieveConnectedPeripherals;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (void)retrievePeripherals:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)peripheralWillBeReleased:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(int)arg2 args:(id)arg3;
- (void)xpcConnectionIsInvalid:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)handlePeripheralMsg:(int)arg1 args:(id)arg2;
- (void)handleZoneLost:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handleConnectedPeripheralsRetrieved:(id)arg1;
- (void)handlePeripheralsRetrieved:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)cancelPeripheralConnection:(id)arg1 force:(BOOL)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(BOOL)arg2;
- (id)peripheralForUUID:(id)arg1 args:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (void)orphanPeripherals;
- (void)cancelPeripheralConnection:(id)arg1;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)state;

@end
