#include <vector>
#include <iostream>
#include "../commonHeaders.h"
#include "tierThree.h"

void testThree::maxValue(const std::vector<int>& list) {
    int minElement = INT32_MAX;
    for (int element: list) {
        if (element < minElement) minElement = element;
    }

    printLn(minElement);
}

void testThree::maxInputValue() {
    std::vector<int> numbers;
    int maxValue = INT32_MIN;
    for (int i = 0; i < 5; ++i) {
        int userInput;
        std::cin >> userInput;
        numbers.push_back(userInput);
    }
    for (int number: numbers) {
        if (number > maxValue) maxValue = number;
    }

    printLn(maxValue);
}

void testThree::askWhileNotZero() {
    std::vector<int> numbers;
    int maxValue = INT32_MIN, userInput, i = 0;
    std::cin >> userInput;
    while (userInput != 0) {
        numbers.push_back(userInput);
        std::cin >> userInput;
        i++;
    }
    for (int number: numbers) {
        if (number > maxValue) maxValue = number;
    }
    printLn(maxValue);
}