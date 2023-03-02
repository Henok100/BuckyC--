#include <iostream>
#include <string>

using namespace std;

class enemy // is an abstract class -> which have pure virtual function
{
    public:
        virtual void attack() = 0; //pure virtual function > no body
};

class Ninja: public enemy
{
    public:
        void attack()
        {
            cout << "Ninja attack\n"; // must override
        }
};

class Monster: public enemy
{
    public:
        void attack()
        {
            cout << "Ninja attack\n";   // must overrinde
        }
}; 

int main ()
{
    Ninja n;
    Monster m;

    enemy *enemy1 = &n;
    enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();
}