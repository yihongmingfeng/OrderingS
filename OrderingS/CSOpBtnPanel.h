//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CSOpActivityPanel, CSUIButton, NSObject<CSOpBtnPanelDelegate>;

@interface CSOpBtnPanel : UIView
{
    NSObject<CSOpBtnPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    CSOpActivityPanel *_ctrlActivityPanel;
    CSUIButton *_ctrlBtn;
}

@property(retain, nonatomic) CSUIButton *ctrlBtn; // @synthesize ctrlBtn=_ctrlBtn;
@property(retain, nonatomic) CSOpActivityPanel *ctrlActivityPanel; // @synthesize ctrlActivityPanel=_ctrlActivityPanel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSOpBtnPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClicked;
- (void)refresh:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

