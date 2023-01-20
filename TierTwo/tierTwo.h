#ifndef MANNING_CPP_COURSE_TIER_TWO_H
#define MANNING_CPP_COURSE_TIER_TWO_H

#include <string>

using namespace std;

void helloSayer(int age = 30);

namespace firstNamespace {
    int tripleNumber(int number);
}

namespace testTwo {
    void TaskOne();

    void TaskTwo();

    void TaskThree();

    void printEntry(const string &entry);

    void printEntryWithNoEndl(const string &entry);

    double celsiusToFahrenheit(int temperatureInCelsius);
}


#endif //MANNING_CPP_COURSE_TIER_TWO_H