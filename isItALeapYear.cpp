// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program determines whether an inputted year is a leap year

#include <iostream>
#include <string>

int main() {
    // this function determines if the year is a leap year

    // variables
    std::string yearAsString;
    int year;

    // input
    std::cout << "Enter the year: ";
    std::cin >> yearAsString;

    // process & output
    try {
        year = std::stoi(yearAsString);
        if (year > 0) {
            if (year % 4 == 0) {
                if (year % 100 == 0) {
                    if (year % 400 == 0) {
                        std::cout << "\nIt is not a leap year" << std::endl;
                    } else {
                        std::cout << "\nIt is a leap year" << std::endl;
                    }
                } else {
                    std::cout << "\nIt is a leap year" << std::endl;
                }
            } else {
                std::cout << "\nIt is not a leap year" << std::endl;
            }
        } else {
            std::cout << "\nInvalid Input." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
