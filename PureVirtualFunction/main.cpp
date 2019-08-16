#include <iostream>
using namespace std;

//Abstract Class
class Enemy{
public:
    //this is a pure virtual function
    virtual void attack() = 0;
};

class Ninja : public Enemy
{
public:
    void attack(){cout << "Ninja kick" << endl;}
};

class Monster : public Enemy
{
public:
    void attack(){cout << "Monster Eat" << endl;}
};

int main()
{
    Ninja n;
    Monster m;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();

    return 0;
}
