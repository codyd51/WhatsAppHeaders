/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:31 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ModuleInfo : NSObject {
	NSString* _name; 
	NSString* _path; 
	NSString* _uuid; 
	NSString* _arch; 
	unsigned _base; 
}
@property (nonatomic,retain) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString* path; 				//@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString* uuid; 				//@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString* arch; 				//@synthesize arch=_arch - In the implementation block
@property (assign,nonatomic) unsigned base; 				//@synthesize base=_base - In the implementation block
+(id)loadedModules;
-(void)setArch:(id)arg1;
-(void)setName:(id)arg1;
-(void)setPath:(id)arg1;
-(void)setBase:(unsigned)arg1;
-(void).cxx_destruct;
-(void)setUuid:(id)arg1;
@end