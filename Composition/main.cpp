#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
    Birthday bo(01,27,1994);
    bo.printDate();

    People po("Karthik",bo);
    po.printInfo();

    return 0;
}
