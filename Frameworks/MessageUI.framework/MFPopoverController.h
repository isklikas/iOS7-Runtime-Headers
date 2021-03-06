/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailPopoverManagerDelegate>;

@interface MFPopoverController : UIPopoverController <UIPopoverControllerDelegate> {
    id _mailDelegate;
    id _mailPopoverManager;
    BOOL _isRotating;
}

@property <MFMailPopoverManagerDelegate> * mailDelegate;
@property id mailPopoverManager;
@property BOOL isRotating;


- (id)mailPopoverManager;
- (void)setIsRotating:(BOOL)arg1;
- (id)mailDelegate;
- (void)setMailDelegate:(id)arg1;
- (void)setMailPopoverManager:(id)arg1;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (id)initWithContentViewController:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (BOOL)isRotating;

@end
