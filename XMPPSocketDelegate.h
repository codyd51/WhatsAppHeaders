/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:10 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol XMPPSocketDelegate
@optional
-(void)onSocket(id):arg1 didConnectToHost(id):arg2 port(unsigned short):arg3 ;
-(void)onSocketDidDisconnect(id):arg1 ;
-(void)onSocket(id):arg1 didReadData(id):arg2 withTag(long):arg3 ;
-(void)onSocket(id):arg1 didWriteDataWithTag(long):arg2 ;
-(void)onSocket(id):arg1 willConnectToHost(id):arg2 ;
@end
