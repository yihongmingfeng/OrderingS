//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBMutableArray;

@interface TAGPGaServerSideExperimentSupplemental : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TAGPBMutableArray *combinationArray; // @dynamic combinationArray;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(retain, nonatomic) NSString *experimentKey; // @dynamic experimentKey;
@property(nonatomic) _Bool hasCombinationArray; // @dynamic hasCombinationArray;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasExperimentKey; // @dynamic hasExperimentKey;
@property(nonatomic) _Bool hasInclusionProbability; // @dynamic hasInclusionProbability;
@property(nonatomic) _Bool hasWeightBucketArray; // @dynamic hasWeightBucketArray;
@property(nonatomic) _Bool hasWeightBucketMassSumArray; // @dynamic hasWeightBucketMassSumArray;
@property(nonatomic) double inclusionProbability; // @dynamic inclusionProbability;
@property(retain, nonatomic) TAGPBMutableArray *weightBucketArray; // @dynamic weightBucketArray;
@property(retain, nonatomic) TAGPBMutableArray *weightBucketMassSumArray; // @dynamic weightBucketMassSumArray;

@end
