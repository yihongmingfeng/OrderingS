//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RoomState : NSObject
{
    int hallTag;
    NSString *hallName;
    NSString *hallNameSuffix;
    int roomTag;
    NSString *roomName;
    NSString *roomNameSuffix;
    _Bool onlyShowHintTag;
    NSString *hint;
}

@property(retain, nonatomic) NSString *hint; // @synthesize hint;
@property(nonatomic) _Bool onlyShowHintTag; // @synthesize onlyShowHintTag;
@property(retain, nonatomic) NSString *roomNameSuffix; // @synthesize roomNameSuffix;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName;
@property(nonatomic) int roomTag; // @synthesize roomTag;
@property(retain, nonatomic) NSString *hallNameSuffix; // @synthesize hallNameSuffix;
@property(retain, nonatomic) NSString *hallName; // @synthesize hallName;
@property(nonatomic) int hallTag; // @synthesize hallTag;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

