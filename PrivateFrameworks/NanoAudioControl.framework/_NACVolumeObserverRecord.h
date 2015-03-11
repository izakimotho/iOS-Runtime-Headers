/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@class MPAVRoutingController, MPVolumeController, NACEventThrottler;

@interface _NACVolumeObserverRecord : NSObject {
    float _EUVolumeLimit;
    MPAVRoutingController *_routingController;
    NACEventThrottler *_throttler;
    MPVolumeController *_volumeController;
    bool_muted;
    bool_volumeControlAvailable;
    bool_volumeWarningEnabled;
}

@property float EUVolumeLimit;
@property(getter=isMuted) bool muted;
@property(retain) MPAVRoutingController * routingController;
@property(retain) NACEventThrottler * throttler;
@property(getter=isVolumeControlAvailable) bool volumeControlAvailable;
@property(retain) MPVolumeController * volumeController;
@property(getter=isVolumeWarningEnabled) bool volumeWarningEnabled;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeWarningEnabled;
- (id)routingController;
- (void)setEUVolumeLimit:(float)arg1;
- (void)setMuted:(bool)arg1;
- (void)setRoutingController:(id)arg1;
- (void)setThrottler:(id)arg1;
- (void)setVolumeControlAvailable:(bool)arg1;
- (void)setVolumeController:(id)arg1;
- (void)setVolumeWarningEnabled:(bool)arg1;
- (id)throttler;
- (id)volumeController;

@end