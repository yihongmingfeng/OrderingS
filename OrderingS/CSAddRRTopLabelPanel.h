//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CSHtmLabel, NSString, UIButton;

@interface CSAddRRTopLabelPanel : UIView
{
    BaseBizVc *_nrVc;
    CSHtmLabel *_ctrlTitleLabel;
    UIButton *_ctrlActionBtn;
    UIView *_ctrlSepLine;
    NSString *_actionUrl;
}

@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) UIView *ctrlSepLine; // @synthesize ctrlSepLine=_ctrlSepLine;
@property(retain, nonatomic) UIButton *ctrlActionBtn; // @synthesize ctrlActionBtn=_ctrlActionBtn;
@property(retain, nonatomic) CSHtmLabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
- (void)actionBtnClicked:(id)arg1;
- (void)reset;
- (void)refresh:(id)arg1 actionUrl:(id)arg2;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end
