//
//  main.cpp
//  ISBN
//
//  Created by ChrisToohey on 10/4/17.
//  Copyright © 2017 Chris Toohey. All rights reserved.
//

#include <iostream>
#include "ISBNbase.hpp"
#include "ISBN10.hpp"
#include "ISBN13.hpp"
#include "Factory.hpp"

int main() {
	std::string testCases[8] = {"807229644", "807229654", "80 722 965 4X", "978032640615", "9780-32 6406151", "978-032-6406151", "33", "0072296552"};

	std::cout << "\n\n-ISBN VALIDATION EXAMPLES-\n\n\n";
	for(int i = 0; i < 8; i++) {
		results test = ISBN::isValidISBN(testCases[i]);
		std::cout << "Test case: " << testCases[i] << "\n";
		test.show();
	}
	return 0;
}
