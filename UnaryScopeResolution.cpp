#include <iostream>

using namespace std;

int x = 60;

int main ()
{
    int x = 50;
    cout << ::x << endl; //Use the global one
}
