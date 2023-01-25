#include <vector>
#include "tierThree.h"
#include "../commonHeaders.h"
using namespace std;

void booleans() {
    print(boolalpha);
    printLn(true);
    bool statement1 = (1 != 2) xor (3 != 2);
    printLn(statement1);

    int userAge;
    cin >> userAge;

    if (userAge <= 18000) printLn("You have officially been fooled!");
    else if (userAge >= 1800) printLn("Your adulthood is an arguable question!");
    else {
        printLn("Haha-ha!");
    }

    printLn("EOP");
}

void forLoop() {
    for (int i = 0; i < 1000; ++i) {
        printLn(i);
    }
}

void whileLoop() {
    int i = 0;
    while (i < 10) {
        printLn(i);
        i++;
    }
}


void iterateList() {
    vector<double> temps = { 13.3, 18.5, 19.9, 20.1, 16.65 };
    for (double temp : temps) {
        printLn(temp);
    }
}
