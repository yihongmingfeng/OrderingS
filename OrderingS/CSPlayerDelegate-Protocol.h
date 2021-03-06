//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol CSPlayerDelegate <NSObject>

@optional
- (void)onCSPlayerCurrentSentenceIdxChangedWhenPlayArticle:(int)arg1;
- (void)onCSPlayerPlaying:(double)arg1;
- (void)onCSPlayerStop;
- (void)onCSPlayerContinuePlay;
- (void)onCSPlayerPause;
- (void)onCSPlayerPlay:(double)arg1;
- (void)onCSPlayerRecordFinishWithKey:(NSString *)arg1 fileName:(NSString *)arg2 andAudioData:(NSData *)arg3;
- (void)onCSPlayerRecordStopWithStatus:(int)arg1;
- (void)onCSPlayerRecordStart;
@end

