//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<CSErrorHintDelegate>, NSTimer;

@interface CSErrorHint : UIView
{
    NSObject<CSErrorHintDelegate> *delegate;
    UIView *ctrlPanel;
    NSTimer *ctrlTimer;
    _Bool canTryAgainTag;
    _Bool canAutoCloseTag;
    _Bool canTapMaskCloseTag;
    _Bool isHidingTag;
}

@property(nonatomic) _Bool isHidingTag; // @synthesize isHidingTag;
@property(nonatomic) _Bool canTapMaskCloseTag; // @synthesize canTapMaskCloseTag;
@property(nonatomic) _Bool canAutoCloseTag; // @synthesize canAutoCloseTag;
@property(nonatomic) _Bool canTryAgainTag; // @synthesize canTryAgainTag;
@property(retain, nonatomic) NSTimer *ctrlTimer; // @synthesize ctrlTimer;
@property(retain, nonatomic) UIView *ctrlPanel; // @synthesize ctrlPanel;
@property NSObject<CSErrorHintDelegate> *delegate; // @synthesize delegate;
- (void)handleHintPanelTap:(id)arg1;
- (void)handleMaskPanelTap:(id)arg1;
- (void)hidePanel:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)hidePanelFromWhere:(int)arg1;
- (void)handleWatchTimer:(id)arg1;
- (void)hide;
- (void)showWithHint:(id)arg1 try:(_Bool)arg2 autoClose:(_Bool)arg3 canTapMskClose:(_Bool)arg4;
- (void)showWithHint:(id)arg1 try:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
