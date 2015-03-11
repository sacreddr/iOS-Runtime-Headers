/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class AVItemAccessLogEventInternal, NSDate, NSString;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
    AVItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property(readonly) NSString * URI;
@property(readonly) double durationWatched;
@property(readonly) double indicatedBitrate;
@property(readonly) long long numberOfBytesTransferred;
@property(readonly) long long numberOfDroppedVideoFrames;
@property(readonly) long long numberOfSegmentsDownloaded;
@property(readonly) long long numberOfServerAddressChanges;
@property(readonly) long long numberOfStalls;
@property(readonly) double observedBitrate;
@property(readonly) NSString * playbackSessionID;
@property(readonly) NSDate * playbackStartDate;
@property(readonly) double playbackStartOffset;
@property(readonly) double segmentsDownloadedDuration;
@property(readonly) NSString * serverAddress;

- (id)URI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)durationWatched;
- (void)finalize;
- (double)indicatedBitrate;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)numberOfBytesTransferred;
- (long long)numberOfDroppedVideoFrames;
- (long long)numberOfSegmentsDownloaded;
- (long long)numberOfServerAddressChanges;
- (long long)numberOfStalls;
- (double)observedBitrate;
- (id)playbackSessionID;
- (id)playbackStartDate;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (id)serverAddress;

@end