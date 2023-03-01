#include <iostream>

using namespace std;

void printNumber(int x)
{
    cout << x << endl;
}

void printNumber(double x)
{
    cout << x << endl;
}

int main ()
{
    int a = 54;
    float b = 5.2354;

    printNumber(a);
    printNumber(b);

    return 0;
}