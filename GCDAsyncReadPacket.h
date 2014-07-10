/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:50 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GCDAsyncReadPacket : NSObject {
	NSMutableData* buffer; 
	unsigned startOffset; 
	unsigned bytesDone; 
	unsigned maxLength; 
	double timeout; 
	unsigned readLength; 
	NSData* term; 
	BOOL bufferOwner; 
	unsigned originalBufferLength; 
	long tag; 
}
-(id)initWithData:(id)arg1 startOffset:(unsigned)arg2 maxLength:(unsigned)arg3 timeout:(double)arg4 readLength:(unsigned)arg5 terminator:(id)arg6 tag:(long)arg7;
-(void)ensureCapacityForAdditionalDataOfLength:(unsigned)arg1;
-(unsigned)optimalReadLengthWithDefault:(unsigned)arg1 shouldPreBuffer:(BOOL*)arg2;
-(unsigned)readLengthForNonTermWithHint:(unsigned)arg1;
-(unsigned)readLengthForTermWithHint:(unsigned)arg1 shouldPreBuffer:(BOOL*)arg2;
-(unsigned)readLengthForTermWithPreBuffer:(id)arg1 found:(BOOL*)arg2;
-(int)searchForTermAfterPreBuffering:(long)arg1;
-(void).cxx_destruct;
@end