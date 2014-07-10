/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:34 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AudioSession : NSObject {
	BOOL _sessionActivated; 
	BOOL _speakerActivated; 
	BOOL _headsetPluggedIn; 
	unsigned long _previousAudioCategory; 
	id<AudioSessionDelegate> _delegate; 
}
@property (copy) BOOL sessionActivated; 				//@synthesize sessionActivated=_sessionActivated - In the implementation block
@property (copy) BOOL speakerActivated; 				//@synthesize speakerActivated=_speakerActivated - In the implementation block
@property (copy) BOOL headsetPluggedIn; 				//@synthesize headsetPluggedIn=_headsetPluggedIn - In the implementation block
@property (copy) id<AudioSessionDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
-(void)redirectToSpeaker;
-(void)redirectToEarpiece;
-(void)activateSession;
-(void)deactivateSession;
-(BOOL)isHeadsetPluggedIn;
-(BOOL)isSilentMode;
-(id)audioRoute;
-(float)systemVolume;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1;
@end