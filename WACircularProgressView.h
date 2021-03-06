/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:25 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WACircularProgressView : UIView {
	float _barWidth; 
	UIColor* _progressColor; 
	UIColor* _trackColor; 
}
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) float barWidth; 				//@synthesize barWidth=_barWidth - In the implementation block
@property (nonatomic,retain) UIColor* progressColor; 				//@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor* trackColor; 				//@synthesize trackColor=_trackColor - In the implementation block
+(Class)layerClass;
-(void)setTrackColor:(id)arg1;
-(void)setBarWidth:(float)arg1;
-(float)presentationValueForProgress;
-(id)barColor;
-(id)initWithFrame:(CGRect)arg1;
-(void)drawRect:(CGRect)arg1;
-(void)setProgress:(float)arg1;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2;
-(void).cxx_destruct;
-(void)setProgressColor:(id)arg1;
@end