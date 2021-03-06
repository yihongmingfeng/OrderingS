//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CouponOrderFormData, UITextField;

@interface CSCDCouponReceiverPanel : UIView
{
    BaseBizVc *_nrVc;
    UIView *_ctrlFrameBg;
    UITextField *_ctrlRcvrName;
    UITextField *_ctrlRcvrPhone;
    UITextField *_ctrlRcvrAddr;
    UITextField *_ctrlRcvrMemo;
    CouponOrderFormData *_dto;
}

+ (id)makeTextFieldForTheRightWithPlaceholder:(id)arg1 height:(double)arg2;
+ (id)makeLabelForTheLeftWithLabelText:(id)arg1 height:(double)arg2;
@property(retain, nonatomic) CouponOrderFormData *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) UITextField *ctrlRcvrMemo; // @synthesize ctrlRcvrMemo=_ctrlRcvrMemo;
@property(retain, nonatomic) UITextField *ctrlRcvrAddr; // @synthesize ctrlRcvrAddr=_ctrlRcvrAddr;
@property(retain, nonatomic) UITextField *ctrlRcvrPhone; // @synthesize ctrlRcvrPhone=_ctrlRcvrPhone;
@property(retain, nonatomic) UITextField *ctrlRcvrName; // @synthesize ctrlRcvrName=_ctrlRcvrName;
@property(retain, nonatomic) UIView *ctrlFrameBg; // @synthesize ctrlFrameBg=_ctrlFrameBg;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
- (void)addSeparatorLineAtHeight:(double)arg1;
- (void)hideKeyboard;
- (void)refreshPanel:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

