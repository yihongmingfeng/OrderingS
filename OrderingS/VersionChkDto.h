//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VersionChkDto : NSObject
{
    _Bool haveNewVersionTag;
    _Bool needForceUpdateTag;
    NSString *theNewVersion;
    NSString *info;
    NSString *downloadUrl;
    NSString *xfUrl;
    NSString *xfEngineName;
}

@property(retain, nonatomic) NSString *xfEngineName; // @synthesize xfEngineName;
@property(retain, nonatomic) NSString *xfUrl; // @synthesize xfUrl;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl;
@property(retain, nonatomic) NSString *info; // @synthesize info;
@property(retain, nonatomic) NSString *theNewVersion; // @synthesize theNewVersion;
@property(nonatomic) _Bool needForceUpdateTag; // @synthesize needForceUpdateTag;
@property(nonatomic) _Bool haveNewVersionTag; // @synthesize haveNewVersionTag;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

