/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:10 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <XMPPSocketDelegate.h>

@interface XMPPStream : NSObject <XMPPSocketDelegate> {
	XMPPBinaryCoder* _binaryCoder; 
	NSMutableData* _incomingBuffer; 
	XMPPSocket* _socket; 
	ExecutionTimeProfiler* _profiler; 
	NSMutableData* _nextToken; 
	NSMutableArray* _messages; 
	BOOL _streamOpened; 
	BOOL _firstPresenceReceived; 
	BOOL _contactsAccessAllowed; 
	BOOL _xmppPassiveMode; 
	id<XMPPStreamDelegate> _delegate; 
	NSDate* _lastNetworkActivity; 
	NSString* _xmppUser; 
	NSData* _xmppPassword; 
	NSString* _xmppHost; 
}
@property (assign,nonatomic) id<XMPPStreamDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) XMPPSocket* socket; 
@property (nonatomic,retain) NSDate* lastNetworkActivity; 				//@synthesize lastNetworkActivity=_lastNetworkActivity - In the implementation block
@property (assign,nonatomic) BOOL contactsAccessAllowed; 				//@synthesize contactsAccessAllowed=_contactsAccessAllowed - In the implementation block
@property (nonatomic,retain) NSString* xmppUser; 				//@synthesize xmppUser=_xmppUser - In the implementation block
@property (nonatomic,retain) NSData* xmppPassword; 				//@synthesize xmppPassword=_xmppPassword - In the implementation block
@property (nonatomic,retain) NSString* xmppHost; 				//@synthesize xmppHost=_xmppHost - In the implementation block
@property (assign,nonatomic) BOOL xmppPassiveMode; 				//@synthesize xmppPassiveMode=_xmppPassiveMode - In the implementation block
-(void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
-(void)onSocketDidDisconnect:(id)arg1;
-(void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
-(void)onSocket:(id)arg1 didWriteDataWithTag:(long)arg2;
-(void)onSocket:(id)arg1 willConnectToHost:(id)arg2;
-(void)setXmppHost:(id)arg1;
-(void)setXmppUser:(id)arg1;
-(void)setXmppPassiveMode:(BOOL)arg1;
-(void)setContactsAccessAllowed:(BOOL)arg1;
-(void)dropStream;
-(void)sendArray:(id)arg1;
-(void)setXmppPassword:(id)arg1;
-(void)sendAndCloseStream:(id)arg1;
-(void)internalSend:(id)arg1 encrypted:(BOOL)arg2;
-(void)outputProfilingResults;
-(void)processMessages;
-(void)setLastNetworkActivity:(id)arg1;
-(void)processElements:(id)arg1;
-(void)send:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void).cxx_destruct;
-(void)open;
-(void)closeStream;
@end