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
	std::string testCases[7] = {"807229654", "978-032-6406151","807229654", "80 722 965 4X", "978032640615", "9780-32 6406151", "33"};

	std::cout << "Test case\tResult\tError Message\n";
	for(int i = 0; i < 7; i++) {
		results test = ISBN::isValidISBN(testCases[i]);
		std::cout <<  testCases[i] << "\t";
		test.show();
	}
	return 0;
}
