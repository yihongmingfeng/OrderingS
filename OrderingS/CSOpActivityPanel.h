//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, NSObject<CSOpActivityPanelDelegate>, UILabel;

@interface CSOpActivityPanel : UIView
{
    NSObject<CSOpActivityPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UILabel *_ctrlTitleLabel;
}

@property(retain, nonatomic) UILabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSOpActivityPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)refreshWithUuid:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end
