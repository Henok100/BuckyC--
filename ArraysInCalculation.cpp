#include <iostream>

using namespace std;

int main ()
{
    int henok[5] = {23, 423, 23, 43, 23};
    
    int sum = 0;
    int x = 0;

    while (x < 5)
    {
        sum = sum + henok[x];
        x++;
    }

    cout << sum << endl;

    return 0;
}