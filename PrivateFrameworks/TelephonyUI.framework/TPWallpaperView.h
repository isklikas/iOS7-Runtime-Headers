/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class _UIBackdropView, UIImageView, UIImage;

@interface TPWallpaperView : UIView  {
    BOOL _blursBackground;
    BOOL _hidesContactImage;
    BOOL _shouldLockContactImage;
    BOOL _shouldBindBlurringWithPresenceOfContactImage;
    UIImage *_contactImage;
    float _blurProportion;
    UIImageView *_contactImageView;
    _UIBackdropView *_backdropEffectView;
}

@property(retain) UIImage * contactImage;
@property BOOL blursBackground;
@property float blurProportion;
@property BOOL hidesContactImage;
@property BOOL shouldLockContactImage;
@property BOOL shouldBindBlurringWithPresenceOfContactImage;
@property(retain) UIImageView * contactImageView;
@property(retain) _UIBackdropView * backdropEffectView;


- (BOOL)shouldBindBlurringWithPresenceOfContactImage;
- (void)setShouldLockContactImage:(BOOL)arg1;
- (float)blurProportion;
- (void)setShouldBindBlurringWithPresenceOfContactImage:(BOOL)arg1;
- (void)setBlurProportion:(float)arg1;
- (void)setHidesContactImage:(BOOL)arg1;
- (void)setContactImage:(id)arg1;
- (BOOL)hidesContactImage;
- (void)setContactImage:(id)arg1 animated:(BOOL)arg2;
- (id)contactImage;
- (void)updateBindBlurringWithPresenceOfContactImage;
- (BOOL)shouldLockContactImage;
- (void)setContactImageView:(id)arg1;
- (id)contactImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setBlursBackground:(BOOL)arg1;
- (BOOL)blursBackground;
- (void)setBackdropEffectView:(id)arg1;
- (id)backdropEffectView;

@end
