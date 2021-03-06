/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:55 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MFMailComposeViewControllerDelegate.h>
#import <ProblemInputControllerDelegate.h>

@interface PassInputViewController : UIViewController <MFMailComposeViewControllerDelegate, ProblemInputControllerDelegate> {
	int _uiBlockState; 
	UIImageView* _imageViewStop; 
	UIImageView* _imageViewStop2; 
	WAOverlayView* _overlayView; 
	NSTimer* _blockTimer; 
	NSTimer* _callButtonTimer; 
	NSTimer* _editButtonTimer; 
	BOOL _shouldShowActivityIndicator; 
	BOOL _registerRequestInProgress; 
	NSString* _contextFailReason; 
	NSString* _learnMoreUrl; 
	NSString* _verificationCodeFromUrl; 
	BOOL _changePhoneNumberMode; 
	id<PassInputViewControllerDelegate> _delegate; 
	UIView* _viewContainer; 
	UILabel* _labelHelperText1; 
	UILabel* _labelHelperText2; 
	UIView* _viewCodeInputFields; 
	UITextField* _textFieldCode; 
	UITextField* _textFieldCode2; 
	UILabel* _labelCode; 
	UILabel* _labelCode2; 
	UIView* _viewRetryButtons; 
	UIButton* _buttonResend; 
	UIButton* _buttonCall; 
	UIView* _viewUIBlocked; 
	UILabel* _labelUIBlocked; 
	UIProgressView* _progressViewBlock; 
}
@property (assign,nonatomic) id<PassInputViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL changePhoneNumberMode; 				//@synthesize changePhoneNumberMode=_changePhoneNumberMode - In the implementation block
@property (nonatomic,retain) UIView* viewContainer; 				//@synthesize viewContainer=_viewContainer - In the implementation block
@property (nonatomic,retain) UILabel* labelHelperText1; 				//@synthesize labelHelperText1=_labelHelperText1 - In the implementation block
@property (nonatomic,retain) UILabel* labelHelperText2; 				//@synthesize labelHelperText2=_labelHelperText2 - In the implementation block
@property (nonatomic,retain) UIView* viewCodeInputFields; 				//@synthesize viewCodeInputFields=_viewCodeInputFields - In the implementation block
@property (nonatomic,retain) UITextField* textFieldCode; 				//@synthesize textFieldCode=_textFieldCode - In the implementation block
@property (nonatomic,retain) UITextField* textFieldCode2; 				//@synthesize textFieldCode2=_textFieldCode2 - In the implementation block
@property (nonatomic,retain) UILabel* labelCode; 				//@synthesize labelCode=_labelCode - In the implementation block
@property (nonatomic,retain) UILabel* labelCode2; 				//@synthesize labelCode2=_labelCode2 - In the implementation block
@property (nonatomic,retain) UIView* viewRetryButtons; 				//@synthesize viewRetryButtons=_viewRetryButtons - In the implementation block
@property (nonatomic,retain) UIButton* buttonResend; 				//@synthesize buttonResend=_buttonResend - In the implementation block
@property (nonatomic,retain) UIButton* buttonCall; 				//@synthesize buttonCall=_buttonCall - In the implementation block
@property (nonatomic,retain) UIView* viewUIBlocked; 				//@synthesize viewUIBlocked=_viewUIBlocked - In the implementation block
@property (nonatomic,retain) UILabel* labelUIBlocked; 				//@synthesize labelUIBlocked=_labelUIBlocked - In the implementation block
@property (nonatomic,retain) UIProgressView* progressViewBlock; 				//@synthesize progressViewBlock=_progressViewBlock - In the implementation block
-(void)launchedFromUrl:(id)arg1;
-(void)cancelAction:(id)arg1;
-(void)showOverlay:(id)arg1;
-(void)resizeHelperTextLabels;
-(void)composeEmail:(id)arg1;
-(void)problemInputController:(id)arg1 didFinishWithText:(id)arg2 attachment:(id)arg3;
-(void)probleminputControllerDidCancel:(id)arg1;
-(void)setTextFieldCode:(id)arg1;
-(void)updateCallButtonTitle:(id)arg1;
-(void)layoutRetryButtonsAnimated:(BOOL)arg1;
-(void)enableCallButtonTimer:(BOOL)arg1;
-(void)layoutUIBlockedView;
-(void)adjustHelperTextFont;
-(void)updateBlockState:(id)arg1;
-(void)startBlockTimer;
-(void)layoutAllViews;
-(void)setUIBlockState:(int)arg1;
-(void)checkPasscodeAttempts;
-(void)checkEditAvailability:(id)arg1;
-(void)formatCodePresentation;
-(void)showAndReleaseGenericAlert:(id)arg1;
-(void)codeRequestFinishedWithResult:(id)arg1;
-(void)codeOrCallRequestFailedWithError:(id)arg1;
-(void)setHeaderLabelText:(BOOL)arg1;
-(void)setButtonResend:(id)arg1;
-(void)setButtonCall:(id)arg1;
-(void)setLabelCode:(id)arg1;
-(void)setLabelCode2:(id)arg1;
-(void)callMeAction:(id)arg1;
-(void)resendCodeAction:(id)arg1;
-(void)setViewRetryButtons:(id)arg1;
-(void)codeEditedAction:(id)arg1;
-(void)enterVerificationCodeFromUrl:(id)arg1;
-(void)codeValidatedWithResult:(id)arg1;
-(void)codeValidationFailedWithError:(id)arg1;
-(void)requestSMSWithCode;
-(void)callRequestFinishedWithResult:(id)arg1;
-(BOOL)blockStateIsBlocked;
-(void)showAndReleaseUnspecifiedErrorAlert;
-(void)finishController;
-(void)showAndReleaseAppStoreAlert:(id)arg1;
-(void)showAndReleaseContactSupportAlert:(id)arg1;
-(void)showAndReleaseLearnMoreAlert:(id)arg1 message:(id)arg2 url:(id)arg3;
-(void)hideOverlayWithCompletion:(id)arg1 setViewTitle:(id)arg2;
-(void)showAndReleaseCodeEntryFailedAlert:(id)arg1;
-(void)setVerificationCodeFromUrl:(id)arg1;
-(void)setChangePhoneNumberMode:(BOOL)arg1;
-(void)setViewContainer:(id)arg1;
-(void)setLabelHelperText1:(id)arg1;
-(void)setLabelHelperText2:(id)arg1;
-(void)setViewCodeInputFields:(id)arg1;
-(void)setTextFieldCode2:(id)arg1;
-(void)setViewUIBlocked:(id)arg1;
-(void)setLabelUIBlocked:(id)arg1;
-(void)setProgressViewBlock:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)viewDidLayoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void).cxx_destruct;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
@end