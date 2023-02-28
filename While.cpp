#include <iostream>

using namespace std;

int main ()
{
    cout << "How many ages you want to calculate the mean? ";
    int numAges = 0;
    cin >> numAges;
    int counter = 0;
    int num = 1;
    int sum = 0;
    cout << "Enter 5 numbers: \n";

    while (counter < numAges)
    {
        cout << "num " << counter << ": ";
        cin >> num;
        sum = sum + num;
        counter++;
    }

    cout << "\n The sum is " << sum << endl;
    cout << "\n The average age is " << sum/numAges << endl;

    return 0;
}