/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:47 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <AVAudioPlayerDelegate.h>

@interface SoundPicker : UITableViewController <AVAudioPlayerDelegate> {
	NSIndexPath* _indexPathForSelectedSound; 
	NSMutableDictionary* _audioPlayers; 
	AVAudioPlayer* _currentPlayer; 
	id<SoundPickerDelegate> _delegate; 
	int _tag; 
	NSString* _viewTitle; 
	UILabel* _navItemTitle; 
}
@property (assign,nonatomic) int tag; 				//@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSString* viewTitle; 				//@synthesize viewTitle=_viewTitle - In the implementation block
@property (nonatomic,retain) UILabel* navItemTitle; 				//@synthesize navItemTitle=_navItemTitle - In the implementation block
-(void)cancelAction:(id)arg1;
-(void)saveAction:(id)arg1;
-(id)audioPlayers;
-(void)setNavItemTitle:(id)arg1;
-(void)adjustTitleFont;
-(id)audioPlayerForFilename:(id)arg1;
-(id)initWithDelegate:(id)arg1 selectedSoundFilename:(id)arg2;
-(void)setViewTitle:(id)arg1;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(void)didReceiveMemoryWarning;
-(void)setTag:(int)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(int)arg1;
-(void)fadeOut;
-(void).cxx_destruct;
@end