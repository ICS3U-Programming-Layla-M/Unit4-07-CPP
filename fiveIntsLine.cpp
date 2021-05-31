// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 31, 2021
// This programs displays all numbers from 1000 to 2000, 5 on each line

#include <iostream>

int main() {
    // define constants
    int MIN_NUM = 1000, MAX_NUM = 2000;

    // define variable
    int counter;

    for (counter = MIN_NUM; counter < MAX_NUM + 1; counter++) {
        // checks if number after counter is a multiple of 5
        // if so it will go to the next line once the number is outputted
        if ((counter + 1) % 5 == 0) {
            std::cout << counter << "\n";
        } else {
            // if the number after the counter is not a multiple of 5,
            // the program will continue to display numbers on the same line
            std::cout << counter << " ";
        }
    }
}
