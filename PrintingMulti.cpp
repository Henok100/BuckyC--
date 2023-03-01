#include <iostream>

using namespace std;

int main ()
{
    int henok[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 2}};

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << henok[x][y] << " "; 
        }
        cout << endl;
    }
}