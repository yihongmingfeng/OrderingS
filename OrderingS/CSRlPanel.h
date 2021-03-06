//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseLayoutSupportVc, NSObject<CSRlPanelDelegate>, UILabel;

@interface CSRlPanel : UIView
{
    NSObject<CSRlPanelDelegate> *_delegate;
    BaseLayoutSupportVc *_nrVc;
    UILabel *_ctrlTitleLabel;
    UILabel *_ctrlNumLabel;
}

+ (int)panelHeight;
@property(retain, nonatomic) UILabel *ctrlNumLabel; // @synthesize ctrlNumLabel=_ctrlNumLabel;
@property(retain, nonatomic) UILabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property BaseLayoutSupportVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSRlPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)changeNum:(int)arg1;
- (void)refreshWithTitle:(id)arg1 num:(int)arg2;
- (void)dealloc;
- (id)initWithVc:(id)arg1 left:(int)arg2 top:(int)arg3;

@end

