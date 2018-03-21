//==============================================================================
// Exam 2 - Function 1 Header
//==============================================================================
/*
    File: Function1.h
    Project: Exam 2
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 3/31/2017
	Line Added

******************************************************************************/

#ifndef SRC_FUNCTION1_H_
#define SRC_FUNCTION1_H_

#include <string>
#include <stdexcept>

namespace digitVerification {

// Tests the string to determine if it contains only digits
//		Preconditions: All chars in string are numbers or letters, otherwise
//			invalid_argument will be thrown
//		Postconditions: None
//		Returns: True if all chars are only numbers, false if letters are present
bool isValid(const std::string input) throw (std::invalid_argument);

}

#endif /* SRC_FUNCTION1_H_ */
