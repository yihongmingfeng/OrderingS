//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CouponPicData : NSObject
{
    int _picWidth;
    int _picHeight;
    NSString *_picUrl;
    NSString *_detail;
}

@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) int picHeight; // @synthesize picHeight=_picHeight;
@property(nonatomic) int picWidth; // @synthesize picWidth=_picWidth;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
