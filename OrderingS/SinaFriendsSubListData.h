//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SinaFriendsSubListData : NSObject
{
    NSString *firstLetter;
    NSString *pinyin;
    NSString *name;
    NSString *picUrl;
}

@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *pinyin; // @synthesize pinyin;
@property(retain, nonatomic) NSString *firstLetter; // @synthesize firstLetter;
- (id)newDictionary;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

