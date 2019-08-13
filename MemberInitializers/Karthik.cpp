#include "Karthik.h"
#include <iostream>

using namespace std;



Karthik::Karthik(int a,int b)
: regVar(a),
constVar(b)
{}

Karthik::~Karthik()
{
    //dtor
}

void Karthik::print(){
    cout << "regualar var is :" << regVar << endl;
    cout << "const var is:" << constVar << endl;

}
