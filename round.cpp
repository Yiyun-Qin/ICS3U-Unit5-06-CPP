// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in May 2022
// This is a math program, rounding the decimal numbers

#include <iostream>
#include <string>
#include <cmath>

void Decimal_Round(float &decimal, const int &decimalPlaces) {
    // This function rounds the decimal

    // process & output
    float number1;
    float number2;
    int number3;
    number1 = decimal * pow(10, decimalPlaces);
    number2 = number1 + 0.5;
    number3 = static_cast<int>(number2);
    decimal = number3 * pow(10, decimalPlaces * -1);
}


int main() {
    // This function does try, catch, input and output
    std::string floatEnterString;
    std::string decimalPlacesString;
    float floatEnter;
    int decimalPlaces;

    // input
    std::cout << "Enter the number you want to round: ";
    std::cin >> floatEnterString;
    std::cout << "Enter how many decimal places you want to round by: ";
    std::cin >> decimalPlacesString;

    // process & output
    std::cout << "" << std::endl;
    try {
        floatEnter = std::stof(floatEnterString);
        decimalPlaces = std::stoi(decimalPlacesString);
        if (decimalPlaces >= 0) {
            Decimal_Round(floatEnter, decimalPlaces);
            std::cout << "The rounded number is "
            << floatEnter << "." << std::endl;
        } else {
            std::cout << "Please do not enter negative decimal places!"
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
        std::cout << "\nDone." << std::endl;
    }
}
