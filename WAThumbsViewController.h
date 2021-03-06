/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:39 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <WAImageToImageTransitioning.h>
#import <WAThumbsViewControllerDelegate.h>
#import <WAThumbsTableViewCellDelegate.h>

@interface WAThumbsViewController : UITableViewController <WAImageToImageTransitioning, WAThumbsViewControllerDelegate, WAThumbsTableViewCellDelegate> {
	UIView* _mediaCountView; 
	UILabel* _mediaCountLabel; 
	UIView* _noMediaView; 
	UIImageView* _noMediaImageView; 
	UILabel* _noMediaTitleLabel; 
	UILabel* _noMediaTextLabel; 
	UIBarButtonItem* _editBarButton; 
	UIBarButtonItem* _cancelBarButton; 
	UIBarButtonItem* _deleteBarButton; 
	UIBarButtonItem* _shareItemsBarButton; 
	BOOL _navigateBack; 
	BOOL _editing; 
	NSMutableArray* _sections; 
	NSMutableSet* _selectedIndexes; 
	NSOperationQueue* _thumbnailLoadingOpQueue; 
	int _thumbnailCountPerRow; 
	BOOL _needsAutoScroll; 
	BOOL _isPerformingFancyRotation; 
	UIImageView* _beforeRotationSnapshotImageView; 
	UIImageView* _afterRotationSnapshotImageView; 
	UIView* _whiteBackgroundView; 
	NSIndexPath* _thumbnailIndexPathToRestore; 
	CGPoint _contentOffsetAtStartOfRotation; 
	UIView* _transitionAnimationSourceView; 
	unsigned _thumbnailIndexForTransitionAnimation; 
	WAMediaManager* _mediaManager; 
	id<WAThumbsViewControllerDelegate> _delegate; 
	unsigned _indexOfMediaItemToScrollToWhenAppearing; 
}
@property (nonatomic,retain) WAMediaManager* mediaManager; 				//@synthesize mediaManager=_mediaManager - In the implementation block
@property (assign,nonatomic) BOOL navigateBack; 				//@synthesize navigateBack=_navigateBack - In the implementation block
@property (assign,nonatomic) id<WAThumbsViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned indexOfMediaItemToScrollToWhenAppearing; 				//@synthesize indexOfMediaItemToScrollToWhenAppearing=_indexOfMediaItemToScrollToWhenAppearing - In the implementation block
-(void)chatStorageDidLoadDatabase:(id)arg1;
-(void)cancelAction:(id)arg1;
-(void)setMediaManager:(id)arg1;
-(void)updateLayoutToOrientation:(int)arg1;
-(void)editAction:(id)arg1;
-(void)chatStorageWillUnloadDatabase:(id)arg1;
-(void)setNavigateBack:(BOOL)arg1;
-(void)setIndexOfMediaItemToScrollToWhenAppearing:(unsigned)arg1;
-(void)thumbsViewController:(id)arg1 didSelectMediaAtIndex:(int)arg2;
-(BOOL)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
-(void)prepareForTransitionWithContext:(id)arg1;
-(id)viewForTransitionAnimationWithContext:(id)arg1;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2;
-(void)deleteAction:(id)arg1;
-(void)shareSelectedItems:(id)arg1;
-(void)prepareMediaData;
-(void)relayoutNoMediaViews;
-(void)countMediaAndUpdateFooter;
-(void)updateEditingWithAnimation:(BOOL)arg1;
-(void)deleteSelectedMedia;
-(void)scrollAutomaticallyToRelevantItem;
-(void)scrollToThumbnailAtIndex:(unsigned)arg1;
-(id)selectedIndexesForThumbnailEntries:(id)arg1 atIndexPath:(id)arg2;
-(id)indexPathForThumbnailAtIndex:(unsigned)arg1;
-(void)scrollToThumbnailAtIndexPath:(id)arg1 animated:(BOOL)arg2;
-(id)indexPathOfThumbnailAtCenterOfView;
-(id)tableViewSnapshot;
-(void)forwardMediaItems:(id)arg1 toContact:(id)arg2;
-(void)tableViewCell:(id)arg1 tappedImageAtIndex:(int)arg2;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(id)initWithStyle:(int)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(int)arg1;
-(void)unloadView;
-(void)updateSelection;
-(void).cxx_destruct;
@end