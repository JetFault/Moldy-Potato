//
//  MovieListCell.h
//  Moldy Potato
//
//  Created by Jerry Reptak on 1/13/14.
//  Copyright (c) 2014 Jerry Reptak. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AsyncImageView/AsyncImageView.h"

@interface MovieListCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *movieTitleLabel;
@property (nonatomic, weak) IBOutlet UILabel *movieDescLabel;
@property (nonatomic, weak) IBOutlet AsyncImageView *moviePosterImage;

@end
