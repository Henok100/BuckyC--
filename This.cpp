#include <iostream>
#include <string>

using namespace std;

class Hanna
{
    public:
        Hanna(int j): h(j){}
        void printcrap()
        {
            cout << h << endl;
            cout << this->h << endl; //this is pointer to current object // -> used for a pointer
            cout << (*this).h << endl;
        }
    private:
        int h;
};

int main ()
{
    Hanna hanna(45);
    hanna.printcrap();
}