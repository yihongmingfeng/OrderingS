//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CouponOrderFormData : NSObject
{
    _Bool _showTelBtnTag;
    _Bool _showOrderBtnTag;
    _Bool _showReceiverPanel;
    int _maxBuyNum;
    int _userPointNum;
    NSString *_title;
    double _unitPrice;
    NSString *_defaultUserTel;
    double _userRemainMoney;
    double _onePointPrice;
    NSString *_bookTel;
    NSString *_defaultReceiverName;
    NSString *_defaultReceiverTel;
    NSString *_defaultReceiverAddress;
    double _deliverPrice;
    NSMutableArray *_cardList;
    NSMutableArray *_payTypeList;
}

@property(retain, nonatomic) NSMutableArray *payTypeList; // @synthesize payTypeList=_payTypeList;
@property(retain, nonatomic) NSMutableArray *cardList; // @synthesize cardList=_cardList;
@property(nonatomic) double deliverPrice; // @synthesize deliverPrice=_deliverPrice;
@property(retain, nonatomic) NSString *defaultReceiverAddress; // @synthesize defaultReceiverAddress=_defaultReceiverAddress;
@property(retain, nonatomic) NSString *defaultReceiverTel; // @synthesize defaultReceiverTel=_defaultReceiverTel;
@property(retain, nonatomic) NSString *defaultReceiverName; // @synthesize defaultReceiverName=_defaultReceiverName;
@property(nonatomic) _Bool showReceiverPanel; // @synthesize showReceiverPanel=_showReceiverPanel;
@property(nonatomic) _Bool showOrderBtnTag; // @synthesize showOrderBtnTag=_showOrderBtnTag;
@property(retain, nonatomic) NSString *bookTel; // @synthesize bookTel=_bookTel;
@property(nonatomic) _Bool showTelBtnTag; // @synthesize showTelBtnTag=_showTelBtnTag;
@property(nonatomic) double onePointPrice; // @synthesize onePointPrice=_onePointPrice;
@property(nonatomic) int userPointNum; // @synthesize userPointNum=_userPointNum;
@property(nonatomic) double userRemainMoney; // @synthesize userRemainMoney=_userRemainMoney;
@property(retain, nonatomic) NSString *defaultUserTel; // @synthesize defaultUserTel=_defaultUserTel;
@property(nonatomic) int maxBuyNum; // @synthesize maxBuyNum=_maxBuyNum;
@property(nonatomic) double unitPrice; // @synthesize unitPrice=_unitPrice;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

