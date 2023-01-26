#include "commonHeaders.h"
#include "TierOne/tierOne.h"
#include "TierTwo/tierTwo.h"
#include "TierThree/tierThree.h"
#include "TierFour/tierFour.hpp"

int main() {
    vector<int> list = { 232233, 1421412, 0 };
    printWithPrefix("A. Size of list is ", list.size());
    tierFour::addZerosToList(list, 4);
    printWithPrefix("C. Size of list is ", list.size());

    return 0;
}