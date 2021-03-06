//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UserInfoDto : NSObject
{
    _Bool _loginTag;
    _Bool _sinaBindTag;
    _Bool _qqBindTag;
    _Bool _weixinBindTag;
    int _sexTag;
    int _totalMailNum;
    int _pointNum;
    int _level;
    int _nextLevelPct;
    int _sinaBindRemainSecs;
    int _qqBindRemainSecs;
    NSString *_uuid;
    NSString *_trueName;
    NSString *_nickName;
    NSString *_tel;
    NSString *_token;
    NSString *_picUrl;
    double _remainMoney;
    NSString *_nextLevelHint;
    NSString *_sinaAccount;
    NSString *_qqAccount;
    NSString *_weixinAccount;
    double _soSinaTimestamp;
    double _soQqTimestamp;
}

@property(nonatomic) double soQqTimestamp; // @synthesize soQqTimestamp=_soQqTimestamp;
@property(nonatomic) double soSinaTimestamp; // @synthesize soSinaTimestamp=_soSinaTimestamp;
@property(retain, nonatomic) NSString *weixinAccount; // @synthesize weixinAccount=_weixinAccount;
@property(nonatomic) _Bool weixinBindTag; // @synthesize weixinBindTag=_weixinBindTag;
@property(nonatomic) int qqBindRemainSecs; // @synthesize qqBindRemainSecs=_qqBindRemainSecs;
@property(retain, nonatomic) NSString *qqAccount; // @synthesize qqAccount=_qqAccount;
@property(nonatomic) _Bool qqBindTag; // @synthesize qqBindTag=_qqBindTag;
@property(nonatomic) int sinaBindRemainSecs; // @synthesize sinaBindRemainSecs=_sinaBindRemainSecs;
@property(retain, nonatomic) NSString *sinaAccount; // @synthesize sinaAccount=_sinaAccount;
@property(nonatomic) _Bool sinaBindTag; // @synthesize sinaBindTag=_sinaBindTag;
@property(retain, nonatomic) NSString *nextLevelHint; // @synthesize nextLevelHint=_nextLevelHint;
@property(nonatomic) int nextLevelPct; // @synthesize nextLevelPct=_nextLevelPct;
@property(nonatomic) double remainMoney; // @synthesize remainMoney=_remainMoney;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) int pointNum; // @synthesize pointNum=_pointNum;
@property(nonatomic) int totalMailNum; // @synthesize totalMailNum=_totalMailNum;
@property(nonatomic) int sexTag; // @synthesize sexTag=_sexTag;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *trueName; // @synthesize trueName=_trueName;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool loginTag; // @synthesize loginTag=_loginTag;
- (void)resetQqTimeStamp;
- (void)resetSinaTimeStamp;
- (long long)accurateQqRemainSeconds;
- (long long)accurateSinaRemainSeconds;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

