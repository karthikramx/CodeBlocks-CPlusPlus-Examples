#include "Karthik.h"
#include <iostream>

using namespace std;

Karthik::Karthik(int num)
:k(num)                     //member initializer
{

}

void Karthik::printValue(){
    //here this holds the address of the object of class karthik
    cout << "k=" << k << endl;
    cout << "this->k=" << this->k << endl;
    cout << "(*this).k=" << (*this).k << endl; //we are dereferencing the this pointer
}
