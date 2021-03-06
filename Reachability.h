/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:53 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface Reachability : NSObject {
	struct __SCNetworkReachability* _reachabilityRef; 
	id<ReachabilityDelegate> _delegate; 
	NSThread* _thread; 
	NSNumber* _networkStatus; 
	NSNumber* _connectionRequired; 
}
@property (retain) NSNumber* networkStatus; 				//@synthesize networkStatus=_networkStatus - In the implementation block
@property (retain) NSNumber* connectionRequired; 				//@synthesize connectionRequired=_connectionRequired - In the implementation block
+(id)format:(int)arg1;
-(void)setConnectionRequired:(id)arg1;
-(void)setNetworkStatus:(id)arg1;
-(BOOL)isConnectionRequired;
-(int)currentNetworkStatus;
-(void)networkStatusChanged;
-(void)dealloc;
-(void).cxx_destruct;
-(id)initWithDelegate:(id)arg1;
@end