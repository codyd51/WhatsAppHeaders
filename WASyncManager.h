/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:32 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WASyncManager : NSObject {
	id<WASyncManagerDelegate> _delegate; 
	NSTimer* _syncScheduleTimer; 
	NSTimer* _fullSyncCheckTimer; 
	NSMutableArray* _syncHistory; 
	NSDate* _syncBackoffUntil; 
	double _syncStartTime; 
	int _syncMode; 
	int _syncContext; 
	NSDate* _nextSyncDate; 
	int _nextSyncMode; 
	int _nextSyncContext; 
	BOOL _syncEnabled; 
	BOOL _syncInProgress; 
	XMPPConnection* _connection; 
	WAContactsStorage* _storage; 
}
@property (nonatomic,retain) XMPPConnection* connection; 				//@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) WAContactsStorage* storage; 				//@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy) BOOL syncEnabled; 				//@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (nonatomic,copy) BOOL syncInProgress; 				//@synthesize syncInProgress=_syncInProgress - In the implementation block
-(void)setStorage:(id)arg1;
-(void)enableSync;
-(void)requestBackgroundDeltaSync;
-(void)requestInteractiveSyncWithMode:(int)arg1;
-(void)disableSync;
-(void)setNextFullSyncDate:(id)arg1;
-(void)syncSheduleTimerRountine:(id)arg1;
-(void)loadSyncHistory;
-(void)cleanSyncHistory;
-(BOOL)willRunImmediateSyncWithMode:(int)arg1 context:(int)arg2;
-(void)saveSyncHistory;
-(void)syncFinishedWithContacts:(id)arg1 wait:(id)arg2 version:(id)arg3 userInfo:(id)arg4;
-(void)syncFailedWithError:(id)arg1 backoff:(id)arg2 userInfo:(id)arg3;
-(void)fullSyncTimerRoutine:(id)arg1;
-(void).cxx_destruct;
-(void)setConnection:(id)arg1;
-(void)resetSync;
-(id)initWithDelegate:(id)arg1;
@end