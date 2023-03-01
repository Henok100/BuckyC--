#include <iostream>

using namespace std;

void PassByValue(int x);
void PassByReference(int *x);

int main ()
{
    int lidu = 34;
    int henok = 344;

    PassByValue(lidu);
    PassByReference(&henok);

    cout << "Lidu " << lidu << endl;
    cout << "Henok " << henok << endl;
}

void PassByValue(int x)
{
    x = 56;
}

void PassByReference(int *x)
{
    *x = 89;
}
