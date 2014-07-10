/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:18 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAMultiSendMediaPickerControllerStats : NSObject {
	int _numberOfPhotosInCameraRoll; 
	int _sampleCount; 
	double _minimumDelay; 
	double _averageDelay; 
	double _maximumDelay; 
}
@property (assign,nonatomic) int numberOfPhotosInCameraRoll; 				//@synthesize numberOfPhotosInCameraRoll=_numberOfPhotosInCameraRoll - In the implementation block
@property (assign,nonatomic) int sampleCount; 				//@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) double minimumDelay; 				//@synthesize minimumDelay=_minimumDelay - In the implementation block
@property (assign,nonatomic) double averageDelay; 				//@synthesize averageDelay=_averageDelay - In the implementation block
@property (assign,nonatomic) double maximumDelay; 				//@synthesize maximumDelay=_maximumDelay - In the implementation block
-(void)reportStatsToServer;
-(void)setNumberOfPhotosInCameraRoll:(int)arg1;
-(void)setMinimumDelay:(double)arg1;
-(void)setAverageDelay:(double)arg1;
-(void)setMaximumDelay:(double)arg1;
-(id)description;
-(void)setSampleCount:(int)arg1;
@end