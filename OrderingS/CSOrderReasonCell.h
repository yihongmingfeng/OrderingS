//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseVc, UIImageView, UILabel;

@interface CSOrderReasonCell : UIView
{
    BaseVc *_nrVc;
    UILabel *_ctrlText;
    UIImageView *_ctrlCheck;
}

+ (int)cellHeight;
@property(retain, nonatomic) UIImageView *ctrlCheck; // @synthesize ctrlCheck=_ctrlCheck;
@property(retain, nonatomic) UILabel *ctrlText; // @synthesize ctrlText=_ctrlText;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
- (void)changeState:(_Bool)arg1;
- (void)unmarkSelected;
- (void)markSelected;
- (void)refreshWithText:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

