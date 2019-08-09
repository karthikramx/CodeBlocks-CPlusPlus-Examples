#include <iostream>

using namespace std;

void printNumber(int a)
{
    cout << "printing integer: "<< a << endl;
}
void printNumber(float b)
{
    cout << "printing float: " << b << endl;
}

int main()
{
    int a = 5;
    float b = 123.456;

    printNumber(a);
    printNumber(b);
    return 0;
}
