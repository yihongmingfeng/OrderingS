//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TkTopPanelTransData : NSObject
{
    _Bool _isCurrentUserGpsTag;
    int _gpsTypeTag;
    double _lon;
    double _lat;
    NSString *_address;
}

@property(nonatomic) _Bool isCurrentUserGpsTag; // @synthesize isCurrentUserGpsTag=_isCurrentUserGpsTag;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lon; // @synthesize lon=_lon;
@property int gpsTypeTag; // @synthesize gpsTypeTag=_gpsTypeTag;
- (void)dealloc;
- (id)init;

@end

