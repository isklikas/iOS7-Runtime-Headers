/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonNameDisplayView, ABMultiCellContentView, UIFont, UITableView, ABNamePropertyGroup, <ABStyleProvider>, UIView, <ABPersonTableHeaderViewDelegate>, ABMultiCell, ABUIPerson, NSString, UIImageView, ABPersonImageView;

@interface ABPersonTableHeaderView : UIView <UITableViewDelegate, UITableViewDataSource> {
    BOOL _editing;
    BOOL _representsLinkedPeople;
    ABPersonImageView *_imageView;
    UIImageView *_imageShadowView;
    ABPersonNameDisplayView *_displayView;
    BOOL _showsMultiplePhotoBackdropView;
    ABNamePropertyGroup *_namePropertyGroup;
    ABMultiCellContentView *_editingView;
    ABMultiCell *_editingViewCell;
    UITableView *_editingViewContainer;
    UIView *_extraHeaderView;
    BOOL _extraHeaderViewAlignsToImage;
    <ABPersonTableHeaderViewDelegate> *_delegate;
    <ABStyleProvider> *_styleProvider;
}

@property(retain) ABUIPerson * personForImageView;
@property <ABPersonTableHeaderViewDelegate> * delegate;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) ABPersonImageView * imageView;
@property(readonly) ABPersonNameDisplayView * displayView;
@property(readonly) ABMultiCellContentView * editingView;
@property(retain) ABNamePropertyGroup * namePropertyGroup;
@property BOOL representsLinkedPeople;
@property(copy) NSString * alternateName;
@property(copy) NSString * message;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIView * customMessageView;
@property(retain) UIView * extraHeaderView;
@property BOOL extraHeaderViewAlignsToImage;


- (void)setExtraHeaderViewAlignsToImage:(BOOL)arg1;
- (BOOL)extraHeaderViewAlignsToImage;
- (id)extraHeaderView;
- (id)editingView;
- (id)displayView;
- (void)_updateRecordIfNeeded;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (struct CGPoint { float x1; float x2; })extraHeaderViewOrigin;
- (void)deselectAnimated:(BOOL)arg1;
- (void)setRepresentsLinkedPeople:(BOOL)arg1;
- (void)setExtraHeaderView:(id)arg1;
- (id)personForImageView;
- (id)_imageShadowView;
- (void)reloadNameDataButNotModelAnimated:(BOOL)arg1;
- (void)_layoutExtraHeaderView;
- (void)_updateShowsMultiplePhotoBackdrop;
- (float)_extraHeaderViewAvailableWidthForWidth:(float)arg1 whenEditing:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_extraHeaderViewOriginForWidth:(float)arg1 whenEditing:(BOOL)arg2;
- (id)_displayView;
- (void)_recreateEditingViewContainer;
- (BOOL)representsLinkedPeople;
- (float)extraHeaderViewHorizontalPaddingWhenEditing:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_displayViewFrameForWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingViewContainerFrameForWidth:(float)arg1;
- (float)_editingViewWidthForWidth:(float)arg1;
- (struct CGPoint { float x1; float x2; })_editingViewOrigin;
- (float)_displayViewWidthForWidth:(float)arg1;
- (struct CGPoint { float x1; float x2; })_displayViewOrigin;
- (void)imageViewSelected:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageViewFrameWhenEditing:(BOOL)arg1;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageFont;
- (id)messageDetail;
- (id)namePropertyGroup;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setNamePropertyGroup:(id)arg1;
- (void)setPersonForImageView:(id)arg1;
- (void)reloadImageData;
- (id)entryFieldForRow:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (void)setAlternateName:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)setBackgroundColor:(id)arg1;
- (id)alternateName;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)message;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (BOOL)canResignFirstResponder;
- (id)imageView;
- (float)marginForTableView:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_isSpecialInternalHeaderView;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)layoutSubviews;
- (void)reloadData;

@end
