//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CSHtmLabel, CSUIImageView, NSObject<CSOsStatePanelDelegate>;

@interface CSOsStatePanel : UIView
{
    NSObject<CSOsStatePanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    CSUIImageView *_ctrlPic;
    CSHtmLabel *_ctrlText;
}

@property(retain, nonatomic) CSHtmLabel *ctrlText; // @synthesize ctrlText=_ctrlText;
@property(retain, nonatomic) CSUIImageView *ctrlPic; // @synthesize ctrlPic=_ctrlPic;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSOsStatePanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)refresh:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

