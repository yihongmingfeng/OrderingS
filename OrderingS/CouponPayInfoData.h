//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CouponPayInfoData : NSObject
{
    NSString *uuid;
    _Bool canUnionPayTag;
    NSString *unionPayXml;
    _Bool canAliPayTag;
    NSString *apPartner;
    NSString *apSeller;
    NSString *apTradeNO;
    NSString *apProductName;
    NSString *apProductDescription;
    NSString *apAmount;
    NSString *apNotifyUrl;
    _Bool canWapAliPayTag;
    NSString *wapAliPayUrl;
    _Bool canWapAliPayCreditCardTag;
    NSString *wapAliPayCreditCardUrl;
}

@property(retain, nonatomic) NSString *wapAliPayCreditCardUrl; // @synthesize wapAliPayCreditCardUrl;
@property(nonatomic) _Bool canWapAliPayCreditCardTag; // @synthesize canWapAliPayCreditCardTag;
@property(retain, nonatomic) NSString *wapAliPayUrl; // @synthesize wapAliPayUrl;
@property(nonatomic) _Bool canWapAliPayTag; // @synthesize canWapAliPayTag;
@property(retain, nonatomic) NSString *apNotifyUrl; // @synthesize apNotifyUrl;
@property(retain, nonatomic) NSString *apAmount; // @synthesize apAmount;
@property(retain, nonatomic) NSString *apProductDescription; // @synthesize apProductDescription;
@property(retain, nonatomic) NSString *apProductName; // @synthesize apProductName;
@property(retain, nonatomic) NSString *apTradeNO; // @synthesize apTradeNO;
@property(retain, nonatomic) NSString *apSeller; // @synthesize apSeller;
@property(retain, nonatomic) NSString *apPartner; // @synthesize apPartner;
@property(nonatomic) _Bool canAliPayTag; // @synthesize canAliPayTag;
@property(retain, nonatomic) NSString *unionPayXml; // @synthesize unionPayXml;
@property(nonatomic) _Bool canUnionPayTag; // @synthesize canUnionPayTag;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
