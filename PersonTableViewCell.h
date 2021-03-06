/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:06:02 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PersonTableViewCell : UITableViewCell {
	BOOL _personSelected; 
	BOOL _italicName; 
	BOOL _italicStatus; 
	UIImageView* _imageViewCheckMark; 
	WAContactNameLabel* _nameLabel; 
	UILabel* _statusLabel; 
	UILabel* _detailLabel; 
}
@property (nonatomic,copy) UIImageView* imageViewCheckMark; 				//@synthesize imageViewCheckMark=_imageViewCheckMark - In the implementation block
@property (nonatomic,copy) WAContactNameLabel* nameLabel; 				//@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,copy) UILabel* statusLabel; 				//@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,copy) UILabel* detailLabel; 				//@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,nonatomic) BOOL personSelected; 				//@synthesize personSelected=_personSelected - In the implementation block
@property (assign,nonatomic) BOOL italicName; 				//@synthesize italicName=_italicName - In the implementation block
@property (assign,nonatomic) BOOL italicStatus; 				//@synthesize italicStatus=_italicStatus - In the implementation block
-(void)setItalicName:(BOOL)arg1;
-(void)setPersonSelected:(BOOL)arg1;
-(void)setItalicStatus:(BOOL)arg1;
-(void)updateBackgroundColor;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(id)accessibilityLabel;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)isAccessibilityElement;
-(void).cxx_destruct;
@end