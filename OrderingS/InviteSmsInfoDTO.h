//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface InviteSmsInfoDTO : NSObject
{
    NSString *inviterName;
    NSString *restName;
    NSString *restAddress;
    NSString *dinnerDate;
    double longitude;
    double latitude;
    NSString *placeKey;
    int placeRadius;
    int placeNum;
    NSMutableArray *templetList;
}

@property(retain, nonatomic) NSMutableArray *templetList; // @synthesize templetList;
@property(nonatomic) int placeNum; // @synthesize placeNum;
@property(nonatomic) int placeRadius; // @synthesize placeRadius;
@property(retain, nonatomic) NSString *placeKey; // @synthesize placeKey;
@property(nonatomic) double latitude; // @synthesize latitude;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(retain, nonatomic) NSString *dinnerDate; // @synthesize dinnerDate;
@property(retain, nonatomic) NSString *restAddress; // @synthesize restAddress;
@property(retain, nonatomic) NSString *restName; // @synthesize restName;
@property(retain, nonatomic) NSString *inviterName; // @synthesize inviterName;
- (void)dealloc;
- (void)unitTest;
- (void)transToList:(id)arg1;
- (id)initWithObj:(id)arg1;

@end
