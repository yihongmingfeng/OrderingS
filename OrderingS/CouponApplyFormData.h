//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CouponApplyFormData : NSObject
{
    _Bool _showSharePanelTag;
    NSMutableArray *_inputList;
    NSString *_shareHint;
}

@property(retain, nonatomic) NSString *shareHint; // @synthesize shareHint=_shareHint;
@property(nonatomic) _Bool showSharePanelTag; // @synthesize showSharePanelTag=_showSharePanelTag;
@property(retain, nonatomic) NSMutableArray *inputList; // @synthesize inputList=_inputList;
- (void)unitTest;
- (id)newDic;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

