//
//  ISBN13.cpp
//  ISBN
//
//  Created by ChrisToohey on 10/4/17.
//  Copyright © 2017 Chris Toohey. All rights reserved.
//
#include <iostream>
#include "ISBNbase.hpp"
#include "ISBN13.hpp"

void ISBN13::modifyMultiplier() {
	multiplier = (multiplier + 2) % 4;
}

