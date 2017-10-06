//
//  ISBN13.hpp
//  ISBN
//
//  Created by ChrisToohey on 10/4/17.
//  Copyright © 2017 Chris Toohey. All rights reserved.
//

#ifndef ISBN13_hpp
#define ISBN13_hpp

class ISBN13: public ISBNbase {
public:
	ISBN13() : ISBNbase(10) {}

	void modifyMultiplier();

};

#endif /* ISBN13_hpp */
