//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KqPayOrderData, NSString;

@interface KqReqData : NSObject
{
    KqPayOrderData *_payOrder;
    NSString *_orderSign;
    NSString *_querySign;
    NSString *_mebCode;
    NSString *_merchantId;
    NSString *_partnerUserId;
    NSString *_iosUrl;
}

@property(retain, nonatomic) NSString *iosUrl; // @synthesize iosUrl=_iosUrl;
@property(retain, nonatomic) NSString *partnerUserId; // @synthesize partnerUserId=_partnerUserId;
@property(retain, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(retain, nonatomic) NSString *mebCode; // @synthesize mebCode=_mebCode;
@property(retain, nonatomic) NSString *querySign; // @synthesize querySign=_querySign;
@property(retain, nonatomic) NSString *orderSign; // @synthesize orderSign=_orderSign;
@property(retain, nonatomic) KqPayOrderData *payOrder; // @synthesize payOrder=_payOrder;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

