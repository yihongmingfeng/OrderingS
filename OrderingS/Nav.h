//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface Nav : NSObject
{
    NSMutableDictionary *vcDic;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableDictionary *vcDic; // @synthesize vcDic;
- (id)newCacheKey:(id)arg1 sumNum:(int)arg2;
- (id)subDicWithNavKey:(id)arg1;
- (int)sumPageNum:(_Bool)arg1 key:(id)arg2 nc:(id)arg3;
- (void)saveToDic:(id)arg1 class:(Class)arg2 key:(id)arg3 sumNum:(int)arg4 navKey:(id)arg5;
- (id)read:(id)arg1 sumNum:(int)arg2 navKey:(id)arg3;
- (void)removeAllCachePage:(id)arg1;
- (id)readForNavBack:(id)arg1 nc:(id)arg2;
- (id)readForNavTo:(id)arg1 nc:(id)arg2;
- (id)readForRootNavTo:(id)arg1 navKey:(id)arg2;
- (id)newNav:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)configPage:(id)arg1 sumNum:(int)arg2 navKey:(id)arg3;

@end
