//
//  FishMovementModel.h
//  Aquarium Simulator
//
//  Created by Adam G Murphy on 2013-03-28.
//  Copyright (c) 2013 Adam G Murphy. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "FishDataModel.h"
#import "Frame.h"
#import "Position.h"

@interface FishMovementModel : NSObject


- (id) initWithFrame: (Frame *) setFrame boundary: (Frame *) setBoundary refreshRate: (double) setRefreshRate;

- (id) initWithFrame: (Frame *) setFrame facing: (double) setFacing boundary: (Frame *) setBoundary refreshRate: (double) setRefreshRate;

- (id) initWithPosition: (Frame *) setFrame facing: (double) setFacing boundary: (Frame *) setBoundary refreshRate: (double) setRefreshRate delegate: setDelegate;

- (void) setDelegate: (id) setDelegate;

- (id) delegate;

- (Boolean) moveToPosition: (Position *) position withSpeed: (double) setSpeed;

- (void) turnAroundWithSpeed: (double) setSpeed;

- (void) moveToFoodWithSpeed:(double) setSpeed;

- (void) stopMovement;

- (void) moveToGoal;

- (void) turnAround;

- (double) facing;

- (Frame *) frame;
@end
