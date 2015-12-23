//
//  LSPaoMaView.h
//  LSDevelopmentModel
//
//  Created by  tsou117 on 15/7/29.
//  Copyright (c) 2015年  tsou117. All rights reserved.
//

#import <UIKit/UIKit.h>

#define TEXTCOLOR [UIColor redColor]
#define TEXTFONTSIZE 14

typedef enum {
    
    Horizon = 0,
    Vertical = 1
    
}Direction;

@interface LSPaoMaView : UIView

- (instancetype)initWithFrame:(CGRect)frame title:(NSString*)title direction:(Direction)direction;

- (void)start;//开始跑马
- (void)stop;//停止跑马

@end
