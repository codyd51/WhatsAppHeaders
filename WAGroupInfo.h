/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:50 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAGroupInfo : NSManagedObject {
}
@property (nonatomic,@dynamic,retain) NSString* ownerJID; 
@property (nonatomic,@dynamic,retain) NSDate* creationDate; 
@property (nonatomic,@dynamic,retain) WAChatSession* chatSession; 
@property (nonatomic,@dynamic,retain) NSString* pictureID; 
@property (nonatomic,@dynamic,retain) NSString* picturePath; 
@property (nonatomic,@dynamic,retain) NSString* subjectOwnerJID; 
@property (nonatomic,@dynamic,retain) NSDate* subjectTimestamp; 
@property (nonatomic,@dynamic,retain) NSNumber* state; 
@property (nonatomic,@dynamic,retain) WAGroupMember* lastMessageOwner; 
@end