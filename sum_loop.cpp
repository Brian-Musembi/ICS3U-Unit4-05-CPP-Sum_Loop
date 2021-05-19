// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program calculates the sum of all positive integers
//      entered by a user using a loop

#include <iostream>
#include <string>

int main() {
    // This function calculates the sum of all positive integers
    //      entered by a user using a loop

    std::cout << "This program calculates the sum of all positive integers"
                 " inputted by the user."
              << std::endl;

    // variable declarations
    int total = 0;
    std::string howManyNum;
    int howManyInt;
    std::string userAdd;
    int userAddInt;

    // input
    std::cout << "Enter how many numbers you want to add up: ";
    std::cin >> howManyNum;
    std::cout << "" << std::endl;

    // process
    try {
        howManyInt = std::stoi(howManyNum);

        if (howManyInt > 0) {
            while (howManyInt > 0) {
                std::cout << "Enter a number you want to add: ";
                std::cin >> userAdd;
                try {
                    // making sure user enteres number
                    userAddInt = std::stoi(userAdd);

                    howManyInt = howManyInt - 1;
                    // if statement to ignore negative numbers
                    if (userAddInt < 0) {
                       std::cout << "Negative numbers won't be "
                                 << "added." << std::endl;
                        continue;
                    } else {
                       total = total + userAddInt;
                    }
                } catch (std::invalid_argument) {
                   std::cout << "That isn't a number! "
                             << "Please try again." << std::endl;
                }
            }
            std::cout << "" << std::endl;
            std::cout << "The sum of all positive numbers is "
                      << total << std::endl;

        } else {
            // output
            std::cout << howManyInt << " isn't a positive integer!"
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That isn't a number! Try again." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Thank you for playing!" << std::endl;
}
