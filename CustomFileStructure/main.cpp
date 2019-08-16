#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream theFile("players.txt");

    cout << "Enter players ID, Name and Money" << endl;
    cout << "Press Ctrl + Z to quit\n" <<  endl;

    int idNumber;
    string name;
    double money;

    while(cin>>idNumber>>name>>money){
        theFile << idNumber << " " << name << " " << money << endl;
    }

    theFile.close();

    ifstream theFile("players.txt");

    int id;
    string name;
    double money;

    while(theFile >> id >> name >> money ){
            cout << id << " " << name  <<" "<<  money << endl;
    }
    return 0;
}
