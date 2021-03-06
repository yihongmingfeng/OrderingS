//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SpecialRestData : NSObject
{
    NSString *restId;
    NSString *restName;
    NSString *restPicUrl;
    NSString *couponId;
    NSString *couponValue;
    NSString *couponUnitPrice;
    NSString *couponDiscount;
    NSString *couponUseDescription;
    NSString *couponUseHint;
    double couponUserBeginTime;
    double couponUserEndTime;
    NSString *gefxRegion;
    NSString *gefxDescription;
}

@property(retain, nonatomic) NSString *gefxDescription; // @synthesize gefxDescription;
@property(retain, nonatomic) NSString *gefxRegion; // @synthesize gefxRegion;
@property(nonatomic) double couponUserEndTime; // @synthesize couponUserEndTime;
@property(nonatomic) double couponUserBeginTime; // @synthesize couponUserBeginTime;
@property(retain, nonatomic) NSString *couponUseHint; // @synthesize couponUseHint;
@property(retain, nonatomic) NSString *couponUseDescription; // @synthesize couponUseDescription;
@property(retain, nonatomic) NSString *couponDiscount; // @synthesize couponDiscount;
@property(retain, nonatomic) NSString *couponUnitPrice; // @synthesize couponUnitPrice;
@property(retain, nonatomic) NSString *couponValue; // @synthesize couponValue;
@property(retain, nonatomic) NSString *couponId; // @synthesize couponId;
@property(retain, nonatomic) NSString *restPicUrl; // @synthesize restPicUrl;
@property(retain, nonatomic) NSString *restName; // @synthesize restName;
@property(retain, nonatomic) NSString *restId; // @synthesize restId;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

