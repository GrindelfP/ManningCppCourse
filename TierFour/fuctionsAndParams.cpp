#include <vector>
#include "../commonHeaders.h"
#include "tierFour.hpp"

#define cocaColaZero 0
using namespace std;

void tierFour::addZerosToList(vector<int> &numberList, int zerosNumber) {
    for (int i = 0; i < zerosNumber; ++i) numberList.push_back(cocaColaZero);
    printWithPrefix("B. Size of list is ", numberList.size());
}

void tierFour::printAllElements(const vector<int> &list) {
    for (int element : list) {
        printLn(element);
    }
}