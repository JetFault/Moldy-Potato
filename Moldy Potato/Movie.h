//
//  Movie.h
//  Moldy Potato
//
//  Created by Jerry Reptak on 1/14/14.
//  Copyright (c) 2014 Jerry Reptak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Movie : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *description;
@property (nonatomic, strong) NSURL *posterURL;

- (Movie *) init;

@end
