//
//  ParseBridge.h
//  ParseBridge
//
//  Created by Spencer Barron on 7/6/13.

#import <BridgeKit/JavaObject.h>

@interface ParseUser : JavaObject

+ (ParseUser*) currentUser; 
+ (void)logOut;
- (void)initUser;
- (BOOL)isAuthenticated;
- (void)forKey:(NSString *)key setObject:(id)value;

+ (void)enableAutomaticUser;

/*
 PFUser
 //public boolean isAuthenticated()
 - (BOOL)isAuthenticated
 
 + currentUser
 
 + enableAutomaticUser
 
 - saveInBackground

 - setObject:(id) forKey:(NSString*)
 */

@end
