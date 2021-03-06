//
//  ProfileModel.h
//  oschina
//
//  Created by wangjun on 12-3-9.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProfileModel : NSObject

@property int tag;
@property (retain,nonatomic) NSString * key;
@property (retain,nonatomic) NSString * value;

- (id)initWithParameters:(NSString *)nKey andValue:(NSString *)nValue andTag:(int)nTag;

@end
