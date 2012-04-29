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
//  HeaderView.m
//  FlipView
//
//  Created by Reefaq Mohammed on 16/07/11.
 
//

#import "HeaderView.h"

@implementation HeaderView

@synthesize currrentInterfaceOrientation,wallTitleText;

-(void)rotate:(UIInterfaceOrientation)interfaceOrientation animation:(BOOL)animation{
	currrentInterfaceOrientation = interfaceOrientation;
}


-(void) setWallTitleText:(NSString *)wallTitle {
	wallTitleText = wallTitle;
	
	
	UIImageView* userImageView = [[UIImageView alloc] init];
	userImageView.image = [UIImage imageNamed:@"mdp-logo-original.jpg"];
	[userImageView setFrame:CGRectMake(self.frame.size.width - 80, 2, 50, 48)];
	[self addSubview:userImageView];
	[userImageView release];
	
	wallNameLabel = [[UILabel alloc] init];
	[wallNameLabel setText:wallTitle];
	wallNameLabel.font =[UIFont fontWithName:@"Faruma" size:30];
	[wallNameLabel setTextColor:RGBCOLOR(0,0,0)];
    wallNameLabel.backgroundColor = [UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:0.0];
    

	wallNameLabel.autoresizingMask = UIViewAutoresizingFlexibleWidth;
	[wallNameLabel sizeToFit];
    //userImageView.frame.origin.x + userImageView.frame.size.width + 10
	[wallNameLabel setFrame:CGRectMake(self.frame.size.width - (wallNameLabel.frame.size.width + 80) , 5, wallNameLabel.frame.size.width  , wallNameLabel.frame.size.height)];
	[self addSubview:wallNameLabel];
	
}

-(void) dealloc {
	[wallNameLabel release];
	[wallTitleText release];
	[super dealloc];
}

@end
