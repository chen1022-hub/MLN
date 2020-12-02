//
//  MLAInteractiveBehaviorProtocol.h
//  Pods
//
//  Created by Dai on 2020-12-02.
//

#ifndef MLAInteractiveBehaviorProtocol_h
#define MLAInteractiveBehaviorProtocol_h

@class MLAValueAnimation;
@protocol MLAInteractiveBehaviorProtocol
- (void)addAnimation:(MLAValueAnimation *)ani; //MLAValueAnimation
- (void)removeAnimation:(MLAValueAnimation *)ani;
- (void)removeAllAnimations;
@end

typedef NS_ENUM(NSUInteger, InteractiveDirection) {
    InteractiveDirection_X,
    InteractiveDirection_Y
};

typedef NS_ENUM(NSUInteger, InteractiveType) {
    InteractiveType_Gesture
};

#endif /* MLAInteractiveBehaviorProtocol_h */