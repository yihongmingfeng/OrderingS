//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, RtOrderTableSelListDTO;

@interface RtOrderSelFormData : NSObject
{
    NSMutableArray *_dateList;
    NSMutableArray *_timeList;
    RtOrderTableSelListDTO *_tableInfo;
}

@property(retain, nonatomic) RtOrderTableSelListDTO *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(retain, nonatomic) NSMutableArray *timeList; // @synthesize timeList=_timeList;
@property(retain, nonatomic) NSMutableArray *dateList; // @synthesize dateList=_dateList;
- (void).cxx_destruct;
- (void)unitTest;
- (id)initWithObj:(id)arg1;

@end
