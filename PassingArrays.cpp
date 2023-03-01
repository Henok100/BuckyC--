#include <iostream>

using namespace std;

void printarray(int passed[], int size);

int main ()
{
    int henok[5] = {23, 23, 23, 23,23};
    printarray(henok, 5);
}

void printarray(int passed[], int size)
{
    for(int x = 0; x < size; x++)
    {
        cout << passed[x] << endl;
    }
}