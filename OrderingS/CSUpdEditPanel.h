//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSRadioBtnPanelDelegate.h"
#import "CSUpdInputPanelDelegate.h"

@class BaseBizVc, CSRadioBtnPanel, CSUpdInputPanel, NSObject<CSUpdEditPanelDelegate>, NSString, UIButton, UploadImageData;

@interface CSUpdEditPanel : UIView <CSRadioBtnPanelDelegate, CSUpdInputPanelDelegate>
{
    NSObject<CSUpdEditPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    CSRadioBtnPanel *_ctrlTypeBtnPanel;
    UIButton *_ctrlNameBtn;
    UIButton *_ctrlPriceBtn;
    CSUpdInputPanel *_ctrlInputPanel;
    UploadImageData *_data;
}

@property(retain, nonatomic) UploadImageData *data; // @synthesize data=_data;
@property(retain, nonatomic) CSUpdInputPanel *ctrlInputPanel; // @synthesize ctrlInputPanel=_ctrlInputPanel;
@property(retain, nonatomic) UIButton *ctrlPriceBtn; // @synthesize ctrlPriceBtn=_ctrlPriceBtn;
@property(retain, nonatomic) UIButton *ctrlNameBtn; // @synthesize ctrlNameBtn=_ctrlNameBtn;
@property(retain, nonatomic) CSRadioBtnPanel *ctrlTypeBtnPanel; // @synthesize ctrlTypeBtnPanel=_ctrlTypeBtnPanel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSUpdEditPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)refreshPanel;
- (void)priceBtnClicked;
- (void)nameBtnClicked;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)delBtnClick;
- (void)onUpdInputPanelOkWithName:(id)arg1 style:(int)arg2;
- (void)onRadioBtnPanelSelected:(id)arg1 selectIndex:(int)arg2 selectId:(id)arg3 selectName:(id)arg4 selected:(_Bool)arg5;
- (id)newBtnWithLeft:(int)arg1 width:(int)arg2;
- (id)newLabelWithTitle:(id)arg1 top:(int)arg2;
- (void)refreshWithData:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

