#include <iostream>
#include "A.h"
#include "B.h"

using namespace std;

int main()
{
    A objA;
    B objB;

    objA.setA1(10);
    objA.setA2(20.5f);
    objA.MA1();
    objA.MA2();

    objB.setB1(30);
    objB.setB2(40.5f);
    objB.MB1();
    objB.MB2();

    return 0;
}
