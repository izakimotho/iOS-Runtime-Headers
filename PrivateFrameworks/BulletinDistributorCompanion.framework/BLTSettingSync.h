/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingSync : BLTSettingSyncInternal <BBObserverDelegate, BLTSectionInfoListDelegate> {
    BLTDNDSync *_dndSync;
    BOOL _initialSyncPerformed;
    BLTSectionInfoList *_sectionInfoList;
    BLTSectionInfoSyncCoordinator *_sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> *_sectionInfoSyncCoordinatorQueue;
    BLTSettingSyncSendQueue *_settingSendQueue;
    unsigned int _settingSyncSendQueueMaxConcurrentSendCount;
    int _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertingSectionIDs;
- (unsigned int)_fetchSettingSyncMaxCountOverride;
- (unsigned int)_fetchSyncState;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(BOOL)arg3 andCompletion:(id /* block */)arg4;
- (void)_setupSectionInfoListWithCompletion:(id /* block */)arg1;
- (void)_storeSyncState:(unsigned int)arg1;
- (void)_updateAllBBSectionsWithCompletion:(id /* block */)arg1 withProgress:(id /* block */)arg2;
- (BOOL)_willSectionIDAlert:(id)arg1;
- (void)clearSectionInfoSentCache;
- (void)dealloc;
- (id)init;
- (BOOL)isSectionInfoSentCacheEmpty;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)performInitialSyncWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performSyncIfNeededForSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2;
- (void)sendAllSectionInfoWithCompletion:(id /* block */)arg1;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(id /* block */)arg2;
- (id)settingOverrides;
- (id)universalSectionIDForSectionID:(id)arg1;

@end
