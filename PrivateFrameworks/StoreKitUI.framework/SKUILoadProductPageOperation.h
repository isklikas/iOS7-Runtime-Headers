/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SSMetricsPageEvent, NSURLRequest, NSObject<OS_dispatch_queue>, SKUIClientContext;

@interface SKUILoadProductPageOperation : NSOperation  {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    SSMetricsPageEvent *_metricsPageEvent;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _outputBlock;

    NSURLRequest *_urlRequest;
}

@property(copy) id outputBlock;
@property(readonly) SSMetricsPageEvent * metricsPageEvent;


- (id)_initSKUILoadProductPageOperation;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;
- (id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2;
- (void)setOutputBlock:(id)arg1;
- (id)metricsPageEvent;
- (id)outputBlock;
- (void).cxx_destruct;
- (void)main;

@end
