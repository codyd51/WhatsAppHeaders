/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:01 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface UserFSFolder : UserFSItem {
}
-(BOOL)isDirectory;
-(BOOL)enumerateChildrenAndReturnError:(id*)arg1 callback:(id)arg2;
-(BOOL)deleteChildNamed:(id)arg1 error:(id*)arg2;
-(id)childNamed:(id)arg1 error:(id*)arg2;
-(id)_pathForChildNamed:(id)arg1;
@end