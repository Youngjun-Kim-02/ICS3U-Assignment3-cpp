// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program checks if an age is eligible to vote or not

#include <iostream>

int main() {
    // this function checks if an age is eligible to vote or not
    int age;

    // input
	std::cout << "Enter an age: ";
	std::cin >> age;
	std::cout << "" << std::endl;

	// process
	if (age > 18)
	    // output
	    std::cout << "Eligible to vote.";
	// process
	else if (age == 18)
	    // output
	    std::cout << "Eligible to vote.";
	else
	std::cout << "Ineligible to vote.";
	std::cout << "" << std::endl;
	std::cout << "Done." << std::endl;
}
