//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface BMKRadarNearbyResult : NSObject
{
    long long totalNum;
    long long pageNum;
    long long currNum;
    long long pageIndex;
    NSArray *infoList;
}

@property(retain, nonatomic) NSArray *infoList; // @synthesize infoList;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex;
@property(nonatomic) long long currNum; // @synthesize currNum;
@property(nonatomic) long long pageNum; // @synthesize pageNum;
@property(nonatomic) long long totalNum; // @synthesize totalNum;
- (void).cxx_destruct;

@end

