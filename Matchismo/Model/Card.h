//
//  Card.h
//  Matchismo
//
//  Created by Hiromasa IWAYAMA on 2014/02/11.
//  Copyright (c) 2014年 ymis1080. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
