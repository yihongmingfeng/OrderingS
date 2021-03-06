//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSPickBtnDelegate.h"

@class BaseLayoutSupportVc, CSPickBtn, NSObject<CSTkQueryPanelDelegate>, NSString, TkListParams, UIButton;

@interface CSTkQueryPanel : UIView <CSPickBtnDelegate>
{
    NSObject<CSTkQueryPanelDelegate> *_delegate;
    BaseLayoutSupportVc *_nrVc;
    TkListParams *_nrPm;
    CSPickBtn *_ctrlLeftBtn;
    CSPickBtn *_ctrlMiddleBtn;
    UIButton *_ctrlRightBtn;
}

@property(retain, nonatomic) UIButton *ctrlRightBtn; // @synthesize ctrlRightBtn=_ctrlRightBtn;
@property(retain, nonatomic) CSPickBtn *ctrlMiddleBtn; // @synthesize ctrlMiddleBtn=_ctrlMiddleBtn;
@property(retain, nonatomic) CSPickBtn *ctrlLeftBtn; // @synthesize ctrlLeftBtn=_ctrlLeftBtn;
@property TkListParams *nrPm; // @synthesize nrPm=_nrPm;
@property BaseLayoutSupportVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSTkQueryPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)invokeRefreshDelegate;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)searchBtnClicked;
- (void)pickBtn:(id)arg1 leftSelectRow:(long long)arg2 leftSelectId:(id)arg3 leftSelectName:(id)arg4 rightSelectRow:(long long)arg5 rightSelectId:(id)arg6 rightSelectName:(id)arg7;
- (void)transToBtnWithTag:(int)arg1;
- (void)pickBtnBeforeShowPicker:(id)arg1;
- (void)refreshWithLeftBtnTitle:(id)arg1 rightBtnTitle:(id)arg2;
- (void)refresh;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

