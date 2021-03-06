//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "UITextFieldDelegate.h"

@class BaseBizVc, MdbReceiptChkFormData, NSObject<CSMdbRcfInputPanelDelegate>, NSString, UILabel, UITextField, UIView;

@interface CSMdbRcfInputPanel : UIImageView <UITextFieldDelegate>
{
    NSObject<CSMdbRcfInputPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UITextField *_ctrlTfAuth;
    UITextField *_ctrlTfCard;
    UITextField *_ctrlTfTel;
    UILabel *_ctrlHelpLabel;
    UIView *_ctrlHelpLabelLine;
    MdbReceiptChkFormData *_data;
}

@property(retain, nonatomic) MdbReceiptChkFormData *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *ctrlHelpLabelLine; // @synthesize ctrlHelpLabelLine=_ctrlHelpLabelLine;
@property(retain, nonatomic) UILabel *ctrlHelpLabel; // @synthesize ctrlHelpLabel=_ctrlHelpLabel;
@property(retain, nonatomic) UITextField *ctrlTfTel; // @synthesize ctrlTfTel=_ctrlTfTel;
@property(retain, nonatomic) UITextField *ctrlTfCard; // @synthesize ctrlTfCard=_ctrlTfCard;
@property(retain, nonatomic) UITextField *ctrlTfAuth; // @synthesize ctrlTfAuth=_ctrlTfAuth;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSMdbRcfInputPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClicked:(id)arg1;
- (id)newTfWithTop:(float)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)userTelStr;
- (id)cardNumStr;
- (id)authNumStr;
- (void)hideKeyboard;
- (void)refresh:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

