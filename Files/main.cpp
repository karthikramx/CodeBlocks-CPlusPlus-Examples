#include <iostream>
#include <fstream> //file input and output
using namespace std;

int main()
{

    ofstream karthikFile; //file handling object
    karthikFile.open("tuna.txt"); //opening a file in the project directort
    karthikFile << "I love tuna and tuna loves me! \n"; //writing to file
    karthikFile.close(); //closing the file

    return 0;
}
