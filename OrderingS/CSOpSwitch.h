//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseVc, NSObject<CSOpSwitchDelegate>, UIButton;

@interface CSOpSwitch : UIView
{
    _Bool _soOnTag;
    _Bool _forSexStyleTag;
    NSObject<CSOpSwitchDelegate> *_delegate;
    BaseVc *_nrVc;
    UIButton *_ctrlBtn;
}

@property(nonatomic) _Bool forSexStyleTag; // @synthesize forSexStyleTag=_forSexStyleTag;
@property(nonatomic) _Bool soOnTag; // @synthesize soOnTag=_soOnTag;
@property(retain, nonatomic) UIButton *ctrlBtn; // @synthesize ctrlBtn=_ctrlBtn;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSOpSwitchDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)changeBtnState;
- (void)btnClicked;
- (void)setOn:(_Bool)arg1;
- (_Bool)on;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1 left:(int)arg2 top:(int)arg3 forSexStyle:(_Bool)arg4;

@end

