/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:50 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UINavigationControllerDelegate.h>
#import <WAMediaPickerDataSource.h>
#import <WAWallpaperPreviewControllerDelegate.h>

@interface WallpaperSourceViewController : UITableViewController <UINavigationControllerDelegate, WAMediaPickerDataSource, WAWallpaperPreviewControllerDelegate> {
	BOOL _photoLibraryAvailable; 
	WAMediaPickerLibraryController* _libraryController; 
}
+(id)controller;
-(id)libraryController;
-(void)deleteSavedWallpaper;
-(BOOL)canSelectMediaPickerAsset:(id)arg1;
-(id)selectedAssetURLs;
-(BOOL)canAddMoreMediaPickerAssets;
-(void)toggleSelectionOfMediaPickerAsset:(id)arg1;
-(void)showMaximumSelectionCountExceededError;
-(void)wallpaperPreviewController:(id)arg1 didSelectImage:(id)arg2;
-(void)wallpaperPreviewControllerDidCancel:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(BOOL)allowsMultipleSelection;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
-(void)clearSelection;
-(void).cxx_destruct;
@end