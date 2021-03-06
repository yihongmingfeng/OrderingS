//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleListVc.h"

#import "CSDropRefreshPanelDelegate.h"
#import "CSRrWaterfallPanelDelegate.h"
#import "CSTopSwitchDelegate.h"
#import "CSXsRriSelBtnDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CSDropRefreshPanel, CSRrWaterfallPanel, CSTopSwitch, CSXsRriSelBtn, NSString, ZyRrIdxTs;

@interface RestRecomIndexVc : BaseSingleListVc <UIGestureRecognizerDelegate, CSRrWaterfallPanelDelegate, CSDropRefreshPanelDelegate, CSTopSwitchDelegate, CSXsRriSelBtnDelegate>
{
    NSString *_lastChannelCityId;
    CSTopSwitch *_ctrlSwitch;
    CSRrWaterfallPanel *_ctrlWaterfallPanel;
    CSDropRefreshPanel *_ctrlDropRp;
    CSXsRriSelBtn *_ctrlDistrictSelBtn;
    ZyRrIdxTs *_mts;
}

@property(retain, nonatomic) ZyRrIdxTs *mts; // @synthesize mts=_mts;
@property(retain, nonatomic) CSXsRriSelBtn *ctrlDistrictSelBtn; // @synthesize ctrlDistrictSelBtn=_ctrlDistrictSelBtn;
@property(retain, nonatomic) CSDropRefreshPanel *ctrlDropRp; // @synthesize ctrlDropRp=_ctrlDropRp;
@property(retain, nonatomic) CSRrWaterfallPanel *ctrlWaterfallPanel; // @synthesize ctrlWaterfallPanel=_ctrlWaterfallPanel;
@property(retain, nonatomic) CSTopSwitch *ctrlSwitch; // @synthesize ctrlSwitch=_ctrlSwitch;
@property(retain, nonatomic) NSString *lastChannelCityId; // @synthesize lastChannelCityId=_lastChannelCityId;
- (void)alertHintViewOnClickTryAgainBtn;
- (void)topAddBtnClick;
- (void)reloadTable;
- (void)refreshWithForWillShow:(_Bool)arg1 needTabelToTop:(_Bool)arg2;
- (void)handleTableLeftRightSwipeGestureEvent:(id)arg1;
- (void)onXsRriSelBtnSelected;
- (void)onTopSwitchBtnClicked:(id)arg1 btnIdx:(int)arg2 selectId:(id)arg3;
- (void)onRrWaterfallPanelOneCellClick:(id)arg1;
- (void)onDropRefreshPanelShowLoading:(id)arg1;
- (void)onTableViewEndDragging;
- (void)onTableViewDidScroll;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)createCell:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (void)completeQueryParamsWithTag:(long long)arg1;
- (void)processWhenRequestErrorEnd;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2 tag:(long long)arg3;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)loadData;
- (void)loadDataForGetPageInfo;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onChannelTabFocus;
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

