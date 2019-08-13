#include "Karthik.h"
#include <iostream>

using namespace std;

Karthik::Karthik()
{

}

Karthik::Karthik(int a)
{
    num = a;
}

//overloaded function def

Karthik Karthik::operator+(Karthik ko){
    Karthik brandNew;
    brandNew.num = num + ko.num;
    return brandNew;
}
