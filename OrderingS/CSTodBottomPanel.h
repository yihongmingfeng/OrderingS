//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CSUIButton, NSObject<CSTodBottomPanelDelegate>;

@interface CSTodBottomPanel : UIView
{
    NSObject<CSTodBottomPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    CSUIButton *_ctrlCancelBtn;
    CSUIButton *_ctrlPayBtn;
}

@property(retain, nonatomic) CSUIButton *ctrlPayBtn; // @synthesize ctrlPayBtn=_ctrlPayBtn;
@property(retain, nonatomic) CSUIButton *ctrlCancelBtn; // @synthesize ctrlCancelBtn=_ctrlCancelBtn;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSTodBottomPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)payBtnClick;
- (void)cancelBtnClick;
- (void)refreshPanel:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1 height:(float)arg2;

@end

