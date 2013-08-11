//
//  ParseObject.h
//

#import <BridgeKit/JavaObject.h>
#import "ParseACL.h"
#import "ParseObject.h"

@interface ParseObject : JavaObject

/*
 PFObject
 + objectWithClassName:(NSString*)
 + saveAll:(NSArray*) error:(NSError*)
 + objectWithoutDataWithClassName:(NSString*) objectId:(NSString*)
 */

//*- ParseObject(String theClassName) - Constructor
-(id)initParseObject:(NSString*)name;

//*- public void put(String key, Object value)
-(void)forKey:(NSString *)key setObject:(id)value;

-(void)setObject:(id)value forKey:(NSString*)key;

//*- public final void saveEventually()
-(void)saveEventually;

//*- public final void saveInBackground()
-(void)saveInBackground;

//*- public static ParseObject create(String className)
+ (ParseObject*)objectWithClassName:(NSString*)className;

//*- public static void saveAll(List<ParseObject> objects) throws ParseException
+ (BOOL)saveAll:(NSArray *)objects;
+ (BOOL)saveAll:(NSArray *)objects error:(NSError**)error;

//*- public static ParseObject createWithoutData(String className, String objectId)
+ (ParseObject*)objectWithoutDataWithClassName:(NSString*)className objectId:(NSString*)objectId;

- (ParseObject*)objectWithClassName:(NSString*)className dictionary:(NSDictionary*)dictionary;

- (BOOL)delete:(NSError**)error;

- (id)objectForKey:(NSString *)key;

+ (ParseObject *)objectWithClassName:(NSString *)className dictionary:(NSDictionary *)dictionary;

- (BOOL)isDataAvailable;
- (NSArray *)allKeys;

@property (nonatomic, retain) ParseACL *ACL;
@property (nonatomic, retain) NSString *objectId;
@property (nonatomic, retain) ParseACL *acl;
@property (nonatomic, retain, readonly) NSDate *updatedAt;

@end
