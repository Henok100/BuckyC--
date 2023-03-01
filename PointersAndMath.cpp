#include <iostream>

using namespace std;

int main ()
{
    int x[5];
    int *xptr = &x[0];

    for (int x = 0; x < 5; x++)
    {
        cout << xptr + x << endl;
    }
}


