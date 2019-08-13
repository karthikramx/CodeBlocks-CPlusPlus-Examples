#include "Karthik.h"
#include <iostream>

using namespace std;

Karthik::Karthik()
{
    cout << "This is from the constructor" << endl;
}

void Karthik::printCrap(){
    cout << "Iam a regular function" << endl;
}

void Karthik::printCrap2() const{
    cout << "I am the constant function" << endl;
}
