


#define APPFRAME                        [UIScreen mainScreen].bounds


#import <UIKit/UIKit.h>
#import <SDWebImage/UIImageView+WebCache.h>

@protocol YLoopScrollViewDelegate <NSObject>
- (void)tapingCurrentIndex:(NSInteger)currentIndex ;
@end

@interface YLoopScrollView : UIView

@property (nonatomic,weak) id <YLoopScrollViewDelegate> delegate ;
@property (nonatomic) UIColor *color_pageControl ;
@property (nonatomic) UIColor *color_currentPageControl ;

@property (nonatomic, retain)  UIImageView    *leftImageView ;
@property (nonatomic, retain)  UIImageView    *centerImageView ;
@property (nonatomic, retain)  UIImageView    *rightImageView ;
@property (nonatomic, retain)  UIScrollView    *scrollView ;
@property (nonatomic, retain)  UIPageControl    *pageControl ;
@property (nonatomic, assign)  int imageCount;
@property (nonatomic)       int     currentImageIndex ;
@property (nonatomic,copy)  NSArray *imglist ; //dataSource list , string .

- (instancetype)initWithFrame:(CGRect)frame
                 andImageList:(NSArray *)imglist
                      canLoop:(BOOL)canLoop
                     duration:(NSInteger)duration ;

- (void)reflashImageList:(NSArray *)array;
- (void)addImageViews;
- (void)addPageControl;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView;

@end
