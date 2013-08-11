//
//  ParseQuery.h
//  ParseBridge
//
//  Created by Spencer Barron on 7/21/13.
//  Copyright (c) 2013 Apportable. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BridgeKit/JavaObject.h>
#import "ParseQuery.h"
#import "ParseObject.h"

typedef enum {
    kPFCachePolicyIgnoreCache = 0,
    kPFCachePolicyCacheOnly,
    kPFCachePolicyNetworkOnly,
    kPFCachePolicyCacheElseNetwork,
    kPFCachePolicyNetworkElseCache,
    kPFCachePolicyCacheThenNetwork
} ParseCachePolicy;

typedef void (^ParseArrayResultBlock)(NSArray *objects, NSError *error);

@interface ParseQuery : JavaObject

+ (ParseQuery*)queryWithClassName:(NSString*)className;
+ (ParseObject*)getObjectOfClass:(NSString*)className objectId:(NSString*)objectId;

#warning //TODO: Create calls inside the .m file
@property (nonatomic, assign) NSInteger limit;
@property (readwrite, assign) ParseCachePolicy cachePolicy;

- (ParseObject *)getObjectWithId:(NSString *)objectId;

- (void)whereKey:(NSString *)key greaterThan:(id)object;
- (void)orderBySortDescriptor:(NSSortDescriptor *)sortDescriptor;
- (NSArray *)findObjects:(NSError **)error;
- (void)findObjectsInBackgroundWithBlock:(ParseArrayResultBlock)block;
- (NSArray*)findObjects;
- (void)whereKey:(NSString *)key containedIn:(NSArray *)array;
+ (BOOL)saveAll:(NSArray *)objects error:(NSError *)error;

/****
 PFQuery
 + queryWithClassName:(NSString*)
 + getObjectOfClass:(NSString*) objectId:(NSString*)
 */

@end
