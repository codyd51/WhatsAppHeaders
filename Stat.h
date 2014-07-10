/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:38 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface Stat : NSObject {
	int _messagesSent; 
	int _messagesReceived; 
	NSDate* _lastReset; 
	long long _mediaBytesSent; 
	long long _mediaBytesReceived; 
	long long _systemBytesSent; 
	long long _systemBytesReceived; 
}
@property (assign,nonatomic) long long mediaBytesSent; 				//@synthesize mediaBytesSent=_mediaBytesSent - In the implementation block
@property (assign,nonatomic) long long mediaBytesReceived; 				//@synthesize mediaBytesReceived=_mediaBytesReceived - In the implementation block
@property (assign,nonatomic) long long systemBytesSent; 				//@synthesize systemBytesSent=_systemBytesSent - In the implementation block
@property (assign,nonatomic) long long systemBytesReceived; 				//@synthesize systemBytesReceived=_systemBytesReceived - In the implementation block
@property (assign,nonatomic) int messagesSent; 				//@synthesize messagesSent=_messagesSent - In the implementation block
@property (assign,nonatomic) int messagesReceived; 				//@synthesize messagesReceived=_messagesReceived - In the implementation block
@property (nonatomic,copy) NSDate* lastReset; 				//@synthesize lastReset=_lastReset - In the implementation block
+(id)sharedManager;
-(void)setMediaBytesSent:(long long)arg1;
-(void)setMediaBytesReceived:(long long)arg1;
-(void)setSystemBytesSent:(long long)arg1;
-(void)setSystemBytesReceived:(long long)arg1;
-(void)setMessagesSent:(int)arg1;
-(void)setMessagesReceived:(int)arg1;
-(void)save;
-(void)reset:(BOOL)arg1;
-(id)init;
-(void).cxx_destruct;
@end