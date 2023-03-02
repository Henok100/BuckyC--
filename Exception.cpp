#include <iostream>
#include <string>

using namespace std;



int main ()
{
    try {
        int mage = 30; int sage = 40;

        if (sage > mage)
        {
            throw 89;
        }
    }catch (int x) // x = 99
    {
        cout << "Son cant be older than mom, error number: " << x << endl;
    }
    
}