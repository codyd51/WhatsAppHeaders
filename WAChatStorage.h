/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:30 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <WAMediaUploaderDelegate.h>
#import <CLLocationManagerDelegate.h>
#import <NSFilePresenter.h>
#import <WAMediaDownloadOperationDelegate.h>
#import <NSURLSessionDataDelegate.h>
#import <WAMediaStreamUploadOperationDelegate.h>

@interface WAChatStorage : NSObject <WAMediaUploaderDelegate, CLLocationManagerDelegate, NSFilePresenter, WAMediaDownloadOperationDelegate, NSURLSessionDataDelegate, WAMediaStreamUploadOperationDelegate> {
	NSMutableArray* _chatSessions; 
	NSMutableArray* _chatSessionsWithBroadcast; 
	int _blacklistSize; 
	NSMutableSet* _mediaUploaders; 
	CLLocationManager* _locationManager; 
	CLLocation* _bestLocation; 
	NSMutableSet* _locationQueue; 
	NSManagedObjectContext* _managedObjectContext; 
	NSManagedObjectContext* _dataRefreshContext; 
	NSLock* _loadingLock; 
	NSMetadataQuery* _debug_query; 
	NSMutableDictionary* _pictureRequestDates; 
	BOOL _processingMessages; 
	NSCondition* _processMessagesCondition; 
	id<WAChatStorageDelegate> _delegate; 
	struct dispatch_queue_s* _backgroundFetchingQueue; 
	BOOL _needsDeleteOrphanedMessages; 
	double _timeOfLastCheckForOrphanedMessages; 
	double _deletingOrphanedMessagesInProgress; 
	WAChatSession* _chatSessionWithOrphanedMessages; 
	NSMutableArray* _deletedEmptyChatSessions; 
	NSManagedObjectModel* _managedObjectModel; 
	NSPersistentStoreCoordinator* _persistentStoreCoordinator; 
	NSPersistentStore* _chatStore; 
	NSURL* _persistentStoreURL; 
	NSOperationQueue* _mediaDownloadQueue; 
	NSOperationQueue* _mediaUploadQueue; 
	NSMutableArray* _mediaAutodownloadRetryArray; 
	NSManagedObjectContext* _profileThumbnailLoadingContext; 
	struct dispatch_queue_s* _profileThumbnailDispatchQueue; 
	int _profileThumbnailQueueLength; 
	BOOL _enableAutodownload; 
	NSString* _persistentStorePath; 
}
@property (nonatomic,copy) NSString* persistentStorePath; 				//@synthesize persistentStorePath=_persistentStorePath - In the implementation block
@property (assign) BOOL enableAutodownload; 				//@synthesize enableAutodownload=_enableAutodownload - In the implementation block
@property (copy) NSURL* presentedItemURL; 
@property (copy) NSOperationQueue* presentedItemOperationQueue; 
@property (copy) NSURL* primaryPresentedItemURL; 
+(id)errorWithDescription:(id)arg1 failureReason:(id)arg2;
-(int)numberOfUnreadChatSessions;
-(id)existingChatSessionForJID:(id)arg1;
-(id)metadataForKey:(id)arg1;
-(void)setMetadata:(id)arg1 forKey:(id)arg2;
-(void)cancelAllDownloads;
-(void)deleteAllMedia;
-(void)deleteStorage;
-(long long)potentialBackupSize;
-(unsigned)databaseStatus;
-(void)clearAllChatSessions;
-(id)blacklistJIDs;
-(BOOL)hasChatHistoryWithContactABID:(int)arg1;
-(id)chatSessionForJID:(id)arg1 contactABID:(int)arg2;
-(void)deleteMessagesForContactWithID:(int)arg1;
-(int)blacklistSize;
-(void)connectionStatusChanged:(id)arg1;
-(void)resetChatSessions;
-(id)newManagedObjectContext;
-(void)migrateChatSessionPropertiesInContext:(id)arg1;
-(void)migrateGroupMemberPropertiesInContext:(id)arg1;
-(void)migrateContentsOfDatabaseWithOriginalIdentifiers:(id)arg1;
-(void)dropStore;
-(void)queueMediaDownloadForMessage:(id)arg1 autodownload:(BOOL)arg2;
-(void)cancelAutodownloadOperations;
-(void)deleteOrphanedMessagesIfNeeded;
-(id)chatSessionsWithBroadcast:(BOOL)arg1;
-(BOOL)isJIDBlocked:(id)arg1;
-(id)createChatSessionForContact:(id)arg1 JID:(id)arg2 hidden:(BOOL)arg3;
-(id)chatSessionWithObjectID:(id)arg1 inContext:(id)arg2;
-(void)infoRequestCompletedForGroup:(id)arg1 withUserData:(id)arg2;
-(void)infoRequestFailed:(id)arg1 withUserData:(id)arg2;
-(void)removeChatSession:(id)arg1;
-(id)replaceChatSessionWithEmptySession:(id)arg1;
-(id)chatSessionForContactABID:(int)arg1;
-(void)deleteOrphanedMessages;
-(void)fetchEntitiesWithName:(id)arg1 request:(id)arg2 completion:(id)arg3;
-(id)messagesForSession:(id)arg1 startOffset:(unsigned)arg2 limit:(unsigned)arg3;
-(void)deleteChatSession:(id)arg1;
-(int)countMediaForMessage:(id)arg1 tag:(int)arg2;
-(void)deferredFetchEntitiesWithName:(id)arg1 request:(id)arg2 completion:(id)arg3;
-(void)fetchAllMediaInChatSessionWithID:(id)arg1 completion:(id)arg2;
-(id)messageWithID:(id)arg1 inContext:(id)arg2;
-(id)messageWithStanzaID:(id)arg1 inChatSession:(id)arg2;
-(unsigned)countAllMessagesOfType:(int)arg1;
-(unsigned)countAllDownloadedMediaMessagesOfType:(int)arg1;
-(unsigned)countAllImageMessages;
-(unsigned)countAllDownloadedVoiceMessages;
-(id)outgoingMessageTemplateForSession:(id)arg1 withMedia:(BOOL)arg2;
-(void)updateChatSessionWithMessage:(id)arg1;
-(void)sendMessage:(id)arg1 notify:(BOOL)arg2;
-(void)sendMessageWithImage:(id)arg1 ofIndex:(int)arg2 totalCount:(int)arg3 inChatSession:(id)arg4 completion:(id)arg5;
-(void)sendMessageWithMedia:(id)arg1;
-(void)startMediaUploadForMessage:(id)arg1;
-(void)requestLocationForMessage:(id)arg1;
-(void)storeModifiedMessage:(id)arg1 notify:(BOOL)arg2;
-(void)locationRequestFinishedWithLocation:(id)arg1 userInfo:(id)arg2;
-(void)locationRequestFailedWithError:(id)arg1 userInfo:(id)arg2;
-(void)requestLocationWithCallbackDictionary:(id)arg1;
-(id)messageWithID:(id)arg1;
-(id)broadcastWithID:(id)arg1 inContext:(id)arg2;
-(id)messageWithText:(id)arg1 inChatSession:(id)arg2 isBroadcast:(BOOL)arg3;
-(id)broadcastMessageWithMediaAtPath:(id)arg1 ofType:(int)arg2 mediaURL:(id)arg3 fileSize:(unsigned)arg4 thumbnailPath:(id)arg5 thumbnailData:(id)arg6 inChatSession:(id)arg7;
-(id)messageWithVCard:(id)arg1 contactName:(id)arg2 inChatSession:(id)arg3 isBroadcast:(BOOL)arg4;
-(id)broadcastMessageWithLocation:(id)arg1 placeName:(id)arg2 placeAddress:(id)arg3 placeURL:(id)arg4 thumbnailData:(id)arg5 thumbnailPath:(id)arg6 inChatSession:(id)arg7;
-(void)fetcher:(id)arg1 finishedWithThumbnailData:(id)arg2 error:(id)arg3;
-(void)fetcher:(id)arg1 finishedWithPlaceDetails:(id)arg2 error:(id)arg3;
-(void)useBestLocationResult:(id)arg1;
-(void)delayedSave;
-(id)existingChatSessionsForJIDs:(id)arg1 prefetchingLastMessage:(BOOL)arg2;
-(id)groupMembersWithJIDs:(id)arg1;
-(void)requestInfoForGroupWithJID:(id)arg1;
-(void)requestPictureOfType:(int)arg1 forChatSession:(id)arg2 userInfo:(id)arg3;
-(void)resetPictureDateForJID:(id)arg1;
-(id)addContact:(id)arg1 withJID:(id)arg2 toChatSession:(id)arg3 save:(BOOL)arg4;
-(void)receiveError:(id)arg1 forMessage:(id)arg2;
-(void)sendMessages:(id)arg1;
-(id)sentMessagesWithStanzaID:(id)arg1 jid:(id)arg2;
-(id)receivedVoiceMessagesWithStanzaID:(id)arg1;
-(id)blacklistItems;
-(void)blacklistReceived:(id)arg1 userData:(id)arg2;
-(void)blacklistReceivedWithError:(id)arg1 userData:(id)arg2;
-(void)setBlacklistJIDs:(id)arg1;
-(void)setPictureData:(id)arg1 thumbnailData:(id)arg2 pictureID:(id)arg3 forChatSession:(id)arg4 timestamp:(id)arg5 memberJID:(id)arg6;
-(void)groupCreationFinished:(id)arg1 withUserData:(id)arg2;
-(void)groupCreationFailed:(id)arg1 withUserData:(id)arg2;
-(id)chatSessionWithObjectID:(id)arg1;
-(void)groupLeaveFinished:(id)arg1 withUserData:(id)arg2;
-(void)groupLeaveFailed:(id)arg1 withUserData:(id)arg2;
-(void)removeContact:(id)arg1 fromChatSession:(id)arg2 authorJID:(id)arg3;
-(id)groupMemberWithJID:(id)arg1 inChatSession:(id)arg2;
-(void)requestParticipantsForGroupWithJID:(id)arg1;
-(void)memberRequestForGroup:(id)arg1 finishedWithResult:(id)arg2 withUserData:(id)arg3;
-(void)memberRequestFailed:(id)arg1 withUserData:(id)arg2;
-(id)groupMemberWithObjectID:(id)arg1 inContext:(id)arg2;
-(void)groupsRequestCompleted:(id)arg1 withUserData:(id)arg2;
-(void)groupsRequestFailed:(id)arg1 withUserData:(id)arg2;
-(id)chatSessionForJID:(id)arg1;
-(void)groupUpdated:(id)arg1 addedContacts:(id)arg2 failedContacts:(id)arg3 withUserData:(id)arg4;
-(void)groupUpdateFailed:(id)arg1 withUserData:(id)arg2;
-(void)groupPictureSet:(id)arg1 withUserData:(id)arg2;
-(void)groupPictureSetFailed:(id)arg1 withUserData:(id)arg2;
-(void)setSubject:(id)arg1 forChatSession:(id)arg2 byUserWithJID:(id)arg3 name:(id)arg4 date:(id)arg5 sendNotification:(BOOL)arg6;
-(void)cleanDirtyFlagsFinished;
-(void)cleanDirtyFlagsFailed:(id)arg1;
-(void)groupPictureFetched:(id)arg1 picture:(id)arg2 type:(id)arg3 withUserData:(id)arg4;
-(void)groupPictureFetchFailed:(id)arg1 withUserData:(id)arg2;
-(void)requestPictureOfType:(int)arg1 forJID:(id)arg2 pictureID:(id)arg3 userInfo:(id)arg4;
-(void)picturesRequestSuccess:(id)arg1 withUserData:(id)arg2;
-(void)picturesRequestFailed:(id)arg1 withUserData:(id)arg2;
-(id)chatSessionForJID:(id)arg1 inContext:(id)arg2;
-(BOOL)shouldRequestPictureForJID:(id)arg1;
-(id)bestAvailablePictureForJID:(id)arg1 inContext:(id)arg2;
-(id)requestDatesFilePath;
-(id)profilePicRequestDates;
-(id)lastRequestDateForJID:(id)arg1;
-(void)updatePictureDateForJID:(id)arg1;
-(void)deleteFullsizeImageForChatSession:(id)arg1;
-(void)deleteImageForChatSessionWithID:(id)arg1 timestamp:(id)arg2 memberJID:(id)arg3;
-(void)mediaUploaderDidFinish:(id)arg1;
-(void)mediaUploaderDidCancel:(id)arg1;
-(void)mediaUploader:(id)arg1 didFailWithError:(id)arg2;
-(void)mediaUploader:(id)arg1 uploadProgressChanged:(float)arg2;
-(void)mediaDownloadOperation:(id)arg1 didFinishWithData:(id)arg2;
-(void)mediaDownloadOperation:(id)arg1 didFailWithError:(id)arg2;
-(void)mediaDownloadOperation:(id)arg1 downloadProgressChanged:(float)arg2;
-(void)mediaStreamUploaderDidFinish:(id)arg1;
-(void)mediaStreamUploader:(id)arg1 didFailWithError:(id)arg2;
-(id)initWithStorageDelegate:(id)arg1;
-(void)sendChatStorageDidLoadDatabaseNotification;
-(id)chatStore;
-(id)dataRefreshContext;
-(void)migrateChatDatabaseWithCompletionHandler:(id)arg1;
-(void)finishProcessingRemainingMessages;
-(void)cancelAllUploads;
-(void)removeGroupPictureIDs;
-(void)setEnableAutodownload:(BOOL)arg1;
-(id)fullPathToMediaInMessage:(id)arg1;
-(void)disposeDataRefreshContext;
-(void)mergeChanges:(id)arg1;
-(void)searchWithCriteria:(id)arg1 delegate:(id)arg2 selector:(SEL)arg3;
-(id)chatSessions;
-(id)createChatSessionForContact:(id)arg1 JID:(id)arg2;
-(id)chatSessionIDsInContext:(id)arg1;
-(void)storeModifiedChatSession:(id)arg1;
-(void)prepareSessionToUse:(id)arg1;
-(void)preparePropertiesForChatSession:(id)arg1;
-(id)groupSettingsExcludingGroupJID:(id)arg1;
-(void)deleteNotificationsForAllGroups;
-(void)deleteAllChatSessions;
-(void)deleteMessagesInSession:(id)arg1;
-(void)debug_deleteAllOrphanedMessagesNow;
-(void)deleteMessages:(id)arg1 inChatSession:(id)arg2;
-(void)deleteEmptyEligibleChatSessionsImmediately:(BOOL)arg1;
-(void)commitPendingDeletionOfEligibleChatSessions;
-(void)rollbackPendingDeletionOfEligibleChatSessions;
-(unsigned)countMediaInChatSessionWithID:(id)arg1;
-(unsigned)countSentMedia;
-(id)pushToTalkMediaInChatSessionWithID:(id)arg1;
-(void)fetchAllMessagesWithMediaForContactWithID:(int)arg1 completion:(id)arg2;
-(void)fetchLocationMessagesInChatSession:(id)arg1 afterDate:(id)arg2 completion:(id)arg3;
-(id)fullPathForAudioRecord;
-(id)saveImageToTempDirectory:(id)arg1 error:(id*)arg2;
-(id)cpVideoToTempDirectory:(id)arg1 preserveName:(BOOL)arg2 error:(id*)arg3;
-(id)incomingMessageTemplateWithMedia:(BOOL)arg1;
-(id)existingMessagesID:(id)arg1;
-(int)indexOfMessageWithID:(id)arg1;
-(id)messageWithStanzaID:(id)arg1 contactJID:(id)arg2;
-(id)messagesWithStanzaIDs:(id)arg1 inChatSession:(id)arg2;
-(int)compareNumberOfMessagesInChatSession:(id)arg1 withNumber:(unsigned)arg2;
-(unsigned)countAllTextMessages;
-(void)sendMessageWithImage:(id)arg1 inChatSession:(id)arg2 completion:(id)arg3;
-(void)sendAudioTrack:(id)arg1 inChatSession:(id)arg2 completion:(id)arg3;
-(void)sendVideoAtURL:(id)arg1 inChatSession:(id)arg2 completion:(id)arg3;
-(void)sendPlace:(id)arg1 inChatSession:(id)arg2 completion:(id)arg3;
-(id)messageWithAudioURL:(id)arg1 inChatSession:(id)arg2 origin:(int)arg3 durationSeconds:(int)arg4 doNotUpload:(BOOL)arg5 streaming:(BOOL)arg6 streamingHash:(id)arg7 error:(id*)arg8;
-(id)thumbnailDataForMessage:(id)arg1;
-(id)sortedBroadcasts;
-(id)broadcastWithID:(id)arg1;
-(void)sendBroadcast:(id)arg1 toContacts:(id)arg2;
-(void)fetchThumbnailOfSize:(CGSize)arg1 forLocation:(id)arg2 callbackDictionary:(id)arg3;
-(void)fetchDetailsForGooglePlaceWithID:(id)arg1 callbackDictionary:(id)arg2;
-(void)cancelLocationRequestForDelegate:(id)arg1;
-(id)streamingUploadingOperationForMediaAtPath:(id)arg1;
-(void)cancelFileUploadForMessage:(id)arg1;
-(void)cancelMediaDownloadForMessage:(id)arg1;
-(void)receiveChatMessages:(id)arg1;
-(void)forwardMessages:(id)arg1 toChatSession:(id)arg2;
-(void)changeStatus:(int)arg1 forMessagesWithStanzaID:(id)arg2 fromJID:(id)arg3 data:(id)arg4 playSound:(BOOL*)arg5;
-(void)requestBlackListOnlyIfOutOfSync:(BOOL)arg1;
-(id)createChatSessionWithSubject:(id)arg1 groupJID:(id)arg2 ownerJID:(id)arg3 time:(id)arg4;
-(id)createChatSessionForContacts:(id)arg1 subject:(id)arg2 picture:(id)arg3;
-(void)registerGroupOnTheServer:(id)arg1;
-(void)leaveGroupOnTheServer:(id)arg1;
-(id)membersForChatSession:(id)arg1;
-(id)sortedGroupMembersForChatSession:(id)arg1;
-(id)memberJIDsForChatSession:(id)arg1;
-(BOOL)isJID:(id)arg1 memberOfChatSession:(id)arg2;
-(id)groupMembersWithJID:(id)arg1 inContext:(id)arg2;
-(void)removeContactWithJID:(id)arg1 fromChatSession:(id)arg2 authorJID:(id)arg3;
-(id)groupMemberWithObjectID:(id)arg1;
-(id)lastPushNameForGroupMember:(id)arg1 inContext:(id)arg2;
-(id)groupMessagesForJID:(id)arg1;
-(void)requestParticipatingGroups:(BOOL)arg1;
-(id)groupChatSessions;
-(void)requestPicturesForAllGroupsIfNeeded;
-(void)fetchBestAvailablePictureForJID:(id)arg1 returnImage:(BOOL)arg2 completion:(id)arg3;
-(id)bestAvailablePictureForJID:(id)arg1;
-(void)requestListsIfNeeded;
-(void)save;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void).cxx_destruct;
-(id)managedObjectContext;
-(BOOL)loadPersistentStore;
-(BOOL)saveContext:(id)arg1;
-(void)deleteMessage:(id)arg1;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2;
-(int)numberOfGroups;
@end