//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TempletData : NSObject
{
    _Bool _selTag;
    int _num;
    NSString *_str;
    double _price;
}

@property(nonatomic) _Bool selTag; // @synthesize selTag=_selTag;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) int num; // @synthesize num=_num;
@property(retain, nonatomic) NSString *str; // @synthesize str=_str;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
