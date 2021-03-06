//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DishData : NSObject
{
    NSString *uuid;
    NSString *name;
    NSString *picUrl;
    NSString *bigPicUrl;
    double price;
    _Bool currentPriceTag;
    NSString *priceUnit;
    long long selectedNum;
}

@property(nonatomic) long long selectedNum; // @synthesize selectedNum;
@property(retain, nonatomic) NSString *priceUnit; // @synthesize priceUnit;
@property(nonatomic) _Bool currentPriceTag; // @synthesize currentPriceTag;
@property(nonatomic) double price; // @synthesize price;
@property(retain, nonatomic) NSString *bigPicUrl; // @synthesize bigPicUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
- (id)newOne;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

