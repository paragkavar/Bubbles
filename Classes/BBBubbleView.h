//
//  BBBubbleView.h
//  Bubbles
//
//  Created by Kazuya Takeshima on 11/02/02.
//  Copyright 2011 Kazuya Takeshima. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BBBubbleView : UIView
{
  CGFloat pinchBeganScale;
  CGSize pinchBeganSize;
}

+ (id)bubbleWithPoint:(CGPoint)point;

+ (void)setHidden:(BOOL)hidden
      withBubbles:(NSMutableArray*)bubbles;

+ (void)edit:(NSMutableArray*)bubbles;

+ (UIImage*)preview:(NSMutableArray*)bubbles;

@end
