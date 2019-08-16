//core string programs you need to know
//for general programming
#include <iostream>
#include <string> // gives you string functions

using namespace std;

int main()
{
    //prints what you entered
    string karthik;
    cin >> karthik;
    cout << "the string i entered is : " << karthik;

    //use getline to print entire string
    string x;
    getline(cin,x);
    cout << x << endl;

    //string copy
    string s11(" karthik");
    string s12;
    string s13;
    s12 = s11;
    s13.assign(s11);
    cout << s11 << s12 << s13 << endl;

    //string is an array of characters
    string s14 = "lskdjbfkjsnfjknfe";
    for(int x = 0;x < s14.length(); x++){
        cout << s14.at(x);
    }

    //create smaller string from bigger string
    string s4("omg i think iam karthik");
    cout << s4.substr(17,5) << "\n";

    //swapping
    string one("apples ");
    string two("beans ");
    cout << one << two << endl;
    one.swap(two);
    cout  <<  one << two << endl;

    //find - strings are just arrays if chars
    string s5("ham is spam oh yes i am");
    cout << s5.find("am") << endl;
    cout << s5.rfind("am") << endl; //reverse find


    //string erase
    string s6("hi my name is karthik and I love dosa!!");
    cout << s6 << endl;
    s6.erase(20);
    cout << s6 << endl;

    //string replace
    string s7("hi my name is karthik and I love dosa!!");
    cout << s7 << endl;
    s7.replace(14,7,"bucky");
    cout << s7 << endl;

    //string insert
    string s8("hi my name is karthik and I love dosa!!");
    cout << s8 << endl;
    s8.insert(14,"lucky ");
    cout << s8 << endl;

    return 0;
}
