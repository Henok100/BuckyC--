#include <iostream>
#include <string>

using namespace std;

// To change the behavior of operators
class Henok
{
    public:
        int num;
        Henok(){}
        Henok(int age)
        {
            num = age;
        }
        Henok operator+(Henok hen)
        {
            Henok neW;
            neW.num = num + hen.num;
            return neW;
        }
};

int main ()
{
    Henok one(5);
    Henok two(8);
    Henok NNN;
    
    NNN = one + two;

    cout << NNN.num << endl;
}