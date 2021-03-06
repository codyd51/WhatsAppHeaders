/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:38 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAVCardBubbleView : WABubbleView {
	NSString* _contactName; 
	UIImage* _contactImage; 
}
@property (nonatomic,retain) NSString* contactName; 				//@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,retain) UIImage* contactImage; 				//@synthesize contactImage=_contactImage - In the implementation block
+(CGSize)sizeForMaxWidth:(float)arg1 timestampString:(id)arg2 messageStatus:(int)arg3 fromName:(id)arg4 pushName:(id)arg5 showListIcon:(BOOL)arg6 isIncoming:(BOOL)arg7;
+(float)heightForName:(id)arg1;
-(id)initWithIncomingState:(BOOL)arg1 delegate:(id)arg2;
-(void)drawRect:(CGRect)arg1;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(void).cxx_destruct;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setContactImage:(id)arg1;
-(void)setContactName:(id)arg1;
@end