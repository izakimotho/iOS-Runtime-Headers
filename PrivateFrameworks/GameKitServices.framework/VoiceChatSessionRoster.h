/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface VoiceChatSessionRoster : NSObject {
    unsigned int _chosenFocusRating;
    NSMutableArray *_connectedPeers;
    unsigned int _deviceRating;
    unsigned int _focusID;
    unsigned int _focusRating;
    GKSessionInternal *_gkSession;
    GKVoiceChatSessionInternal *_gkvs;
    BOOL _hasFocus;
    BOOL _isBeaconUp;
    BOOL _needsUpdateBeaconList;
    NSString *_peerID;
    NSMutableDictionary *_peerStateTable;
    NSObject<OS_dispatch_queue> *_sendQueue;
    BOOL _waitingToCalculateFocus;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } resMutex;
}

- (void)calculateFocus:(id)arg1;
- (void)cleanup;
- (void)configureDeviceRating;
- (void)dealloc;
- (unsigned int)focusID;
- (BOOL)hasFocus;
- (id)initWithGKSession:(id)arg1 peerID:(id)arg2 voiceChatSession:(id)arg3 sendQueue:(id)arg4;
- (void)peer:(id)arg1 didChangeState:(int)arg2;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (BOOL)recalculateFocusRating;
- (void)receivedBeacon:(id)arg1 fromPeer:(id)arg2;
- (void)sendBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 ToPeer:(id)arg2;
- (void)sendBeacons;
- (void)startBeacon;
- (void)startBeaconWrapper:(id)arg1;
- (void)stopBeacon;
- (id)subscribedPeers;
- (void)updateBeacon;

@end
