//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CSUIImageView, NSObject<CSClCellDelegate>, UIImageView, UILabel;

@interface CSClCell : UIView
{
    NSObject<CSClCellDelegate> *_delegate;
    BaseBizVc *_nrVc;
    CSUIImageView *_ctrlPic;
    UILabel *_ctrlNowPrice;
    UILabel *_ctrlOldPrice;
    UIView *_ctrlOldPriceline;
    UILabel *_ctrlState;
    UILabel *_ctrlRestName;
    UILabel *_ctrlSold;
    UIImageView *_ctrlLocIcon;
    UILabel *_ctrlLoc;
}

+ (float)panelHeight;
@property(retain, nonatomic) UILabel *ctrlLoc; // @synthesize ctrlLoc=_ctrlLoc;
@property(retain, nonatomic) UIImageView *ctrlLocIcon; // @synthesize ctrlLocIcon=_ctrlLocIcon;
@property(retain, nonatomic) UILabel *ctrlSold; // @synthesize ctrlSold=_ctrlSold;
@property(retain, nonatomic) UILabel *ctrlRestName; // @synthesize ctrlRestName=_ctrlRestName;
@property(retain, nonatomic) UILabel *ctrlState; // @synthesize ctrlState=_ctrlState;
@property(retain, nonatomic) UIView *ctrlOldPriceline; // @synthesize ctrlOldPriceline=_ctrlOldPriceline;
@property(retain, nonatomic) UILabel *ctrlOldPrice; // @synthesize ctrlOldPrice=_ctrlOldPrice;
@property(retain, nonatomic) UILabel *ctrlNowPrice; // @synthesize ctrlNowPrice=_ctrlNowPrice;
@property(retain, nonatomic) CSUIImageView *ctrlPic; // @synthesize ctrlPic=_ctrlPic;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSClCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)transToPrice:(double)arg1;
- (void)refresh:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

