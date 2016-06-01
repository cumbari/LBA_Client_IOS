//
//  FilteredCoupons.h
//  cumbari
//
//  Created by Shephertz Technology on 01/12/10.
//  Copyright 2010 ShephertzTechnology PVT LTD. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DetailedCoupon;

@interface FilteredCoupons : UITableViewController {
	
	NSDictionary *allCouponsDict;
	
	NSMutableArray *listOfBrandedCoupons;
	
	NSMutableArray *listOfStores;
	
	UILabel *backLabel;
	
	UILabel *listSvenskaLabel;
	
	NSOperationQueue *_operationQueue;
    
    NSMutableDictionary *_cachedImages;
	
    UIActivityIndicatorView *_spinner;

	NSMutableArray *imagesArray;
	
	IBOutlet UILabel *mapLabel;
	
	NSString *maxNumberReached;
	
	DetailedCoupon *detailObj;

}

-(void)getDataStringFromBrands:(NSString *)tmpString;

- (UIImage *)cachedImageForURL:(NSURL *)url forTableViewCell:(UITableViewCell *)cell;

- (UITableViewCell *) getCellContentView:(NSString *)cellIdentifier;

-(void)setBatchValue;

-(void)reloadJsonDataForCategory;

-(IBAction)clicked;

-(void)backToBrands;

- (UITableViewCell *) createViewMoreCell;

-(void)fetchMessages:(id)sender;

@end






