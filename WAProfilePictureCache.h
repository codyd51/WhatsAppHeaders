/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:39 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAProfilePictureCache : NSObject {
}
+(id)filenameForJID:(id)arg1;
+(id)fullPathToCachedImageForJID:(id)arg1;
+(id)groupPicturePlaceholder;
+(id)personalPicturePlaceholder;
+(id)profileThumbnailCache;
-(id)profilePictureThumbnailForJID:(id)arg1 returnPlaceholder:(BOOL)arg2;
-(void)fetchProfilePictureThumbnailForJID:(id)arg1 completion:(id)arg2;
-(void)fetchProfilePictureThumbnailForWAGroupMember:(id)arg1 completion:(id)arg2;
-(void)storeTempGroupPicture:(id)arg1 forJID:(id)arg2;
-(id)tempGroupPictureForJID:(id)arg1;
-(void)deleteTempGroupPictureForJID:(id)arg1;
-(void)resetProfilePictureCacheForJID:(id)arg1;
-(void)fetchProfilePictureThumbnailForWAChatSession:(id)arg1 completion:(id)arg2;
-(id)cachedImageForJID:(id)arg1 isPlaceholder:(BOOL*)arg2;
-(id)thumbnailFromProfilePicture:(id)arg1;
-(void)saveImage:(id)arg1 forJID:(id)arg2;
-(void)savePlaceholderForJID:(id)arg1;
-(void)deleteCachedImageForJID:(id)arg1;
@end