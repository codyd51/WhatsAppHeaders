/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:10 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ForwardPickerDelegate.h>

@interface WAForwardActivity : UIActivity <ForwardPickerDelegate> {
	NSArray* _mediaObjects; 
	NSDictionary* _selectedContactInfo; 
}
@property (nonatomic,copy) NSDictionary* selectedContactInfo; 				//@synthesize selectedContactInfo=_selectedContactInfo - In the implementation block
+(int)activityCategory;
-(void)forwardPicker:(id)arg1 didSelectContact:(id)arg2;
-(void)forwardPickerDidCancel:(id)arg1;
-(id)forwardPicker:(id)arg1 confirmationTextForContact:(id)arg2;
-(id)activityTitle;
-(id)activityType;
-(void).cxx_destruct;
-(BOOL)canPerformWithActivityItems:(id)arg1;
-(id)activityImage;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1;
@end