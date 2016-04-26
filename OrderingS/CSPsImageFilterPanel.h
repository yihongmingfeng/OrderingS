//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, NSMutableArray, NSObject<CSPsImageFilterPanelDelegate>, UIImage, UILabel, UIScrollView;

@interface CSPsImageFilterPanel : UIView
{
    NSObject<CSPsImageFilterPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UILabel *_ctrlTitleLabel;
    UIScrollView *_ctrlFilterScrollView;
    UIImage *_data;
    NSMutableArray *_arrDemos;
    long long _filterIdxInUse;
}

+ (id)applyContrastImage:(id)arg1 value:(double)arg2;
+ (id)filterImage:(id)arg1 byFilterIndex:(long long)arg2;
@property(nonatomic) long long filterIdxInUse; // @synthesize filterIdxInUse=_filterIdxInUse;
@property(retain, nonatomic) NSMutableArray *arrDemos; // @synthesize arrDemos=_arrDemos;
@property(retain, nonatomic) UIImage *data; // @synthesize data=_data;
@property(retain, nonatomic) UIScrollView *ctrlFilterScrollView; // @synthesize ctrlFilterScrollView=_ctrlFilterScrollView;
@property(retain, nonatomic) UILabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSPsImageFilterPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)returnToModify;
- (void)removeAllImageView;
- (void)filterClicked:(id)arg1;
- (void)installFilterDemoBtnWithImage:(id)arg1 andName:(id)arg2;
- (void)refreshPanel;
- (void)hide;
- (void)open;
- (void)refreshWithData:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end
