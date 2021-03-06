//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSNumStepperDelegate.h"
#import "CSRadioBtnPanelDelegate.h"

@class BaseBizVc, CSNumStepper, NSObject<CSTmlPpPanelDelegate>, NSString, TakeoutMenuData2, UIImageView, UILabel, UIScrollView;

@interface CSTmlPpPanel : UIView <CSNumStepperDelegate, CSRadioBtnPanelDelegate>
{
    _Bool _onAnimeTag;
    NSObject<CSTmlPpPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UIImageView *_ctrlPanel;
    UILabel *_ctrlNameLabel;
    UILabel *_ctrlPriceLabel;
    UIScrollView *_ctrlSv;
    CSNumStepper *_ctrlNumStepper;
    TakeoutMenuData2 *_data;
}

@property(nonatomic) _Bool onAnimeTag; // @synthesize onAnimeTag=_onAnimeTag;
@property(retain, nonatomic) TakeoutMenuData2 *data; // @synthesize data=_data;
@property(retain, nonatomic) CSNumStepper *ctrlNumStepper; // @synthesize ctrlNumStepper=_ctrlNumStepper;
@property(retain, nonatomic) UIScrollView *ctrlSv; // @synthesize ctrlSv=_ctrlSv;
@property(retain, nonatomic) UILabel *ctrlPriceLabel; // @synthesize ctrlPriceLabel=_ctrlPriceLabel;
@property(retain, nonatomic) UILabel *ctrlNameLabel; // @synthesize ctrlNameLabel=_ctrlNameLabel;
@property(retain, nonatomic) UIImageView *ctrlPanel; // @synthesize ctrlPanel=_ctrlPanel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSTmlPpPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)updateSv:(id)arg1;
- (void)updatePrice:(double)arg1;
- (void)calPriceAndUpdateLabel:(long long)arg1;
- (void)hide;
- (void)finishCloseAnime;
- (void)playCloseAnime;
- (void)finishOpenAnime;
- (void)playOpenAnime;
- (void)okBtnClick;
- (void)closeBtnClicked;
- (void)bgClicked;
- (void)onNumStepperChange:(id)arg1 num:(long long)arg2;
- (void)onRadioBtnPanelSelected:(id)arg1 selectIndex:(int)arg2 selectId:(id)arg3 selectName:(id)arg4 selected:(_Bool)arg5;
- (void)openWithData:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

