/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:11 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAPrivacyPolicy : NSObject {
	unsigned[3] _privacySetting; 
	int[3] _pendingRequestId; 
	BOOL _needRefetch; 
}
+(void)resetPolicy;
+(id)sharedPolicy;
+(id)stringForSetting:(unsigned)arg1;
-(unsigned)settingForCategory:(unsigned)arg1;
-(void)setPrivacy:(unsigned)arg1 forCategory:(unsigned)arg2;
-(void)loadPrivacySettingsIfNeeded;
-(void)ignoreResultsOfPendingRequests;
-(void)resetValues;
-(void)privacyQuerySucceeded:(id)arg1 userData:(id)arg2;
-(void)privacyQueryFailedWithError:(id)arg1 userData:(id)arg2;
-(void)privacySetSucceeded:(id)arg1 userData:(id)arg2;
-(void)privacySetFailedWithError:(id)arg1 userData:(id)arg2;
-(void)processPrivacySettings:(id)arg1 error:(id)arg2 userData:(id)arg3;
-(void)processPrivacySettingsSetResult:(id)arg1 error:(id)arg2 userData:(id)arg3;
-(id)init;
@end