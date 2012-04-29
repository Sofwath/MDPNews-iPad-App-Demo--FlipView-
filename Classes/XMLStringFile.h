//
//  XMLStringFile.h
//  FlipView
//
//  Created by Sofwathullah Mohamed on 4/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface XMLStringFile : NSObject {
    
	NSString *xmllink,*xmltitle, *xmlcontent, *xmlpubdate;
	
	
}
@property(nonatomic,retain)NSString *xmllink,*xmltitle,*xmlcontent,*xmlpubdate;

@end
