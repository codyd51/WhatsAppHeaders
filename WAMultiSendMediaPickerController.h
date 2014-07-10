/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:21 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <WAMediaPickerControllerDelegate.h>
#import <UINavigationControllerDelegate.h>
#import <WAMultiSendPreviewViewControllerDelegate.h>
#import <UIImagePickerControllerDelegate.h>

@interface WAMultiSendMediaPickerController : NSObject <WAMediaPickerControllerDelegate, UINavigationControllerDelegate, WAMultiSendPreviewViewControllerDelegate, UIImagePickerControllerDelegate> {
	WAMediaPickerController* _initialMediaPickerController; 
	NSDate* _imagePickerDelayStartTime; 
	double _imagePickerDelay; 
	WAMediaPickerLibraryController* _libraryController; 
	UIImagePickerController* _systemImagePickerController; 
	id<WAMultiSendMediaPickerControllerDelegate> _delegate; 
	int _pickerMode; 
}
@property (assign,nonatomic) id<WAMultiSendMediaPickerControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) int pickerMode; 				//@synthesize pickerMode=_pickerMode - In the implementation block
+(BOOL)useNativePicker;
+(void)initialize;
-(id)initWithPickerMode:(int)arg1;
-(void)nativePickerDidCancel;
-(void)presentCameraFromViewController:(id)arg1;
-(void)presentNativePickerFromViewController:(id)arg1;
-(void)presentCustomPickerFromViewController:(id)arg1;
-(id)initialStats;
-(void)cancelWithStats:(id)arg1;
-(void)imagePickerController:(id)arg1 didFinishTakingPhotoWithInfo:(id)arg2;
-(void)imagePickerController:(id)arg1 didFinishSelectingImageFromCameraRollWithInfo:(id)arg2;
-(void)showPreviewViewControllerUsingInterstitialWithImage:(id)arg1 onNavigationController:(id)arg2;
-(void)showPreviewViewControllerWithImage:(id)arg1 onNavigationController:(id)arg2;
-(void)mediaPickerControllerDidFinishPresenting:(id)arg1;
-(void)mediaPickerController:(id)arg1 didFinishWithSelectedAssetURLs:(id)arg2;
-(void)multiSendPreviewViewController:(id)arg1 didConfirmImages:(id)arg2;
-(void)multiSendPreviewViewControllerDidCancel:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)applicationDidEnterBackground:(id)arg1;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
-(void)cleanUp;
-(void)imagePickerControllerDidCancel:(id)arg1;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
-(void).cxx_destruct;
-(void)presentFromViewController:(id)arg1;
@end