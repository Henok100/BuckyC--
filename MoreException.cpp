#include <iostream>
#include <string>

using namespace std;



int main ()
{
    try {
        int x, y;
        cout << "Enter two numbers: ";
        cin >> x >> y;

        if (y == 0)
        {
            throw 0;
        }
        cout << x/y << endl;
    }catch(...) { //default catch
        cout << "Divide by zero" << endl;
    }
}