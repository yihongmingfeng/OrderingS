//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CSOdInfoPanel, NSObject<CSOdTopPanelDelegate>, UIImageView;

@interface CSOdTopPanel : UIView
{
    _Bool _expTag;
    NSObject<CSOdTopPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    CSOdInfoPanel *_ctrlInfoPanel;
    UIImageView *_ctrlArrow;
}

@property(nonatomic) _Bool expTag; // @synthesize expTag=_expTag;
@property(retain, nonatomic) UIImageView *ctrlArrow; // @synthesize ctrlArrow=_ctrlArrow;
@property(retain, nonatomic) CSOdInfoPanel *ctrlInfoPanel; // @synthesize ctrlInfoPanel=_ctrlInfoPanel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSOdTopPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)changeArrowState;
- (void)btnClicked;
- (void)refreshForMdb:(id)arg1 expand:(_Bool)arg2;
- (void)refresh:(id)arg1 expand:(_Bool)arg2;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

