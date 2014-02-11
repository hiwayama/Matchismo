//
//  Deck.h
//  Matchismo
//
//  Created by Hiromasa IWAYAMA on 2014/02/11.
//  Copyright (c) 2014年 ymis1080. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
