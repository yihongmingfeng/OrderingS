//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class CSHtmLabel, UILabel;

@interface CSOrderInfoBoardView : UIImageView
{
    UILabel *_ctrlLbDiningDate;
    UILabel *_ctrlLbRoomInfo;
    UILabel *_ctrlLbRest;
    UILabel *_ctrlLbBookerInfo;
    CSHtmLabel *_ctrlLbStatus;
}

@property(retain, nonatomic) CSHtmLabel *ctrlLbStatus; // @synthesize ctrlLbStatus=_ctrlLbStatus;
@property(retain, nonatomic) UILabel *ctrlLbBookerInfo; // @synthesize ctrlLbBookerInfo=_ctrlLbBookerInfo;
@property(retain, nonatomic) UILabel *ctrlLbRest; // @synthesize ctrlLbRest=_ctrlLbRest;
@property(retain, nonatomic) UILabel *ctrlLbRoomInfo; // @synthesize ctrlLbRoomInfo=_ctrlLbRoomInfo;
@property(retain, nonatomic) UILabel *ctrlLbDiningDate; // @synthesize ctrlLbDiningDate=_ctrlLbDiningDate;
- (id)newInfoLabel:(struct CGRect)arg1;
- (void)refreshForTakeout:(id)arg1 forDetail:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

