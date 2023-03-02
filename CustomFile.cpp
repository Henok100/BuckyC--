#include <iostream>
#include <string>
#include <fstream>  // For files

using namespace std;

int main ()
{
    ofstream henoksfile("Second.text");    // on one line of code;

    if (henoksfile.is_open())       // checks wether the file is associated with a file object. 
    {
        cout << "The file is open\n";
    }
    else{
        cout << "Henok you messed up\n";
    }
    henoksfile << "I am Henok\n";

    henoksfile.close();
}