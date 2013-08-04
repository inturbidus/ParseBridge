//
//  ParseBridge.h
//  ParseBridge
//
//  Created by Spencer Barron on 7/6/13.

#import <BridgeKit/JavaObject.h>

@class ParseUser;

@interface ParseUser: JavaObject

+ (ParseUser*) currentUser; 
+ (void)logOut;
- (void)initUser;
- (bool)isAuthenticated;

/*
 PFUser
 + currentUser
 + enableAutomaticUser
 - saveInBackground
 - setObject:(id) forKey:(NSString*)
 */

@end
