//
//  ISBNbase.hpp
//  ISBN
//
//  Created by ChrisToohey on 10/4/17.
//  Copyright © 2017 Chris Toohey. All rights reserved.
//

#ifndef ISBNbase_hpp
#define ISBNbase_hpp
#include <iostream>
#include <string>

class ISBNbase {
public:
	int modulo;
	int multiplier;
	
	ISBNbase(int mod): modulo(mod), multiplier(1) {}

	virtual void modifyMultiplier() = 0;
	bool isValidISBN(std::string num);

};

#endif /* ISBNbase_hpp */
