//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface KsCacheUtil : NSObject
{
    NSMutableArray *_list;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
- (void)clear;
- (void)store:(id)arg1;
- (id)newCacheList;
- (void)dealloc;
- (id)init;

@end
