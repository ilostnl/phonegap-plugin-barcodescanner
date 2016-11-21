#import <UIKit/UIKit.h>

@interface PartialTransparentView : UIView {
    NSArray *rectsArray;
    UIColor *backgroundColor;
}

- (id)initWithFrame:(CGRect)frame backgroundColor:(UIColor*)color andTransparentRects:(NSArray*)rects;

@end