//
//  FlickrPhotoCell.h
//  FlickrDemo
//
//  Created by Xander on 07/12/2012.
//  Copyright (c) 2012 iDroidStudio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@class FlickrPhoto;

@interface FlickrPhotoCell : UICollectionViewCell

@property(nonatomic, strong) IBOutlet UIImageView *imageView;
@property(nonatomic, strong) FlickrPhoto *photo;

@end
