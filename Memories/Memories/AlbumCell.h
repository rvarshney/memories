//
//  AlbumCell.h
//  Memories
//
//  Created by Ruchi Varshney on 2/14/14.
//
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface AlbumCell : UICollectionViewCell

@property (nonatomic, strong) PFImageView *coverPictureImageView;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIView *overlay;

@end
