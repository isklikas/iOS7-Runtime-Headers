/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSDictionary;

@interface NSStringDrawingContext : NSObject  {
    float _minimumScaleFactor;
    float _minimumTrackingAdjustment;
    float _actualScaleFactor;
    float _actualTrackingAdjustment;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _totalBounds;
    NSDictionary *_linkAttributes;
    unsigned int _numberOfLineFragments;
    unsigned int _maximumNumberOfLines;
    float _baselineOffset;
    float _scaledBaselineOffset;
    float _scaledLineHeight;
    id _layout;
    struct { 
        unsigned int _wantsNumberOfLineFragments : 1; 
        unsigned int _wrapsForTruncationMode : 1; 
        unsigned int _wantsBaselineOffset : 1; 
        unsigned int _wantsScaledBaselineOffset : 1; 
        unsigned int _wantsScaledLineHeight : 1; 
        unsigned int _drawsDebugBaselines : 1; 
        unsigned int _cachesLayout : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
    } _sdcFlags;
    BOOL _wantsNumberOfLineFragments;
}

@property float minimumScaleFactor;
@property float minimumTrackingAdjustment;
@property float actualScaleFactor;
@property float actualTrackingAdjustment;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } totalBounds;
@property BOOL wantsNumberOfLineFragments;
@property unsigned int numberOfLineFragments;
@property BOOL wrapsForTruncationMode;
@property unsigned int maximumNumberOfLines;
@property BOOL wantsBaselineOffset;
@property float baselineOffset;
@property BOOL wantsScaledBaselineOffset;
@property float scaledBaselineOffset;
@property BOOL wantsScaledLineHeight;
@property float scaledLineHeight;
@property BOOL drawsDebugBaselines;
@property BOOL cachesLayout;
@property(retain) id layout;
@property BOOL usesSimpleTextEffects;


- (void)setScaledLineHeight:(float)arg1;
- (void)setScaledBaselineOffset:(float)arg1;
- (void)setBaselineOffset:(float)arg1;
- (float)baselineOffset;
- (void)setNumberOfLineFragments:(unsigned int)arg1;
- (unsigned int)numberOfLineFragments;
- (void)setTotalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setActualTrackingAdjustment:(float)arg1;
- (float)actualTrackingAdjustment;
- (void)setActualScaleFactor:(float)arg1;
- (void)setUsesSimpleTextEffects:(BOOL)arg1;
- (BOOL)usesSimpleTextEffects;
- (void)setLayout:(id)arg1;
- (id)layout;
- (void)setCachesLayout:(BOOL)arg1;
- (BOOL)cachesLayout;
- (void)setDrawsDebugBaselines:(BOOL)arg1;
- (BOOL)drawsDebugBaselines;
- (void)setWantsScaledLineHeight:(BOOL)arg1;
- (BOOL)wantsScaledLineHeight;
- (void)setWantsScaledBaselineOffset:(BOOL)arg1;
- (BOOL)wantsScaledBaselineOffset;
- (void)setWantsBaselineOffset:(BOOL)arg1;
- (BOOL)wantsBaselineOffset;
- (void)setMaximumNumberOfLines:(unsigned int)arg1;
- (unsigned int)maximumNumberOfLines;
- (void)setWrapsForTruncationMode:(BOOL)arg1;
- (BOOL)wrapsForTruncationMode;
- (void)setWantsNumberOfLineFragments:(BOOL)arg1;
- (BOOL)wantsNumberOfLineFragments;
- (void)setMinimumTrackingAdjustment:(float)arg1;
- (float)minimumTrackingAdjustment;
- (void)setMinimumScaleFactor:(float)arg1;
- (float)minimumScaleFactor;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)scaledLineHeight;
- (float)scaledBaselineOffset;
- (float)actualScaleFactor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })totalBounds;

@end
