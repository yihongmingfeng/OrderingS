//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFormVc.h"

#import "CSMdbRcfBtnPanelDelegate.h"
#import "CSMdbRcfValidCodePanelDelegate.h"

@class CSMdbRcfBtnPanel, CSMdbRcfInputPanel, CSMdbRcfValidCodePanel, MdbReceiptChkFormData, NSString;

@interface MdbReceiptChkFormVc : BaseFormVc <CSMdbRcfValidCodePanelDelegate, CSMdbRcfBtnPanelDelegate>
{
    CSMdbRcfInputPanel *_ctrlInputPanel;
    CSMdbRcfValidCodePanel *_ctrlValidCodePanel;
    CSMdbRcfBtnPanel *_ctrlBtnPanel;
    MdbReceiptChkFormData *_dto;
}

@property(retain, nonatomic) MdbReceiptChkFormData *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) CSMdbRcfBtnPanel *ctrlBtnPanel; // @synthesize ctrlBtnPanel=_ctrlBtnPanel;
@property(retain, nonatomic) CSMdbRcfValidCodePanel *ctrlValidCodePanel; // @synthesize ctrlValidCodePanel=_ctrlValidCodePanel;
@property(retain, nonatomic) CSMdbRcfInputPanel *ctrlInputPanel; // @synthesize ctrlInputPanel=_ctrlInputPanel;
- (void)hideKeyboard;
- (void)onScrollViewEndDragging;
- (void)onMdbRcfBtnPanelBtnClicked;
- (void)onMdbRcfValidCodePanelBtnClicked;
- (void)completeQueryParamsWithTag:(long long)arg1;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)layoutPanel;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)postDataForOrder;
- (void)loadDataForValidCode;
- (void)loadData;
- (void)topViewRightBtnClicked:(id)arg1;
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

