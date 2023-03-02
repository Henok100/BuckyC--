#include <iostream>
#include <string>
#include <fstream>  // For files

using namespace std;

int main ()
{
    ofstream henoksfile; // File object
    henoksfile.open("henok.txt");

    henoksfile << "Henok.Gashaw\n";
    henoksfile.close();
}