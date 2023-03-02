#include <iostream>
#include <string>

using namespace std;

class mother
{
    public:
        int pub;
        void sayName()
        {
            cout << "I am Gashaw's\n";
        }
    private:
        int pri;    //cant't be inherited
    protected:
        int prot; 
};

class son: public mother
{
    public:
        void dosomthg()
        {
            pub = 1;
            prot = 5;
        }
};

int main ()
{
    son hen;
    hen.dosomthg();
}