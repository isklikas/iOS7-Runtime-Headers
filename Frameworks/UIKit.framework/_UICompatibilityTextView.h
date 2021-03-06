/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextPosition, <UITextInputDelegate>, <UITextInputTokenizer>, UIFont, NSAttributedString, UIView, <UITextViewDelegate>, NSString, NSDictionary, UIColor, UITextRange;

@interface _UICompatibilityTextView : UIScrollView <UITextLinkInteraction, UITextInput> {
    id _private;
    BOOL m_editing;
    UIView *m_inputView;
}

@property <UITextViewDelegate> * delegate;
@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property int textAlignment;
@property struct _NSRange { unsigned int x1; unsigned int x2; } selectedRange;
@property(getter=isEditable) BOOL editable;
@property unsigned int dataDetectorTypes;
@property BOOL allowsEditingTextAttributes;
@property(copy) NSAttributedString * attributedText;
@property(copy) NSDictionary * typingAttributes;
@property(retain) UIView * inputView;
@property(retain) UIView * inputAccessoryView;
@property BOOL clearsOnInsertion;
@property(getter=isEditing) BOOL editing;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property int selectionAffinity;

+ (void)initialize;
+ (id)_bestInterpretationForDictationResult:(id)arg1;
+ (id)excludedElementsForHTML;
+ (BOOL)_isCompatibilityTextView;

- (BOOL)isEditing;
- (BOOL)isEditable;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)insertText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)undoManager;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)undoManagerForWebView:(id)arg1;
- (void)webViewDidChange:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)text;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (id)selectedText;
- (id)font;
- (void)_dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)webView;
- (float)lineHeight;
- (id)typingAttributes;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (Class)_printFormatterClass;
- (void)scrollToMakeCaretVisible:(BOOL)arg1;
- (void)setScrollerIndicatorSubrect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAllowsFourWayRubberBanding:(BOOL)arg1;
- (BOOL)scrollingEnabled;
- (void)setAllowsRubberBanding:(BOOL)arg1;
- (void)displayScrollerIndicators;
- (BOOL)showScrollerIndicators;
- (void)setShowScrollerIndicators:(BOOL)arg1;
- (float)bottomBufferHeight;
- (void)setBottomBufferHeight:(float)arg1;
- (id)automaticallySelectedOverlay;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setMarginTop:(int)arg1;
- (int)marginTop;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (id)contentAsHTMLString;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectionToStart;
- (void)_promptForReplace:(id)arg1;
- (void)select:(id)arg1;
- (void)updateSelection;
- (void)disableClearsOnInsertion;
- (BOOL)clearsOnInsertion;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)mightHaveLinks;
- (void)setSelectionGranularity:(int)arg1;
- (int)selectionGranularity;
- (unsigned int)_allowedLinkTypes;
- (void)resetDataDetectorsResultsWithWebLock;
- (void)recalculateStyle;
- (void)setContentToHTMLString:(id)arg1;
- (void)_transferTextViewPropertiesFromText:(id)arg1;
- (void)_transferAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
- (void)startDataDetectorsWithWebLock;
- (BOOL)shouldStartDataDetectors;
- (void)_updateForNewSize:(struct CGSize { float x1; float x2; })arg1 withOldSize:(struct CGSize { float x1; float x2; })arg2;
- (void)ensureSelection;
- (void)scrollRectToVisibleInContainingScrollView;
- (BOOL)shouldScrollEnclosingScrollView;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)setClearsOnInsertion:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleTextRect;
- (void)setSelectionToEnd;
- (void)selectAll:(id)arg1;
- (void)performBecomeEditableTasks;
- (void)delayedUpdateForKeyboardDidShow;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)cancelDataDetectorsWithWebLock;
- (void)keyboardDidShow:(id)arg1;
- (void)updateContentEditableAttribute:(BOOL)arg1;
- (void)updateWebViewObjects;
- (id)_proxyTextInput;
- (struct CGSize { float x1; float x2; })tileSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)styleString;
- (unsigned int)dataDetectorTypes;
- (BOOL)allowsEditingTextAttributes;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setLineHeight:(float)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2;
- (id)_keyboardResponder;
- (id)inputAccessoryView;
- (id)inputView;
- (BOOL)canResignFirstResponder;
- (void)selectAll;
- (void)setSelectionAffinity:(int)arg1;
- (int)selectionAffinity;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)metadataDictionariesForDictationResults;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)tokenizer;
- (void)setInputDelegate:(id)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (void)unmarkText;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (id)markedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (id)selectedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (BOOL)hasText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)inputDelegate;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (int)textAlignment;
- (void)setTypingAttributes:(id)arg1;
- (id)textInputView;
- (id)textColor;
- (id)textInputTraits;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (id)selectionView;
- (id)interactionAssistant;
- (void)setEditing:(BOOL)arg1;
- (void)setTextAlignment:(int)arg1;
- (id)attributedText;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (id)_automationValue;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didMoveToSuperview;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
