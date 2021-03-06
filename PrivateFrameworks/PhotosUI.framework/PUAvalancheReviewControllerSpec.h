/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAvalancheReviewControllerSpec : NSObject  {
    int _fastImageFormat;
    int _qualityImageFormat;
    int _zoomingImageFormat;
    float _interItemSpacing;
}

@property(readonly) int fastImageFormat;
@property(readonly) int qualityImageFormat;
@property(readonly) int zoomingImageFormat;
@property(readonly) float interItemSpacing;
@property(readonly) struct CGSize { float x1; float x2; } selectionBadgeSize;
@property(readonly) struct UIOffset { float x1; float x2; } selectionBadgeOffset;
@property(readonly) unsigned int selectionBadgeCorner;


- (BOOL)allowsInterfaceRotation;
- (unsigned int)selectionBadgeCorner;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionViewLayoutContentInsetForOrientation:(int)arg1;
- (int)zoomingImageFormat;
- (struct UIOffset { float x1; float x2; })selectionBadgeOffset;
- (struct CGSize { float x1; float x2; })selectionBadgeSize;
- (int)qualityImageFormat;
- (int)fastImageFormat;
- (float)interItemSpacing;

@end
