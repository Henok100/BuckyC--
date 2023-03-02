#include <iostream>
#include <string>

using namespace std;

class mother
{
    public:
        void sayName()
        {
            cout << "I am Gashaw's\n";
        }
};

class son: public mother
{
    public:
};

int main ()
{
    mother mom;
    mom.sayName();

    son hen;
    hen.sayName();
}