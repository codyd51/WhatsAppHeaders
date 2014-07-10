/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:30 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol WAMediaUploaderDelegate
@optional
-(void)mediaUploader(id):arg1 uploadProgressChanged(float):arg2 ;
@required
-(void)mediaUploaderDidFinish(id):arg1 ;
-(void)mediaUploaderDidCancel(id):arg1 ;
-(void)mediaUploader(id):arg1 didFailWithError(id):arg2 ;
-(void)mediaUploaderDidFinish(id):arg1 ;
-(void)mediaUploaderDidCancel(id):arg1 ;
-(void)mediaUploader(id):arg1 didFailWithError(id):arg2 ;
@end

@protocol CLLocationManagerDelegate
@optional
-(void)locationManager(id):arg1 didUpdateToLocation(id):arg2 fromLocation(id):arg3 ;
-(void)locationManager(id):arg1 didUpdateLocations(id):arg2 ;
-(void)locationManager(id):arg1 didUpdateHeading(id):arg2 ;
-(BOOL)locationManagerShouldDisplayHeadingCalibration(id):arg1 ;
-(void)locationManager(id):arg1 didDetermineState(int):arg2 forRegion(id):arg3 ;
-(void)locationManager(id):arg1 didRangeBeacons(id):arg2 inRegion(id):arg3 ;
-(void)locationManager(id):arg1 rangingBeaconsDidFailForRegion(id):arg2 withError(id):arg3 ;
-(void)locationManager(id):arg1 didEnterRegion(id):arg2 ;
-(void)locationManager(id):arg1 didExitRegion(id):arg2 ;
-(void)locationManager(id):arg1 didFailWithError(id):arg2 ;
-(void)locationManager(id):arg1 monitoringDidFailForRegion(id):arg2 withError(id):arg3 ;
-(void)locationManager(id):arg1 didChangeAuthorizationStatus(int):arg2 ;
-(void)locationManager(id):arg1 didStartMonitoringForRegion(id):arg2 ;
-(void)locationManagerDidPauseLocationUpdates(id):arg1 ;
-(void)locationManagerDidResumeLocationUpdates(id):arg1 ;
-(void)locationManager(id):arg1 didFinishDeferredUpdatesWithError(id):arg2 ;
@end

@protocol NSFilePresenter
@property (copy) NSURL* presentedItemURL; 
@property (copy) NSOperationQueue* presentedItemOperationQueue; 
@property (copy) NSURL* primaryPresentedItemURL; 
@optional
-(void)relinquishPresentedItemToReader(id):arg1 ;
-(void)relinquishPresentedItemToWriter(id):arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler(id):arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler(id):arg1 ;
-(void)presentedItemDidMoveToURL(id):arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion(id):arg1 ;
-(void)presentedItemDidLoseVersion(id):arg1 ;
-(void)presentedItemDidResolveConflictVersion(id):arg1 ;
-(void)accommodatePresentedSubitemDeletionAtURL(id):arg1 completionHandler(id):arg2 ;
-(void)presentedSubitemDidAppearAtURL(id):arg1 ;
-(void)presentedSubitemAtURL(id):arg1 didMoveToURL(id):arg2 ;
-(void)presentedSubitemDidChangeAtURL(id):arg1 ;
-(void)presentedSubitemAtURL(id):arg1 didGainVersion(id):arg2 ;
-(void)presentedSubitemAtURL(id):arg1 didLoseVersion(id):arg2 ;
-(void)presentedSubitemAtURL(id):arg1 didResolveConflictVersion(id):arg2 ;
-(id)primaryPresentedItemURL;
@required
-(id)presentedItemURL;
-(id)presentedItemOperationQueue;
-(id)presentedItemURL;
-(id)presentedItemOperationQueue;
@end

@protocol WAMediaDownloadOperationDelegate
@optional
-(void)mediaDownloadOperation(id):arg1 downloadProgressChanged(float):arg2 ;
@required
-(void)mediaDownloadOperation(id):arg1 didFinishWithData(id):arg2 ;
-(void)mediaDownloadOperation(id):arg1 didFailWithError(id):arg2 ;
-(void)mediaDownloadOperation(id):arg1 didFinishWithData(id):arg2 ;
-(void)mediaDownloadOperation(id):arg1 didFailWithError(id):arg2 ;
@end

@protocol NSURLSessionDataDelegate
@optional
-(void)URLSession(id):arg1 dataTask(id):arg2 didReceiveResponse(id):arg3 completionHandler(id):arg4 ;
-(void)URLSession(id):arg1 dataTask(id):arg2 didBecomeDownloadTask(id):arg3 ;
-(void)URLSession(id):arg1 dataTask(id):arg2 didReceiveData(id):arg3 ;
-(void)URLSession(id):arg1 dataTask(id):arg2 willCacheResponse(id):arg3 completionHandler(id):arg4 ;
@end
