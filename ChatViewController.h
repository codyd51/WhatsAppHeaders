/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:45 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UINavigationControllerDelegate.h>
#import <ABPeoplePickerNavigationControllerDelegate.h>
#import <ABNewPersonViewControllerDelegate.h>
#import <MFMailComposeViewControllerDelegate.h>
#import <AddContactInfoViewControllerDelegate.h>
#import <ForwardPickerDelegate.h>
#import <MultilineHeaderViewDelegate.h>
#import <ShareLocationControllerDelegate.h>
#import <WALocationDataSource.h>
#import <WAMessageCellDelegate.h>
#import <ABDisabledControllerDelegate.h>
#import <AudioSessionDelegate.h>
#import <AVAudioRecorderDelegate.h>
#import <AVAudioPlayerDelegate.h>
#import <WAMultiSendMediaPickerControllerDelegate.h>
#import <WAShareContactViewControllerDelegate.h>
#import <MPMediaPickerControllerDelegate.h>
#import <WASingleVideoPickerControllerDelegate.h>
#import <WAInputTextViewDelegate.h>
#import <WAChatMessagesControllerDelegate.h>
#import <WADateBubbleViewDelegate.h>
#import <WATranslucentTableViewCellDelegate.h>
#import <WAImageToImageTransitioning.h>

