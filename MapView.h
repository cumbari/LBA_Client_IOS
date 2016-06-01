//
//  MapView.h
//  cumbari
//
//  Created by Shephertz Technology on 18/02/11.
//  Copyright 2011 ShephertzTechnology PVT LTD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "RegexKitLite.h"
#import "Place.h"
#import "PlaceMark.h"

@interface MapView : UIViewController<MKMapViewDelegate> {
	
	MKMapView* mapView;
	UIImageView* routeView;
	
	NSArray* routes;
	
	UIColor* lineColor;
	
	UILabel *backLabel;
	
	CLLocationCoordinate2D home;
	
	CLLocationCoordinate2D store;
	
	UIBarButtonItem *buttonLeft;
    
    Place *startLoc;
    Place *storeLoc;
}

@property (nonatomic, retain) UIColor* lineColor;

@property (nonatomic, retain) MKMapView* mapView;

@property (nonatomic, retain) UIImageView* routeView;


-(void)passLocationCoordiantes:(CLLocationCoordinate2D )tmp :(CLLocationCoordinate2D )tmp1;
-(void)setStartLocation:(Place*)l_origin;
-(void)setStoreLocation:(Place*)l_destination;

@end
