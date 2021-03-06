//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

#import "CSPickTbPanelDelegate.h"

@class CSPickTbPanel, NSString, RfTypeListPackDTO;

@interface XsRegionDistrictListVc : BaseDetailVc <CSPickTbPanelDelegate>
{
    int _typeTag;
    CSPickTbPanel *_ctrlTbPanel;
    RfTypeListPackDTO *_dto;
    NSString *_subwayLineId;
}

@property(retain, nonatomic) NSString *subwayLineId; // @synthesize subwayLineId=_subwayLineId;
@property int typeTag; // @synthesize typeTag=_typeTag;
@property(retain, nonatomic) RfTypeListPackDTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) CSPickTbPanel *ctrlTbPanel; // @synthesize ctrlTbPanel=_ctrlTbPanel;
- (id)makePageName;
- (id)makeCacheKey;
- (void)toRestListWithRegionId:(id)arg1 districtId:(id)arg2 districtName:(id)arg3;
- (void)pickTbPanel:(id)arg1 leftSelectRow:(long long)arg2 leftSelectId:(id)arg3 leftSelectName:(id)arg4 rightSelectRow:(long long)arg5 rightSelectId:(id)arg6 rightSelectName:(id)arg7;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completeLoadData;
- (void)onGetData:(id)arg1 fromCache:(_Bool)arg2;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
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

