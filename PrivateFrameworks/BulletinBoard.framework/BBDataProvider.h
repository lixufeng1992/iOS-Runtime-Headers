/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBDataProviderIdentity, NSObject<OS_dispatch_queue>, NSString;

@interface BBDataProvider : NSObject <BBSectionIdentity> {
    BBDataProviderIdentity *__identity;
    NSObject<OS_dispatch_queue> *_identityQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) BBDataProviderIdentity * identity;
@property(readonly) Class superclass;

- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (BOOL)canClearAllBulletins;
- (BOOL)canPerformMigration;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned int)arg1;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2;
- (id)description;
- (id)displayNameForSubsectionID:(id)arg1;
- (id)identity;
- (id)init;
- (BOOL)initialized;
- (void)invalidate;
- (BOOL)isPushDataProvider;
- (BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)noteSectionInfoDidChange:(id)arg1;
- (id)parentSectionIdentifier;
- (void)primaryAttachmentDataForRecordID:(id)arg1 completion:(id)arg2;
- (void)reloadIdentityWithCompletion:(id)arg1;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setIdentity:(id)arg1;
- (id)sortDescriptors;
- (id)sortKey;
- (void)startWatchdog;
- (BOOL)syncsBulletinDismissal;
- (id)universalSectionIdentifier;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;

@end
