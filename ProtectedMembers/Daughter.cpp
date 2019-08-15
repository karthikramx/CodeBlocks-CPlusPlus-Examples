#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

//derived class
Daughter::Daughter()
{
}

void Daughter::doSomething(){
    publicv = 1;
    protectedv = 1;
    //privatev =1; will cause an error
}



