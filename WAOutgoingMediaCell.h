/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:44 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WAOutgoingMediaCell : WAMessageCell {
}
+(id)cellReuseIdentifier;
+(float)heightForCellData:(id)arg1 width:(float)arg2 editing:(BOOL)arg3;
-(void)configureCellUpdatingAllContents:(BOOL)arg1 animated:(BOOL)arg2;
-(void)showPopupMenu;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)setProgress:(float)arg1;
-(BOOL)isAnimating;
-(BOOL)selectable;
-(void)setDimmed:(BOOL)arg1;
@end