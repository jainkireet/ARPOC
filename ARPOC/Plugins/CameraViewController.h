//
//  CameraViewController.h
//  ARPOC
//
//  Created by Manav Kamboj on 08/08/12.
//  Copyright (c) 2012 mobile@letsgomo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "ARCoordinate.h"
@interface CameraViewController : UIViewController<UIAccelerometerDelegate, CLLocationManagerDelegate>{
    
    CLLocationManager *locationManager;
	UIAccelerometer *accelerometerManager;
	
	ARCoordinate *centerCoordinate;
	
//	NSObject<ARViewDelegate> *delegate;
	NSObject<CLLocationManagerDelegate> *locationDelegate;
	NSObject<UIAccelerometerDelegate> *accelerometerDelegate;
	
	BOOL scaleViewsBasedOnDistance;
	double maximumScaleDistance;
	double minimumScaleFactor;
    
    UIImagePickerController *cameraController;
    UIView *ar_overlayView;
    NSTimer *_updateTimer;
    double updateFrequency;
    
    NSMutableArray *ar_coordinates;
	NSMutableArray *ar_coordinateViews;
    
    BOOL rotateViewsBasedOnPerspective;
	double maximumRotationAngle;
}

@property (readonly) NSArray *coordinates;

@property (nonatomic, retain) UIImagePickerController *cameraController;
@property (nonatomic, retain) UIAccelerometer *accelerometerManager;
@property (nonatomic, retain) CLLocationManager *locationManager;

@property double updateFrequency;
@property BOOL scaleViewsBasedOnDistance;
@property double maximumScaleDistance;
@property double minimumScaleFactor;
@property BOOL rotateViewsBasedOnPerspective;
@property double maximumRotationAngle;

@property (nonatomic, assign) NSObject<CLLocationManagerDelegate> *locationDelegate;
@property (nonatomic, assign) NSObject<UIAccelerometerDelegate> *accelerometerDelegate;

@property (retain) ARCoordinate *centerCoordinate;


- (void)startListening;
- (BOOL)viewportContainsCoordinate:(ARCoordinate *)coordinate;
- (UIView *)viewForCoordinate:(ARCoordinate *)coordinate;
- (void)updateLocations:(NSTimer *)timer;
@end
