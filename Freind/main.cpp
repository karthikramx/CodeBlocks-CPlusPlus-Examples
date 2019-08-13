#include <iostream>
using namespace std;

// this is an example code to demonstrate the
// use of the keyword friend

class KarthikRam{
    public:
        KarthikRam(){karthikVar=0;}
    private:
        int karthikVar;

    //declaring a friend function
    friend void karthiksFriend(KarthikRam &ko);
};

void karthiksFriend(KarthikRam &ko){
    ko.karthikVar = 99;
    cout << ko.karthikVar << endl;
}

int main()
{
    KarthikRam ram;
    karthiksFriend(ram);
    return 0;
}
