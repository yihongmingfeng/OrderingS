//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UserTkRaData : NSObject
{
    NSString *_uuid;
    NSString *_name;
    NSString *_address;
    NSString *_tel;
}

@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

