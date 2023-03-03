#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    ofstream theFile("objects.txt");

    cout << "Items\n";
    cout << "Press ctrl+z to quit\n"; 

    string name;
    double money;

    while(cin >> name >> money)
    {
        theFile << name << "      " << money << endl;
    }
}