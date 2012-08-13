//
//  ARPOC.m
//  ARPOC
//
//  Created by Manav Kamboj on 09/08/12.
//  Copyright (c) 2012 mobile@letsgomo.com. All rights reserved.
//

#import "ARPOC.h"
#import "CameraViewController.h"



@implementation ARPOC
@synthesize callbackID;

-(void)showView:(NSMutableArray *)arguments withDict:(NSMutableDictionary *)options{
    CameraViewController *myCameraViewController = [[CameraViewController alloc]initWithNibName:@"CameraViewController" bundle:nil];
	
	myCameraViewController.scaleViewsBasedOnDistance = YES;
	myCameraViewController.minimumScaleFactor = .5;
	
	myCameraViewController.rotateViewsBasedOnPerspective = YES;    
		
    ARCoordinate *coordinate = [[ARCoordinate alloc] init];
	coordinate.azimuth = 0.0;
	coordinate.inclination = 0.0;
	coordinate.radialDistance = 10.0;
	
	myCameraViewController.centerCoordinate = coordinate;
    [coordinate release];
	
	[myCameraViewController startListening];
	
	[self.viewController.view addSubview:myCameraViewController.view];
}

@end
