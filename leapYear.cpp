// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: October 22, 2022
// This program asks the user for the year and
// determines whether or not that year is a "leap" year or not


#include <iostream>


int main() {
    // Initializes Variables
    std::string yearString;
    int year;

    // Asks user to input their year
    std::cout << "Enter a year: ";
    std::cin >> yearString;

    // Checks for any exceptions
    try {
        // Attempts to cast user input into integer
        year = std::stoi(yearString);

        // IF year is evenly divisible by 4
        if (year % 4 == 0) {
            // IF year is evenly divisible by 100
            if (year % 100 == 0) {
                // IF year is evenly divisible by 400
                if (year % 400 == 0) {
                    // Displays whether or not it was a leap year
                    std::cout << year << " is a leap year!" << std::endl;
                } else {
                    // Displays whether or not it was a leap year
                    std::cout << year << " is NOT a leap year!" << std::endl;
                }
            } else {
                // Displays whether or not it was a leap year
                std::cout << year << " is a leap year!" << std::endl;
            }
        } else {
            // Displays whether or not it was a leap year
            std::cout << year << " is NOT a leap year!" << std::endl;
        }

    // In the event there are any exceptions
    } catch (std::invalid_argument) {
        // Displays to user that they did not enter a valid year
        std::cout << yearString << " is not a valid year" << std::endl;
    }
}
