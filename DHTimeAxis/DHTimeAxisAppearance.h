//  DHTimeAxisAppearance.h
//  DHTimeAxis
//
//  Create by daniel.hu on 2018/11/12.
//  Copyright © 2018年 daniel. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, DHAxisDirection) {
    DHAxisDirectionHorizontal,
    DHAxisDirectionVertical,
};

typedef NS_ENUM(NSUInteger, DHStrokeLocationType) {
    DHStrokeLocationTypeFlexible,
    DHStrokeLocationTypeMiddle,
    DHStrokeLocationTypeMinimum,
    DHStrokeLocationTypeMaximum,
};
typedef NS_ENUM(NSUInteger, DHStrokeSizeType) {
    DHStrokeSizeTypeFlexible,
    DHStrokeSizeTypeFull,
    DHStrokeSizeTypeHalf,
};

NS_ASSUME_NONNULL_BEGIN
/**
 外观管理器
 */
@interface DHTimeAxisAppearance : NSObject

+ (instancetype)sharedAppearance;
@property (nonatomic, assign) Class rendererClass;
@property (nonatomic, assign) DHAxisDirection direction;
@property (nonatomic, strong) UIColor *mainBackgroundColor;

@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, assign) CGFloat backgroundStrokeSize;
@property (nonatomic, assign) DHStrokeSizeType backgroundStrokeSizeType;

@property (nonatomic, strong) UIColor *ruleColor;
@property (nonatomic, assign) CGFloat ruleStrokeSize;
// 直线，offset表示偏移长度， 如果圆形，那么offset表示偏移弧长
@property (nonatomic, assign) CGFloat ruleFixedOffset;
@property (nonatomic, assign) DHStrokeLocationType ruleOffsetLocationType;


@property (nonatomic, strong) UIColor *divisionColor;
@property (nonatomic, assign) CGFloat divisionStrokeSize;

@property (nonatomic, strong) UIColor *baseLineColor;
@property (nonatomic, assign) CGFloat baseLineStrokeSize;
@property (nonatomic, assign) CGFloat baseLineFixedOffset;
@property (nonatomic, assign) DHStrokeLocationType baseLineOffsetLocationType;

@property (nonatomic, strong) NSDictionary *digitalAttribute;

@property (nonatomic, strong) UIColor *dataStrokeColor;
@property (nonatomic, assign) CGFloat dataStrokeSize;
@property (nonatomic, assign) DHStrokeSizeType dataStrokeSizeType;

@property (nonatomic, assign) CGFloat minimumScale;
@property (nonatomic, assign) CGFloat maximumScale;
@property (nonatomic, assign) CGFloat oneToOneScaleMatchMaxHoursInVisible;

@end

NS_ASSUME_NONNULL_END