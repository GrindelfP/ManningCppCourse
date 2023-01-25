#include <vector>
#include <iostream>
#include "../commonHeaders.h"

namespace testThree {
    void maxValue(std::vector<int> list) {
        int minElement = INT32_MAX;
        for (int element : list) {
            if (element < minElement) minElement = element;
        }

        printLn(minElement);
    }

    void maxInputValue() {
        std::vector<int> numbers;
        int maxValue = INT32_MIN;
        for (int i = 0; i < 5; ++i) {
            int userInput;
            std::cin >> userInput;
            numbers.push_back(userInput);
        }
        for (int number : numbers) {
            if (number > maxValue) maxValue = number;
        }

        printLn(maxValue);
    }

    void askWhileNotZero() {
        std::vector<int> numbers;
        int maxValue = INT32_MIN, userInput, i = 0;
        std::cin >> userInput;
        while (userInput != 0) {
            numbers.push_back(userInput);
            std::cin >> userInput;
            i++;
        }
        for (int number : numbers) {
            if (number > maxValue) maxValue = number;
        }

        printLn(maxValue);

    }
}