#include <iostream>

using namespace std;

int main ()
{
    
    int henok[5];

    cout << "Element    -   Value" << endl;

    for(int x = 0; x < 5; x++)
    {
        henok[x] = x;
    }

    for(int x = 0; x < 5; x++)
    {
        cout << x << "              " << x << endl;
    }

    return 0;
}