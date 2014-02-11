//
//  Card.m
//  Matchismo
//
//  Created by Hiromasa IWAYAMA on 2014/02/11.
//  Copyright (c) 2014年 ymis1080. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end
