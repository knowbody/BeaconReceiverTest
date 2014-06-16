//
//  ViewController.h
//  BeaconReceiver
//
//  Created by Mateusz Zatorski on 13/06/2014.
//  Copyright (c) 2014 knowbody. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate>

@property (strong, nonatomic) CLBeaconRegion *myBeaconRegion;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;

@end
