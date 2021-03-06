/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIProgressIndicator, UILabel, UIWindow;

@interface UIProgressHUD : UIView  {
    UIProgressIndicator *_progressIndicator;
    UILabel *_progressMessage;
    UIImageView *_doneView;
    UIWindow *_parentWindow;
    struct { 
        unsigned int isShowing : 1; 
        unsigned int isShowingText : 1; 
        unsigned int fixedFrame : 1; 
        unsigned int reserved : 30; 
    } _progressHUDFlags;
}


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)show:(BOOL)arg1;
- (void)done;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (void)showInView:(id)arg1;
- (void)setShowsText:(BOOL)arg1;
- (id)_progressIndicator;
- (void)hide;
- (void)setFontSize:(int)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;

@end
