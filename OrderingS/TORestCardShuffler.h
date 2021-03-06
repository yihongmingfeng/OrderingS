//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class BaseVc, CSPageControl, NSMutableArray, NSObject<TORestCardShufflerDelegate>, NSString, UILabel, UIScrollView;

@interface TORestCardShuffler : UIView <UIScrollViewDelegate>
{
    _Bool _isHidingTag;
    NSObject<TORestCardShufflerDelegate> *_delegate;
    BaseVc *_nrVc;
    UILabel *_ctrlTitleLabel;
    UIScrollView *_ctrlScrollView;
    CSPageControl *_ctrlPageControl;
    NSMutableArray *_arrRestCards;
}

@property(retain, nonatomic) NSMutableArray *arrRestCards; // @synthesize arrRestCards=_arrRestCards;
@property(retain, nonatomic) CSPageControl *ctrlPageControl; // @synthesize ctrlPageControl=_ctrlPageControl;
@property(retain, nonatomic) UIScrollView *ctrlScrollView; // @synthesize ctrlScrollView=_ctrlScrollView;
@property _Bool isHidingTag; // @synthesize isHidingTag=_isHidingTag;
@property(retain, nonatomic) UILabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<TORestCardShufflerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)finishHideAnimation;
- (void)handleHidePanel;
- (void)closeBtnClicked;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reset;
- (void)close;
- (void)open;
- (void)reloadListData:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

