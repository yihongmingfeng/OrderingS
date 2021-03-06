//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleListVc.h"

#import "TOChatServiceRestDataRefreshWithFirstBatchUIAugmentedDelegate.h"

@class NSString, RestListDtoForVoice, TORestFilteringsView, UIView, VoiceBtnPanel, VoiceMsgPanel;

@interface VoiceQueryP2Vc : BaseSingleListVc <TOChatServiceRestDataRefreshWithFirstBatchUIAugmentedDelegate>
{
    _Bool _allowNextShake;
    _Bool _hasDoneIntroTag;
    TORestFilteringsView *_ctrlCriteriaView;
    UIView *_ctrlVoiceMsgBg;
    UIView *_ctrlVoiceUiContainer;
    VoiceMsgPanel *_ctrlVoiceMsg;
    VoiceBtnPanel *_ctrlVoiceBtn;
    RestListDtoForVoice *_dto;
    NSString *_quitToPage;
}

@property(nonatomic) _Bool hasDoneIntroTag; // @synthesize hasDoneIntroTag=_hasDoneIntroTag;
@property(nonatomic) _Bool allowNextShake; // @synthesize allowNextShake=_allowNextShake;
@property(retain, nonatomic) NSString *quitToPage; // @synthesize quitToPage=_quitToPage;
@property(retain, nonatomic) RestListDtoForVoice *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) VoiceBtnPanel *ctrlVoiceBtn; // @synthesize ctrlVoiceBtn=_ctrlVoiceBtn;
@property(retain, nonatomic) VoiceMsgPanel *ctrlVoiceMsg; // @synthesize ctrlVoiceMsg=_ctrlVoiceMsg;
@property(retain, nonatomic) UIView *ctrlVoiceUiContainer; // @synthesize ctrlVoiceUiContainer=_ctrlVoiceUiContainer;
@property(retain, nonatomic) UIView *ctrlVoiceMsgBg; // @synthesize ctrlVoiceMsgBg=_ctrlVoiceMsgBg;
@property(retain, nonatomic) TORestFilteringsView *ctrlCriteriaView; // @synthesize ctrlCriteriaView=_ctrlCriteriaView;
- (void)toggleAllowNextShake;
- (void)didPlayShakingSound;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (void)autoCloseVoicePanel:(id)arg1;
- (void)hideVoicePanelDidStop:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)closeVoiceMsgWithAnimation:(_Bool)arg1;
- (void)closeVoiceMsgBtnClicked;
- (void)showVoicePanelDidStop:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)showVoicePanel;
- (void)onTOChatServiceUIforRestListReloadWithFirstBatch:(id)arg1;
- (void)fixLayout;
- (void)configViews:(id)arg1;
- (void)addBtnClicked;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)createCell:(id)arg1;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
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

