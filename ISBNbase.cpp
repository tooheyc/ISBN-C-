//
//  ISBNbase.cpp
//  ISBN
//
//  Created by ChrisToohey on 10/4/17.
//  Copyright © 2017 Chris Toohey. All rights reserved.
//
#include <iostream>
#include <string>
#include "ISBNbase.hpp"

bool ISBNbase::isValidISBN(std::string num) {
	int val = 0;
	// Sum the digits * the multiplier value.
	for(int n = 0; n < num.length(); n++) {
		val += num.substr(n,1) == "X" ? 10 * multiplier : stoi(num.substr(n,1)) * multiplier;
		// The mulitplier varies depending on the position in the number and the number of digits.
		modifyMultiplier();
	}

	// Modulo varies by the number of digits.
	return (val % modulo == 0);
}

