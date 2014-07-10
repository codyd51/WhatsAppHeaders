/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:37 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol WAMediaPlayerTransportControlViewDelegate
@required
-(void)mediaPlayerTransportControlViewDidBeginScrubbing(id):arg1 ;
-(void)mediaPlayerTransportControlViewDidEndScrubbing(id):arg1 ;
-(void)mediaPlayerTransportControlViewDidChangeCurrentTime(id):arg1 ;
-(void)mediaPlayerTransportControlViewDidBeginScrubbing(id):arg1 ;
-(void)mediaPlayerTransportControlViewDidEndScrubbing(id):arg1 ;
-(void)mediaPlayerTransportControlViewDidChangeCurrentTime(id):arg1 ;
@end

@protocol UIGestureRecognizerDelegate
@optional
-(BOOL)gestureRecognizerShouldBegin(id):arg1 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRequireFailureOfGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldBeRequiredToFailByGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldReceiveTouch(id):arg2 ;
@end

@protocol UIScrollViewDelegate
@optional
-(void)scrollViewDidScroll(id):arg1 ;
-(void)scrollViewDidZoom(id):arg1 ;
-(void)scrollViewWillBeginDragging(id):arg1 ;
-(void)scrollViewWillEndDragging(id):arg1 withVelocity({):arg2 targetContentOffset(unsigned char):arg3 ;
-(void)scrollViewDidEndDragging(id):arg1 willDecelerate(BOOL):arg2 ;
-(void)scrollViewWillBeginDecelerating(id):arg1 ;
-(void)scrollViewDidEndDecelerating(id):arg1 ;
-(void)scrollViewDidEndScrollingAnimation(id):arg1 ;
-(id)viewForZoomingInScrollView(id):arg1 ;
-(void)scrollViewWillBeginZooming(id):arg1 withView(id):arg2 ;
-(void)scrollViewDidEndZooming(id):arg1 withView(id):arg2 atScale(float):arg3 ;
-(BOOL)scrollViewShouldScrollToTop(id):arg1 ;
-(void)scrollViewDidScrollToTop(id):arg1 ;
@end

@protocol WAMediaPlayerDelegate
@required
-(void)mediaPlayerDidRequestPlaybackStart(id):arg1 ;
-(void)mediaPlayerStatusDidChange(id):arg1 ;
-(void)mediaPlayerDidChangeCurrentTime(id):arg1 ;
-(void)mediaPlayerDidFinishLoading(id):arg1 ;
-(void)mediaPlayerDidPlayToEndTime(id):arg1 ;
-(void)mediaPlayerDidBeginScrubbing(id):arg1 ;
-(void)mediaPlayerDidEndScrubbing(id):arg1 ;
-(void)mediaPlayerDidRequestPlaybackStart(id):arg1 ;
-(void)mediaPlayerStatusDidChange(id):arg1 ;
-(void)mediaPlayerDidChangeCurrentTime(id):arg1 ;
-(void)mediaPlayerDidFinishLoading(id):arg1 ;
-(void)mediaPlayerDidPlayToEndTime(id):arg1 ;
-(void)mediaPlayerDidBeginScrubbing(id):arg1 ;
-(void)mediaPlayerDidEndScrubbing(id):arg1 ;
@end