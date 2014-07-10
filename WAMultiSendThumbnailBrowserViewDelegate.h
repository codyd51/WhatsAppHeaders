/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:19 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol WAPageableItemBrowserViewDelegate
@required
-(id)pageableItemBrowserView(id):arg1 itemAtIndex(int):arg2 ;
-(Class)pageableItemBrowserView(id):arg1 itemViewClassForPageableItem(id):arg2 ;
-(int)pageableItemCount(id):arg1 ;
-(void)pageableItemBrowserViewCurrentIndexDidChange(id):arg1 ;
-(void)pageableItemBrowserView(id):arg1 wantsToDeleteItemAtIndex(int):arg2 ;
-(void)pageableItemBrowserView(id):arg1 didUpdateItemAtIndex(int):arg2 ;
-(void)pageableItemBrowserView(id):arg1 didFinishEditingItemAtIndex(int):arg2 ;
-(void)pageableItemBrowserViewWillBeginFocusedTask(id):arg1 ;
-(void)pageableItemBrowserViewDidEndFocusedTask(id):arg1 ;
-(id)pageableItemBrowserView(id):arg1 itemAtIndex(int):arg2 ;
-(Class)pageableItemBrowserView(id):arg1 itemViewClassForPageableItem(id):arg2 ;
-(int)pageableItemCount(id):arg1 ;
-(void)pageableItemBrowserViewCurrentIndexDidChange(id):arg1 ;
-(void)pageableItemBrowserView(id):arg1 wantsToDeleteItemAtIndex(int):arg2 ;
-(void)pageableItemBrowserView(id):arg1 didUpdateItemAtIndex(int):arg2 ;
-(void)pageableItemBrowserView(id):arg1 didFinishEditingItemAtIndex(int):arg2 ;
-(void)pageableItemBrowserViewWillBeginFocusedTask(id):arg1 ;
-(void)pageableItemBrowserViewDidEndFocusedTask(id):arg1 ;
@end

@protocol WAMultiSendThumbnailBrowserViewDelegate
@required
-(int)multiSendThumbnailBrowserViewItemCount;
-(id)multiSendMediaItemAtIndex(int):arg1 ;
-(id)indicesOfMultiSendMediaItemsSortedByDate;
-(BOOL)areMultiSendMediaItemsSorted;
-(void)multiSendThumbnailBrowserViewDidRequestAddItem(id):arg1 ;
-(void)multiSendThumbnailBrowserViewDidRequestSend(id):arg1 ;
-(void)multiSendThumbnailBrowserView(id):arg1 didRequestRemovalOfItemAtIndex(int):arg2 ;
-(void)multiSendThumbnailBrowserView(id):arg1 didRequestSelectionOfItemAtIndex(int):arg2 ;
-(void)multiSendThumbnailBrowserView(id):arg1 didMoveItemAtIndex(int):arg2 toIndex(int):arg3 ;
-(void)multiSendThumbnailBrowserViewDidChangeEditingMode(id):arg1 ;
-(void)multiSendThumbnailBrowserViewDidRequestItemSort(id):arg1 ;
-(int)multiSendThumbnailBrowserViewItemCount;
-(id)multiSendMediaItemAtIndex(int):arg1 ;
-(id)indicesOfMultiSendMediaItemsSortedByDate;
-(BOOL)areMultiSendMediaItemsSorted;
-(void)multiSendThumbnailBrowserViewDidRequestAddItem(id):arg1 ;
-(void)multiSendThumbnailBrowserViewDidRequestSend(id):arg1 ;
-(void)multiSendThumbnailBrowserView(id):arg1 didRequestRemovalOfItemAtIndex(int):arg2 ;
-(void)multiSendThumbnailBrowserView(id):arg1 didRequestSelectionOfItemAtIndex(int):arg2 ;
-(void)multiSendThumbnailBrowserView(id):arg1 didMoveItemAtIndex(int):arg2 toIndex(int):arg3 ;
-(void)multiSendThumbnailBrowserViewDidChangeEditingMode(id):arg1 ;
-(void)multiSendThumbnailBrowserViewDidRequestItemSort(id):arg1 ;
@end