/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:38 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface XMPPContact : NSObject {
	BOOL _whatsapp; 
	NSString* _number; 
	NSString* _jid; 
}
@property (nonatomic,retain) NSString* number; 				//@synthesize number=_number - In the implementation block
@property (nonatomic,retain) NSString* jid; 				//@synthesize jid=_jid - In the implementation block
@property (assign,nonatomic) BOOL whatsapp; 				//@synthesize whatsapp=_whatsapp - In the implementation block
-(void)setJid:(id)arg1;
-(void)setWhatsapp:(BOOL)arg1;
-(id)description;
-(void).cxx_destruct;
-(void)setNumber:(id)arg1;
@end