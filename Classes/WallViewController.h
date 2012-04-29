/*
 This module is licensed under the MIT license.
 
 Copyright (C) 2011 by raw engineering
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */
//
//  WallViewController.h
//  FlipView
//
//  Created by Reefaq Mohammed on 16/07/11.
 
//

#import <UIKit/UIKit.h>
#import "AFKPageFlipper.h"
#import "MessageModel.h"
#import "FullScreenView.h"
#import "XMLStringFile.h"
#import "DACircularProgressView.h"
#import <Socialize/Socialize.h>


@interface WallViewController : UIViewController <AFKPageFlipperDataSource> {
	NSMutableArray* viewControlerStack;	
	AFKPageFlipper *flipper;
	UIViewExtention* viewToShowInFullScreen;
	FullScreenView* fullScreenView;
	UIView* fullScreenBGView;
	NSString* wallTitle;
	BOOL isInFullScreenMode;
	NSMutableArray* messageArrayCollection;
    
    //add the minivan news related stuff
    
    //mutable array to store data from rss feed and display in table view
	
	NSMutableArray *rssOutputData;
	
	//to store data from xml node 
	
	NSMutableString *nodecontent;
	
	//declare the object of nsxml parse which will we use later for parsing
	
	NSXMLParser *xmlParserObject;
	
	
	//declare the object of nsobject class
	
	XMLStringFile *xmlStringFileObject;

    SocializeActionBar* actionBar;

}

-(void)showViewInFullScreen:(UIViewExtention*)viewToShow withModel:(MessageModel*)model;
-(void)closeFullScreen;
-(void)buildPages:(NSArray*)messagesArray;

@property (nonatomic, assign) NSMutableArray* viewControlerStack;
@property (nonatomic, assign) UIGestureRecognizer* gestureRecognizer;
@property (nonatomic, retain) NSString* wallTitle;

//minivan stuff
@property (strong, nonatomic) DACircularProgressView *largestProgressView;
@property (nonatomic, retain) SocializeActionBar *actionBar;


@end
