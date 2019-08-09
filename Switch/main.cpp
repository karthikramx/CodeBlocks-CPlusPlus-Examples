#include <iostream>

using namespace std;

int main()
{
    int age = 21;

    switch(age)
    {
    case 16:
        cout << "awesome you can drive" << endl;
        break;
    case 18:
        cout << "you can have sex now!" << endl;
        break;
    case 21:
        cout << "go get some beer!" << endl;
        break;
    default:
        cout << "go have some milk!" << endl;
    }
    return 0;
}
