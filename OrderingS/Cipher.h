//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Cipher : NSObject
{
    NSString *cipherKey;
}

+ (id)md5:(id)arg1;
@property(retain) NSString *cipherKey; // @synthesize cipherKey;
- (id)transform:(unsigned int)arg1 data:(id)arg2;
- (id)decrypt:(id)arg1;
- (id)encrypt:(id)arg1;
- (id)initWithKey:(id)arg1;

@end
