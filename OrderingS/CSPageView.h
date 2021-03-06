//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CSUIButton, NSMutableArray, UIImageView, UILabel, UIScrollView;

@interface CSPageView : UIView
{
    long long _currentPage;
    struct CGPoint panStart;
    struct CGPoint startPoint;
    double imageWidth;
    id <CSPageViewDelegate> _delegate;
    UIScrollView *_ctrlSvShow;
    UIImageView *_ctrlTips;
    CSUIButton *_ctrlBtnUploadInside;
    CSUIButton *_ctrlBtnUpload;
    UIView *_ctrlDefaultView;
    NSMutableArray *_pages;
    UILabel *_ctrlUploadTips;
}

@property(retain, nonatomic) UILabel *ctrlUploadTips; // @synthesize ctrlUploadTips=_ctrlUploadTips;
@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) UIView *ctrlDefaultView; // @synthesize ctrlDefaultView=_ctrlDefaultView;
@property(retain, nonatomic) CSUIButton *ctrlBtnUpload; // @synthesize ctrlBtnUpload=_ctrlBtnUpload;
@property(retain, nonatomic) CSUIButton *ctrlBtnUploadInside; // @synthesize ctrlBtnUploadInside=_ctrlBtnUploadInside;
@property(retain, nonatomic) UIImageView *ctrlTips; // @synthesize ctrlTips=_ctrlTips;
@property(retain, nonatomic) UIScrollView *ctrlSvShow; // @synthesize ctrlSvShow=_ctrlSvShow;
@property(nonatomic) id <CSPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePan:(id)arg1;
- (void)setTipsPrice:(id)arg1 andUnit:(id)arg2;
- (void)btnClick_UploadImage:(id)arg1;
- (void)btnClick_changePage:(id)arg1;
- (void)loadFoodImage;
@property long long currentPage;
- (void)setReadOnly:(_Bool)arg1;
- (void)setView:(id)arg1 TipsPrice:(id)arg2 andUnit:(id)arg3;
- (void)dealloc;
- (id)initWithScrollViewSize:(struct CGSize)arg1;

@end

