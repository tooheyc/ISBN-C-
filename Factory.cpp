//
//  Factory.cpp
//  ISBN
//
//  Created by ChrisToohey on 10/4/17.
//  Copyright © 2017 Chris Toohey. All rights reserved.
//

#include "Factory.hpp"

results ISBN::isValidISBN(std::string num) {
	results result(num);
	ISBNbase *validator;

	while (true) {
		if(result.value.length() == 10)
			validator = new ISBN10;
		else if(result.value.length() == 13)
			validator = new ISBN13;
		else validator = nullptr;

		if(result.value.length() == 9 || result.value.length() == 12){
			result = checkAddedDigit(num);
		} else if(result.value.length() == 10 || result.value.length() == 13){
			if(validator->isValidISBN(result.value)) {
				result.valid = true;
				result.err = "";
			}
		} else
			break; // Wrong length for an ISBN.

		break;
	}
	return result;
}

results ISBN::checkAddedDigit(std::string num) {
	results result(num);

//Check adding digits 0 - 9
	for(int i = 0; i < 10; i++) {
//		std::cout << temp << " temp len: " << temp.length() << std::endl;
		result = ISBN::isValidISBN(num+std::to_string(i));
		if(result.valid) break;
	}

	if(!result.valid){
		// If still not valid, check adding digit X
		result = ISBN::isValidISBN(num+"X");
	}

	// If it now shows valid, show how we made if valid
	if(result.valid) {
		result.err ="Please verify number. Did you mean: "+result.value+"?";
		// Since we needed to add a digit to make it valid, it's not really valid:
		result.valid = false;
	}
	// Return the value we're checking, not what we've just tested.
	result.value = num;

	return result;

}
