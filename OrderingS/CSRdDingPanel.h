//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseVc, CSHtmLabel, NSObject<CSRdDingPanelDelegate>, PageResInfoDto, UIButton, UIImageView;

@interface CSRdDingPanel : UIView
{
    NSObject<CSRdDingPanelDelegate> *_delegate;
    BaseVc *_nrVc;
    UIButton *_ctrlLeftBtn;
    UIButton *_ctrlRightBtn;
    UIImageView *_ctrlIcon;
    CSHtmLabel *_ctrlHint;
    PageResInfoDto *_dto;
}

@property(retain, nonatomic) PageResInfoDto *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) CSHtmLabel *ctrlHint; // @synthesize ctrlHint=_ctrlHint;
@property(retain, nonatomic) UIImageView *ctrlIcon; // @synthesize ctrlIcon=_ctrlIcon;
@property(retain, nonatomic) UIButton *ctrlRightBtn; // @synthesize ctrlRightBtn=_ctrlRightBtn;
@property(retain, nonatomic) UIButton *ctrlLeftBtn; // @synthesize ctrlLeftBtn=_ctrlLeftBtn;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSRdDingPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)changeBtnWithEnable:(_Bool)arg1 left:(_Bool)arg2;
- (void)rightBtnClicked;
- (void)leftBtnClicked;
- (void)refreshPanel:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1 top:(int)arg2;

@end
