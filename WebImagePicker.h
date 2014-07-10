/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:24 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ImageSearchControllerDelegate.h>
#import <WAPhotoMoveAndScaleViewControllerDelegate.h>

@interface WebImagePicker : UINavigationController <ImageSearchControllerDelegate, WAPhotoMoveAndScaleViewControllerDelegate> {
	ImageSearchController* _imageSearchController; 
	id<WebImagePickerDelegate> _pickerDelegate; 
	GTMHTTPFetcher* _httpFetcher; 
	WAPhotoMoveAndScaleViewController* _moveAndScaleViewController; 
}
@property (nonatomic,retain) NSString* preloadedSearchText; 
-(id)initWithPickerDelegate:(id)arg1;
-(void)setPreloadedSearchText:(id)arg1;
-(void)fetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
-(void)imageSearchController:(id)arg1 didSelectImageWithURL:(id)arg2;
-(void)imageSearchControllerDidCancel:(id)arg1;
-(void)downloadImageAtURL:(id)arg1;
-(void)photoMoveAndScaleViewController:(id)arg1 didFinishWithImage:(id)arg2;
-(void)fetcher:(id)arg1 receivedData:(id)arg2;
-(id)popViewControllerAnimated:(BOOL)arg1;
-(void).cxx_destruct;
@end