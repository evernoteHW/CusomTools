//
//  UIUtils.h
//  MaiMang
//
//  Created by WeiHu on 15/1/9.
//  Copyright (c) 2015年 WeiHu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIUtils : NSObject

+ (CGFloat)heightForCellWithText:(NSString *)text fontSize:(UIFont *)fontSize maxWidth:(CGFloat)maxWidth;
+ (UIImage *)imageByScalingAndCroppingForSourceImage:(UIImage *)sourceImage targetSize:(CGSize)targetSize;
+ (NSInteger)getRandomNumber:(NSInteger)from to:(NSInteger)to;
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
+ (UIImage *)captureView:(UIView *)view;

@end