@interface ChatViewController : WAViewController <UINavigationControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate, MFMailComposeViewControllerDelegate, AddContactInfoViewControllerDelegate, ForwardPickerDelegate, MultilineHeaderViewDelegate, ShareLocationControllerDelegate, WALocationDataSource, WAMessageCellDelegate, ABDisabledControllerDelegate, AudioSessionDelegate, AVAudioRecorderDelegate, AVAudioPlayerDelegate, WAMultiSendMediaPickerControllerDelegate, WAShareContactViewControllerDelegate, MPMediaPickerControllerDelegate, WASingleVideoPickerControllerDelegate, WAInputTextViewDelegate, WAChatMessagesControllerDelegate, WADateBubbleViewDelegate, WATranslucentTableViewCellDelegate, WAImageToImageTransitioning> {
	WAChatSession* _chatSession; 
	BOOL _isList; 
	WAMessageCell* _messageCellToUnhighlightOnDisappear; 
	WAMediaManager* _mediaManager; 
	WALocationData* _locationData; 
	WAChatCellData* _selectedCellData; 
	WAChatCellData* _currentCellData; 
	WAChatCellData* _bottomCellData; 
	float _bottomCellOffset; 
	int _selectedMessagesCount; 
	int _lastMessageIndex; 
	int _editableMessageCount; 
	int _loadedMessagesCount; 
	NSManagedObjectID* _highlightedMessageID; 
	WAChatMessagesController* _messagesController; 
	BOOL _animateMessagesControllerChanges; 
	NSArray* _tempBlacklistJIDs; 
	int _peoplePickerMode; 
	WAInputTextView* _inputTextView; 
	unsigned _keyboardState; 
	BOOL _hideKeyboardOnAppear; 
	CGRect _viewTextInputFrameBeforeRotation; 
	WAProgressHUD* _progressHUD; 
	WAChatCellData* _currentInstanceVoiceCellData; 
	AVAudioPlayer* _pttAudioPlayer; 
	NSTimer* _pttAudioPlayerUpdateTimer; 
	NSMutableArray* _pttMediaObjects; 
	UIView* _lowVolumeHintView; 
	BOOL _pttAccessToMicNotGranted; 
	BOOL _pttRecordingIsActive; 
	CGPoint _pttButtonOriginalTouchPoint; 
	AVAudioRecorder* _pttAudioRecorder; 
	NSTimer* _pttAudioRecorderUpdateTimer; 
	int _pttRecordedTime; 
	BOOL _pttInterruption; 
	WAMediaStreamUploadOperation* _voiceMsgStreamOperation; 
	SoundEffect* _startRecordSoundEffect; 
	SoundEffect* _stopRecordSoundEffect; 
	SoundEffect* _errorRecordSoundEffect; 
	AudioSession* _audioSession; 
	UserLocationViewController* _locationViewController; 
	float _keyboardHeight; 
	float _lastKnownKeyboardHeight; 
	BOOL _keyboardWillAppearWhenViewAppears; 
	BOOL _isAppearing; 
	BOOL _isDisappearing; 
	BOOL _updateTableViewWhenKeyboardHides; 
	NSNumber* _updateTableViewWhenKeyboardAppearsAdjustingContentOffset; 
	struct UIEdgeInsets _inputTextViewInsets; 
	int _lastKnownOrientation; 
	BOOL _interfaceRotationInProgress; 
	NSDate* _allowAutorotateTime; 
	NSDate* _allowTableRefreshTime; 
	double _initialViewDidAppearTimestamp; 
	WALargeMediaMessageCell* _mediaMessageCellForAnimatedTransition; 
	WAMediaObject* _mediaObjectForAnimatedTransition; 
	UIBarButtonItem* _showAllChatsBarButtonItem; 
	UIMotionEffectGroup* _parallaxEffect; 
	BOOL _shouldShowKeyboard; 
	BOOL _needReloadWallpaper; 
	BOOL _sendMessageAnimationInProgress; 
	BOOL _scrollWithKeyboard; 
	BOOL _scrollToBottom; 
	BOOL _showLoadButton; 
	BOOL _editingMode; 
	BOOL _readOnlyMode; 
	BOOL _groupChat; 
	NSString* _jid; 
	UITableView* _tableViewMessages; 
	UIView* _viewTextInput; 
	UIImageView* _imageViewInputControlsBG; 
	UIView* _imageViewInputFieldBG; 
	UIButton* _buttonSendMessage; 
	UIButton* _buttonSendMedia; 
	UIButton* _buttonPushToTalk; 
	UILabel* _pttRecordingProgressLabel; 
	WAAnimatedCancelLabel* _pttSlideToCancelLabel; 
	UIImageView* _pttMic; 
	UIImageView* _pttMicInactive; 
	UIImageView* _pttBucket; 
	UIImageView* _pttBucketLid; 
	WAChatButton* _buttonCall; 
	WAChatButton* _buttonInfo; 
	WAChatButton* _buttonAddContact; 
	WAChatButton* _buttonBlock; 
	WAChatButton* _buttonUnblock; 
	WAChatButton* _buttonEdit; 
	WAChatButton* _buttonLoadMessages; 
	UIView* _viewChatButtons; 
	UIToolbar* _toolbarReadonly; 
	UISegmentedControl* _scLoadMessages; 
	UIToolbar* _toolbarEditMode; 
	UIBarButtonItem* _barButtonDelete; 
	UIBarButtonItem* _barButtonForward; 
	UIBarButtonItem* _barButtonDoneEditing; 
	UIBarButtonItem* _barButtonClearAll; 
	ChatHeaderView* _headerView; 
	WADimmableImageView* _wallpaperImageView; 
}
@property (nonatomic,retain) NSManagedObjectID* highlightedMessageID; 				//@synthesize highlightedMessageID=_highlightedMessageID - In the implementation block
@property (assign,nonatomic) BOOL shouldShowKeyboard; 				//@synthesize shouldShowKeyboard=_shouldShowKeyboard - In the implementation block
@property (nonatomic,retain) NSString* jid; 				//@synthesize jid=_jid - In the implementation block
@property (nonatomic,copy) WAChatSession* chatSession; 
@property (nonatomic,retain) UITableView* tableViewMessages; 				//@synthesize tableViewMessages=_tableViewMessages - In the implementation block
@property (nonatomic,retain) UIView* viewTextInput; 				//@synthesize viewTextInput=_viewTextInput - In the implementation block
@property (nonatomic,retain) UIImageView* imageViewInputControlsBG; 				//@synthesize imageViewInputControlsBG=_imageViewInputControlsBG - In the implementation block
@property (nonatomic,retain) UIView* imageViewInputFieldBG; 				//@synthesize imageViewInputFieldBG=_imageViewInputFieldBG - In the implementation block
@property (nonatomic,retain) UIButton* buttonSendMessage; 				//@synthesize buttonSendMessage=_buttonSendMessage - In the implementation block
@property (nonatomic,retain) UIButton* buttonSendMedia; 				//@synthesize buttonSendMedia=_buttonSendMedia - In the implementation block
@property (nonatomic,retain) UIButton* buttonPushToTalk; 				//@synthesize buttonPushToTalk=_buttonPushToTalk - In the implementation block
@property (nonatomic,retain) UILabel* pttRecordingProgressLabel; 				//@synthesize pttRecordingProgressLabel=_pttRecordingProgressLabel - In the implementation block
@property (nonatomic,retain) WAAnimatedCancelLabel* pttSlideToCancelLabel; 				//@synthesize pttSlideToCancelLabel=_pttSlideToCancelLabel - In the implementation block
@property (nonatomic,retain) UIImageView* pttMic; 				//@synthesize pttMic=_pttMic - In the implementation block
@property (nonatomic,retain) UIImageView* pttMicInactive; 				//@synthesize pttMicInactive=_pttMicInactive - In the implementation block
@property (nonatomic,retain) UIImageView* pttBucket; 				//@synthesize pttBucket=_pttBucket - In the implementation block
@property (nonatomic,retain) UIImageView* pttBucketLid; 				//@synthesize pttBucketLid=_pttBucketLid - In the implementation block
@property (nonatomic,retain) WAChatButton* buttonCall; 				//@synthesize buttonCall=_buttonCall - In the implementation block
@property (nonatomic,retain) WAChatButton* buttonInfo; 				//@synthesize buttonInfo=_buttonInfo - In the implementation block
@property (nonatomic,retain) WAChatButton* buttonAddContact; 				//@synthesize buttonAddContact=_buttonAddContact - In the implementation block
@property (nonatomic,retain) WAChatButton* buttonBlock; 				//@synthesize buttonBlock=_buttonBlock - In the implementation block
@property (nonatomic,retain) WAChatButton* buttonUnblock; 				//@synthesize buttonUnblock=_buttonUnblock - In the implementation block
@property (nonatomic,retain) WAChatButton* buttonEdit; 				//@synthesize buttonEdit=_buttonEdit - In the implementation block
@property (nonatomic,retain) WAChatButton* buttonLoadMessages; 				//@synthesize buttonLoadMessages=_buttonLoadMessages - In the implementation block
@property (nonatomic,retain) UIView* viewChatButtons; 				//@synthesize viewChatButtons=_viewChatButtons - In the implementation block
@property (nonatomic,retain) UIToolbar* toolbarReadonly; 				//@synthesize toolbarReadonly=_toolbarReadonly - In the implementation block
@property (nonatomic,retain) UISegmentedControl* scLoadMessages; 				//@synthesize scLoadMessages=_scLoadMessages - In the implementation block
@property (nonatomic,retain) UIToolbar* toolbarEditMode; 				//@synthesize toolbarEditMode=_toolbarEditMode - In the implementation block
@property (nonatomic,retain) UIBarButtonItem* barButtonDelete; 				//@synthesize barButtonDelete=_barButtonDelete - In the implementation block
@property (nonatomic,retain) UIBarButtonItem* barButtonForward; 				//@synthesize barButtonForward=_barButtonForward - In the implementation block
@property (nonatomic,retain) UIBarButtonItem* barButtonDoneEditing; 				//@synthesize barButtonDoneEditing=_barButtonDoneEditing - In the implementation block
@property (nonatomic,retain) UIBarButtonItem* barButtonClearAll; 				//@synthesize barButtonClearAll=_barButtonClearAll - In the implementation block
@property (nonatomic,retain) ChatHeaderView* headerView; 				//@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) WADimmableImageView* wallpaperImageView; 				//@synthesize wallpaperImageView=_wallpaperImageView - In the implementation block
@property (assign,nonatomic) BOOL needReloadWallpaper; 				//@synthesize needReloadWallpaper=_needReloadWallpaper - In the implementation block
@property (assign,nonatomic) BOOL sendMessageAnimationInProgress; 				//@synthesize sendMessageAnimationInProgress=_sendMessageAnimationInProgress - In the implementation block
@property (assign,nonatomic) BOOL scrollWithKeyboard; 				//@synthesize scrollWithKeyboard=_scrollWithKeyboard - In the implementation block
@property (assign,nonatomic) BOOL scrollToBottom; 				//@synthesize scrollToBottom=_scrollToBottom - In the implementation block
@property (assign,nonatomic) BOOL showLoadButton; 				//@synthesize showLoadButton=_showLoadButton - In the implementation block
@property (assign,nonatomic) BOOL editingMode; 				//@synthesize editingMode=_editingMode - In the implementation block
@property (assign,nonatomic) BOOL readOnlyMode; 				//@synthesize readOnlyMode=_readOnlyMode - In the implementation block
@property (assign,nonatomic) BOOL groupChat; 				//@synthesize groupChat=_groupChat - In the implementation block
-(void)wallpaperDidChange:(id)arg1;
-(void)chatStorageDidLoadDatabase:(id)arg1;
-(void)leaveEditMode;
-(void)chatStorage:(id)arg1 didUpdateChatSession:(id)arg2;
-(void)showHUD:(id)arg1;
-(void)removeHUD;
-(void)enterEditModeAction:(id)arg1;
-(void)leaveEditModeAction:(id)arg1;
-(void)fontSizeDidChange:(id)arg1;
-(void)setJid:(id)arg1;
-(void)xmppConnectionDidBeginConnect:(id)arg1;
-(void)xmppConnectionDidConnect:(id)arg1;
-(void)xmppConnectionDidDisconnect:(id)arg1;
-(void)mediaManagerDidDeleteMedia:(id)arg1;
-(void)chatStorage:(id)arg1 didAddMessages:(id)arg2;
-(void)abDisabledViewControllerDidCancel:(id)arg1;
-(void)setButtonCall:(id)arg1;
-(id)translucentTableViewBlurredImage:(id)arg1;
-(id)translucentTableViewCellBackgroundImageView:(id)arg1;
-(void)updateNavigationBar;
-(void)addContactInfoViewControllerDidCancel:(id)arg1;
-(void)addContactInfoViewControllerDidFinish:(id)arg1;
-(void)downloadButtonTappedInCell:(id)arg1;
-(void)invertSelectionForCell:(id)arg1;
-(void)handleSingleTapInCell:(id)arg1;
-(void)handleDoubleTapInCell:(id)arg1;
-(void)cancelButtonTappedInCell:(id)arg1;
-(void)deleteMessagesInCell:(id)arg1;
-(void)forwardMessagesInCell:(id)arg1;
-(void)addMessageSenderInCell:(id)arg1;
-(void)replyMessageSenderFromCell:(id)arg1;
-(id)locationDataAtIndex:(int)arg1;
-(unsigned)numberOfLocations;
-(id)locationsWithCoordinate:(struct )arg1;
-(void)contactImageTapped:(id)arg1;
-(void)multilineHeaderViewTapped:(id)arg1;
-(void)chatStorage:(id)arg1 didDeleteMessagesInSession:(id)arg2;
-(id)UIDelegateForMessage:(id)arg1;
-(void)chatStorage:(id)arg1 didUpdateMessage:(id)arg2;
-(void)mediaDownloadFailedForMessage:(id)arg1 withError:(id)arg2 autodownload:(BOOL)arg3;
-(float)tableView:(id)arg1 heightForRowWithCellData:(id)arg2;
-(void)showTooltipIfNeeded;
-(void)setViewChatButtons:(id)arg1;
-(id)initWithJID:(id)arg1;
-(void)setShouldShowKeyboard:(BOOL)arg1;
-(void)setHighlightedMessageID:(id)arg1;
-(void)restoreSavedInput;
-(void)dismissPickerAndContinueWithPerson:(void*)arg1;
-(void)forwardPicker:(id)arg1 didSelectContact:(id)arg2;
-(void)forwardPickerDidCancel:(id)arg1;
-(id)forwardPicker:(id)arg1 confirmationTextForContact:(id)arg2;
-(void)xmppConnection:(id)arg1 networkStatusChanged:(id)arg2;
-(void)xmppConnection:(id)arg1 chatStateChanged:(id)arg2 forJID:(id)arg3;
-(void)xmppConnection:(id)arg1 presenceChanged:(id)arg2;
-(void)xmppConnection:(id)arg1 lastActivityChanged:(id)arg2 forJID:(id)arg3;
-(void)xmppConnection:(id)arg1 presenceChanged:(id)arg2 forJID:(id)arg3;
-(void)blacklistSavedWithUserData:(id)arg1;
-(void)blacklistSavedWithError:(id)arg1 userData:(id)arg2;
-(void)chatStorage:(id)arg1 didUpdateParticipantsOfChatSession:(id)arg2;
-(void)showGenericAlert:(id)arg1;
-(void)chatStorageWillUnloadDatabase:(id)arg1;
-(void)chatStorageDidReplaceChatSession:(id)arg1;
-(BOOL)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
-(void)prepareForTransitionWithContext:(id)arg1;
-(id)viewForTransitionAnimationWithContext:(id)arg1;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2;
-(void)shareLocationControllerDidSelectWAPlace:(id)arg1;
-(void)deleteAction:(id)arg1;
-(float)textViewMaximumHeight:(id)arg1;
-(void)textView:(id)arg1 needsHeightChangedTo:(float)arg2;
-(void)textViewDidPasteImage:(id)arg1;
-(void)audioSessionStateChanged:(id)arg1;
-(void)audioSessionVolumeChanged:(id)arg1;
-(id)dateBubbleBlurredImage:(id)arg1;
-(id)dateBubbleBackgroundImageView:(id)arg1;
-(void)updateLayoutForCurrentOrientation;
-(void)shareLocationControllerDidCancel:(id)arg1;
-(void)tableView:(id)arg1 tapped:(id)arg2;
-(void)audioSessionMediaServicesWereReset:(id)arg1;
-(void)startMonitoringKeyboardNotifications;
-(void)jumpToAllChats:(id)arg1;
-(void)pruneObjectGraph;
-(void)refreshViews;
-(CGRect)frameOfRightButtonInNavigationBar:(id)arg1;
-(void)unblockContact;
-(void)showActionSheet:(id)arg1;
-(id)keyboardWindow;
-(float)actualKeyboardHeight;
-(void)restoreContentOffsetWithKeyboardHeight:(float)arg1;
-(void)correctForOverscroll;
-(void)scrollToBottomUsingTransitionIfNeeded:(BOOL)arg1;
-(void)setScrollWithKeyboard:(BOOL)arg1;
-(void)restoreContentOffset;
-(void)cancelScrolling;
-(void)updateTableViewContentInsetsAdjustingContentOffset:(BOOL)arg1;
-(void)scrollToRelevantOffsetInAnimationBlock:(BOOL)arg1;
-(void)updateTableViewContentInsetsWithKeyboardHeight:(float)arg1 adjustingContentOffset:(BOOL)arg2;
-(void)updateUserPresence;
-(void)layoutActionButtonsAnimated:(BOOL)arg1;
-(BOOL)isIndexPathValid:(id)arg1 inTableView:(id)arg2;
-(void)setScrollToBottom:(BOOL)arg1;
-(void)resetPttMediaData;
-(void)storeContentOffset;
-(void)setShowLoadButton:(BOOL)arg1;
-(void)removeUnreadDivider;
-(void)updateEditModeButtons;
-(float)calculateTableHeight;
-(BOOL)canPushViewController;
-(BOOL)checkConnectionStatus;
-(void)updatePushToTalkPlayProgress;
-(void)dismissLowVolumeView:(BOOL)arg1;
-(void)updatePushToTalkRecordTime;
-(void)setPausedSessionState;
-(void)showRecordingNotGrantedWarning;
-(void)showBlockedContactWarning;
-(void)pausePTTPlayer;
-(void)animatePttControlsIn;
-(void)pushToTalkStartRecording;
-(void)animatePttControlsOutWithDiscardAnimation:(BOOL)arg1;
-(void)showPushToTalkTooltip;
-(void)delayDeactivateAudioSession;
-(void)checkUpdateProximityMonitoringState;
-(void)sendAudioAtURL:(id)arg1 durationSeconds:(int)arg2 streamingHash:(id)arg3;
-(void)routeAudioPlaybackAccordingProximitySensor;
-(void)setSendMessageAnimationInProgress:(BOOL)arg1;
-(void)sendTextMessage;
-(void)showCamera;
-(void)disableShareToolTips;
-(BOOL)checkAssetsLibraryAuthorizationStatus;
-(void)showImagePicker;
-(void)showVideoPicker;
-(void)presentShareLocationController;
-(void)showVCardPersonPicker;
-(void)showAudioMediaPicker;
-(void)stopMonitoringKeyboardNotifications;
-(void)deleteSelectedMessages;
-(void)forwardSelectedMessages;
-(void)addMessagesToTheTop:(id)arg1;
-(void)addMessagesToTheBottom:(id)arg1 animated:(BOOL)arg2 addDividerIfNeeded:(BOOL)arg3 doNotScroll:(BOOL)arg4;
-(void)viewContactInfo;
-(void)callContact;
-(void)createNewContact;
-(void)addNumberToContact;
-(void)blockContact;
-(void)clearConversation;
-(void)retryDownloadingMediaForCellData:(id)arg1;
-(void)loadPttMediaData;
-(void)showLowVolumeHint;
-(void)openMediaViewerFromMessageCell:(id)arg1;
-(void)forwardSingleMediaViaEmail;
-(void)showSingleMediaForwardPicker;
-(void)setTextInputHeight:(float)arg1 animated:(BOOL)arg2;
-(void)updateChatButtonsState;
-(void)dequeueBulkImageSendQueue:(id)arg1 index:(int)arg2 count:(int)arg3 previousMessage:(id)arg4;
-(void)forwardSingleMediaToWAContact:(id)arg1;
-(void)forwardSelectedMessagesToWAContact:(id)arg1;
-(void)setWallpaperImageView:(id)arg1;
-(void)setBarButtonDoneEditing:(id)arg1;
-(void)clearAllAction:(id)arg1;
-(void)setBarButtonClearAll:(id)arg1;
-(void)setViewTextInput:(id)arg1;
-(void)setImageViewInputFieldBG:(id)arg1;
-(void)setButtonSendMedia:(id)arg1;
-(void)setButtonSendMessage:(id)arg1;
-(void)sendMessageAction:(id)arg1;
-(void)setImageViewInputControlsBG:(id)arg1;
-(void)sendFileAction:(id)arg1;
-(void)setButtonPushToTalk:(id)arg1;
-(void)pushToTalkButtonPressed:(id)arg1 withEvent:(id)arg2;
-(void)pushToTalkButtonReleased:(id)arg1 withEvent:(id)arg2;
-(void)pushToTalkButtonTrackSliding:(id)arg1 withEvent:(id)arg2;
-(void)setPttSlideToCancelLabel:(id)arg1;
-(void)setPttRecordingProgressLabel:(id)arg1;
-(void)setPttMicInactive:(id)arg1;
-(void)setPttMic:(id)arg1;
-(void)setPttBucket:(id)arg1;
-(void)setPttBucketLid:(id)arg1;
-(void)callContactAction:(id)arg1;
-(void)setButtonInfo:(id)arg1;
-(void)contactInfoAction:(id)arg1;
-(void)setButtonAddContact:(id)arg1;
-(void)addToContactsAction:(id)arg1;
-(void)setButtonBlock:(id)arg1;
-(void)blockContactAction:(id)arg1;
-(void)setButtonUnblock:(id)arg1;
-(void)unblockContactAction:(id)arg1;
-(void)setButtonEdit:(id)arg1;
-(void)setButtonLoadMessages:(id)arg1;
-(void)loadEarlierMessagesAction:(id)arg1;
-(void)setBarButtonDelete:(id)arg1;
-(void)forwardAction:(id)arg1;
-(void)setBarButtonForward:(id)arg1;
-(void)setReadOnlyMode:(BOOL)arg1;
-(void)currentLocaleChanged:(id)arg1;
-(void)setTableViewMessages:(id)arg1;
-(void)setToolbarReadonly:(id)arg1;
-(void)setScLoadMessages:(id)arg1;
-(void)setToolbarEditMode:(id)arg1;
-(void)reloadWallpaper;
-(void)scrollToRowAtIndexPath:(id)arg1 position:(float)arg2;
-(void)cancelFadeOutDateBubbles;
-(void)fadeOutDateBubblesWithAnimation:(BOOL)arg1;
-(void)fadeOutDateBubblesAfterDelay;
-(void)unloadIfPossible;
-(void)notifyMessagesToFreeCachedData;
-(void)fadeOutDateBubblesImmediately;
-(void)fadeInDateBubblesWithAnimation:(BOOL)arg1;
-(void)fadeOutDateBubbles;
-(void)notifyVisibleCellsOfScrolling;
-(void)retrySendingMessageFromCellData:(id)arg1;
-(void)deleteMessagesFromCellData:(id)arg1;
-(void)viewMediaFromMessageCell:(id)arg1;
-(void)prepareToForwardSingleMedia;
-(id)currentBlurredWallpaperImage;
-(void)sendImage:(id)arg1;
-(void)showErrorMessageForUnavailableMediaInMessage:(id)arg1;
-(void)reloadTableRowForCellData:(id)arg1;
-(void)reloadMessages;
-(void)viewProfilePicture;
-(void)viewGroupInfo;
-(void)viewListInfo;
-(id)findChooseButtonInVideoPickerView:(id)arg1;
-(void)bulkSendImages:(id)arg1;
-(void)sendVCard:(id)arg1;
-(void)sendAudioTrack:(id)arg1;
-(void)alertButtonTappedInCell:(id)arg1;
-(void)viewButtonTappedInCell:(id)arg1;
-(void)forwardButtonTappedInCell:(id)arg1;
-(void)openURL:(id)arg1 fromCell:(id)arg2;
-(void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)multiSendMediaPickerController:(id)arg1 didPickImages:(id)arg2;
-(void)multiSendMediaPickerController:(id)arg1 didRecordVideoAtURL:(id)arg2;
-(void)multiSendMediaPickerControllerDidCancel:(id)arg1;
-(void)shareContactViewController:(id)arg1 didFinishWithVCard:(id)arg2 forContactName:(id)arg3;
-(void)singleVideoPickerController:(id)arg1 didPickVideoAtURL:(id)arg2 referenceURL:(id)arg3;
-(void)singleVideoPickerControllerDidCancel:(id)arg1;
-(void)controller:(id)arg1 didRemoveIndexPaths:(id)arg2;
-(void)controller:(id)arg1 didRemoveSections:(id)arg2;
-(void)controller:(id)arg1 didReloadIndexPaths:(id)arg2;
-(void)controller:(id)arg1 didInsertSections:(id)arg2;
-(void)controller:(id)arg1 didInsertIndexPaths:(id)arg2;
-(id)initWithChatSession:(id)arg1;
-(void)loadMessagesAction:(id)arg1;
-(void)debug_showMovieFileInfoAtURL:(id)arg1;
-(void)waqrSetText:(id)arg1;
-(void)setNeedReloadWallpaper:(BOOL)arg1;
-(void)setEditingMode:(BOOL)arg1;
-(void)setGroupChat:(BOOL)arg1;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)audioRecorderBeginInterruption:(id)arg1;
-(void)audioRecorderEndInterruption:(id)arg1;
-(id)peoplePickerNavigationController;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
-(void)controllerDidChangeContent:(id)arg1;
-(void)controllerWillChangeContent:(id)arg1;
-(void)mediaPickerDidCancel:(id)arg1;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
-(void)scrollViewDidScroll:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)applicationWillTerminate:(id)arg1;
-(void)applicationDidBecomeActive:(id)arg1;
-(void)applicationDidEnterBackground:(id)arg1;
-(void)applicationWillEnterForeground:(id)arg1;
-(void)proximityStateChanged:(id)arg1;
-(BOOL)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setEditing:(BOOL)arg1;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)didMoveToParentViewController:(id)arg1;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(int)arg1;
-(void)unloadView;
-(void)presentModalViewController:(id)arg1 animated:(BOOL)arg2;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
-(void)keyboardDidShow:(id)arg1;
-(BOOL)textViewShouldBeginEditing:(id)arg1;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
-(void)textViewDidChange:(id)arg1;
-(void)setHeaderView:(id)arg1;
-(void)keyboardDidHide:(id)arg1;
-(void)hideKeyboard;
-(id)uniqueIdentifier;
-(void).cxx_destruct;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
-(void)keyboardDidChangeFrame:(id)arg1;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioPlayerBeginInterruption:(id)arg1;
-(void)audioPlayerEndInterruption:(id)arg1;
-(void)deleteMessages:(id)arg1;
-(void)dispose;
-(void)keyboardWillShow:(id)arg1;
-(void)keyboardWillHide:(id)arg1;
@end