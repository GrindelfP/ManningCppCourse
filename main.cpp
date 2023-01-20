#include <iostream>
#include "TierOne/tierOne.h"
#include "TierTwo/tierTwo.h"

int main() {
    using namespace testTwo;
    TaskOne();
    TaskTwo();
    TaskThree();
    printEntry(to_string(celsiusToFahrenheit(22)));

    return 0;
}