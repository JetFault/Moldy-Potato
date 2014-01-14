//
//  Movie.m
//  Moldy Potato
//
//  Created by Jerry Reptak on 1/14/14.
//  Copyright (c) 2014 Jerry Reptak. All rights reserved.
//

#import "Movie.h"

@implementation Movie

- (Movie *) init
{
    self = [super init];
    
    self.title = @"";
    self.description = @"";
    self.posterURL = nil;
    
    return self;
}

@end
