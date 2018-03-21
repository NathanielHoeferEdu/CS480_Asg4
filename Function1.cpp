//==============================================================================
// Exam 2 - Function 1 Source
//==============================================================================
/*
    File: Function1.cpp
    Project: Exam 2
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 3/31/2017
	Conflict Line Resolved

******************************************************************************/

#include <cstdlib>
#include "Function1.h"

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
			if (!std::isdigit(str[i])) {
				if (!std::isalpha(str[i])) {
					std::string exc = "invalid digit character: ";
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

namespace digitVerification
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


