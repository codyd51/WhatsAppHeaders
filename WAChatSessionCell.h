/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:08 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAChatSessionCell : UITableViewCell {
	UILabel* _messageLabel; 
	NSString* _messageText; 
	UILabel* _unreadLabel; 
	UIView* _viewUnread; 
	UIImageView* _muteIndicator; 
	UIImageView* _locationIcon; 
	UIImageView* _pushToTalkIcon; 
	UIImageView* _imageViewContactPicture; 
	_WAChatSessionCellEditOptionsView* _editOptionsView; 
	UIButton* _deleteButton; 
	BOOL _removeAllDeleteConfirmationViewsOnReuse; 
	BOOL _showLocationIcon; 
	BOOL _muted; 
	BOOL _italic; 
	BOOL _showMoreButton; 
	NSString* _jid; 
	UILabel* _nameLabel; 
	UILabel* _senderLabel; 
	UILabel* _timeLabel; 
	int _unreadCount; 
	int _pushToTalkIconType; 
	int _chatActivity; 
	int _contentVerticalAlignment; 
	id<WAChatSessionCellDelegate> _delegate; 
}
@property (nonatomic,retain) NSString* jid; 				//@synthesize jid=_jid - In the implementation block
@property (nonatomic,copy) UILabel* nameLabel; 				//@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,copy) UILabel* senderLabel; 				//@synthesize senderLabel=_senderLabel - In the implementation block
@property (nonatomic,copy) UILabel* timeLabel; 				//@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) NSString* messageText; 				//@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,retain) UIImage* contactImage; 
@property (assign,nonatomic) int unreadCount; 				//@synthesize unreadCount=_unreadCount - In the implementation block
@property (assign,nonatomic) BOOL showLocationIcon; 				//@synthesize showLocationIcon=_showLocationIcon - In the implementation block
@property (assign,nonatomic) int pushToTalkIconType; 				//@synthesize pushToTalkIconType=_pushToTalkIconType - In the implementation block
@property (assign,nonatomic) BOOL muted; 				//@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) int chatActivity; 				//@synthesize chatActivity=_chatActivity - In the implementation block
@property (assign,nonatomic) BOOL italic; 				//@synthesize italic=_italic - In the implementation block
@property (assign,nonatomic) BOOL showMoreButton; 				//@synthesize showMoreButton=_showMoreButton - In the implementation block
@property (assign,nonatomic) int contentVerticalAlignment; 				//@synthesize contentVerticalAlignment=_contentVerticalAlignment - In the implementation block
@property (assign,nonatomic) id<WAChatSessionCellDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
-(void)setJid:(id)arg1;
-(void)setChatActivity:(int)arg1;
-(void)setShowLocationIcon:(BOOL)arg1;
-(void)setPushToTalkIconType:(int)arg1;
-(void)setMessageText:(id)arg1;
-(void)setShowMoreButton:(BOOL)arg1;
-(id)privateScrollView;
-(void)swipeToDelete:(id)arg1;
-(void)showMoreOptions:(id)arg1;
-(void)setMuted:(BOOL)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(id)accessibilityLabel;
-(void)setContentVerticalAlignment:(int)arg1;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void)prepareForReuse;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void)didTransitionToState:(unsigned)arg1;
-(void)willTransitionToState:(unsigned)arg1;
-(BOOL)isAccessibilityElement;
-(void).cxx_destruct;
-(void)setContactImage:(id)arg1;
-(void)setUnreadCount:(int)arg1;
-(void)setItalic:(BOOL)arg1;
@end