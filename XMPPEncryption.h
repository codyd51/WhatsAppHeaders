/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:09 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface XMPPEncryption : NSObject {
	XMPPRC4Coder* _incoming; 
	XMPPRC4Coder* _outgoing; 
}
@property (nonatomic,copy) XMPPRC4Coder* incoming; 				//@synthesize incoming=_incoming - In the implementation block
@property (nonatomic,copy) XMPPRC4Coder* outgoing; 				//@synthesize outgoing=_outgoing - In the implementation block
+(id)PBKDF2WithPassword:(id)arg1 andSalt:(id)arg2 derivedKeyLength:(int)arg3 rounds:(int)arg4;
+(id)MACWithKey:(id)arg1 andData:(id)arg2 sequence:(int)arg3;
-(id)init;
-(void).cxx_destruct;
@end