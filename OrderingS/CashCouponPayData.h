//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CashCouponPayData : NSObject
{
    NSString *title;
    double couponValue;
    int maxBuyNum;
    double unitPrice;
    _Bool canShowUserPointNumTag;
    int userPointNum;
    double onePointPrice;
    double userRemainMoney;
    _Bool canShowBookTelBtnTag;
    NSString *bookTel;
    NSMutableArray *cardList;
    NSMutableArray *payTypeList;
}

@property(retain, nonatomic) NSMutableArray *payTypeList; // @synthesize payTypeList;
@property(retain, nonatomic) NSMutableArray *cardList; // @synthesize cardList;
@property(retain, nonatomic) NSString *bookTel; // @synthesize bookTel;
@property(nonatomic) _Bool canShowBookTelBtnTag; // @synthesize canShowBookTelBtnTag;
@property(nonatomic) double userRemainMoney; // @synthesize userRemainMoney;
@property(nonatomic) double onePointPrice; // @synthesize onePointPrice;
@property(nonatomic) int userPointNum; // @synthesize userPointNum;
@property(nonatomic) _Bool canShowUserPointNumTag; // @synthesize canShowUserPointNumTag;
@property(nonatomic) double unitPrice; // @synthesize unitPrice;
@property(nonatomic) int maxBuyNum; // @synthesize maxBuyNum;
@property(nonatomic) double couponValue; // @synthesize couponValue;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
