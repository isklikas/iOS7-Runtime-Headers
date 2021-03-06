/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@class NSString, NSDictionary;

@interface RTCReportingBackEnd : NSObject  {
    NSDictionary *_profile;
    NSString *_name;
    unsigned int _sessionID;
    int _compType;
    unsigned short _clientVersion;
    unsigned char _selfVersionMajor;
    unsigned char _selfVersionMinor;
    unsigned short _eventID;
    char *_udid;
    NSString *_displayURL;
}

@property unsigned int sessionID;
@property int compType;
@property unsigned short clientVersion;
@property char * udid;
@property(copy) NSString * displayURL;


- (void)setDisplayURL:(id)arg1;
- (id)displayURL;
- (void)setUdid:(char *)arg1;
- (void)setClientVersion:(unsigned short)arg1;
- (void)setCompType:(int)arg1;
- (int)compType;
- (id)sendMsgOfType:(int)arg1 method:(unsigned short)arg2 respCode:(unsigned short)arg3 dict:(id)arg4;
- (void)setSelfVersion:(id)arg1;
- (id)sendMsgOfType:(int)arg1 method:(unsigned short)arg2 respCode:(unsigned short)arg3 eventID:(unsigned short)arg4 dict:(id)arg5;
- (BOOL)uploadFileAtPath:(id)arg1;
- (id)initWithName:(id)arg1 profile:(id)arg2;
- (unsigned short)clientVersion;
- (char *)udid;
- (void)setSessionID:(unsigned int)arg1;
- (unsigned int)sessionID;
- (void)dealloc;
- (void)cleanup;

@end
