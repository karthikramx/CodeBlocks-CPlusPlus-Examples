//pointers
//pass by value and reference
#include <iostream>

using namespace std;

//function prototypes
void passByValue(int x);
void passByReference(int *x);

int main()
{

    int a = 5;
    cout << &a << endl;
    //a pointer is a special type of vsriable
    //that points to memory address
    //* - dereference operator
    //& - reference operator
    int *fishPointer;
    fishPointer = &a; //need not write *fishpointer
    cout << fishPointer << endl;
    cout << *fishPointer << endl;

    //pass by value and pass by reference
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy);

    cout << "Betty is now: " << betty << endl;
    cout << "Sandy is now: " << sandy << endl;

    //checking address of int array
    int karthik[5];

    int *bp0 = &karthik[0];
    int *bp1 = &karthik[1];
    int *bp2 = &karthik[2];

    cout << "bpo is at" << bp0 <<  endl;
    cout << "bp1 is at" << bp1 <<  endl;
    cout << "bp2 is at" << bp2 <<  endl;

    bp0++;

    cout<< "now bp0 is pointing to:" << bp0 << endl;

    return 0;
}

void passByValue(int x){
    x = 99;
}

void passByReference(int *x){
    *x=66;
}
