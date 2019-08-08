#include <iostream>
#include <vector>

using namespace std;

int main()
{
std::vector<int> vectorInt;
std::vector<int>::iterator it;

cout<<"size of vectorInt"<<vectorInt.size();
cout<<"\nassigning elements to vectorInt";
vectorInt.assign(4,3);
cout<<"\nsize of vector is:"<<vectorInt.size();

cout<<"\n iterating through vectorInt\n";
for(it=vectorInt.begin();it!=vectorInt.end();++it)
    cout<<*it<<" ";
}
