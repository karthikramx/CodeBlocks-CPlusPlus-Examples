#include <iostream>
using namespace std;

template <class T>
class Spunky{
public:
    Spunky(T x)
    {
        cout << x << " is not a character!" << endl;
    }
};

template <>
class Spunky<char>{
public:
    Spunky(char x)
    {
        cout << x << " is indeed a character" << endl;
    }
};

int main()
{
    Spunky<int> s(1);
    Spunky<double> s1(1.001);
    Spunky<char> so('h');
    return 0;
}
