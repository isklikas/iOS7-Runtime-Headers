/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDTableRowProperties, WDTable;

@interface WDTableRow : NSObject  {
    unsigned int mIndex;
    WDTable *mTable;
    WDTableRowProperties *mProperties;
    NSMutableArray *mCells;
}


- (id)addCellWithIndex:(unsigned int)arg1;
- (id)newCellIterator;
- (id)cellIterator;
- (id)initWithTable:(id)arg1 at:(unsigned int)arg2;
- (id)addCell;
- (id)cellAt:(unsigned int)arg1;
- (unsigned int)cellCount;
- (unsigned int)index;
- (id)table;
- (void)dealloc;
- (id)properties;

@end
