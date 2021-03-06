/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:52 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol WASinglePhotoPickerControllerDelegate
@required
-(void)singlePhotoPickerControllerDidCancel(id):arg1 ;
-(void)singlePhotoPickerController(id):arg1 didFinishWithImage(id):arg2 ;
-(void)singlePhotoPickerControllerDidCancel(id):arg1 ;
-(void)singlePhotoPickerController(id):arg1 didFinishWithImage(id):arg2 ;
@end

@protocol SinglePersonPickerDelegate
@optional
-(id)excludedJIDsForSinglePersonPicker(id):arg1 ;
-(void)singlePersonPicker(id):arg1 didSelectAction(id):arg2 ;
-(id)singlePersonPicker(id):arg1 confirmationTextForContact(id):arg2 ;
@required
-(void)singlePersonPickerDidCancel(id):arg1 ;
-(void)singlePersonPicker(id):arg1 didSelectContact(id):arg2 ;
-(void)singlePersonPickerDidCancel(id):arg1 ;
-(void)singlePersonPicker(id):arg1 didSelectContact(id):arg2 ;
@end

@protocol GroupSettingsViewControllerDelegate
@required
-(void)groupSettingsViewController(id):arg1 activityStateChanged(BOOL):arg2 ;
-(void)groupSettingsViewController(id):arg1 activityStateChanged(BOOL):arg2 ;
@end
