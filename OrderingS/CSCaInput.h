//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "UITextFieldDelegate.h"

@class BaseFormVc, CouponApplyInputData, NSObject<CSCaInputDelegate>, NSString, UILabel, UITextField;

@interface CSCaInput : UIImageView <UITextFieldDelegate>
{
    NSObject<CSCaInputDelegate> *_delegate;
    BaseFormVc *_nrVc;
    UILabel *_ctrlTitleLabel;
    UITextField *_ctrlTf;
    CouponApplyInputData *_data;
}

+ (float)panelHeight;
@property(retain, nonatomic) CouponApplyInputData *data; // @synthesize data=_data;
@property(retain, nonatomic) UITextField *ctrlTf; // @synthesize ctrlTf=_ctrlTf;
@property(retain, nonatomic) UILabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property BaseFormVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSCaInputDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)newApplyInputData;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)dealloc;
- (id)initWithVc:(id)arg1 data:(id)arg2 top:(float)arg3 pos:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

