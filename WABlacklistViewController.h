/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:21 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SinglePersonPickerDelegate.h>

@interface WABlacklistViewController : UITableViewController <SinglePersonPickerDelegate> {
	NSMutableArray* _blacklistItems; 
	NSMutableArray* _synchronizedItems; 
	BOOL _synchronizationInProgress; 
	BOOL _needsSynchronization; 
	id<WABlacklistViewControllerDelegate> _delegate; 
}
@property (assign,nonatomic) id<WABlacklistViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
+(id)controller;
-(id)excludedJIDsForSinglePersonPicker:(id)arg1;
-(void)singlePersonPickerDidCancel:(id)arg1;
-(void)singlePersonPicker:(id)arg1 didSelectContact:(id)arg2;
-(void)connectionStatusChanged:(id)arg1;
-(void)reloadBlacklistItems;
-(void)blacklistSavedWithUserData:(id)arg1;
-(void)blacklistSavedWithError:(id)arg1 userData:(id)arg2;
-(void)updateInterface;
-(BOOL)canMakeChanges;
-(void)sendBlacklistToServer;
-(void)showUnableToMakeChangesError;
-(void)removeBlacklistItem:(id)arg1;
-(void)addPerson;
-(void)addBlacklistItem:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
-(void)synchronize;
-(id)initWithStyle:(int)arg1;
-(void)viewDidLoad;
-(void).cxx_destruct;
@end