/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:06:05 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ABNewPersonViewControllerDelegate.h>

@interface ContactsViewController : UIViewController <ABNewPersonViewControllerDelegate> {
	NSArray* _sections; 
	NSArray* _searchResults; 
	int _numberOfContacts; 
	NSIndexPath* _selectedRowIndexPath; 
	BOOL _dataAvailable; 
	BOOL _needsUpdateUI; 
	int _groupID; 
	UITableView* _tableView; 
	UIView* _viewMyNumber; 
	WAContactNameLabel* _labelMyNumber; 
	UITableViewCell* _cellNoContacts; 
	UILabel* _labelNoContacts; 
	UITableViewCell* _cellContactsTotal; 
	UILabel* _labelContactsTotal; 
	UITableViewCell* _cellLoading; 
	UIActivityIndicatorView* _aiLoading; 
	UILabel* _labelLoading; 
}
@property (assign,nonatomic) int groupID; 				//@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) UITableView* tableView; 				//@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView* viewMyNumber; 				//@synthesize viewMyNumber=_viewMyNumber - In the implementation block
@property (nonatomic,retain) WAContactNameLabel* labelMyNumber; 				//@synthesize labelMyNumber=_labelMyNumber - In the implementation block
@property (nonatomic,retain) UITableViewCell* cellNoContacts; 				//@synthesize cellNoContacts=_cellNoContacts - In the implementation block
@property (nonatomic,retain) UILabel* labelNoContacts; 				//@synthesize labelNoContacts=_labelNoContacts - In the implementation block
@property (nonatomic,retain) UITableViewCell* cellContactsTotal; 				//@synthesize cellContactsTotal=_cellContactsTotal - In the implementation block
@property (nonatomic,retain) UILabel* labelContactsTotal; 				//@synthesize labelContactsTotal=_labelContactsTotal - In the implementation block
@property (nonatomic,retain) UITableViewCell* cellLoading; 				//@synthesize cellLoading=_cellLoading - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView* aiLoading; 				//@synthesize aiLoading=_aiLoading - In the implementation block
@property (nonatomic,retain) UILabel* labelLoading; 				//@synthesize labelLoading=_labelLoading - In the implementation block
-(void)leaveSearchMode;
-(void)searchWithCriteria:(id)arg1;
-(void)saveTableScrollPosition;
-(void)setNeedsUpdateUI;
-(void)restoreTableScrollPosition;
-(void)fontSizeDidChange:(id)arg1;
-(void)contactsStorageDidUpdateStatus:(id)arg1;
-(void)loadContactsInSection:(id)arg1;
-(void)setupDisplayList;
-(void)addContactAction:(id)arg1;
-(void)checkDataAvailability:(id)arg1;
-(void)setLabelMyNumber:(id)arg1;
-(void)adjustSearchbarPositionAndTableviewInsets;
-(void)setViewMyNumber:(id)arg1;
-(void)alignActivityIndicator;
-(BOOL)showIndexBar;
-(void)chatManagerDidChangePhone:(id)arg1;
-(void)contactsStorageDidUpdateContacts:(id)arg1;
-(void)setCellNoContacts:(id)arg1;
-(void)setLabelNoContacts:(id)arg1;
-(void)setCellContactsTotal:(id)arg1;
-(void)setLabelContactsTotal:(id)arg1;
-(void)setCellLoading:(id)arg1;
-(void)setAiLoading:(id)arg1;
-(void)setLabelLoading:(id)arg1;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)scrollViewDidScrollToTop:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(id)sectionIndexTitlesForTableView:(id)arg1;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(id)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)searchDisplayControllerDidEndSearch:(id)arg1;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1;
-(void)searchDisplayControllerWillEndSearch:(id)arg1;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
-(void).cxx_destruct;
-(void)setGroupID:(int)arg1;
@end