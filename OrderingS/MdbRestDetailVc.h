//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFormVc.h"

#import "CSMdbRdDingPanelDelegate.h"
#import "CSRdTopRightPanelDelegate.h"

@class CSMarqueeLabel, CSMdbRdDetailPanel, CSMdbRdDingPanel, CSMdbRdFoodPanel, CSMdbRdHintPanel, CSMdbRdInfoPanel, CSMdbRdNoticePanel, CSPicSlidePanel, CSRdTopRightPanel, MdbRestInfoData, NSString;

@interface MdbRestDetailVc : BaseFormVc <CSRdTopRightPanelDelegate, CSMdbRdDingPanelDelegate>
{
    CSMarqueeLabel *_ctrlMarqueeLabel;
    CSRdTopRightPanel *_ctrlTopRightPanel;
    CSPicSlidePanel *_ctrlPicPanel;
    CSMdbRdDingPanel *_ctrlDingPanel;
    CSMdbRdNoticePanel *_ctrlNoticePanel;
    CSMdbRdHintPanel *_ctrlHintPanel;
    CSMdbRdFoodPanel *_ctrlFoodPanel;
    CSMdbRdInfoPanel *_ctrlInfoPanel;
    CSMdbRdDetailPanel *_ctrlDetailPanel;
    MdbRestInfoData *_dto;
    NSString *_restId;
}

@property(retain, nonatomic) NSString *restId; // @synthesize restId=_restId;
@property(retain, nonatomic) MdbRestInfoData *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) CSMdbRdDetailPanel *ctrlDetailPanel; // @synthesize ctrlDetailPanel=_ctrlDetailPanel;
@property(retain, nonatomic) CSMdbRdInfoPanel *ctrlInfoPanel; // @synthesize ctrlInfoPanel=_ctrlInfoPanel;
@property(retain, nonatomic) CSMdbRdFoodPanel *ctrlFoodPanel; // @synthesize ctrlFoodPanel=_ctrlFoodPanel;
@property(retain, nonatomic) CSMdbRdHintPanel *ctrlHintPanel; // @synthesize ctrlHintPanel=_ctrlHintPanel;
@property(retain, nonatomic) CSMdbRdNoticePanel *ctrlNoticePanel; // @synthesize ctrlNoticePanel=_ctrlNoticePanel;
@property(retain, nonatomic) CSMdbRdDingPanel *ctrlDingPanel; // @synthesize ctrlDingPanel=_ctrlDingPanel;
@property(retain, nonatomic) CSPicSlidePanel *ctrlPicPanel; // @synthesize ctrlPicPanel=_ctrlPicPanel;
@property(retain, nonatomic) CSRdTopRightPanel *ctrlTopRightPanel; // @synthesize ctrlTopRightPanel=_ctrlTopRightPanel;
@property(retain, nonatomic) CSMarqueeLabel *ctrlMarqueeLabel; // @synthesize ctrlMarqueeLabel=_ctrlMarqueeLabel;
- (void)mdbBtnClicked;
- (void)reloadPanels;
- (void)onRdTopRightPanelBtnClicked:(int)arg1;
- (void)onScrollViewEndDragging;
- (void)completeQueryParamsWithTag:(long long)arg1;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onHttpRequestSuccess:(id)arg1 msg:(id)arg2 tag:(long long)arg3;
- (void)postDataForFav;
- (void)loadData;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onShow;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCleanData;
- (void)onCreate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

