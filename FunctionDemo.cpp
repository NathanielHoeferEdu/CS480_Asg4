//==============================================================================
// Exam 2 - Function Demo
//==============================================================================
/*
    File: FunctionDemo.cpp
    Project: Exam 2
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 3/31/2017

	This program tests the given values to determine whether they meet the
	requirements of either only containing letters or only containing numbers.

******************************************************************************/

#include <iostream>
#include <stdexcept>
#include <vector>
#include "Function1.h"
#include "Function2.h"

using namespace std;

int main()
{
	// Given strings to test
	vector<string> input;
	input.push_back("123456");
	input.push_back("ab12AB");
	input.push_back("ab12A*");
	input.push_back("abCDef");
	input.push_back("ab12AB");
	input.push_back("ab12A*");

	// Run digit tests
	for (int i = 0; i < 3; i++) {
		cout << "digit : isValid(\"" + input[i] + "\"): ";
		try {
			if(digitVerification::isValid(input[i])) {
				cout << "true" << endl;
			} else {
				cout << "false" << endl;
			}
		} catch (invalid_argument &e) {
			cout << e.what() << endl;
		}
	}

	// Run letter tests
	for (int i = 3; i < 6; i++) {
		cout << "alpha : isValid(\"" + input[i] + "\"): ";
		try {
			if(alphaVerification::isValid(input[i])) {
				cout << "true" << endl;
			} else {
				cout << "false" << endl;
			}
		} catch (invalid_argument &e) {
			cout << e.what() << endl;
		}
	}
}


