#include <iostream>

using namespace std;

int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}

int main ()
{
    cout << "This program calculates a factorial of a number \n\n Please enter the number: ";
    int x;
    cin >> x;
    cout << "The factorial of " << x << " is " << factorial(x) << endl;

    return 0;
}