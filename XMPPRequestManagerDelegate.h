/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:14 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol XMPPStreamDelegate
@required
-(void)xmppStreamDidAuthenticate(id):arg1 kind(id):arg2 creation(id):arg3 expiration(id):arg4 serverTimeShift(int):arg5 ;
-(void)xmppStreamDidNotAuthenticate(id):arg1 ;
-(void)xmppStreamDidOpen(id):arg1 ;
-(void)xmppStreamDidClose(id):arg1 ;
-(void)xmppStream(id):arg1 didReceiveIQ(id):arg2 ;
-(void)xmppStream(id):arg1 didReceiveMessages(id):arg2 ;
-(void)xmppStream(id):arg1 didReceivePresence(id):arg2 ;
-(void)xmppStream(id):arg1 didReceiveCustomStanza(id):arg2 ;
-(void)logStanza(id):arg1 recv(BOOL):arg2 ;
-(void)xmppStreamDidAuthenticate(id):arg1 kind(id):arg2 creation(id):arg3 expiration(id):arg4 serverTimeShift(int):arg5 ;
-(void)xmppStreamDidNotAuthenticate(id):arg1 ;
-(void)xmppStreamDidOpen(id):arg1 ;
-(void)xmppStreamDidClose(id):arg1 ;
-(void)xmppStream(id):arg1 didReceiveIQ(id):arg2 ;
-(void)xmppStream(id):arg1 didReceiveMessages(id):arg2 ;
-(void)xmppStream(id):arg1 didReceivePresence(id):arg2 ;
-(void)xmppStream(id):arg1 didReceiveCustomStanza(id):arg2 ;
-(void)logStanza(id):arg1 recv(BOOL):arg2 ;
@end

@protocol XMPPRequestManagerDelegate
@required
-(void)xmppRequestManager(id):arg1 timeoutForRequest(id):arg2 ;
-(void)xmppRequestManager(id):arg1 timeoutForRequest(id):arg2 ;
@end