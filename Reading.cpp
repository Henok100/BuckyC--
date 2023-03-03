#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    ifstream theFile("henok.txt");  // Reading data from the file

    int id;
    string name;
    double money;

    while(theFile >> id >> name >> money)
    {
        cout << id << " " << name << " " << money << endl;    
    
    }
}