/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:19 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <WAPageableItemBrowserViewDelegate.h>
#import <WAMultiSendThumbnailBrowserViewDelegate.h>
#import <WAMediaPickerControllerDelegate.h>
#import <UINavigationControllerDelegate.h>
#import <UIImagePickerControllerDelegate.h>

@interface WAMultiSendPreviewViewController : UIViewController <WAPageableItemBrowserViewDelegate, WAMultiSendThumbnailBrowserViewDelegate, WAMediaPickerControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
	int _selectedIndex; 
	NSMutableArray* _mediaItems; 
	NSURL* _selectedAssetURLBeforePresentingPicker; 
	NSArray* _allAssetURLsBeforePresentingPicker; 
	NSDate* _imagePickerDelayStartTime; 
	int _imagePickerDelaySampleCount; 
	double _minimumImagePickerDelay; 
	double _maximumImagePickerDelay; 
	double _totalImagePickerDelay; 
	WAMediaPickerLibraryController* _libraryController; 
	id<WAMultiSendPreviewViewControllerDelegate> _delegate; 
	int _pickerMode; 
	UIView* _hintView; 
	WAMultiSendThumbnailBrowserView* _thumbnailBrowserView; 
	WAPageableItemBrowserView* _pagingBrowserView; 
	UILabel* _hintLabel; 
	UIImageView* _hintBackgroundImageView; 
}
@property (nonatomic,retain) WAMediaPickerLibraryController* libraryController; 				//@synthesize libraryController=_libraryController - In the implementation block
@property (assign,nonatomic) id<WAMultiSendPreviewViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) WAMultiSendMediaPickerControllerStats* stats; 
@property (assign,nonatomic) int pickerMode; 				//@synthesize pickerMode=_pickerMode - In the implementation block
@property (nonatomic,retain) UIView* hintView; 				//@synthesize hintView=_hintView - In the implementation block
@property (nonatomic,retain) WAMultiSendThumbnailBrowserView* thumbnailBrowserView; 				//@synthesize thumbnailBrowserView=_thumbnailBrowserView - In the implementation block
@property (nonatomic,retain) WAPageableItemBrowserView* pagingBrowserView; 				//@synthesize pagingBrowserView=_pagingBrowserView - In the implementation block
@property (nonatomic,retain) UILabel* hintLabel; 				//@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,retain) UIImageView* hintBackgroundImageView; 				//@synthesize hintBackgroundImageView=_hintBackgroundImageView - In the implementation block
-(void)setPickerMode:(int)arg1;
-(void)setLibraryController:(id)arg1;
-(void)updateInterface;
-(id)addImageWithURL:(id)arg1 image:(id)arg2;
-(void)setInitialStats:(id)arg1;
-(void)mediaPickerControllerDidFinishPresenting:(id)arg1;
-(void)mediaPickerController:(id)arg1 didFinishWithSelectedAssetURLs:(id)arg2;
-(void)sendImages:(id)arg1;
-(void)resetStats;
-(void)moveThumbnailBrowserViewToBottom;
-(void)updateHintLabel;
-(unsigned)indexOfMediaItemWithURL:(id)arg1;
-(void)takeAnotherPhoto;
-(void)selectAnotherImageFromPhotoLibrary;
-(void)notifyVoiceOverOfPageChange;
-(void)addImageFromCamera:(id)arg1;
-(id)mediaItemWithURL:(id)arg1;
-(double)averageImagePickerDelay;
-(void)removeImageAtIndex:(int)arg1;
-(void)selectAnotherImage;
-(id)pageableItemBrowserView:(id)arg1 itemAtIndex:(int)arg2;
-(Class)pageableItemBrowserView:(id)arg1 itemViewClassForPageableItem:(id)arg2;
-(int)pageableItemCount:(id)arg1;
-(void)pageableItemBrowserViewCurrentIndexDidChange:(id)arg1;
-(void)pageableItemBrowserView:(id)arg1 wantsToDeleteItemAtIndex:(int)arg2;
-(void)pageableItemBrowserView:(id)arg1 didUpdateItemAtIndex:(int)arg2;
-(void)pageableItemBrowserView:(id)arg1 didFinishEditingItemAtIndex:(int)arg2;
-(void)pageableItemBrowserViewWillBeginFocusedTask:(id)arg1;
-(void)pageableItemBrowserViewDidEndFocusedTask:(id)arg1;
-(int)multiSendThumbnailBrowserViewItemCount;
-(id)multiSendMediaItemAtIndex:(int)arg1;
-(id)indicesOfMultiSendMediaItemsSortedByDate;
-(BOOL)areMultiSendMediaItemsSorted;
-(void)multiSendThumbnailBrowserViewDidRequestAddItem:(id)arg1;
-(void)multiSendThumbnailBrowserViewDidRequestSend:(id)arg1;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestRemovalOfItemAtIndex:(int)arg2;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestSelectionOfItemAtIndex:(int)arg2;
-(void)multiSendThumbnailBrowserView:(id)arg1 didMoveItemAtIndex:(int)arg2 toIndex:(int)arg3;
-(void)multiSendThumbnailBrowserViewDidChangeEditingMode:(id)arg1;
-(void)multiSendThumbnailBrowserViewDidRequestItemSort:(id)arg1;
-(void)setHintView:(id)arg1;
-(void)setThumbnailBrowserView:(id)arg1;
-(void)setPagingBrowserView:(id)arg1;
-(void)setHintLabel:(id)arg1;
-(void)setHintBackgroundImageView:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)reload;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(int)arg1;
-(void)imagePickerControllerDidCancel:(id)arg1;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
-(void).cxx_destruct;
-(void)cancel:(id)arg1;
-(void)setSelectedIndex:(int)arg1 animated:(BOOL)arg2;
@end