/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUColor;

@interface CMColorProperty : CMProperty  {
    TSUColor *wdValue;
}

+ (id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2;
+ (struct CGColor { }*)copyCGColorFromOADFill:(id)arg1 state:(id)arg2;
+ (struct CGColor { }*)copyCGColorFromOADColor:(id)arg1 state:(id)arg2;
+ (id)cssStringFromTSUColor:(id)arg1;
+ (id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)nsColorFromOADColor:(id)arg1 state:(id)arg2;
+ (id)nsColorFromOADFill:(id)arg1 state:(id)arg2;
+ (float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2;
+ (id)nsColorFromShading:(id)arg1;
+ (float)transformedAlphaFromOADColor:(id)arg1;
+ (id)cssStringFromOADColor:(id)arg1;

- (BOOL)isEqualTo:(id)arg1;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)value;

@end
