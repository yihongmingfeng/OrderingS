//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface HtmlLabelDataPack : NSObject
{
    NSMutableArray *_list;
    struct CGRect _rect;
}

@property struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
- (void)calStrIndex;
- (id)newFullText;
- (void)addWithText:(id)arg1 color:(id)arg2;
- (void)add:(id)arg1;
- (void)dealloc;
- (id)init;

@end
