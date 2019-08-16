#include <iostream>

using namespace std;

class Enemy{
public:
    virtual void attack(){} // virtual set the function to be used polymophically
};

class Ninja : public Enemy{
public:
    void attack(){
        cout << "ninja attack" << endl;
    }
};

class Monstor : public Enemy{
public:
    void attack(){
        cout << "monster attack" << endl;
    }
};

int main()
{
    Ninja n;
    Monstor m;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();

    return 0;
}
