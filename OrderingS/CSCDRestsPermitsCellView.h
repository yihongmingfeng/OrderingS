//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CouponRestData, NSObject<CSCDRestsPermitsCellViewDelegate>, UIButton, UILabel;

@interface CSCDRestsPermitsCellView : UIView
{
    NSObject<CSCDRestsPermitsCellViewDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UILabel *_ctrlRestNameLabel;
    UILabel *_ctrlRestAddrLabel;
    UILabel *_ctrlDistanceLabel;
    UIButton *_ctrlTelBtn;
    CouponRestData *_couponRestData;
}

+ (double)cellHeight;
@property(retain, nonatomic) CouponRestData *couponRestData; // @synthesize couponRestData=_couponRestData;
@property(retain, nonatomic) UIButton *ctrlTelBtn; // @synthesize ctrlTelBtn=_ctrlTelBtn;
@property(retain, nonatomic) UILabel *ctrlDistanceLabel; // @synthesize ctrlDistanceLabel=_ctrlDistanceLabel;
@property(retain, nonatomic) UILabel *ctrlRestAddrLabel; // @synthesize ctrlRestAddrLabel=_ctrlRestAddrLabel;
@property(retain, nonatomic) UILabel *ctrlRestNameLabel; // @synthesize ctrlRestNameLabel=_ctrlRestNameLabel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSCDRestsPermitsCellViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)restDetailClicked;
- (void)callBtnClicked;
- (void)refreshWithData:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

