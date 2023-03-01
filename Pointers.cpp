#include <iostream>

using namespace std;

int main ()
{
    int fish = 5;
    int* fishptr = &fish;

    cout << "The addres of fish is " << &fish << endl;
    cout << "Or " << fishptr << endl;    

}