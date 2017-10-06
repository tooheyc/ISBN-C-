//
//  Factory.hpp
//  ISBN
//
//  Created by ChrisToohey on 10/4/17.
//  Copyright © 2017 Chris Toohey. All rights reserved.
//

#ifndef Factory_hpp
#define Factory_hpp
#include <iostream>
#include <string>
#include "ISBN10.hpp"
#include "ISBN13.hpp"

struct results {
	bool valid;
	std::string value;
	std::string err;

	results(std::string val) : valid(false), err("The number must have 10 or 13 digits.") {
		size_t pos, i = 0, chars = 3;
		char ch[3] = {"- "};
		for(i = 0; i < chars; i++) {
			while((pos = val.find(ch[i])) < val.length()) val = val.substr(0,pos)+ val.substr(pos+1);
		}
		value = val;
		if(value.length() != 10 && value.length() != 13) err = "Please double check the number.";
	}

	void show() {
		std::string val = valid ? " is Valid ":" is Not valid ";
		std::cout << value << val << "\t" << err << std::endl;
		std::cout << std::endl;
	}
	
};

class ISBN { // Factory
public:
	static results isValidISBN(std::string num);
	static results checkAddedDigit(std::string num);
};

#endif /* Factory_hpp */
