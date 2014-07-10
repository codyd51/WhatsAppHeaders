/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:47 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UIActionSheetDelegate
@optional
-(void)actionSheet(id):arg1 clickedButtonAtIndex(int):arg2 ;
-(void)actionSheetCancel(id):arg1 ;
-(void)willPresentActionSheet(id):arg1 ;
-(void)didPresentActionSheet(id):arg1 ;
-(void)actionSheet(id):arg1 willDismissWithButtonIndex(int):arg2 ;
-(void)actionSheet(id):arg1 didDismissWithButtonIndex(int):arg2 ;
@end

@protocol SoundPickerDelegate
@required
-(void)soundPicker(id):arg1 didFinishWithSound(id):arg2 ;
-(void)soundPickerDidCancel(id):arg1 ;
-(void)soundPicker(id):arg1 didFinishWithSound(id):arg2 ;
-(void)soundPickerDidCancel(id):arg1 ;
@end
