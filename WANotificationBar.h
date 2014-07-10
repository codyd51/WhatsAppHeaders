/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:26 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WANotificationBar : UIControl {
	UIButton* _buttonClose; 
	UIImageView* _imageViewContact; 
	NSManagedObjectID* _messageID; 
	NSString* _chatName; 
	NSString* _senderName; 
	NSString* _messageText; 
	NSString* _contactJID; 
	NSString* _stanzaID; 
	UIFont* _chatNameFont; 
	UIFont* _messageFontPortrait; 
	UIFont* _messageFontLandscape; 
	UIImage* _portraitBG; 
	UIImage* _portraitBGHl; 
	UIImage* _landscapeBG; 
	UIImage* _landscapeBGHl; 
	BOOL _isPortrait; 
	BOOL _removePending; 
	BOOL _showLocationIcon; 
	BOOL _animatingIn; 
	BOOL _animatingOut; 
	BOOL _delayed; 
}
@property (nonatomic,copy) NSManagedObjectID* messageID; 				//@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString* contactJID; 				//@synthesize contactJID=_contactJID - In the implementation block
@property (nonatomic,copy) NSString* stanzaID; 				//@synthesize stanzaID=_stanzaID - In the implementation block
@property (nonatomic,retain) UIImage* contactImage; 
@property (nonatomic,copy) BOOL animatingIn; 				//@synthesize animatingIn=_animatingIn - In the implementation block
@property (nonatomic,copy) BOOL animatingOut; 				//@synthesize animatingOut=_animatingOut - In the implementation block
@property (assign,nonatomic) BOOL delayed; 				//@synthesize delayed=_delayed - In the implementation block
-(void)setDelayed:(BOOL)arg1;
-(void)showInView:(id)arg1 animated:(BOOL)arg2;
-(void)hideAnimated:(BOOL)arg1;
-(void)closeAction:(id)arg1;
-(void)touchCancelAction:(id)arg1;
-(id)portraitBGHl;
-(id)portraitBG;
-(id)landscapeBGHl;
-(id)landscapeBG;
-(id)chatNameFont;
-(id)messageFontPortrait;
-(id)messageFontLandscape;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1;
-(id)init;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
-(void)setHighlighted:(BOOL)arg1;
-(void)setInterfaceOrientation:(int)arg1;
-(float)defaultHeight;
-(void)hide;
-(void)setMessage:(id)arg1;
-(id)currentBackgroundImage;
-(void)remove;
-(void).cxx_destruct;
-(void)setContactImage:(id)arg1;
-(void)stopAnimations;
@end