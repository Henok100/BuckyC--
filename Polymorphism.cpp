#include <iostream>
#include <string>

using namespace std;

class enemy
{
    protected:
        int attackpower;
    public:
        void setAttack(int a)
        {
            attackpower = a;
        }
};

class nija: public enemy
{
    public:
        void attack()
        {
            cout << "I am a ninja\n";
            cout << "Power " << attackpower << endl;
        }
};

class monster: public enemy
{
    public:
        void attack()
        {
            cout << "I am a monster\n";
            cout << "Power " << attackpower << endl;
        }
}; 

int main ()
{
    nija n;
    monster m;

    enemy *enemy1 = &n;
    enemy *enemy2 = &m;

    enemy1->setAttack(5);
    enemy2->setAttack(33);
    
    n.attack();
    m.attack();
}