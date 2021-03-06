//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDto.h"

@class NSMutableArray, NSString;

@interface ResFoodListDto : BaseDto
{
    NSMutableArray *list;
    NSMutableArray *typeList;
    NSString *restId;
    NSString *restName;
    double overallNum;
    double tasteNum;
    double envNum;
    double serviceNum;
}

@property(nonatomic) double serviceNum; // @synthesize serviceNum;
@property(nonatomic) double envNum; // @synthesize envNum;
@property(nonatomic) double tasteNum; // @synthesize tasteNum;
@property(nonatomic) double overallNum; // @synthesize overallNum;
@property(retain, nonatomic) NSString *restName; // @synthesize restName;
@property(retain, nonatomic) NSString *restId; // @synthesize restId;
@property(retain, nonatomic) NSMutableArray *typeList; // @synthesize typeList;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list;
- (void)appendData:(id)arg1;
- (void)appendDataWithStr:(id)arg1;
- (void)cleanExpTag;
- (void)changeExpTag:(int)arg1;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

