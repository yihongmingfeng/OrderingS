//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface BMKPoiResult : NSObject
{
    int _totalPoiNum;
    int _currPoiNum;
    int _pageNum;
    int _pageIndex;
    NSArray *_poiInfoList;
    NSArray *_cityList;
}

@property(retain, nonatomic) NSArray *cityList; // @synthesize cityList=_cityList;
@property(retain, nonatomic) NSArray *poiInfoList; // @synthesize poiInfoList=_poiInfoList;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) int pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) int currPoiNum; // @synthesize currPoiNum=_currPoiNum;
@property(nonatomic) int totalPoiNum; // @synthesize totalPoiNum=_totalPoiNum;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

