/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:45 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSStreamDelegate.h>
#import <NSURLConnectionDelegate.h>

@interface WAMediaStreamUploadOperation : NSOperation <NSStreamDelegate, NSURLConnectionDelegate> {
	NSString* _fileName; 
	NSURLResponse* _response; 
	BOOL _isExecuting; 
	BOOL _isFinished; 
	NSString* _uploadURL; 
	NSMutableData* _retrievedData; 
	BOOL _mediaComplete; 
	int _uploadPhase; 
	int _waitCount; 
	XMPPConnection* _connection; 
	NSURLConnection* _urlConnection; 
	NSData* _bodyPrefixData; 
	NSData* _bodyFileData; 
	NSData* _bodySuffixData; 
	NSOutputStream* _producerStream; 
	NSInputStream* _consumerStream; 
	r* _currentBuffer; 
	unsigned _bufferOffset; 
	unsigned _bufferLimit; 
	unsigned _fileOffset; 
	id<WAMediaStreamUploadOperationDelegate> _delegate; 
	WAMessage* _message; 
	NSString* _mediaLocalPath; 
	NSString* _mediaURL; 
	NSString* _streamingHash; 
}
@property (nonatomic,retain) id<WAMediaStreamUploadOperationDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WAMessage* message; 				//@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString* mediaURL; 				//@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) NSString* streamingHash; 				//@synthesize streamingHash=_streamingHash - In the implementation block
@property (nonatomic,retain) XMPPConnection* connection; 				//@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSURLConnection* urlConnection; 				//@synthesize urlConnection=_urlConnection - In the implementation block
@property (nonatomic,retain) NSData* bodyPrefixData; 				//@synthesize bodyPrefixData=_bodyPrefixData - In the implementation block
@property (nonatomic,retain) NSData* bodyFileData; 				//@synthesize bodyFileData=_bodyFileData - In the implementation block
@property (nonatomic,retain) NSData* bodySuffixData; 				//@synthesize bodySuffixData=_bodySuffixData - In the implementation block
@property (nonatomic,retain) NSOutputStream* producerStream; 				//@synthesize producerStream=_producerStream - In the implementation block
@property (nonatomic,retain) NSInputStream* consumerStream; 				//@synthesize consumerStream=_consumerStream - In the implementation block
@property (assign,nonatomic) r* currentBuffer; 				//@synthesize currentBuffer=_currentBuffer - In the implementation block
@property (assign,nonatomic) unsigned bufferOffset; 				//@synthesize bufferOffset=_bufferOffset - In the implementation block
@property (assign,nonatomic) unsigned bufferLimit; 				//@synthesize bufferLimit=_bufferLimit - In the implementation block
@property (assign,nonatomic) unsigned fileOffset; 				//@synthesize fileOffset=_fileOffset - In the implementation block
@property (nonatomic,retain) NSString* mediaLocalPath; 				//@synthesize mediaLocalPath=_mediaLocalPath - In the implementation block
-(void)setMediaLocalPath:(id)arg1;
-(id)initWithMediaLocalPath:(id)arg1 connection:(id)arg2;
-(void)uploadRequestSucceeded:(id)arg1 userInfo:(id)arg2;
-(void)uploadRequestDidFailWithError:(id)arg1 userInfo:(id)arg2;
-(id)uploadError;
-(void)setBodyPrefixData:(id)arg1;
-(void)setBodySuffixData:(id)arg1;
-(void)setConsumerStream:(id)arg1;
-(void)setProducerStream:(id)arg1;
-(void)setCurrentBuffer:(r*)arg1;
-(void)setBufferLimit:(unsigned)arg1;
-(void)startHTTPUploadFrom:(int)arg1;
-(void)setBufferOffset:(unsigned)arg1;
-(void)setFileOffset:(unsigned)arg1;
-(void)setBodyFileData:(id)arg1;
-(void)processNextUploadChunk;
-(void)assignMessage:(id)arg1 delegate:(id)arg2;
-(void)setUrlConnection:(id)arg1;
-(void)setStreamingHash:(id)arg1;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)setMessage:(id)arg1;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(void).cxx_destruct;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)setConnection:(id)arg1;
@end