/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:10 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIGestureRecognizerDelegate.h>

@interface WAMultiSendThumbnailBrowserItemView : UIView <UIGestureRecognizerDelegate> {
	UIImageView* _overlayView; 
	BOOL _selected; 
	CGPoint _centerBeforeDraggingInSuperSuperviewCoordinates; 
	UIPanGestureRecognizer* _panGesture; 
	UITapGestureRecognizer* _singleTapGesture; 
	UILongPressGestureRecognizer* _longPressGesture; 
	int _index; 
	unsigned _state; 
	id<WAMultiSendThumbnailBrowserItemViewDelegate> _delegate; 
	UIImageView* _backgroundImageView; 
}
@property (assign,nonatomic) int index; 				//@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned state; 				//@synthesize state=_state - In the implementation block
@property (assign,nonatomic) id<WAMultiSendThumbnailBrowserItemViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIImageView* overlayView; 				//@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,copy) UIImageView* backgroundImageView; 				//@synthesize backgroundImageView=_backgroundImageView - In the implementation block
+(void)addWobbleAnimationToView:(id)arg1;
-(void)moveToCenter:(CGPoint)arg1 animated:(BOOL)arg2;
-(void)animateOutWithCompletionHandler:(id)arg1;
-(void)viewWasLongPressed:(id)arg1;
-(void)viewDidDrag:(id)arg1;
-(void)viewWasTapped:(id)arg1;
-(void)stopWobble;
-(void)startWobble;
-(id)initWithFrame:(CGRect)arg1;
-(void)setDelegate:(id)arg1;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
-(void)setState:(unsigned)arg1;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void).cxx_destruct;
-(void)setIndex:(int)arg1;
@end