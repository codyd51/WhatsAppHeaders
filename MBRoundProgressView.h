/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:41 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBRoundProgressView : UIView {
	float _progress; 
	BOOL _annular; 
}
@property (assign,nonatomic) float progress; 
@property (assign,getter=isAnnular,nonatomic) BOOL annular; 
-(void)setAnnular:(BOOL)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)drawRect:(CGRect)arg1;
-(id)init;
-(void)setProgress:(float)arg1;
@end