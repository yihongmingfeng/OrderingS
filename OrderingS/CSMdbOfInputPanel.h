//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "UITextFieldDelegate.h"

@class BaseBizVc, CSHtmLabel, MdbFreeOrderFormData, NSObject<CSMdbOfInputPanelDelegate>, NSString, UIButton, UILabel, UITextField;

@interface CSMdbOfInputPanel : UIImageView <UITextFieldDelegate>
{
    _Bool _chkBtnOnTag;
    NSObject<CSMdbOfInputPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UILabel *_ctrlTitleLabel;
    UITextField *_ctrlTfMoney;
    UITextField *_ctrlTfTel;
    CSHtmLabel *_ctrlRemainMoneyLabel;
    UILabel *_ctrlActualTitleLabel;
    UILabel *_ctrlActualMoneyLabel;
    UIButton *_ctrlRemainMoneyCheckBtn;
    MdbFreeOrderFormData *_data;
}

@property(retain, nonatomic) MdbFreeOrderFormData *data; // @synthesize data=_data;
@property(nonatomic) _Bool chkBtnOnTag; // @synthesize chkBtnOnTag=_chkBtnOnTag;
@property(retain, nonatomic) UIButton *ctrlRemainMoneyCheckBtn; // @synthesize ctrlRemainMoneyCheckBtn=_ctrlRemainMoneyCheckBtn;
@property(retain, nonatomic) UILabel *ctrlActualMoneyLabel; // @synthesize ctrlActualMoneyLabel=_ctrlActualMoneyLabel;
@property(retain, nonatomic) UILabel *ctrlActualTitleLabel; // @synthesize ctrlActualTitleLabel=_ctrlActualTitleLabel;
@property(retain, nonatomic) CSHtmLabel *ctrlRemainMoneyLabel; // @synthesize ctrlRemainMoneyLabel=_ctrlRemainMoneyLabel;
@property(retain, nonatomic) UITextField *ctrlTfTel; // @synthesize ctrlTfTel=_ctrlTfTel;
@property(retain, nonatomic) UITextField *ctrlTfMoney; // @synthesize ctrlTfMoney=_ctrlTfMoney;
@property(retain, nonatomic) UILabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSMdbOfInputPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)reCalPayMoney;
- (id)newTfWithTop:(float)arg1;
- (void)changeChkBtnState;
- (void)chkBtnClicked;
- (_Bool)chkIsMoneyChar:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)useUserRemainMoneyTag;
- (id)userTel;
- (id)payMoneyStr;
- (void)hideKeyboard;
- (void)refresh:(id)arg1 typeTag:(_Bool)arg2;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
