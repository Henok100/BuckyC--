#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int age = 12;
    int money = 650;

   /*  if(age > 21 && money > 500)
    {
        cout << "You are allowed\n";
    }
    else
    {
        cout << "You are not allowed.\n";
    } */

     if(age > 21 || money > 500)
    {
        cout << "You are allowed\n";
    }
    else
    {
        cout << "You are not allowed.\n";
    }

}