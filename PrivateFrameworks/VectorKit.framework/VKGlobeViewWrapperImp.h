/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface VKGlobeViewWrapperImp : VKGlobeViewWrapper  {
    struct GlobeView { int (**x1)(); } *_globeView;
}

@property struct GlobeView { int (**x1)(); }* globeView;


- (id)imp;
- (void)setGlobeView:(struct GlobeView { int (**x1)(); }*)arg1;
- (struct GlobeView { int (**x1)(); }*)globeView;

@end
