//
//  ISBN10.hpp
//  ISBN
//
//  Created by ChrisToohey on 10/4/17.
//  Copyright © 2017 Chris Toohey. All rights reserved.
//

#ifndef ISBN10_hpp
#define ISBN10_hpp
#include <iostream>
#include <string>
#include "ISBNbase.hpp"

class ISBN10: public ISBNbase {

public:
	ISBN10(): ISBNbase(11) {}
	
	void modifyMultiplier();
};

#endif /* ISBN10_hpp */
