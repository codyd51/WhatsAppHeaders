/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:59 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAListRepresentation : NSObject {
	NSString* _listJID; 
	NSString* _name; 
	NSArray* _recipientJIDs; 
}
@property (nonatomic,copy) NSString* listJID; 				//@synthesize listJID=_listJID - In the implementation block
@property (nonatomic,copy) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray* recipientJIDs; 				//@synthesize recipientJIDs=_recipientJIDs - In the implementation block
-(void)setListJID:(id)arg1;
-(void)setRecipientJIDs:(id)arg1;
-(id)description;
-(void)setName:(id)arg1;
-(void).cxx_destruct;
@end