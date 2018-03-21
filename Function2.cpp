//==============================================================================
// Exam 2 - Function 2 Source
//==============================================================================
/*
    File: Function2.cpp
    Project: Exam 2
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 3/31/2017

******************************************************************************/

#include <cstdlib>
#include "Function2.h"

namespace
{
	// Determines if the entered string contains only digits
	// 		Preconditions: None
	//		Postconditions: None
	//		Returns: True if string contains only digits
	bool testChar(std::string str) throw (std::invalid_argument)
	{
		bool isDigits = true;
		for (int i = 0; i < (int) str.length(); i++ ) {
			if (!std::isalpha(str[i])) {
				if (!std::isdigit(str[i])) {
					std::string exc = "non-alpha character: ";
					exc += str[i];
					throw std::invalid_argument(exc);
				} else {
					isDigits = false;
				}
			}
		}
		return isDigits;
	}
}

namespace alphaVerification
{
	bool isValid(const std::string input) throw (std::invalid_argument)
	{
		bool isValid = false;
		try {
			isValid = testChar(input);
		} catch (std::invalid_argument &e) {
			throw e;
		}
		return isValid;
	}
}


