/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:05:43 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol MKMapViewDelegate
@optional
-(void)mapView(id):arg1 didAddAnnotationViews(id):arg2 ;
-(void)mapView(id):arg1 regionWillChangeAnimated(BOOL):arg2 ;
-(void)mapView(id):arg1 regionDidChangeAnimated(BOOL):arg2 ;
-(void)mapViewWillStartLoadingMap(id):arg1 ;
-(void)mapViewDidFinishLoadingMap(id):arg1 ;
-(void)mapViewDidFailLoadingMap(id):arg1 withError(id):arg2 ;
-(void)mapViewWillStartRenderingMap(id):arg1 ;
-(void)mapViewDidFinishRenderingMap(id):arg1 fullyRendered(BOOL):arg2 ;
-(id)mapView(id):arg1 viewForAnnotation(id):arg2 ;
-(void)mapView(id):arg1 annotationView(id):arg2 calloutAccessoryControlTapped(id):arg3 ;
-(void)mapView(id):arg1 didSelectAnnotationView(id):arg2 ;
-(void)mapView(id):arg1 didDeselectAnnotationView(id):arg2 ;
-(void)mapViewWillStartLocatingUser(id):arg1 ;
-(void)mapViewDidStopLocatingUser(id):arg1 ;
-(void)mapView(id):arg1 didUpdateUserLocation(id):arg2 ;
-(void)mapView(id):arg1 didFailToLocateUserWithError(id):arg2 ;
-(void)mapView(id):arg1 annotationView(id):arg2 didChangeDragState(unsigned):arg3 fromOldState(unsigned):arg4 ;
-(void)mapView(id):arg1 didChangeUserTrackingMode(int):arg2 animated(BOOL):arg3 ;
-(id)mapView(id):arg1 rendererForOverlay(id):arg2 ;
-(void)mapView(id):arg1 didAddOverlayRenderers(id):arg2 ;
-(id)mapView(id):arg1 viewForOverlay(id):arg2 ;
-(void)mapView(id):arg1 didAddOverlayViews(id):arg2 ;
@end

@protocol MKReverseGeocoderDelegate
@required
-(void)reverseGeocoder(id):arg1 didFailWithError(id):arg2 ;
-(void)reverseGeocoder(id):arg1 didFindPlacemark(id):arg2 ;
-(void)reverseGeocoder(id):arg1 didFailWithError(id):arg2 ;
-(void)reverseGeocoder(id):arg1 didFindPlacemark(id):arg2 ;
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

@protocol UIActionSheetDelegate
@optional
-(void)actionSheet(id):arg1 clickedButtonAtIndex(int):arg2 ;
-(void)actionSheetCancel(id):arg1 ;
-(void)willPresentActionSheet(id):arg1 ;
-(void)didPresentActionSheet(id):arg1 ;
-(void)actionSheet(id):arg1 willDismissWithButtonIndex(int):arg2 ;
-(void)actionSheet(id):arg1 didDismissWithButtonIndex(int):arg2 ;
@end

@protocol ABPersonViewControllerDelegate
@required
-(BOOL)personViewController(id):arg1 shouldPerformDefaultActionForPerson(*):arg2 property(void):arg3 identifier(int):arg4 ;
-(BOOL)personViewController(id):arg1 shouldPerformDefaultActionForPerson(*):arg2 property(void):arg3 identifier(int):arg4 ;
@end
