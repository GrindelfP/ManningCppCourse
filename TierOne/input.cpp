#include <iostream>
#include "../commonHeaders.h"

void userInput() {
    std::string userName;
    print("What is your name? ");
    std::cin >> userName;
    printLn(userName);
}
