//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, RestRecomPicData, ShareInfoData;

@interface RestInfoData : NSObject
{
    _Bool _favTag;
    _Bool _appBookingBtnEnableTag;
    _Bool _telBookingBtnEnableTag;
    _Bool _canAddLabelTag;
    int _restPicNum;
    int _totalSpecialFoodNum;
    int _totalRecomNum;
    NSString *_uuid;
    NSString *_name;
    NSString *_restPicUrl;
    NSString *_restPicUrlForTopRest;
    NSString *_avgPrice;
    NSString *_tasteNum;
    NSString *_envNum;
    NSString *_serviceNum;
    NSString *_bookingHint;
    NSMutableArray *_funcBtnList;
    NSString *_telForBooking;
    NSString *_bookingBtnName;
    NSString *_telForEdit;
    NSString *_address;
    double _longitude;
    double _latitude;
    NSMutableArray *_telList;
    NSString *_openTimeInfo;
    NSString *_menuTypeInfo;
    NSString *_trafficLine;
    NSString *_busInfo;
    NSString *_consumeType;
    NSString *_detail;
    NSString *_topRestReason;
    NSString *_parkingPicUrl;
    NSMutableArray *_promoList;
    NSMutableArray *_couponList;
    NSMutableArray *_specialFoodList;
    RestRecomPicData *_recomData;
    NSString *_cityId;
    NSString *_regionId;
    NSString *_regionName;
    NSString *_districtId;
    NSString *_districtName;
    NSString *_mainMenuId;
    NSString *_mainMenuName;
    NSString *_ydzkDetail;
    NSString *_xjqDetail;
    NSString *_cxDetail;
    NSString *_linkUrl;
    NSString *_hlHint;
    NSString *_hlUrl;
    NSMutableArray *_labelList;
    NSMutableArray *_searchMenuTypeList;
    ShareInfoData *_shareInfo;
    NSMutableArray *_soCouponAndPromoList;
}

@property(retain, nonatomic) NSMutableArray *soCouponAndPromoList; // @synthesize soCouponAndPromoList=_soCouponAndPromoList;
@property(retain, nonatomic) ShareInfoData *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) NSMutableArray *searchMenuTypeList; // @synthesize searchMenuTypeList=_searchMenuTypeList;
@property(nonatomic) _Bool canAddLabelTag; // @synthesize canAddLabelTag=_canAddLabelTag;
@property(retain, nonatomic) NSMutableArray *labelList; // @synthesize labelList=_labelList;
@property(retain, nonatomic) NSString *hlUrl; // @synthesize hlUrl=_hlUrl;
@property(retain, nonatomic) NSString *hlHint; // @synthesize hlHint=_hlHint;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *cxDetail; // @synthesize cxDetail=_cxDetail;
@property(retain, nonatomic) NSString *xjqDetail; // @synthesize xjqDetail=_xjqDetail;
@property(retain, nonatomic) NSString *ydzkDetail; // @synthesize ydzkDetail=_ydzkDetail;
@property(retain, nonatomic) NSString *mainMenuName; // @synthesize mainMenuName=_mainMenuName;
@property(retain, nonatomic) NSString *mainMenuId; // @synthesize mainMenuId=_mainMenuId;
@property(retain, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(retain, nonatomic) NSString *districtId; // @synthesize districtId=_districtId;
@property(retain, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
@property(retain, nonatomic) NSString *regionId; // @synthesize regionId=_regionId;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) RestRecomPicData *recomData; // @synthesize recomData=_recomData;
@property(nonatomic) int totalRecomNum; // @synthesize totalRecomNum=_totalRecomNum;
@property(retain, nonatomic) NSMutableArray *specialFoodList; // @synthesize specialFoodList=_specialFoodList;
@property(nonatomic) int totalSpecialFoodNum; // @synthesize totalSpecialFoodNum=_totalSpecialFoodNum;
@property(retain, nonatomic) NSMutableArray *couponList; // @synthesize couponList=_couponList;
@property(retain, nonatomic) NSMutableArray *promoList; // @synthesize promoList=_promoList;
@property(retain, nonatomic) NSString *parkingPicUrl; // @synthesize parkingPicUrl=_parkingPicUrl;
@property(retain, nonatomic) NSString *topRestReason; // @synthesize topRestReason=_topRestReason;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *consumeType; // @synthesize consumeType=_consumeType;
@property(retain, nonatomic) NSString *busInfo; // @synthesize busInfo=_busInfo;
@property(retain, nonatomic) NSString *trafficLine; // @synthesize trafficLine=_trafficLine;
@property(retain, nonatomic) NSString *menuTypeInfo; // @synthesize menuTypeInfo=_menuTypeInfo;
@property(retain, nonatomic) NSString *openTimeInfo; // @synthesize openTimeInfo=_openTimeInfo;
@property(retain, nonatomic) NSMutableArray *telList; // @synthesize telList=_telList;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *telForEdit; // @synthesize telForEdit=_telForEdit;
@property(retain, nonatomic) NSString *bookingBtnName; // @synthesize bookingBtnName=_bookingBtnName;
@property(retain, nonatomic) NSString *telForBooking; // @synthesize telForBooking=_telForBooking;
@property(retain, nonatomic) NSMutableArray *funcBtnList; // @synthesize funcBtnList=_funcBtnList;
@property(retain, nonatomic) NSString *bookingHint; // @synthesize bookingHint=_bookingHint;
@property(nonatomic) _Bool telBookingBtnEnableTag; // @synthesize telBookingBtnEnableTag=_telBookingBtnEnableTag;
@property(nonatomic) _Bool appBookingBtnEnableTag; // @synthesize appBookingBtnEnableTag=_appBookingBtnEnableTag;
@property(retain, nonatomic) NSString *serviceNum; // @synthesize serviceNum=_serviceNum;
@property(retain, nonatomic) NSString *envNum; // @synthesize envNum=_envNum;
@property(retain, nonatomic) NSString *tasteNum; // @synthesize tasteNum=_tasteNum;
@property(retain, nonatomic) NSString *avgPrice; // @synthesize avgPrice=_avgPrice;
@property(nonatomic) int restPicNum; // @synthesize restPicNum=_restPicNum;
@property(retain, nonatomic) NSString *restPicUrlForTopRest; // @synthesize restPicUrlForTopRest=_restPicUrlForTopRest;
@property(retain, nonatomic) NSString *restPicUrl; // @synthesize restPicUrl=_restPicUrl;
@property(nonatomic) _Bool favTag; // @synthesize favTag=_favTag;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

