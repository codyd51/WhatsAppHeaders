/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:23 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UIVideoEditorControllerDelegate
@optional
-(void)videoEditorControllerDidCancel(id):arg1 ;
-(void)videoEditorController(id):arg1 didSaveEditedVideoToPath(id):arg2 ;
-(void)videoEditorController(id):arg1 didFailWithError(id):arg2 ;
@end

@protocol UIActionSheetDelegate
@optional
-(void)actionSheet(id):arg1 clickedButtonAtIndex(int):arg2 ;
-(void)actionSheetCancel(id):arg1 ;
-(void)willPresentActionSheet(id):arg1 ;
-(void)didPresentActionSheet(id):arg1 ;
-(void)actionSheet(id):arg1 willDismissWithButtonIndex(int):arg2 ;
-(void)actionSheet(id):arg1 didDismissWithButtonIndex(int):arg2 ;
@end

@protocol UINavigationControllerDelegate
@optional
-(void)navigationController(id):arg1 willShowViewController(id):arg2 animated(BOOL):arg3 ;
-(void)navigationController(id):arg1 didShowViewController(id):arg2 animated(BOOL):arg3 ;
-(id)navigationController(id):arg1 animationControllerForOperation(int):arg2 fromViewController(id):arg3 toViewController(id):arg4 ;
-(id)navigationController(id):arg1 interactionControllerForAnimationController(id):arg2 ;
-(unsigned)navigationControllerSupportedInterfaceOrientations(id):arg1 ;
-(int)navigationControllerPreferredInterfaceOrientationForPresentation(id):arg1 ;
@end

@protocol MFMessageComposeViewControllerDelegate
@required
-(void)messageComposeViewController(id):arg1 didFinishWithResult(int):arg2 ;
-(void)messageComposeViewController(id):arg1 didFinishWithResult(int):arg2 ;
@end

@protocol MFMailComposeViewControllerDelegate
@optional
-(void)mailComposeController(id):arg1 didFinishWithResult(int):arg2 error(id):arg3 ;
@end

@protocol ForwardPickerDelegate
@optional
-(id)forwardPicker(id):arg1 confirmationTextForContact(id):arg2 ;
@required
-(void)forwardPicker(id):arg1 didSelectContact(id):arg2 ;
-(void)forwardPickerDidCancel(id):arg1 ;
-(void)forwardPicker(id):arg1 didSelectContact(id):arg2 ;
-(void)forwardPickerDidCancel(id):arg1 ;
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

@protocol PhoneInputViewControllerDelegate
@optional
-(void)phoneInputViewController(id):arg1 didFinishWithCountryCode(id):arg2 phoneNumber(id):arg3 ;
-(void)phoneInputViewControllerDidCancel(id):arg1 ;
-(void)phoneInputViewControllerDidEnterPhone(id):arg1 ;
-(void)phoneInputViewControllerDidFinish(id):arg1 ;
@end

@protocol WAGroupComposerDelegate
@optional
-(void)groupComposer(id):arg1 didFinishWithContacts(id):arg2 media(id):arg3 ;
-(void)groupComposer(id):arg1 didFinishWithContacts(id):arg2 subject(id):arg3 picture(id):arg4 ;
-(void)groupComposerDidCancel(id):arg1 ;
@end

@protocol WAChatSessionCellDelegate
@required
-(void)chatSessionCellShowMoreOptions(id):arg1 ;
-(void)chatSessionCellShowMoreOptions(id):arg1 ;
@end
