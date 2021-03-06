/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:06:00 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIActionSheetDelegate.h>
#import <MFMailComposeViewControllerDelegate.h>
#import <MFMessageComposeViewControllerDelegate.h>

@interface PersonViewController : UIViewController <UIActionSheetDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate> {
	int _displayedContactID; 
	NSString* _highlightedWhatsAppID; 
	NSMutableArray* _personData; 
	NSMutableArray* _phonesForFavs; 
	NSMutableArray* _phonesForChat; 
	NSMutableArray* _phonesWithChatHistory; 
	NSMutableArray* _contactEmails; 
	NSMutableString* _contactName; 
	unsigned _selectedPhoneIndex; 
	BOOL _showTableFooter; 
	BOOL _enableClearButton; 
	WAProgressHUD* _progressHUD; 
	BOOL _presentingAllMediaInProgress; 
	WAMediaManager* _mediaManager; 
	UITableView* _tableViewMain; 
	UIView* _headerView; 
	UIButton* _buttonProfilePhoto; 
	UIView* _titlesView; 
	UILabel* _textLabelFullName; 
	UILabel* _textLabelPhonetic; 
	UILabel* _textLabelNickname; 
	UILabel* _textLabelJob; 
	UILabel* _textLabelCompany; 
}
@property (nonatomic,retain) WAMediaManager* mediaManager; 				//@synthesize mediaManager=_mediaManager - In the implementation block
@property (nonatomic,retain) UITableView* tableViewMain; 				//@synthesize tableViewMain=_tableViewMain - In the implementation block
@property (nonatomic,retain) UIView* headerView; 				//@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIButton* buttonProfilePhoto; 				//@synthesize buttonProfilePhoto=_buttonProfilePhoto - In the implementation block
@property (nonatomic,retain) UIView* titlesView; 				//@synthesize titlesView=_titlesView - In the implementation block
@property (nonatomic,retain) UILabel* textLabelFullName; 				//@synthesize textLabelFullName=_textLabelFullName - In the implementation block
@property (nonatomic,retain) UILabel* textLabelPhonetic; 				//@synthesize textLabelPhonetic=_textLabelPhonetic - In the implementation block
@property (nonatomic,retain) UILabel* textLabelNickname; 				//@synthesize textLabelNickname=_textLabelNickname - In the implementation block
@property (nonatomic,retain) UILabel* textLabelJob; 				//@synthesize textLabelJob=_textLabelJob - In the implementation block
@property (nonatomic,retain) UILabel* textLabelCompany; 				//@synthesize textLabelCompany=_textLabelCompany - In the implementation block
+(id)sharedTimePeriodFormatter;
+(id)sharedDateFormatter;
+(id)sharedDateTimeFormatter;
-(void)chatStorage:(id)arg1 didUpdateChatSession:(id)arg2;
-(void)showHUD:(id)arg1;
-(void)removeHUD;
-(void)addPhoneToFavorites:(id)arg1;
-(id)initWithContactABID:(int)arg1 whatsAppID:(id)arg2;
-(void)checkDataAvailability:(id)arg1;
-(void)inviteViaSMS;
-(void)reloadProfilePhoto;
-(void)setupPersonViewHeader;
-(void)setupPersonData;
-(void)displayComposerSheet:(id)arg1 subject:(id)arg2 body:(id)arg3;
-(void)launchMailAppOnDevice:(id)arg1 subject:(id)arg2 body:(id)arg3;
-(void)emailToAddress:(id)arg1 subject:(id)arg2 body:(id)arg3;
-(void)emailChatHistoryWithMedia:(BOOL)arg1;
-(void)askToAttachMedia;
-(void)viewProfilePhoto:(id)arg1;
-(void)prepareMediaManagerIfNeeded;
-(void)loadMedia:(BOOL)arg1 completion:(id)arg2;
-(void)startChatWithPhoneID:(id)arg1 contact:(id)arg2;
-(void)setMediaManager:(id)arg1;
-(void)mediaManagerDidDeleteMedia:(id)arg1;
-(BOOL)arrayContainsMessagesFromCurrentPerson:(id)arg1;
-(void)inviteContact;
-(void)emailChatHistory;
-(void)clearChatHistory;
-(void)addToFavorites;
-(void)chatWithContact;
-(void)viewAllMedia;
-(void)chatStorage:(id)arg1 didAddMessages:(id)arg2;
-(void)setTableViewMain:(id)arg1;
-(void)setButtonProfilePhoto:(id)arg1;
-(void)setTitlesView:(id)arg1;
-(void)setTextLabelFullName:(id)arg1;
-(void)setTextLabelPhonetic:(id)arg1;
-(void)setTextLabelNickname:(id)arg1;
-(void)setTextLabelJob:(id)arg1;
-(void)setTextLabelCompany:(id)arg1;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(void)applicationDidEnterBackground:(id)arg1;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)setHeaderView:(id)arg1;
-(void).cxx_destruct;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
@end