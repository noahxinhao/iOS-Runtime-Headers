/* Generated by RuntimeBrowser.
 */

@protocol AKFollowUpProvider <NSObject>

@required

- (BOOL)addFollowUpItems:(NSArray *)arg1 error:(id*)arg2;
- (BOOL)clearNotificationsForItem:(FLFollowUpItem *)arg1 error:(id*)arg2;
- (NSArray *)pendingAuthKitFollowUpItems:(id*)arg1;
- (NSArray *)pendingAuthKitFollowUpUniqueIdentifiers:(id*)arg1;
- (BOOL)removeAllAuthKitFollowUpItems:(id*)arg1;
- (BOOL)removeFollowUpItems:(NSArray *)arg1 error:(id*)arg2;
- (BOOL)removeFollowUpItemsWithIdentifiers:(NSArray *)arg1 error:(id*)arg2;

@end
