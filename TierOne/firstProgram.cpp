#include <iostream>
#include "tierOne.h"


int sum(int a, int b);

int firstProgram() {
    std::string line = "I love my dear Shisha!";

    std::cout << "Oh shit, here we go again! Course time!" << std::endl;
    std::cout << line << std::endl;
    int c = sum(2, 3);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}