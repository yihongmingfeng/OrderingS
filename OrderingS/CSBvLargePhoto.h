//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class BaseLayoutSupportVc, CSUIImageView, NSObject<CSBvLargePhotoDelegate>, NSString, UIScrollView;

@interface CSBvLargePhoto : UIView <UIScrollViewDelegate>
{
    _Bool _showHideingTag;
    NSObject<CSBvLargePhotoDelegate> *_delegate;
    BaseLayoutSupportVc *_nrVc;
    UIScrollView *_ctrlSv;
    CSUIImageView *_ctrlImg;
}

@property(nonatomic) _Bool showHideingTag; // @synthesize showHideingTag=_showHideingTag;
@property(retain, nonatomic) CSUIImageView *ctrlImg; // @synthesize ctrlImg=_ctrlImg;
@property(retain, nonatomic) UIScrollView *ctrlSv; // @synthesize ctrlSv=_ctrlSv;
@property BaseLayoutSupportVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSBvLargePhotoDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)hideAnimeDidStop:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)handleLargePhotoSingleTap:(id)arg1;
- (void)showAnimeDidStop:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)imageView:(id)arg1 downloadComplete:(id)arg2;
- (void)openLargePhotoWithUrl:(id)arg1 storeDir:(id)arg2 smallPhoto:(id)arg3;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

