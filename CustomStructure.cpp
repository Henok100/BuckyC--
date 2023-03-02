#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    ofstream theFile("henok.txt");

    cout << "Henok Gashaw\n";
    cout << "Press ctrl+z to quit\n"; 

    int id;
    string name;
    double money;

    while(cin >> id >> name >> money)
    {
        theFile << id << "  " << name << "  " << money << endl;
    }
}