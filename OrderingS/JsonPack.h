//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface JsonPack : NSObject
{
    int code;
    NSString *message;
    NSMutableDictionary *value;
}

@property(retain, nonatomic) NSMutableDictionary *value; // @synthesize value;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(nonatomic) int code; // @synthesize code;
- (void)dealloc;
- (id)initWithRequestStr:(id)arg1;

@end

