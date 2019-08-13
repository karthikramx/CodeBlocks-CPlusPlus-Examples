#include <iostream>
#include "Karthik.h"

using namespace std;

int main()
{
    const int x = 3;
    cout << x << endl;

    Karthik ko;
    ko.printCrap();

    const Karthik constObj;
    constObj.printCrap2();

    return 0 ;
}
