#include <string>
#include <iostream>
#include <vector>
#include <numeric>
#include "tierTwo.h"


namespace testTwo {
    using namespace std;
    void TaskOne() {
        string name;
        int age;
        printEntryWithNoEndl("Hi! What's your name? ");
        cin >> name;
        printEntryWithNoEndl("And now, what's your age? ");
        cin >> age;
        cout << "Your name is " << name << " and you are " << age << ". Nice to meet you!" << endl;
    }

    void TaskTwo() {
        int numberOne, numberTwo;
        printEntryWithNoEndl("Please, enter two integers: ");
        cin >> numberOne;
        cin >> numberTwo;
        printEntry(to_string(numberOne + numberTwo));
    }

    void TaskThree() {
        vector<double> list[15];
        int tmp = 0;
        for (int i = 1; i <= 15; ++i) {
            tmp += i;
            list->push_back(tmp);
        }
        cout << "The list has an average of "
                  << accumulate(list->begin(), list->end(), 0.0) / (double)list->size()
                  << " elements." << endl;
    }

    void printEntry(const string& entry) {
        cout << entry << endl;
    }
    void printEntryWithNoEndl(const string& entry) {
        cout << entry;
    }

    double celsiusToFahrenheit(int temperatureInCelsius) {
        return (double)temperatureInCelsius * 1.8 + 32;
    }
}
