#include <iostream>

using namespace std;

int main ()
{
    double hen[10];
    cout << "The size of " << sizeof(char) << endl;
    cout << "The size of " << sizeof(int64_t) << endl;
    cout << "The size of " << sizeof(__float128) << endl;
    cout << "The size of " << sizeof(double) << endl;
    cout << "The size of " << sizeof(hen) / sizeof(hen[0]) << endl;
}


