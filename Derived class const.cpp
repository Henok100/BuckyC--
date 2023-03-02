#include <iostream>
#include <string>

using namespace std;

class mother
{
    public:
        mother()
        {
            cout << "Const\n"; // Inherited
        }
        ~mother()
        {
            cout << "Donst\n";  // Inherited
        }
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
        son()
        {
            cout << "bb\n";
        };
        ~son(){
            cout << "vv\n";
        };
        void dosomthg()
        {
            pub = 1;
            prot = 5;
        }
};

int main ()
{
    son hen;
    
}