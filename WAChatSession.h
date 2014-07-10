/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:36 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAChatSession : NSManagedObject {
	id _mutingCompletionHandler; 
	BOOL _eligibleForDeletionIfEmpty; 
	BOOL _contactBlocked; 
	BOOL _hasMessages; 
	BOOL _isActive; 
}
@property (nonatomic,@dynamic,retain) NSNumber* contactABID; 
@property (nonatomic,@dynamic,retain) NSString* contactJID; 
@property (nonatomic,@dynamic,retain) NSString* partnerName; 
@property (nonatomic,@dynamic,retain) NSDate* lastMessageDate; 
@property (nonatomic,@dynamic,retain) NSString* lastMessageText; 
@property (nonatomic,@dynamic,retain) NSNumber* unreadCount; 
@property (nonatomic,@dynamic,retain) NSString* savedInput; 
@property (nonatomic,@dynamic,retain) NSNumber* messageCounter; 
@property (nonatomic,@dynamic,retain) NSNumber* flags; 
@property (nonatomic,@dynamic,retain) NSNumber* sessionType; 
@property (nonatomic,@dynamic,retain) NSNumber* removed; 
@property (nonatomic,@dynamic,retain) NSNumber* hidden; 
@property (nonatomic,@dynamic,retain) NSSet* messages; 
@property (nonatomic,@dynamic,retain) NSSet* groupMembers; 
@property (nonatomic,@dynamic,retain) WAGroupInfo* groupInfo; 
@property (nonatomic,@dynamic,retain) WAChatProperties* properties; 
@property (nonatomic,@dynamic,retain) WAMessage* lastMessage; 
@property (assign,nonatomic) BOOL eligibleForDeletionIfEmpty; 				//@synthesize eligibleForDeletionIfEmpty=_eligibleForDeletionIfEmpty - In the implementation block
@property (assign,nonatomic) BOOL contactBlocked; 				//@synthesize contactBlocked=_contactBlocked - In the implementation block
@property (assign,nonatomic) BOOL hasMessages; 				//@synthesize hasMessages=_hasMessages - In the implementation block
@property (assign,nonatomic) BOOL isActive; 				//@synthesize isActive=_isActive - In the implementation block
+(short)sessionTypeFromJID:(id)arg1;
+(id)allDeletedChatSessionIDsInContext:(id)arg1 objectIDsOnly:(BOOL)arg2;
+(id)anyChatSessionWithOrphanedMessagesInContext:(id)arg1;
+(void)requestAndMergeAllListsFromServerWithCompletionHandler:(id)arg1;
+(id)assignNewBroadcastJID;
+(void)requestAllListsDidSucceedWithListRepresentations:(id)arg1 userData:(id)arg2;
+(void)requestAllListsDidFailWithError:(id)arg1 userData:(id)arg2;
+(id)insertListIfNeeded:(id)arg1 inContext:(id)arg2;
+(void)promptUserForMuteEndDateFromView:(id)arg1 completion:(id)arg2;
+(void)promptUserForToUnmuteFromView:(id)arg1 completion:(id)arg2;
+(int)maximumListNameLength;
+(id)createNewList;
-(id)mailComposeViewControllerForChatHistoryWithMedia:(BOOL)arg1;
-(void)showEmptyChatHistoryAlertView;
-(void)promptUserToAttachMediaToChatHistoryFromView:(id)arg1 completion:(id)arg2;
-(void)setContactBlocked:(BOOL)arg1;
-(void)setContactJID:(id)arg1;
-(void)setHasMessages:(BOOL)arg1;
-(void)setEligibleForDeletionIfEmpty:(BOOL)arg1;
-(void)deleteSession;
-(void)scheduleDeleteProfilePictures;
-(id)sessionWithAllMessagesDeleted;
-(id)activeGroupMembers;
-(BOOL)chatFolderMayIncludeSharedMedia;
-(void)bulkDeleteNotSharedMedia;
-(void)settingUpdateFinished:(id)arg1;
-(void)settingUpdateFailedWithError:(id)arg1 userData:(id)arg2;
-(id)messageTemplateForListGroupEvent;
-(int)numberOfActiveGroupMembers;
-(BOOL)addGroupMemberWithInfoToList:(id)arg1 createGroupEvent:(BOOL)arg2;
-(BOOL)containsMessages;
-(void)updateMuteEndDate:(id)arg1 completion:(id)arg2;
-(void)addInitialGroupEventForNewList;
-(void)removeGroupMemberFromList:(id)arg1 createGroupEvent:(BOOL)arg2;
-(id)contactInfosOfAllActiveGroupMembers;
-(id)firstNamesOfActiveGroupMembers;
-(void)setIsActive:(BOOL)arg1;
-(BOOL)isMuted;
@end