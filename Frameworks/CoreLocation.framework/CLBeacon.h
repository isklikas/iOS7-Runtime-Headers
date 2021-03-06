/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSNumber, NSUUID;

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
    int _proximity;
    int _rssi;
    double _accuracy;
}

@property(readonly) NSUUID * proximityUUID;
@property(readonly) NSNumber * major;
@property(readonly) NSNumber * minor;
@property(readonly) int proximity;
@property(readonly) double accuracy;
@property(readonly) int rssi;

+ (BOOL)supportsSecureCoding;

- (int)rssi;
- (double)accuracy;
- (int)proximity;
- (id)minor;
- (id)major;
- (id)proximityUUID;
- (id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(int)arg4 accuracy:(double)arg5 rssi:(int)arg6;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
