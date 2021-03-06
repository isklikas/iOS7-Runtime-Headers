/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUConcernItem;

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate> {
    NSString *_commentText;
    SUConcernItem *_concern;
    unsigned long long _itemIdentifier;
}

@property(retain) NSString * commentText;
@property(retain) SUConcernItem * concern;
@property unsigned long long itemIdentifier;


- (id)concern;
- (void)setConcern:(id)arg1;
- (id)initWithConcern:(id)arg1;
- (void)setCommentText:(id)arg1;
- (id)commentText;
- (id)_httpBody;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (unsigned long long)itemIdentifier;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)run;
- (void)dealloc;

@end
