/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKColorPalette, GKViewController;

@interface GKViewController : UIViewController  {
    BOOL _shouldUpdateContentOnlyWhenAuthenticated;
    GKViewController *_rootViewController;
    GKColorPalette *_colorPalette;
    int _gkFocusBubbleType;
}

@property(retain) GKColorPalette * colorPalette;
@property BOOL shouldUpdateContentOnlyWhenAuthenticated;
@property(retain) GKViewController * rootViewController;
@property int gkFocusBubbleType;


- (int)lastKnownOrientation;
- (void)setShouldUpdateContentOnlyWhenAuthenticated:(BOOL)arg1;
- (void)pushFullScreenViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)displayUsingSplitNavigationBar;
- (BOOL)shouldUpdateContentOnlyWhenAuthenticated;
- (void)setGkFocusBubbleType:(int)arg1;
- (int)gkFocusBubbleType;
- (void)setColorPalette:(id)arg1;
- (id)colorPalette;
- (void)dealloc;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;

@end
