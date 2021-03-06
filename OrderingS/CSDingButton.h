//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSUIButton.h"

@class BaseVc, NSMutableArray, NSObject<CSDingButtonDelegate>, UIView;

@interface CSDingButton : CSUIButton
{
    _Bool _active;
    _Bool _animation;
    NSObject<CSDingButtonDelegate> *_delegate;
    BaseVc *_nrVc;
    NSMutableArray *_buttons;
    NSMutableArray *_dots;
    UIView *_ctrlBackGround;
}

@property(nonatomic) _Bool animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIView *ctrlBackGround; // @synthesize ctrlBackGround=_ctrlBackGround;
@property(retain, nonatomic) NSMutableArray *dots; // @synthesize dots=_dots;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSDingButtonDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)reloadBtnFuntions;
- (void)handleTap:(id)arg1;
- (void)animationLayoutButtons;
- (void)animationCloseWithActionType:(long long)arg1;
- (void)animationOpen;
- (id)newDot:(long long)arg1;
- (void)closeDots;
- (void)showDots;
- (void)btnClick_function:(id)arg1;
- (void)btnClick_ding;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

