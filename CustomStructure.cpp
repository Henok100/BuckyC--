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
<<<<<<< HEAD
        theFile << name << "      " << money << endl;
=======
        theFile << id << "  " << name << "  " << money << endl;
>>>>>>> 6071f9303d7b119dab02bb6233d73fbc07733b24
    }
}