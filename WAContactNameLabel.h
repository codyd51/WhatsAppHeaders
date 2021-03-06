/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:58 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAContactNameLabel : UIView {
	int _lineBreakMode; 
	BOOL _reverseNameSearch; 
	BOOL _highlighted; 
	NSString* _text; 
	NSString* _highlightedPart; 
	UIFont* _font; 
	UIColor* _textColor; 
	UIColor* _highlightedTextColor; 
	int _textAlignment; 
}
@property (nonatomic,retain) NSString* text; 				//@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString* highlightedPart; 				//@synthesize highlightedPart=_highlightedPart - In the implementation block
@property (nonatomic,retain) UIFont* font; 				//@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor* textColor; 				//@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor* highlightedTextColor; 				//@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (assign,nonatomic) int textAlignment; 				//@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL reverseNameSearch; 				//@synthesize reverseNameSearch=_reverseNameSearch - In the implementation block
@property (assign,nonatomic) BOOL highlighted; 				//@synthesize highlighted=_highlighted - In the implementation block
-(void)setHighlightedPart:(id)arg1;
-(void)setReverseNameSearch:(BOOL)arg1;
-(void)drawRect:(CGRect)arg1;
-(id)init;
-(void)setFrame:(CGRect)arg1;
-(void)setTextColor:(id)arg1;
-(void)setFont:(id)arg1;
-(void)setTextAlignment:(int)arg1;
-(void)setText:(id)arg1;
-(void)setHighlighted:(BOOL)arg1;
-(void)setHighlightedTextColor:(id)arg1;
-(void).cxx_destruct;
@end