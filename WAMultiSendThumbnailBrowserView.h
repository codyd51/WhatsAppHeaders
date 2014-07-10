/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:15 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <WAMultiSendThumbnailBrowserItemViewDelegate.h>
#import <UIGestureRecognizerDelegate.h>

@interface WAMultiSendThumbnailBrowserView : UIView <WAMultiSendThumbnailBrowserItemViewDelegate, UIGestureRecognizerDelegate> {
	UIImageView* _topBorderImageView; 
	UIImageView* _backgroundImageView; 
	NSMutableArray* _itemViews; 
	UIButton* _viewBlocker; 
	BOOL _draggingInProgress; 
	BOOL _ignoreDragging; 
	BOOL _footerHidden; 
	int _maxItemsPerRow; 
	BOOL _editingModeBeforeRotationAnimation; 
	int _rowCount; 
	float _itemWidth; 
	UIView* _dimmingView; 
	UIToolbar* _blurToolbarView; 
	BOOL _editing; 
	BOOL _dimmed; 
	id<WAMultiSendThumbnailBrowserViewDelegate> _delegate; 
	UIView* _headerView; 
	int _currentIndex; 
	int _maximumNumberOfItems; 
	WAMultiSendThumbnailBrowserAddItemButton* _addItemButton; 
	UIView* _footerView; 
	UIButton* _sortMediaButton; 
}
@property (assign,nonatomic) id<WAMultiSendThumbnailBrowserViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView* headerView; 				//@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) int currentIndex; 				//@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing; 				//@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) int maximumNumberOfItems; 				//@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (nonatomic,copy) WAMultiSendThumbnailBrowserAddItemButton* addItemButton; 				//@synthesize addItemButton=_addItemButton - In the implementation block
@property (assign,nonatomic) BOOL dimmed; 				//@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) int addItemButtonType; 
@property (nonatomic,retain) UIView* footerView; 				//@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton* sortMediaButton; 				//@synthesize sortMediaButton=_sortMediaButton - In the implementation block
-(void)setAddItemButtonType:(int)arg1;
-(void)setCurrentIndex:(int)arg1 animated:(BOOL)arg2;
-(void)reloadThumbnailAtIndex:(int)arg1;
-(void)superViewWillBeginRotationAnimation;
-(void)superViewDidEndRotationAnimation;
-(void)swipeDown:(id)arg1;
-(void)swipeUp:(id)arg1;
-(void)configureFooterView;
-(void)updateFooterView;
-(void)relayoutThumbnailsWithAnimation:(BOOL)arg1;
-(void)layoutViewBlocker;
-(CGPoint)centerForItemViewAtIndex:(int)arg1 ignoringOutsideItems:(BOOL)arg2;
-(int)mapIndexToLogicalIndex:(int)arg1 ignoringOutsideItems:(BOOL)arg2;
-(void)addViewBlocker;
-(void)removeViewBlocker;
-(void)windowBlockerTouched:(id)arg1;
-(void)sortItemViewsByIndex;
-(int)bestIndexForItemViewWithCenter:(CGPoint)arg1;
-(void)changeIndexOfItemView:(id)arg1 to:(int)arg2;
-(void)multiSendThumbnailBrowserItemViewCenterDidChange:(id)arg1;
-(void)setFooterHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)areItemsSorted;
-(void)multiSendThumbnailBrowserItemViewWasTapped:(id)arg1;
-(void)multiSendThumbnailBrowserItemViewWantsToEnterEditMode:(id)arg1;
-(void)multiSendThumbnailBrowserItemViewDidBeginDragging:(id)arg1;
-(void)multiSendThumbnailBrowserItemViewDidEndDragging:(id)arg1;
-(void)sortMediaByDate:(id)arg1;
-(void)setSortMediaButton:(id)arg1;
-(void)send:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)reload;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
-(void)applicationDidEnterBackground:(id)arg1;
-(void)awakeFromNib;
-(void)setEditing:(BOOL)arg1;
-(void)setHeaderView:(id)arg1;
-(void)addItem:(id)arg1;
-(void).cxx_destruct;
-(void)setFooterView:(id)arg1;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
-(void)commonInit;
-(void)setDimmed:(BOOL)arg1;
-(void)removeItemAtIndex:(int)arg1;
-(void)setCurrentIndex:(int)arg1;
-(void)setMaximumNumberOfItems:(int)arg1;
@end