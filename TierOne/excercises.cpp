#include <string>
#include <iostream>
#include <vector>
#include <numeric>

void tierOneTaskOne() {
    std::string name;
    int age;
    std::cout << "Hi! What's your name? ";
    std::cin >> name;
    std::cout << "And now, what's your age? ";
    std::cin >> age;
    std::cout << "Your name is " << name << " and you are " << age << ". Nice to meet you!" << std::endl;
}

void tierOneTaskTwo() {
    int numberOne, numberTwo;
    std::cout << "Please, enter two integers: " << std::endl;
    std::cin >> numberOne;
    std::cin >> numberTwo;
    std::cout << numberOne + numberTwo << std::endl;
}

void tierOneTaskThree() {
    std::vector<double> list[15];
    int tmp = 0;
    for (int i = 1; i <= 15; ++i) {
        tmp += i;
        list->push_back(tmp);
    }
    std::cout << "The list has an average of "
    << std::accumulate(list->begin(), list->end(), 0.0) / (double)list->size()
    << " elements." << std::endl;
}