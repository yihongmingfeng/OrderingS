//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImage3x3TextureSamplingFilter.h"

@interface GPUImageToonFilter : GPUImage3x3TextureSamplingFilter
{
    int thresholdUniform;
    int quantizationLevelsUniform;
    double _threshold;
    double _quantizationLevels;
}

@property(nonatomic) double quantizationLevels; // @synthesize quantizationLevels=_quantizationLevels;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
- (id)init;

@end

