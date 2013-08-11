//
//  ParseFile.h
//  ParseBridge
//
//  Created by Matt Hudson on 8/4/13.
//  Copyright (c) 2013 Apportable. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BridgeKit/JavaObject.h>

@interface ParseFile : JavaObject

+ (ParseFile*)fileWithName:(NSString*)fileName data:(NSData*)data;

- (void)save;
- (NSData*)getData;
@end
