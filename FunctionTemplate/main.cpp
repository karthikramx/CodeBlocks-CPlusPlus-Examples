#include <iostream>
using namespace std;

//template definition - generic data type
template <class karthik>
karthik addCrap(karthik a,karthik b){
    return a+b;
}

int main()
{
    double x = 7.44,y =43.33 , z ;
    //you cannot pass different types of data though
    z = addCrap(x,y);
    cout << z << endl;
    return 0;
}
