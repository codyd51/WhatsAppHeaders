/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:48 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol PhoneInputViewControllerDelegate
@optional
-(void)phoneInputViewController(id):arg1 didFinishWithCountryCode(id):arg2 phoneNumber(id):arg3 ;
-(void)phoneInputViewControllerDidCancel(id):arg1 ;
-(void)phoneInputViewControllerDidEnterPhone(id):arg1 ;
-(void)phoneInputViewControllerDidFinish(id):arg1 ;
@end

@protocol PassInputViewControllerDelegate
@required
-(void)passInputViewControllerDidFinish(id):arg1 ;
-(void)passInputViewControllerDidCancel(id):arg1 ;
-(void)passInputViewControllerDidFinish(id):arg1 ;
-(void)passInputViewControllerDidCancel(id):arg1 ;
@end

@protocol ProfileViewControllerDelegate
@required
-(void)profileViewControllerDidFinish(id):arg1 ;
-(void)profileViewControllerDidFinish(id):arg1 ;
@end

@protocol RestoreBackupViewControllerDelegate
@required
-(void)restoreBackupViewControllerDidFinish(id):arg1 ;
-(void)restoreBackupViewControllerDidFinish(id):arg1 ;
@end
