/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:45 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UINavigationControllerDelegate
@optional
-(void)navigationController(id):arg1 willShowViewController(id):arg2 animated(BOOL):arg3 ;
-(void)navigationController(id):arg1 didShowViewController(id):arg2 animated(BOOL):arg3 ;
-(id)navigationController(id):arg1 animationControllerForOperation(int):arg2 fromViewController(id):arg3 toViewController(id):arg4 ;
-(id)navigationController(id):arg1 interactionControllerForAnimationController(id):arg2 ;
-(unsigned)navigationControllerSupportedInterfaceOrientations(id):arg1 ;
-(int)navigationControllerPreferredInterfaceOrientationForPresentation(id):arg1 ;
@end

@protocol ABPeoplePickerNavigationControllerDelegate
@required
-(void)peoplePickerNavigationControllerDidCancel(id):arg1 ;
-(BOOL)peoplePickerNavigationController(id):arg1 shouldContinueAfterSelectingPerson(*):arg2 ;
-(BOOL)peoplePickerNavigationController(id):arg1 shouldContinueAfterSelectingPerson(*):arg2 property(void):arg3 identifier(int):arg4 ;
-(void)peoplePickerNavigationControllerDidCancel(id):arg1 ;
-(BOOL)peoplePickerNavigationController(id):arg1 shouldContinueAfterSelectingPerson(*):arg2 ;
-(BOOL)peoplePickerNavigationController(id):arg1 shouldContinueAfterSelectingPerson(*):arg2 property(void):arg3 identifier(int):arg4 ;
@end

@protocol ABNewPersonViewControllerDelegate
@required
-(void)newPersonViewController(id):arg1 didCompleteWithNewPerson(*):arg2 ;
-(void)newPersonViewController(id):arg1 didCompleteWithNewPerson(*):arg2 ;
@end

@protocol MFMailComposeViewControllerDelegate
@optional
-(void)mailComposeController(id):arg1 didFinishWithResult(int):arg2 error(id):arg3 ;
@end

@protocol AddContactInfoViewControllerDelegate
@required
-(void)addContactInfoViewControllerDidCancel(id):arg1 ;
-(void)addContactInfoViewControllerDidFinish(id):arg1 ;
-(void)addContactInfoViewControllerDidCancel(id):arg1 ;
-(void)addContactInfoViewControllerDidFinish(id):arg1 ;
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

@protocol MultilineHeaderViewDelegate
@optional
-(void)contactImageTapped(id):arg1 ;
-(void)multilineHeaderViewTapped(id):arg1 ;
@end

@protocol ShareLocationControllerDelegate
@required
-(void)shareLocationControllerDidSelectWAPlace(id):arg1 ;
-(void)shareLocationControllerDidCancel(id):arg1 ;
-(void)shareLocationControllerDidSelectWAPlace(id):arg1 ;
-(void)shareLocationControllerDidCancel(id):arg1 ;
@end

@protocol WALocationDataSource
@optional
-(id)mapTitle;
@required
-(id)locationDataAtIndex(int):arg1 ;
-(unsigned)numberOfLocations;
-(id)locationsWithCoordinate({):arg1 ;
-(id)locationDataAtIndex(int):arg1 ;
-(unsigned)numberOfLocations;
-(id)locationsWithCoordinate({):arg1 ;
@end

@protocol WAMessageCellDelegate
@required
-(void)downloadButtonTappedInCell(id):arg1 ;
-(void)invertSelectionForCell(id):arg1 ;
-(void)handleSingleTapInCell(id):arg1 ;
-(void)handleDoubleTapInCell(id):arg1 ;
-(void)cancelButtonTappedInCell(id):arg1 ;
-(void)deleteMessagesInCell(id):arg1 ;
-(void)forwardMessagesInCell(id):arg1 ;
-(void)addMessageSenderInCell(id):arg1 ;
-(void)replyMessageSenderFromCell(id):arg1 ;
-(void)alertButtonTappedInCell(id):arg1 ;
-(void)viewButtonTappedInCell(id):arg1 ;
-(void)forwardButtonTappedInCell(id):arg1 ;
-(void)openURL(id):arg1 fromCell(id):arg2 ;
-(void)downloadButtonTappedInCell(id):arg1 ;
-(void)invertSelectionForCell(id):arg1 ;
-(void)handleSingleTapInCell(id):arg1 ;
-(void)handleDoubleTapInCell(id):arg1 ;
-(void)cancelButtonTappedInCell(id):arg1 ;
-(void)deleteMessagesInCell(id):arg1 ;
-(void)forwardMessagesInCell(id):arg1 ;
-(void)addMessageSenderInCell(id):arg1 ;
-(void)replyMessageSenderFromCell(id):arg1 ;
-(void)alertButtonTappedInCell(id):arg1 ;
-(void)viewButtonTappedInCell(id):arg1 ;
-(void)forwardButtonTappedInCell(id):arg1 ;
-(void)openURL(id):arg1 fromCell(id):arg2 ;
@end

@protocol ABDisabledControllerDelegate
@optional
-(void)abDisabledViewControllerDidCancel(id):arg1 ;
-(id)helperTitleForABDisabledViewController(id):arg1 ;
-(id)helperTextForABDisabledViewController(id):arg1 ;
@end

@protocol AudioSessionDelegate
@optional
-(void)audioSessionStateChanged(id):arg1 ;
-(void)audioSessionVolumeChanged(id):arg1 ;
@end

@protocol AVAudioRecorderDelegate
@optional
-(void)audioRecorderEncodeErrorDidOccur(id):arg1 error(id):arg2 ;
-(void)audioRecorderDidFinishRecording(id):arg1 successfully(BOOL):arg2 ;
-(void)audioRecorderBeginInterruption(id):arg1 ;
-(void)audioRecorderEndInterruption(id):arg1 withOptions(unsigned):arg2 ;
-(void)audioRecorderEndInterruption(id):arg1 withFlags(unsigned):arg2 ;
-(void)audioRecorderEndInterruption(id):arg1 ;
@end

@protocol AVAudioPlayerDelegate
@optional
-(void)audioPlayerDidFinishPlaying(id):arg1 successfully(BOOL):arg2 ;
-(void)audioPlayerDecodeErrorDidOccur(id):arg1 error(id):arg2 ;
-(void)audioPlayerBeginInterruption(id):arg1 ;
-(void)audioPlayerEndInterruption(id):arg1 withOptions(unsigned):arg2 ;
-(void)audioPlayerEndInterruption(id):arg1 withFlags(unsigned):arg2 ;
-(void)audioPlayerEndInterruption(id):arg1 ;
@end

@protocol WAMultiSendMediaPickerControllerDelegate
@required
-(void)multiSendMediaPickerController(id):arg1 didPickImages(id):arg2 ;
-(void)multiSendMediaPickerController(id):arg1 didRecordVideoAtURL(id):arg2 ;
-(void)multiSendMediaPickerControllerDidCancel(id):arg1 ;
-(void)multiSendMediaPickerController(id):arg1 didPickImages(id):arg2 ;
-(void)multiSendMediaPickerController(id):arg1 didRecordVideoAtURL(id):arg2 ;
-(void)multiSendMediaPickerControllerDidCancel(id):arg1 ;
@end

@protocol WAShareContactViewControllerDelegate
@required
-(void)shareContactViewController(id):arg1 didFinishWithVCard(id):arg2 forContactName(id):arg3 ;
-(void)shareContactViewController(id):arg1 didFinishWithVCard(id):arg2 forContactName(id):arg3 ;
@end
