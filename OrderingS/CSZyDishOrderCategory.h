//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BaseVc, DishListPackDTO, NSObject<CSZyDishOrderCategoryDelegate>, NSString, UITableView;

@interface CSZyDishOrderCategory : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSObject<CSZyDishOrderCategoryDelegate> *_delegate;
    BaseVc *_nrVc;
    UITableView *_ctrlCategoryTable;
    DishListPackDTO *_dto;
    long long _selectIndex;
}

@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) DishListPackDTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) UITableView *ctrlCategoryTable; // @synthesize ctrlCategoryTable=_ctrlCategoryTable;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSZyDishOrderCategoryDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)showBackgroundForSelection:(_Bool)arg1 forCell:(id)arg2;
- (void)callDelegateForRow:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)open;
- (void)refresh:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1 withHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

