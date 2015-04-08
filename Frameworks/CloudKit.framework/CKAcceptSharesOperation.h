/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKAcceptSharesOperation : CKDatabaseOperation {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _acceptSharesCompletionBlock;

    NSMutableDictionary *_errorsByShareURL;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _perShareCompletionBlock;

    NSArray *_shareURLs;
}

@property(copy) id acceptSharesCompletionBlock;
@property(retain) NSMutableDictionary * errorsByShareURL;
@property(copy) id perShareCompletionBlock;
@property(copy) NSArray * shareURLs;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)acceptSharesCompletionBlock;
- (id)errorsByShareURL;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithShareURLs:(id)arg1;
- (id)perShareCompletionBlock;
- (void)performCKOperation;
- (void)setAcceptSharesCompletionBlock:(id)arg1;
- (void)setErrorsByShareURL:(id)arg1;
- (void)setPerShareCompletionBlock:(id)arg1;
- (void)setShareURLs:(id)arg1;
- (id)shareURLs;

@end