/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:25 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CrashLogger : NSObject {
}
+(BOOL)crashOccurred;
+(void)uploadPreviousLogInBackgroundThread;
+(void)setCrashOccurred:(BOOL)arg1;
+(void)uploadActiveLogData;
+(void)uploadPreviousLogData;
+(void)uploadDataAt:(id)arg1;
+(void)fetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
+(void)performUploadSendingActiveLog:(id)arg1;
+(void)uploadActiveLogInBackgroundThread;
@end