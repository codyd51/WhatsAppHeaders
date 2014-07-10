/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:37 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>

@interface WAPlaceDetailsViewController : UIViewController <UIWebViewDelegate> {
	WAProgressHUD* _progressHUD; 
	WAPlace* _waPlace; 
	id<ShareLocationControllerDelegate> _delegate; 
	UIWebView* _webView; 
}
@property (nonatomic,retain) WAPlace* waPlace; 				//@synthesize waPlace=_waPlace - In the implementation block
@property (assign,nonatomic) id<ShareLocationControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIWebView* webView; 				//@synthesize webView=_webView - In the implementation block
-(void)sendPlaceAction:(id)arg1;
-(void)loadPlacePageWithURLString:(id)arg1;
-(id)initWithWAPlace:(id)arg1 delegate:(id)arg2;
-(void)setWaPlace:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1;
-(void)setWebView:(id)arg1;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidStartLoad:(id)arg1;
-(void)webViewDidFinishLoad:(id)arg1;
-(void).cxx_destruct;
@end