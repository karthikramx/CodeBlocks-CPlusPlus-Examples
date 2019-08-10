#include <iostream>
#include "Karthik.h"

using namespace std;

int main()
{

    Karthik karthikObject;

    // a class is a type of data you create yourself
    Karthik * karthikPointer = &karthikObject;

    karthikObject.printCrap();

    //Arrow member selection operator
    karthikPointer->printCrap();


    return 0;
}
