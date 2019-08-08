#include <iostream>
#include <string>
#include "Biryani.h"
#include "Upma.h"


using namespace std;

class KarthiksClass{
    public:
        KarthiksClass(){cout << "this will be called automatically" << endl;}
        KarthiksClass(string n){setName(n);}
        ~KarthiksClass(){cout << "going out of scope"<<endl;}
        void coolSaying(){cout << "remember the name" << endl;}
        void setName(string x){name = x;}
        string getName(){return name;}
    private:
        string name;
};

int main()
{
    KarthiksClass obj("default name");
    cout << obj.getName() << endl;
    obj.coolSaying();
    obj.setName("Karthik Ram");
    cout << obj.getName() << endl;
    Biryani obj1;
    Upma obj2;
    obj2.helloUpma();
    return 0;
}
