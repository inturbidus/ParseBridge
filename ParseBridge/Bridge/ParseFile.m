//
//  ParseFile.m
//  ParseBridge
//
//  Created by Matt Hudson on 8/4/13.
//  Copyright (c) 2013 Apportable. All rights reserved.
//

#import "ParseFile.h"

@implementation ParseFile

/*
 PFFile
 + fileWithName:(NSString*) data:(NSData*)
 */
+ (void)initializeJava
{
    [super initializeJava];

    //*- Java: public ParseFile(String name, byte[] data)
    //*- Objc: + fileWithName:(NSString*) data:(NSData*)
	[ParseFile registerConstructorWithSelector:@selector(fileWithName:data:)
                                       arguments:[NSString className], [NSData className], nil];

}
@end
