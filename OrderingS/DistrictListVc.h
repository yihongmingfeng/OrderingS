//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSectionListVc.h"

@class CacheFields, CommonTypeListDto, NSString;

@interface DistrictListVc : BaseSectionListVc
{
    CommonTypeListDto *dto;
    NSString *channelId;
    NSString *regionId;
    NSString *regionName;
    _Bool forSelectTag;
    NSString *fromPage;
    NSString *cityId;
    NSString *cacheKey;
    CacheFields *listCacheFields;
    NSString *timestamp;
}

@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) CacheFields *listCacheFields; // @synthesize listCacheFields;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId;
@property(retain, nonatomic) NSString *fromPage; // @synthesize fromPage;
@property(nonatomic) _Bool forSelectTag; // @synthesize forSelectTag;
@property(retain, nonatomic) NSString *regionName; // @synthesize regionName;
@property(retain, nonatomic) NSString *regionId; // @synthesize regionId;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId;
@property(retain, nonatomic) CommonTypeListDto *dto; // @synthesize dto;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1;
- (void)loadData;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onShow;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCleanData;
- (void)onCreate;

@end

