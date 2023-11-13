// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: November 13, 2023
// This program displays all the numbers from 0 to the user's number squared.

#include <cstdlib>
#include <cmath>
#include <iostream>

int main() {
    // declare variables
    std::string userNumString;
    int userNumInt, counter, powerProduct;

    // initialize powerProduct to 0
    powerProduct = 0;

    // get the user number
    std::cout << "This program displays all the numbers";
    std::cout << "from 0 to the user's number squared. ";
    std::cout << "\nEnter an integer: ";
    std::cin >> userNumString;

    try {
        // convert  the user number to an integer
        userNumInt = std::stoi(userNumString);

        // if the user number < 0, tell the user to enter a positive integer
        if (userNumInt < 0) {
            std::cout << userNumInt << " is not a positive integer\n";
        } else {
            // otherwise while the counter <= the user number
            for (counter = 0; counter <= userNumInt; counter++) {
                // multiply the counter to the factorial
                powerProduct = pow(counter, 2);

            // display all the numbers from 0 to the user's number squared.
                std::cout << counter << "^2 = " << powerProduct <<  "\n";
            }
        }
    } catch (std::invalid_argument) {
        // if the number is not an int, then tell them their input is invalid
        std ::cout << userNumString << " is not a valid integer.\n";
    }
}
