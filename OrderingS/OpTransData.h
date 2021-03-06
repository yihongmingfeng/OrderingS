//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OrderFormData2;

@interface OpTransData : NSObject
{
    _Bool _forOtherTag;
    _Bool _needOpenSelDlgTag;
    int _bookerSexTag;
    double _reserveTime;
    long long _peopleNum;
    long long _roomTypeTag;
    NSString *_tableId;
    NSString *_tableName;
    NSString *_bookerName;
    NSString *_bookerTel;
    NSString *_memo;
    NSString *_eaterName;
    long long _eaterSexTag;
    NSString *_eaterTel;
    long long _postTag;
    NSString *_orderId;
    NSString *_restId;
    NSString *_restName;
    NSString *_activityId;
    NSString *_activityName;
    OrderFormData2 *_formData;
    NSString *_orderHint;
}

@property(retain, nonatomic) NSString *orderHint; // @synthesize orderHint=_orderHint;
@property(retain, nonatomic) OrderFormData2 *formData; // @synthesize formData=_formData;
@property(retain, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *restName; // @synthesize restName=_restName;
@property(retain, nonatomic) NSString *restId; // @synthesize restId=_restId;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) _Bool needOpenSelDlgTag; // @synthesize needOpenSelDlgTag=_needOpenSelDlgTag;
@property(nonatomic) long long postTag; // @synthesize postTag=_postTag;
@property(retain, nonatomic) NSString *eaterTel; // @synthesize eaterTel=_eaterTel;
@property(nonatomic) long long eaterSexTag; // @synthesize eaterSexTag=_eaterSexTag;
@property(retain, nonatomic) NSString *eaterName; // @synthesize eaterName=_eaterName;
@property(nonatomic) _Bool forOtherTag; // @synthesize forOtherTag=_forOtherTag;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *bookerTel; // @synthesize bookerTel=_bookerTel;
@property(nonatomic) int bookerSexTag; // @synthesize bookerSexTag=_bookerSexTag;
@property(retain, nonatomic) NSString *bookerName; // @synthesize bookerName=_bookerName;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) NSString *tableId; // @synthesize tableId=_tableId;
@property(nonatomic) long long roomTypeTag; // @synthesize roomTypeTag=_roomTypeTag;
@property(nonatomic) long long peopleNum; // @synthesize peopleNum=_peopleNum;
@property(nonatomic) double reserveTime; // @synthesize reserveTime=_reserveTime;
- (long long)currentRoomTypeTagWithData:(id)arg1 oldRoomTypeTag:(long long)arg2;
- (id)newRoomTypeTagListWithData:(id)arg1;
- (void)resetBookerInfoFromCache;
- (void)resetWithRestId:(id)arg1 restName:(id)arg2 activityId:(id)arg3 activityName:(id)arg4;
- (void)saveBookerInfoToCache;
- (id)roomTypeNameWithTag:(long long)arg1;
- (id)newRoomTypeTagList;
- (id)peopleAndroomTypeStr;
- (id)reserveTimeStr;
- (void)completeDataWithFormData:(id)arg1;
- (void)prepareForUpdateWithOrderInfo:(id)arg1;
- (void)prepareForAddWithRestId:(id)arg1 restName:(id)arg2 activityId:(id)arg3 activityName:(id)arg4;
- (void)dealloc;
- (id)init;

@end

