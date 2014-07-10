/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:34 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MFMailComposeViewControllerDelegate.h>
#import <MFMessageComposeViewControllerDelegate.h>
#import <UIActionSheetDelegate.h>

@interface WAContactInfoViewController : UITableViewController <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, UIActionSheetDelegate> {
	NSManagedObjectID* _waContactID; 
	WAContactInfoNameUnit* _contactNameUnit; 
	WAContactInfoPhotoUnit* _contactPhotoUnit; 
	NSArray* _contactInfoSections; 
	int _actionsSectionIndex; 
	UIView* _actionsSectionHeaderView; 
	WAContactInfoPageAction* _clearChatHistoryAction; 
	WAContactInfoPageAction* _emailChatHistoryAction; 
	WAContactInfoPageAction* _viewAllMediaAction; 
	int _selectedPhoneIndex; 
	NSArray* _phonesWithChatHistory; 
	NSArray* _whatsAppPhoneIDs; 
	NSArray* _inviteUnits; 
	BOOL _presentingAllMediaInProgress; 
	WAMediaManager* _mediaManager; 
	NSString* _highlightedWhatsAppID; 
	WAContactInfoTableHeaderView* _tableHeader; 
}
@property (nonatomic,retain) WAMediaManager* mediaManager; 				//@synthesize mediaManager=_mediaManager - In the implementation block
@property (nonatomic,copy) NSString* highlightedWhatsAppID; 				//@synthesize highlightedWhatsAppID=_highlightedWhatsAppID - In the implementation block
@property (nonatomic,retain) WAContactInfoTableHeaderView* tableHeader; 				//@synthesize tableHeader=_tableHeader - In the implementation block
+(id)controllerForWAContact:(id)arg1 whatsAppID:(id)arg2;
-(void)emailChatHistoryWithMedia:(BOOL)arg1;
-(void)askToAttachMedia;
-(void)prepareMediaManagerIfNeeded;
-(void)loadMedia:(BOOL)arg1 completion:(id)arg2;
-(void)setMediaManager:(id)arg1;
-(void)mediaManagerDidDeleteMedia:(id)arg1;
-(void)inviteContact;
-(void)emailChatHistory;
-(void)clearChatHistory;
-(void)viewAllMedia;
-(void)setTableHeader:(id)arg1;
-(id)actionsSectionHeaderView;
-(id)initWithWAContact:(id)arg1 whatsAppID:(id)arg2;
-(void)setWAContact:(id)arg1;
-(void)rebuildContactInfoDataUnits;
-(void)sendMessageToContact;
-(id)waContact;
-(void)sendMessageToWAPhoneWithID:(id)arg1;
-(void)inviteContactViaPhoneOrEmail:(id)arg1;
-(void)inviteViaSMS:(id)arg1;
-(void)inviteViaEmail:(id)arg1;
-(void)whatsAppButtonTapped:(id)arg1 withEvent:(id)arg2;
-(void)profilePictureTapped:(id)arg1 withEvent:(id)arg2;
-(void)callButtonTapped:(id)arg1 withEvent:(id)arg2;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void).cxx_destruct;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
@end