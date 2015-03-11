/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSString;

@interface MusicSongsDataSource : MusicQueryDataSource {
    unsigned long long _syncAssetTotal;
    int _syncAssetTotalToken;
    unsigned long long _syncCurrentAssetNumber;
    int _syncCurrentAssetNumberToken;
    NSString *_syncProgressString;
    bool_syncAssetTotalTokenIsValid;
    bool_syncCurrentAssetNumberTokenIsValid;
}

- (void).cxx_destruct;
- (void)_updateSyncProgressString;
- (void)dealloc;
- (id)entityCountFormat;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (bool)showsEntityCountFooter;
- (bool)showsIndexBar;

@end