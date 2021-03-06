//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XsNavUtil : NSObject
{
}

+ (void)toOrderRt:(id)arg1 restId:(id)arg2 peopleNum:(long long)arg3 dateId:(id)arg4 timeId:(id)arg5 tableId:(id)arg6;
+ (void)toRestRecomIndex:(id)arg1;
+ (void)toLoginViaSms:(id)arg1 fromPage:(id)arg2 tel:(id)arg3;
+ (void)toLoginViaMail:(id)arg1 fromPage:(id)arg2;
+ (void)toLoginViaCode:(id)arg1 fromPage:(id)arg2 typeTag:(int)arg3;
+ (void)toRestUploadImageEdit:(id)arg1 list:(id)arg2 idx:(long long)arg3 foodData:(id)arg4;
+ (void)toRestUploadImage:(id)arg1 restId:(id)arg2 foodData:(id)arg3 imgList:(id)arg4;
+ (void)toRestUploadImage:(id)arg1 restId:(id)arg2 imgList:(id)arg3;
+ (void)toBsOrderStatePage:(id)arg1 type:(int)arg2 orderId:(id)arg3 rePageKey:(id)arg4 forAdd:(_Bool)arg5;
+ (void)toMdbFreeOrderState:(id)arg1 orderId:(id)arg2 rePageKey:(id)arg3 forAdd:(_Bool)arg4;
+ (void)toTakeoutOnlinePayState:(id)arg1 orderId:(id)arg2 rePageKey:(id)arg3;
+ (void)toCouponOrderState:(id)arg1 orderId:(id)arg2 rePageKey:(id)arg3;
+ (void)toWapPay:(id)arg1 typeTag:(int)arg2 orderId:(id)arg3 wapUrl:(id)arg4 rePageKey:(id)arg5 mdbForAdd:(_Bool)arg6;
+ (void)toWapPayForMdb:(id)arg1 orderId:(id)arg2 wapUrl:(id)arg3 rePageKey:(id)arg4 forAdd:(_Bool)arg5;
+ (void)toWapPayForTakeout:(id)arg1 orderId:(id)arg2 wapUrl:(id)arg3 rePageKey:(id)arg4;
+ (void)toWapPayForCoupon:(id)arg1 orderId:(id)arg2 wapUrl:(id)arg3 rePageKey:(id)arg4;
+ (void)toMdbReceiptChkConfirmForm:(id)arg1 orderId:(id)arg2 rePageKey:(id)arg3;
+ (void)toMdbReceiptChkForm:(id)arg1;
+ (void)toMdbFreeOrderPay:(id)arg1 transData:(id)arg2;
+ (void)toMdbRestList:(id)arg1;
+ (void)toMdbRestDetail:(id)arg1 restId:(id)arg2;
+ (void)toMdbFreeOrderDetail:(id)arg1 orderId:(id)arg2 returnPageKey:(id)arg3;
+ (void)toMdbFreeOrderDetail:(id)arg1 orderId:(id)arg2;
+ (void)toMdbFreeOrderList:(id)arg1;
+ (void)toMdbFreeOrderForm:(id)arg1 typeTag:(int)arg2 uuid:(id)arg3;
+ (void)toMdbFreeOrderForm:(id)arg1 orderId:(id)arg2;
+ (void)toMdbFreeOrderForm:(id)arg1 restId:(id)arg2;
+ (void)toMdbSearchRestList:(id)arg1;
+ (void)toCouponApply:(id)arg1 uuid:(id)arg2 returnPageKey:(id)arg3;
+ (void)toVoiceQueryP2:(id)arg1 firstBatchDto:(id)arg2 quitToPage:(id)arg3;
+ (void)toVoiceQueryP1:(id)arg1;
+ (void)toTouchlessOrder:(id)arg1;
+ (void)toOrderViaVoice:(id)arg1;
+ (void)toShare:(id)arg1 typeTag:(long long)arg2 pgTitle:(id)arg3 toSns:(int)arg4 uuid:(id)arg5 name:(id)arg6 detail:(id)arg7 iconUrl:(id)arg8 wapUrl:(id)arg9;
+ (void)toShareOthersViaWeixin:(id)arg1 weixinType:(int)arg2 shareInfoData:(id)arg3;
+ (void)toShareOrderStateViaWeixin:(id)arg1 weixinType:(int)arg2 shareInfoData:(id)arg3;
+ (void)toShareWapViaWeixin:(id)arg1 weixinType:(int)arg2 shareInfoData:(id)arg3;
+ (void)toShareTakeoutViaWeixin:(id)arg1 weixinType:(int)arg2 takeoutInfoData:(id)arg3;
+ (void)toShareRestRecomViaWeixin:(id)arg1 weixinType:(int)arg2 restRecomInfoData:(id)arg3;
+ (void)toShareAppViaWeixin:(id)arg1 weixinType:(int)arg2;
+ (void)toShareRestViaWeixin:(id)arg1 weixinType:(int)arg2 restInfoData:(id)arg3;
+ (void)toShareOthersViaWeibo:(id)arg1 shareInfoData:(id)arg2;
+ (void)toShareOrderStateViaWeibo:(id)arg1 shareInfoData:(id)arg2;
+ (void)toShareWapViaWeibo:(id)arg1 shareInfoData:(id)arg2;
+ (void)toShareTakeoutViaWeibo:(id)arg1 takeoutInfoData:(id)arg2;
+ (void)toShareRestRecomViaWeibo:(id)arg1 restRecomInfoData:(id)arg2;
+ (void)toShareAppViaWeibo:(id)arg1;
+ (void)toShareRestViaWeibo:(id)arg1 restInfoData:(id)arg2;
+ (void)toXsPostCouponOrder:(id)arg1 transData:(id)arg2;
+ (void)toOrderState:(id)arg1 orderId:(id)arg2 forAdd:(_Bool)arg3 fromPage:(id)arg4;
+ (void)toOrderStateForEdit:(id)arg1 orderId:(id)arg2 fromPage:(id)arg3;
+ (void)toOrderStateForAdd:(id)arg1 orderId:(id)arg2 fromPage:(id)arg3;
+ (void)toRestRrList:(id)arg1 restId:(id)arg2;
+ (void)toRestLabelList:(id)arg1 restId:(id)arg2 forPostTag:(_Bool)arg3;
+ (void)toRestLabelListForEdit:(id)arg1 restId:(id)arg2;
+ (void)toRestLabelListForShow:(id)arg1 restId:(id)arg2;
+ (void)toTakeoutGiftMenuList:(id)arg1 takeoutId:(id)arg2 typeId:(id)arg3;
+ (void)toTakeoutOnlinePay:(id)arg1 orderId:(id)arg2 rePageKey:(id)arg3;
+ (void)toTakeoutOnlinePay:(id)arg1 orderId:(id)arg2;
+ (void)toTakeoutCommentOrderPost:(id)arg1 orderId:(id)arg2;
+ (void)toTakeoutMenuDetail:(id)arg1 uuid:(id)arg2;
+ (void)toTakeoutDetail:(id)arg1 takeoutId:(id)arg2 canNavToMenuListTag:(_Bool)arg3;
+ (void)toTakeoutDetail:(id)arg1 takeoutId:(id)arg2;
+ (void)toTakeoutCommentList:(id)arg1 uuid:(id)arg2 fromTag:(int)arg3;
+ (void)toTakeoutCommentList:(id)arg1 orderId:(id)arg2;
+ (void)toTakeoutCommentList:(id)arg1 takeoutId:(id)arg2;
+ (void)toTakeoutList:(id)arg1 typeId:(id)arg2;
+ (void)toTakeoutList:(id)arg1;
+ (void)toTakeoutIndex:(id)arg1;
+ (void)toUserIndexPage:(id)arg1 userId:(id)arg2;
+ (void)toKeywordsSearchListPageWithVc:(id)arg1 fromRRSelectRest:(_Bool)arg2 keywords:(id)arg3;
+ (void)toRRSelectRestVc:(id)arg1;
+ (void)toPicSlide:(id)arg1 commonPicDataList:(id)arg2 index:(long long)arg3;
+ (void)toRestRecomImageDetail:(id)arg1 list:(id)arg2 index:(long long)arg3;
+ (void)toRestRecomAdd:(id)arg1 restId:(id)arg2 restName:(id)arg3;
+ (void)toRestRecomAdd:(id)arg1;
+ (void)toRestRecomCommentList:(id)arg1 uuid:(id)arg2;
+ (void)toTakeoutRating:(id)arg1 orderId:(id)arg2;
+ (void)toTkLocationChoose:(id)arg1;
+ (void)toUserTakeoutReceiveAddressList:(id)arg1 uuid:(id)arg2;
+ (void)toTakeoutPostOrder:(id)arg1 takeoutId:(id)arg2 rePageKey:(id)arg3;
+ (void)toTakeoutMenuList:(id)arg1 takeoutId:(id)arg2;
+ (void)toReportOrderWrongPrice:(id)arg1 orderId:(id)arg2;
+ (void)toReportOtherErrorsAddRestTel:(id)arg1 restId:(id)arg2;
+ (void)toReportOtherErrorsWithVc:(id)arg1 uuid:(id)arg2 typeTag:(int)arg3 typeData:(id)arg4;
+ (void)toRestMapErrorReport:(id)arg1 restInfoData:(id)arg2 typeTag:(int)arg3 typeData:(id)arg4;
+ (void)toReportRestAddOrModifyPostForEditRest:(id)arg1 restInfoData:(id)arg2;
+ (void)toReportRestAddOrModifyPostWithVc:(id)arg1 channelId:(id)arg2 fromPageVc:(id)arg3 postTag:(id)arg4 newRestName:(id)arg5 isForRestRecom:(_Bool)arg6;
+ (void)toReportRestAddOrModifyPostWithVc:(id)arg1 channelId:(id)arg2 fromPageVc:(id)arg3 postTag:(id)arg4 newRestName:(id)arg5;
+ (void)toReportRestForRecom:(id)arg1;
+ (void)toReportRest:(id)arg1 restName:(id)arg2;
+ (void)toReportRest:(id)arg1;
+ (void)navToDishOrder:(id)arg1 withUuid:(id)arg2 fromTag:(int)arg3;
+ (void)toDishOrder:(id)arg1 dishOrderId:(id)arg2;
+ (void)toDishOrder:(id)arg1 restId:(id)arg2;
+ (void)toPostCommentReply:(id)arg1 restId:(id)arg2 restName:(id)arg3 commentId:(id)arg4;
+ (void)toCommentReplyList:(id)arg1 restId:(id)arg2 restName:(id)arg3 comment:(id)arg4;
+ (void)toPostGeneralComment:(id)arg1 fromPage:(id)arg2 restId:(id)arg3 restName:(id)arg4 orderId:(id)arg5 typeTag:(int)arg6;
+ (void)toPostBwcComment:(id)arg1 fromPage:(id)arg2 bwcId:(id)arg3 bwcName:(id)arg4 orderId:(id)arg5;
+ (void)toPostComment:(id)arg1 fromPage:(id)arg2 restId:(id)arg3 restName:(id)arg4 orderId:(id)arg5;
+ (void)toCommentList:(id)arg1 restId:(id)arg2 restName:(id)arg3 orderId:(id)arg4;
+ (void)toCommentList:(id)arg1 restInfo:(id)arg2;
+ (void)toTakeoutOrderDetail:(id)arg1 orderId:(id)arg2 rePageKey:(id)arg3;
+ (void)toTakeoutOrderDetail:(id)arg1 orderId:(id)arg2;
+ (void)toOrderDetail:(id)arg1 orderId:(id)arg2 type:(long long)arg3 fromPage:(id)arg4;
+ (void)toOrderDetail:(id)arg1 orderId:(id)arg2 fromPage:(id)arg3;
+ (void)toOrderDetailForNotify:(id)arg1;
+ (void)toOrderDetail:(id)arg1 orderId:(id)arg2;
+ (void)toOrderList:(id)arg1 forRest:(_Bool)arg2;
+ (void)toTakeoutOrderList:(id)arg1;
+ (void)toOrderList:(id)arg1;
+ (void)toPostOrder:(id)arg1 transData:(id)arg2;
+ (void)toPostOrder:(id)arg1 orderInfo:(id)arg2;
+ (void)toPostOrder:(id)arg1 restId:(id)arg2 restName:(id)arg3 reserveTime:(double)arg4 peopleNum:(long long)arg5 roomType:(long long)arg6;
+ (void)toPostOrder:(id)arg1 restId:(id)arg2 restName:(id)arg3 activityId:(id)arg4 activityName:(id)arg5;
+ (void)toPostOrder:(id)arg1 restId:(id)arg2 restName:(id)arg3;
+ (void)toInviteSmsInfoWithVc:(id)arg1 restId:(id)arg2 orderId:(id)arg3;
+ (void)toCouponOrderFormWithVc:(id)arg1 uid:(id)arg2 rePageKey:(id)arg3;
+ (void)toCashCouponList:(id)arg1;
+ (void)toUserProfileEditingWithVc:(id)arg1 typeTag:(int)arg2;
+ (void)toMyProfile:(id)arg1;
+ (void)toTopRestList:(id)arg1 typeId:(id)arg2;
+ (void)toTopRestListType:(id)arg1;
+ (void)toQuickOrder:(id)arg1;
+ (void)toRdList:(id)arg1 type:(int)arg2 subwayLineId:(id)arg3;
+ (void)toRdListSubway:(id)arg1 subwayLineId:(id)arg2;
+ (void)toRdListRest:(id)arg1;
+ (void)toRdListMenu:(id)arg1;
+ (void)toRdListDistrict:(id)arg1;
+ (void)toHotDistrictList:(id)arg1;
+ (void)toCouponDetail:(id)arg1 couponId:(id)arg2;
+ (void)navToWeiboShareWithVc:(id)arg1 uuid:(id)arg2 title:(id)arg3 detail:(id)arg4 icon:(id)arg5 restName:(id)arg6 restWap:(id)arg7 typeTag:(long long)arg8 toSns:(int)arg9;
+ (void)toXsAppFeedback:(id)arg1;
+ (void)navToProfileEditWithVc:(id)arg1;
+ (void)toAppSetting:(id)arg1;
+ (void)toRegByInvite:(id)arg1 fromPage:(id)arg2;
+ (void)navToLoginOrRegByPhoneWithVc:(id)arg1 fromPage:(id)arg2 typeTag:(int)arg3;
+ (void)toLoginWithVc:(id)arg1;
+ (void)navToKeywordsSearchList:(id)arg1 keywords:(id)arg2;
+ (void)toSelectCity:(id)arg1;
+ (void)toRestList:(id)arg1 fromTag:(int)arg2 restId:(id)arg3 distanceMeter:(id)arg4 regionId:(id)arg5 districtId:(id)arg6 mainMenuId:(id)arg7 subMenuId:(id)arg8 sortTypeTag:(id)arg9 avgTag:(id)arg10 mainTopRestTypeId:(id)arg11 subTopRestTypeId:(id)arg12 keywords:(id)arg13 subwayTag:(_Bool)arg14;
+ (void)toRestList:(id)arg1 sortTypeTag:(id)arg2 avgTag:(id)arg3;
+ (void)toRestList:(id)arg1 mainTopRestTypeId:(id)arg2 subTopRestTypeId:(id)arg3;
+ (void)toRestList:(id)arg1 restId:(id)arg2 mainMenuId:(id)arg3 subMenuId:(id)arg4;
+ (void)toRestList:(id)arg1 mainMenuId:(id)arg2 subMenuId:(id)arg3;
+ (void)toRestList:(id)arg1 subwayLineId:(id)arg2 subwayStationId:(id)arg3;
+ (void)toRestList:(id)arg1 regionId:(id)arg2 districtId:(id)arg3;
+ (void)toRestListForNearSearch:(id)arg1 distanceMeter:(id)arg2;
+ (void)toRestListForNearSearch:(id)arg1;
+ (void)toRestList:(id)arg1 keywords:(id)arg2;
+ (void)toRestList:(id)arg1;
+ (void)toRestMap:(id)arg1 restId:(id)arg2 restName:(id)arg3 restAddress:(id)arg4 lon:(id)arg5 lat:(id)arg6;
+ (void)toRestMap:(id)arg1 mdbRestInfo:(id)arg2;
+ (void)toRestMap:(id)arg1 restInfo:(id)arg2;
+ (void)backToSuperPageAndNeedChangeCity:(id)arg1 rePageKey:(id)arg2;
+ (void)toRestDiscountDetail:(id)arg1 data:(id)arg2;
+ (void)toRestAddressDetail:(id)arg1 data:(id)arg2;
+ (void)toRestImageList:(id)arg1 restId:(id)arg2 restName:(id)arg3 showFoodList:(_Bool)arg4;
+ (void)toRestDetail:(id)arg1 typeTag:(int)arg2 uuid:(id)arg3 topRestTypeId:(id)arg4 jumpTo:(id)arg5;
+ (void)toRestDetail:(id)arg1 restId:(id)arg2 jumpTo:(id)arg3;
+ (void)toRestDetailThenJumpToFood:(id)arg1 restId:(id)arg2;
+ (void)toRestDetailThenJumpToMap:(id)arg1 restId:(id)arg2;
+ (void)toRestDetail:(id)arg1 recomId:(id)arg2;
+ (void)toRestDetail:(id)arg1 restId:(id)arg2 topRestTypeId:(id)arg3;
+ (void)toRestDetail:(id)arg1 restId:(id)arg2;
+ (void)toAdWeb:(id)arg1 adUrl:(id)arg2 suggestedTitle:(id)arg3 module:(id)arg4 params:(id)arg5 showTitle:(_Bool)arg6 takeOverTitle:(_Bool)arg7 showBottomBar:(_Bool)arg8 plusClientParams:(_Bool)arg9 rePageKey:(id)arg10;
+ (void)toAdWeb:(id)arg1 adUrl:(id)arg2 showTitle:(_Bool)arg3 rePageKey:(id)arg4;
+ (void)toAdWeb:(id)arg1 adUrl:(id)arg2 showTitle:(_Bool)arg3 takeOverTitle:(_Bool)arg4 showBottomBar:(_Bool)arg5 plusClientParams:(_Bool)arg6;
+ (void)toAdWeb:(id)arg1 adUrl:(id)arg2 showTitle:(_Bool)arg3 plusClientParams:(_Bool)arg4;
+ (void)toAdWeb:(id)arg1 module:(id)arg2;
+ (void)toAdWeb:(id)arg1 module:(id)arg2 params:(id)arg3;
+ (void)toAdWeb:(id)arg1 adUrl:(id)arg2 suggestedTitle:(id)arg3;
+ (void)toAdWeb:(id)arg1 adUrl:(id)arg2;

@end

