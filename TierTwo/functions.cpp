#include <iostream>

using namespace std;

namespace firstNamespace {
    int tripleNumber(int number) {
        return number * 3;
    }
}

void helloSayer(int age = 20) {
    cout << "I love Ira! You are " << age << endl;
}