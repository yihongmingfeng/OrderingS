//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ProductListData : NSObject
{
    NSString *_uuid;
    NSString *_name;
    NSString *_picUrl;
    NSString *_detail;
    NSString *_hint;
    NSString *_hotNum;
}

@property(retain, nonatomic) NSString *hotNum; // @synthesize hotNum=_hotNum;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

