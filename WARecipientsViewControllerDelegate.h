/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:06 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol NSFetchedResultsControllerDelegate
@optional
-(void)controller(id):arg1 didChangeObject(id):arg2 atIndexPath(id):arg3 forChangeType(unsigned):arg4 newIndexPath(id):arg5 ;
-(void)controller(id):arg1 didChangeSection(id):arg2 atIndex(unsigned):arg3 forChangeType(unsigned):arg4 ;
-(void)controllerDidChangeContent(id):arg1 ;
-(void)controllerWillChangeContent(id):arg1 ;
-(id)controller(id):arg1 sectionIndexTitleForSectionName(id):arg2 ;
@end

@protocol WARecipientsViewControllerDelegate
@required
-(void)recipientsController(id):arg1 didFinishWithContacts(id):arg2 ;
-(void)recipientsControllerDidCancel(id):arg1 ;
-(void)recipientsController(id):arg1 didFinishWithContacts(id):arg2 ;
-(void)recipientsControllerDidCancel(id):arg1 ;
@end
