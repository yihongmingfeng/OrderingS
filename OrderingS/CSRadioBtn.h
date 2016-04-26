//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSObject<CSRadioBtnDelegate>, NSString;

@interface CSRadioBtn : UIButton
{
    int _index;
    int _selTag;
    int _style;
    NSObject<CSRadioBtnDelegate> *_delegate;
    NSString *_uuid;
    NSString *_name;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) int selTag; // @synthesize selTag=_selTag;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int index; // @synthesize index=_index;
@property NSObject<CSRadioBtnDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)changeBtnState;
- (float)calBtnWidth:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)dealloc;
- (id)initWithIndex:(int)arg1 uuid:(id)arg2 name:(id)arg3 style:(int)arg4;

@end
