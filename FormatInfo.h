/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:56 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FormatInfo : NSObject {
	NSString* _pattern; 
	NSString* _format; 
	NSArray* _leadingDigitsPatterns; 
}
@property (nonatomic,retain) NSString* pattern; 				//@synthesize pattern=_pattern - In the implementation block
@property (nonatomic,retain) NSString* format; 				//@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSArray* leadingDigitsPatterns; 				//@synthesize leadingDigitsPatterns=_leadingDigitsPatterns - In the implementation block
-(void)setLeadingDigitsPatterns:(id)arg1;
-(id)description;
-(void).cxx_destruct;
-(void)setFormat:(id)arg1;
-(void)setPattern:(id)arg1;
@end