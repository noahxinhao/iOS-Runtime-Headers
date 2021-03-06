/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    BOOL  _atomic;
    NSData * _clientChangeTokenData;
    NSDictionary * _conflictLosersToResolveByRecordID;
    NSDictionary * _pluginFieldsForRecordDeletesByID;
    NSArray * _recordIDsToDelete;
    NSDictionary * _recordIDsToDeleteToEtags;
    NSArray * _recordsToSave;
    int  _savePolicy;
    BOOL  _shouldOnlySaveAssetContent;
    BOOL  _shouldReportRecordsInFlight;
}

@property (nonatomic) BOOL atomic;
@property (nonatomic, retain) NSData *clientChangeTokenData;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic, copy) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, copy) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, retain) NSArray *recordsToSave;
@property (nonatomic) int savePolicy;
@property (nonatomic) BOOL shouldOnlySaveAssetContent;
@property (nonatomic) BOOL shouldReportRecordsInFlight;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pluginFieldsForRecordDeletesByID;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordsToSave;
- (int)savePolicy;
- (void)setAtomic:(BOOL)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setPluginFieldsForRecordDeletesByID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(int)arg1;
- (void)setShouldOnlySaveAssetContent:(BOOL)arg1;
- (void)setShouldReportRecordsInFlight:(BOOL)arg1;
- (BOOL)shouldOnlySaveAssetContent;
- (BOOL)shouldReportRecordsInFlight;

@end
