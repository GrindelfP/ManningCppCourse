#include "../commonHeaders.h"
#include <vector>

int arrays() {
    double temperatureArray[4] = {34.5, 27.8, 26.8, 22.0 };
    printLn(temperatureArray[1]);

    std::vector<double> temperatureVector = { 34.5, 27.8, 26.8, 22.0 };
    printLn(temperatureVector.at(0));
    printLn(temperatureVector.at(1));
    temperatureVector.at(1) = 30.7;
    printLn(temperatureVector.at(1));
    printLn(temperatureVector.size());
    temperatureVector.push_back(17.8);
    printLn(temperatureVector.size());

    return 0;
}