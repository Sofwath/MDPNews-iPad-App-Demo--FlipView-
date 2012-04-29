//
//  XMLStringFile.m
//  FlipView
//
//  Created by Sofwathullah Mohamed on 4/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "XMLStringFile.h"


@implementation XMLStringFile
@synthesize xmllink,xmltitle,xmlcontent,xmlpubdate;

-(void)dealloc
{
	[xmllink release];
	//released link twice
	[xmltitle release];
	[super dealloc];
	
	
}

@end
