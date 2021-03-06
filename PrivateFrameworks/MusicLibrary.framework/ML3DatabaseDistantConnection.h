/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class MLMediaLibraryService, <ML3DatabaseDistantConnectionDelegate>, NSUUID;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection  {
    MLMediaLibraryService *_mediaLibraryService;
    BOOL _connectionOpen;
    <ML3DatabaseDistantConnectionDelegate> *_distantDelegate;
    NSUUID *_currentTransactionID;
}

@property <ML3DatabaseDistantConnectionDelegate> * distantDelegate;
@property(readonly) NSUUID * currentTransactionID;


- (void)setDistantDelegate:(id)arg1;
- (id)distantDelegate;
- (BOOL)shouldCacheStatements;
- (void)_serviceTerminatedTransactionNotification:(id)arg1;
- (void*)moduleContextForModuleName:(id)arg1;
- (void)setModuleContext:(void*)arg1 forModuleName:(id)arg2 contextReleaseBlock:(id)arg3;
- (BOOL)registerModuleName:(id)arg1 moduleMethods:(const struct sqlite3_module { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); }*)arg2;
- (int)checkpointDatabase;
- (int)_finalizeStatement:(id)arg1;
- (BOOL)_internalEndTransactionAndCommit:(BOOL)arg1;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned int)arg1;
- (BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (BOOL)_openWithFlags:(int)arg1 isRetry:(BOOL)arg2;
- (void)setProfilingLevel:(int)arg1;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(id)arg3;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(int (*)())arg3 userData:(void*)arg4;
- (id)initWithDatabasePath:(id)arg1;
- (id)currentTransactionID;
- (struct sqlite3 { }*)_sqliteHandle;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(BOOL)arg4;
- (BOOL)isOpen;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)isReadOnly;
- (BOOL)close;
- (void)dealloc;
- (void).cxx_destruct;

@end
