//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseVc, NSObject<CSRfQhbDelegate>, UIImageView, UILabel;

@interface CSRfQhb : UIView
{
    _Bool _forListTag;
    NSObject<CSRfQhbDelegate> *_delegate;
    BaseVc *_nrVc;
    UIImageView *_ctrlBg;
    UILabel *_ctrlHintLabel;
}

@property(nonatomic) _Bool forListTag; // @synthesize forListTag=_forListTag;
@property(retain, nonatomic) UILabel *ctrlHintLabel; // @synthesize ctrlHintLabel=_ctrlHintLabel;
@property(retain, nonatomic) UIImageView *ctrlBg; // @synthesize ctrlBg=_ctrlBg;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSRfQhbDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)changeTitleWithIconTag:(int)arg1 iconTitle:(id)arg2;
- (void)changeBgStateWithIconTag:(int)arg1;
- (void)refreshWithIconTag:(int)arg1 iconTitle:(id)arg2;
- (void)dealloc;
- (id)initWithPos:(struct CGPoint)arg1 forList:(_Bool)arg2;

@end
