//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDto.h"

@class NSMutableArray;

@interface CommonTypeListPackDto : BaseDto
{
    NSMutableArray *list;
    NSMutableArray *rawList;
}

@property(retain, nonatomic) NSMutableArray *rawList; // @synthesize rawList;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list;
- (void)unitTest;
- (id)newDic;
- (void)transToList:(id)arg1;
- (void)replaceListByJsonStr:(id)arg1;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

