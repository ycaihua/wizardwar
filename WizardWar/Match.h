//
//  Match.h
//  WizardWar
//
//  Created by Sean Hess on 5/17/13.
//  Copyright (c) 2013 The LAB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Spell.h"

@interface Match : NSObject
@property (nonatomic, strong) NSMutableArray * players;
@property (nonatomic, strong) NSMutableArray * spells;
-(void)update:(NSTimeInterval)dt;
-(void)addSpell:(Spell*)spell;
-(id)initWithId:(NSString*)id;
@end