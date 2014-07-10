/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:14 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol GCDAsyncSocketDelegate
@optional
-(*)newSocketQueueForConnectionFromAddress({):arg1 onSocket(double):arg2 ;
-(void)socket(id):arg1 didAcceptNewSocket(id):arg2 ;
-(void)socket(id):arg1 didConnectToHost(id):arg2 port(unsigned short):arg3 ;
-(void)socketDidDisconnect(id):arg1 withError(id):arg2 ;
-(void)socket(id):arg1 didReadPartialDataOfLength(unsigned):arg2 tag(long):arg3 ;
-(void)socketDidCloseReadStream(id):arg1 ;
-(void)socket(id):arg1 didReadData(id):arg2 withTag(long):arg3 ;
-(double)socket(id):arg1 shouldTimeoutReadWithTag(long):arg2 elapsed(double):arg3 bytesDone(unsigned):arg4 ;
-(void)socket(id):arg1 didWritePartialDataOfLength(unsigned):arg2 tag(long):arg3 ;
-(void)socket(id):arg1 didWriteDataWithTag(long):arg2 ;
-(double)socket(id):arg1 shouldTimeoutWriteWithTag(long):arg2 elapsed(double):arg3 bytesDone(unsigned):arg4 ;
-(void)socketDidSecure(id):arg1 ;
@end
