//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MdbFreeRecordData : NSObject
{
    NSString *_name;
    NSString *_freeMoney;
    NSString *_freeTime;
}

@property(retain, nonatomic) NSString *freeTime; // @synthesize freeTime=_freeTime;
@property(retain, nonatomic) NSString *freeMoney; // @synthesize freeMoney=_freeMoney;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
