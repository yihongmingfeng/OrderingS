//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KqPayOrderData : NSObject
{
    NSString *_orderId;
    NSString *_amt;
    NSString *_merchantName;
    NSString *_productName;
    NSString *_unitPrice;
    NSString *_total;
    NSString *_merchantOrderTime;
}

@property(retain, nonatomic) NSString *merchantOrderTime; // @synthesize merchantOrderTime=_merchantOrderTime;
@property(retain, nonatomic) NSString *total; // @synthesize total=_total;
@property(retain, nonatomic) NSString *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(retain, nonatomic) NSString *amt; // @synthesize amt=_amt;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

