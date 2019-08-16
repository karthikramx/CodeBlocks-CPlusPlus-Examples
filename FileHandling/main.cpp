#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream karthiksFile("upma.txt");

    if(karthiksFile.is_open()){
        cout << "The file is open" << endl;
        karthiksFile << "i love the upma! \n";
        karthiksFile.close();
    }
    else{

        cout << "karthik you messed up!!!" << endl;
    }
    return 0;
}
