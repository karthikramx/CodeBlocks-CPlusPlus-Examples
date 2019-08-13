#include "Birthday.h"
#include <iostream>

using namespace std;

Birthday::Birthday(int m, int d, int y)
{
    month = m;
    year = y;
    day = d;
}

void Birthday::printDate(){
     cout << month << "/" << day << "/" << year <<  endl;

}
