/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:07 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AsyncReadPacket : NSObject {
	NSMutableData* buffer; 
	long bytesDone; 
	double timeout; 
	long tag; 
}
-(id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long)arg3;
-(void).cxx_destruct;
@end