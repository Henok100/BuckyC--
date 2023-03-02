#include <iostream>
#include <string>

using namespace std;

class enemy
{
    public:
        virtual void attack()  // template functions for other classes
        {

        }
};

class Ninja: public enemy
{
    public:
        void attack()
        {
            cout << "Ninja attack\n";
        }
};

class Monster: public enemy
{
    public:
        void attack()
        {
            cout << "Ninja attack\n";
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