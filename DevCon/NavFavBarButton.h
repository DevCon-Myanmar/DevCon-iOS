//
//  NavBarButton.h
//  PropertyGuru
//
//  Created by Tonytoons on 3/21/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NavFavBarButton : UIButton {
	BOOL landscape;
    
}

-(id)init;
- (void) setFavImage:(BOOL)isFav;
@property BOOL landscape;

@end