/*







{
    "geocoded_waypoints" : [
                            {
                                "geocoder_status" : "OK",
                                "place_id" : "ChIJ4-DQqYMiDTkRRWw7fRvqnFY",
                                "types" : [ "route" ]
                            },
                            {
                                "geocoder_status" : "OK",
                                "place_id" : "ChIJ1TPGpvEiDTkRhwYSlNDrKPM",
                                "types" : [ "route" ]
                            }
                            ],
    "routes" : [
                {
                    "bounds" : {
                        "northeast" : {
                            "lat" : 28.4199476,
                            "lng" : 77.04924319999999
                        },
                        "southwest" : {
                            "lat" : 28.3930331,
                            "lng" : 77.04062139999999
                        }
                    },
                    "copyrights" : "Map data ©2016 Google",
                    "legs" : [
                              {
                                  "distance" : {
                                      "text" : "3.9 km",
                                      "value" : 3916
                                  },
                                  "duration" : {
                                      "text" : "11 mins",
                                      "value" : 673
                                  },
                                  "end_address" : "Sohna-Gurgaon Rd, Badshahpur, Sector 68, Gurgaon, Haryana 122018, India",
                                  "end_location" : {
                                      "lat" : 28.3930331,
                                      "lng" : 77.0475058
                                  },
                                  "start_address" : "Chestnut St, Malibu Town, Sector 47, Gurgaon, Haryana 122018, India",
                                  "start_location" : {
                                      "lat" : 28.4190198,
                                      "lng" : 77.04763539999999
                                  },
                                  "steps" : [
                                             {
                                                 "distance" : {
                                                     "text" : "32 m",
                                                     "value" : 32
                                                 },
                                                 "duration" : {
                                                     "text" : "1 min",
                                                     "value" : 9
                                                 },
                                                 "end_location" : {
                                                     "lat" : 28.4190141,
                                                     "lng" : 77.04795759999999
                                                 },
                                                 "html_instructions" : "Head \u003cb\u003eeast\u003c/b\u003e",
                                                 "polyline" : {
                                                     "points" : "{qmlDwjguM@_A"
                                                 },
                                                 "start_location" : {
                                                     "lat" : 28.4190198,
                                                     "lng" : 77.04763539999999
                                                 },
                                                 "travel_mode" : "DRIVING"
                                             },
                                             {
                                                 "distance" : {
                                                     "text" : "34 m",
                                                     "value" : 34
                                                 },
                                                 "duration" : {
                                                     "text" : "1 min",
                                                     "value" : 14
                                                 },
                                                 "end_location" : {
                                                     "lat" : 28.4193154,
                                                     "lng" : 77.0479874
                                                 },
                                                 "html_instructions" : "Turn \u003cb\u003eleft\u003c/b\u003e",
                                                 "maneuver" : "turn-left",
                                                 "polyline" : {
                                                     "points" : "yqmlDwlguM}@E"
                                                 },
                                                 "start_location" : {
                                                     "lat" : 28.4190141,
                                                     "lng" : 77.04795759999999
                                                 },
                                                 "travel_mode" : "DRIVING"
                                             },
                                             {
                                                 "distance" : {
                                                     "text" : "0.1 km",
                                                     "value" : 122
                                                 },
                                                 "duration" : {
                                                     "text" : "1 min",
                                                     "value" : 23
                                                 },
                                                 "end_location" : {
                                                     "lat" : 28.4193343,
                                                     "lng" : 77.04923669999999
                                                 },
                                                 "html_instructions" : "Turn \u003cb\u003eright\u003c/b\u003e",
                                                 "maneuver" : "turn-right",
                                                 "polyline" : {
                                                     "points" : "wsmlD}lguMAyF"
                                                 },
                                                 "start_location" : {
                                                     "lat" : 28.4193154,
                                                     "lng" : 77.0479874
                                                 },
                                                 "travel_mode" : "DRIVING"
                                             },
                                             {
                                                 "distance" : {
                                                     "text" : "68 m",
                                                     "value" : 68
                                                 },
                                                 "duration" : {
                                                     "text" : "1 min",
                                                     "value" : 24
                                                 },
                                                 "end_location" : {
                                                     "lat" : 28.4199476,
                                                     "lng" : 77.049211
                                                 },
                                                 "html_instructions" : "Turn \u003cb\u003eleft\u003c/b\u003e",
                                                 "maneuver" : "turn-left",
                                                 "polyline" : {
                                                     "points" : "ysmlDwtguMm@?S?y@D"
                                                 },
                                                 "start_location" : {
                                                     "lat" : 28.4193343,
                                                     "lng" : 77.04923669999999
                                                 },
                                                 "travel_mode" : "DRIVING"
                                             },
                                             {
                                                 "distance" : {
                                                     "text" : "0.9 km",
                                                     "value" : 870
                                                 },
                                                 "duration" : {
                                                     "text" : "3 mins",
                                                     "value" : 177
                                                 },
                                                 "end_location" : {
                                                     "lat" : 28.4172791,
                                                     "lng" : 77.0408559
                                                 },
                                                 "html_instructions" : "Turn \u003cb\u003eleft\u003c/b\u003e",
                                                 "maneuver" : "turn-left",
                                                 "polyline" : {
                                                     "points" : "uwmlDqtguMF`@@Bl@bEHf@b@~BVpAXrAPz@\\tAPn@BNr@~CPr@bBpGxB|IRv@"
                                                 },
                                                 "start_location" : {
                                                     "lat" : 28.4199476,
                                                     "lng" : 77.049211
                                                 },
                                                 "travel_mode" : "DRIVING"
                                             },
                                             {
                                                 "distance" : {
                                                     "text" : "2.8 km",
                                                     "value" : 2790
                                                 },
                                                 "duration" : {
                                                     "text" : "7 mins",
                                                     "value" : 426
                                                 },
                                                 "end_location" : {
                                                     "lat" : 28.3930331,
                                                     "lng" : 77.0475058
                                                 },
                                                 "html_instructions" : "Turn \u003cb\u003eleft\u003c/b\u003e onto \u003cb\u003eNH248A\u003c/b\u003e\u003cdiv style=\"font-size:0.9em\"\u003ePass by ING Vysya Bank (on the left in 1.4&nbsp;km)\u003c/div\u003e",
                                                 "maneuver" : "turn-left",
                                                 "polyline" : {
                                                     "points" : "_gmlDk`fuM\\FH@PD^Nj@NfOwCbCc@jFeAhAQxE}@VG|@Q`FcArKsBJCt@MxJiBxEy@NC|GkAtB_@bAQPCpASHAt@OzB_@bDi@|Dm@fGaANEx@OtAU`@Gp@M`Fy@z@Uf@QHCVKRK`Ai@JIJGp@e@"
                                                 },
                                                 "start_location" : {
                                                     "lat" : 28.4172791,
                                                     "lng" : 77.0408559
                                                 },
                                                 "travel_mode" : "DRIVING"
                                             }
                                             ],
                                  "traffic_speed_entry" : [],
                                  "via_waypoint" : []
                              }
                              ],
                    "overview_polyline" : {
                        "points" : "{qmlDwjguM@_A}@EAyFm@?mADHd@v@jFz@pEj@nCn@dCv@nDtBdIlCtKf@Hp@Tj@NfOwCnJiBbHoAjUqEtSuDjSkDdVyD`Es@rGgAbBg@`@OtAu@hAw@"
                    },
                    "summary" : "NH248A",
                    "warnings" : [],
                    "waypoint_order" : []
                }
                ],
    "status" : "OK"
}
 */
