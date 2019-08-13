//examples for operator overloading

#include <iostream>
#include "Karthik.h"

using namespace std;

int main()
{
    Karthik ko1(34);
    Karthik ko2(35);
    Karthik ko3;

    ko3 = ko1 + ko2;

    cout << ko3.num << endl;

    return 0;
}
