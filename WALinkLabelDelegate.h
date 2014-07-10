/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:23 AM Mountain Daylight Time
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

@protocol UISearchBarDelegate
@optional
-(void)searchBar(id):arg1 textDidChange(id):arg2 ;
-(void)searchBar(id):arg1 selectedScopeButtonIndexDidChange(int):arg2 ;
-(BOOL)searchBarShouldBeginEditing(id):arg1 ;
-(BOOL)searchBarShouldEndEditing(id):arg1 ;
-(void)searchBarCancelButtonClicked(id):arg1 ;
-(void)searchBarBookmarkButtonClicked(id):arg1 ;
-(void)searchBarResultsListButtonClicked(id):arg1 ;
-(void)searchBarTextDidBeginEditing(id):arg1 ;
-(void)searchBarTextDidEndEditing(id):arg1 ;
-(void)searchBarSearchButtonClicked(id):arg1 ;
-(BOOL)searchBar(id):arg1 shouldChangeTextInRange({):arg2 replacementText(_):arg3 ;
@end

@protocol WALinkLabelDelegate
@optional
-(void)handleOpenURL(id):arg1 fromLinkLabel(id):arg2 ;
@end
