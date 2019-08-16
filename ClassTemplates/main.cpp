#include <iostream>
using namespace std;

template<class T>
class Karthik{
    T first, second;
public:
    Karthik(T a,T b){
        first = a;
        second = b;
    }
    T bigger();
};

template <class T>
T Karthik<T>::bigger(){
    return(first>second?first:second);
}

int main()
{
    Karthik <int> ko(69,105);
    cout << ko.bigger();
    return 0;
}
