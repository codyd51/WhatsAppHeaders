/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:21 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WADebugMediaViewController : UIViewController {
	BOOL _reloadChatsOnDisappear; 
	UISlider* _cropInsetSlider; 
	UILabel* _cropInsetLabel; 
}
@property (nonatomic,retain) UISlider* cropInsetSlider; 				//@synthesize cropInsetSlider=_cropInsetSlider - In the implementation block
@property (nonatomic,retain) UILabel* cropInsetLabel; 				//@synthesize cropInsetLabel=_cropInsetLabel - In the implementation block
-(void)cropInsetChanged:(id)arg1;
-(void)setCropInsetSlider:(id)arg1;
-(void)setCropInsetLabel:(id)arg1;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1;
-(void).cxx_destruct;
@end