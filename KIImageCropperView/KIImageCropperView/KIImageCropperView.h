//
//  KIImageCropView.h
//  Kitalker
//
//  Created by 杨 烽 on 13-7-11.
//
//

#import <UIKit/UIKit.h>

// pod 'KIAdditions/UIImage', :git => "https://github.com/smartwalle/KIAdditions.git"
#import "UIImage+KIAdditions.h"

/*宽、高比例*/
typedef enum {
    KIImageCropRatio1_1 = 1,
    KIImageCropRatio1_2,
    KIImageCropRatio2_1,
    KIImageCropRatio16_9,
    KIImageCropRatio16_10
} KIImageCropRatio;

@interface KIImageCropperView : UIView <UIScrollViewDelegate> {
    KIImageCropRatio    _cropRatio;
    CGSize              _cropSize;
    UIEdgeInsets        _padding;
    UIImage             *_image;
    UIImageView         *_imageView;
    UIScrollView        *_scrollView;
}

/*裁剪比例*/
@property (nonatomic, assign) KIImageCropRatio  cropRatio;

/*裁剪尺寸*/
@property (nonatomic, assign) CGSize            cropSize;

/*maskView的边距*/
@property (nonatomic, assign) UIEdgeInsets      padding;

/*需要裁剪的图片*/
@property (nonatomic, strong) UIImage           *image;

/*获取裁剪后的图片*/
- (UIImage *)croppedImage;


@end
