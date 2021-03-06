//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, NSMutableDictionary, NSObject<CSNumStepperDelegate>, UIButton;

@interface CSNumStepper : UIView
{
    NSObject<CSNumStepperDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UIButton *_ctrlDelBtn;
    UIButton *_ctrlNumBtn;
    UIButton *_ctrlAddBtn;
    long long _num;
    long long _minSelNum;
    long long _maxSelNum;
    NSMutableDictionary *_dic;
}

@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
@property(nonatomic) long long maxSelNum; // @synthesize maxSelNum=_maxSelNum;
@property(nonatomic) long long minSelNum; // @synthesize minSelNum=_minSelNum;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(retain, nonatomic) UIButton *ctrlAddBtn; // @synthesize ctrlAddBtn=_ctrlAddBtn;
@property(retain, nonatomic) UIButton *ctrlNumBtn; // @synthesize ctrlNumBtn=_ctrlNumBtn;
@property(retain, nonatomic) UIButton *ctrlDelBtn; // @synthesize ctrlDelBtn=_ctrlDelBtn;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSNumStepperDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)invokeChange:(long long)arg1;
- (void)addBtnClicked;
- (void)delBtnClicked;
- (void)setCanEditTag:(_Bool)arg1;
- (void)refreshWithNum:(long long)arg1;
- (void)dealloc;
- (id)initWithPos:(struct CGPoint)arg1;

@end

