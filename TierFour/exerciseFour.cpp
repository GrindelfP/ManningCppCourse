#include "exerciseFour.hpp"

void appendMultiple(std::vector<int> &initialList, const std::vector<int> &appendingList) {
    for (int element : appendingList) {
        initialList.push_back(element);
    }
}

int countStrings(std::vector<std::string> &listOfStrings, const std::string& comparableString) {
    int counter = 0;
    for (const std::string& string : listOfStrings) {
        if (string == comparableString) counter++;
    }

    return counter;
}


