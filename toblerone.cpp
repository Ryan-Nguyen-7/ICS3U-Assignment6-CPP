// Copyright (C) 2021 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program uses a function to calculate the
//     volume of a cylinder


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>


float CalculateVolume(float baseLength, float height) {
    // this function calculates the volume of a triangle-based prism
    float volume;

    // process
    volume = pow(baseLength, 2) / 2 * height;

    // output
    return volume;
}

main() {
    // this function gets base length and height

    float volume;
    std::string baseLengthAsString;
    int baseLengthAsNumber;
    std::string heightAsString;
    int heightAsNumber;

    std::cout << "Enter base length (cm): ";
    std::cin >> baseLengthAsString;

    std::cout << "Enter height (cm): ";
    std::cin >> heightAsString;
    std::cout << "" << std::endl;

    // calls CalculateVolume
    try {
        // integer check
        baseLengthAsNumber = std::stoi(baseLengthAsString);
        heightAsNumber = std::stoi(heightAsString);

        // positive integer check
        if (baseLengthAsNumber > 0 && heightAsNumber > 0) {
            volume = CalculateVolume(baseLengthAsNumber, heightAsNumber);

        // final output
        std::cout << "Volume: " << std::fixed
              << std::setprecision(3) << std::setfill('0')
              << volume << "cm³" << std::endl;
        } else {
            std::cout << "Dimensions must be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid dimension" << std::endl;
        }
}
