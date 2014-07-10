/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:06:03 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PeopleViewController : UIViewController {
	UIBarButtonItem* _buttonSelectAll; 
	NSArray* _sections; 
	NSArray* _searchResults; 
	NSArray* _blockedJIDs; 
	NSIndexPath* _selectedCell; 
	int _numberOfContacts; 
	int _selectedCount; 
	BOOL _dataAvailable; 
	int _groupID; 
	int _pickerMode; 
	int _selectionLimit; 
	NSArray* _selectedContacts; 
	id<PeopleViewControllerDelegate> _delegate; 
	UITableView* _tableViewContacts; 
	UILabel* _labelLoading; 
	UITableViewCell* _cellLoading; 
	UIActivityIndicatorView* _aiLoading; 
	UILabel* _labelContactsTotal; 
	UITableViewCell* _cellContactsTotal; 
	UILabel* _labelNoContacts; 
	UITableViewCell* _cellNoContacts; 
	UIToolbar* _toolbarBottom; 
	UIBarButtonItem* _buttonSelectDone; 
	UIBarButtonItem* _buttonCancel; 
}
@property (assign,nonatomic) int groupID; 				//@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) int pickerMode; 				//@synthesize pickerMode=_pickerMode - In the implementation block
@property (assign,nonatomic) int selectionLimit; 				//@synthesize selectionLimit=_selectionLimit - In the implementation block
@property (nonatomic,retain) NSArray* selectedContacts; 				//@synthesize selectedContacts=_selectedContacts - In the implementation block
@property (assign,nonatomic) id<PeopleViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITableView* tableViewContacts; 				//@synthesize tableViewContacts=_tableViewContacts - In the implementation block
@property (nonatomic,retain) UILabel* labelLoading; 				//@synthesize labelLoading=_labelLoading - In the implementation block
@property (nonatomic,retain) UITableViewCell* cellLoading; 				//@synthesize cellLoading=_cellLoading - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView* aiLoading; 				//@synthesize aiLoading=_aiLoading - In the implementation block
@property (nonatomic,retain) UILabel* labelContactsTotal; 				//@synthesize labelContactsTotal=_labelContactsTotal - In the implementation block
@property (nonatomic,retain) UITableViewCell* cellContactsTotal; 				//@synthesize cellContactsTotal=_cellContactsTotal - In the implementation block
@property (nonatomic,retain) UILabel* labelNoContacts; 				//@synthesize labelNoContacts=_labelNoContacts - In the implementation block
@property (nonatomic,retain) UITableViewCell* cellNoContacts; 				//@synthesize cellNoContacts=_cellNoContacts - In the implementation block
@property (nonatomic,retain) UIToolbar* toolbarBottom; 				//@synthesize toolbarBottom=_toolbarBottom - In the implementation block
@property (nonatomic,retain) UIBarButtonItem* buttonSelectDone; 				//@synthesize buttonSelectDone=_buttonSelectDone - In the implementation block
@property (nonatomic,retain) UIBarButtonItem* buttonCancel; 				//@synthesize buttonCancel=_buttonCancel - In the implementation block
-(void)searchWithCriteria:(id)arg1;
-(void)setupDisplayList;
-(void)checkDataAvailability:(id)arg1;
-(void)adjustSearchbarPositionAndTableviewInsets;
-(void)alignActivityIndicator;
-(void)setCellNoContacts:(id)arg1;
-(void)setLabelNoContacts:(id)arg1;
-(void)setCellContactsTotal:(id)arg1;
-(void)setLabelContactsTotal:(id)arg1;
-(void)setCellLoading:(id)arg1;
-(void)setAiLoading:(id)arg1;
-(void)setLabelLoading:(id)arg1;
-(void)setSelectionLimit:(int)arg1;
-(void)setPickerMode:(int)arg1;
-(void)setSelectedContacts:(id)arg1;
-(void)cancelAction:(id)arg1;
-(BOOL)displaySearchBar;
-(void)selectAllAction:(id)arg1;
-(void)formatButtonText;
-(void)updateTableHeader;
-(void)setTableViewContacts:(id)arg1;
-(void)setToolbarBottom:(id)arg1;
-(void)setButtonSelectDone:(id)arg1;
-(void)setButtonCancel:(id)arg1;
-(void)doneSelectingAction:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(id)sectionIndexTitlesForTableView:(id)arg1;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)searchBarSearchButtonClicked:(id)arg1;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1;
-(void)searchDisplayControllerDidEndSearch:(id)arg1;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1;
-(void)searchDisplayControllerWillEndSearch:(id)arg1;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
-(void).cxx_destruct;
-(void)setGroupID:(int)arg1;
@end