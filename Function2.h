//==============================================================================
// Exam 2 - Function 2 Header
//==============================================================================
/*
    File: Function2.h
    Project: Exam 2
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 3/31/2017
	Added Line

******************************************************************************/

#ifndef SRC_FUNCTION2_H_
#define SRC_FUNCTION2_H_

#include <string>
#include <stdexcept>

namespace alphaVerification {

// Tests the string to determine if it contains only letters
//		Preconditions: All chars in string are numbers or letters, otherwise
//			invalid_argument will be thrown
//		Postconditions: None
//		Returns: True if all chars are only letters, false if numbers are present
bool isValid(const std::string input) throw (std::invalid_argument);

}

#endif /* SRC_FUNCTION2_H_ */
