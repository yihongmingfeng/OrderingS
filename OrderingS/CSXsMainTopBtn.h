//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseLayoutSupportVc, NSObject<CSXsMainTopBtnDelegate>, UIButton;

@interface CSXsMainTopBtn : UIView
{
    NSObject<CSXsMainTopBtnDelegate> *_delegate;
    BaseLayoutSupportVc *_nrVc;
    UIButton *_ctrlCityBtn;
}

@property(retain, nonatomic) UIButton *ctrlCityBtn; // @synthesize ctrlCityBtn=_ctrlCityBtn;
@property BaseLayoutSupportVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSXsMainTopBtnDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)cityBtnClicked;
- (void)refresh;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end
