//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class BaseVc, CSPageControl, NSMutableArray, NSObject<CSBvcBrowsePhotoDelegate>, NSString, UILabel, UIScrollView;

@interface CSBvcBrowsePhoto : UIView <UIScrollViewDelegate>
{
    NSObject<CSBvcBrowsePhotoDelegate> *_delegate;
    BaseVc *_nrVc;
    UIScrollView *_ctrlScrollView;
    CSPageControl *_ctrlPageControl;
    UIView *_ctrlDetailBg;
    UILabel *_ctrlDetailLabel;
    NSMutableArray *_urlList;
    long long _curPageNum;
}

@property(nonatomic) long long curPageNum; // @synthesize curPageNum=_curPageNum;
@property(retain, nonatomic) NSMutableArray *urlList; // @synthesize urlList=_urlList;
@property(retain, nonatomic) UILabel *ctrlDetailLabel; // @synthesize ctrlDetailLabel=_ctrlDetailLabel;
@property(retain, nonatomic) UIView *ctrlDetailBg; // @synthesize ctrlDetailBg=_ctrlDetailBg;
@property(retain, nonatomic) CSPageControl *ctrlPageControl; // @synthesize ctrlPageControl=_ctrlPageControl;
@property(retain, nonatomic) UIScrollView *ctrlScrollView; // @synthesize ctrlScrollView=_ctrlScrollView;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSBvcBrowsePhotoDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)cleanSubView;
- (int)nowHeight;
- (int)nowWidth;
- (void)adjustPicture;
- (void)imageView:(id)arg1 downloadComplete:(id)arg2;
- (void)download:(long long)arg1;
- (void)changeDetail:(id)arg1;
- (void)showCurrentPhoto;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)loadPhoto;
- (void)openWithUrlList:(id)arg1 withIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

