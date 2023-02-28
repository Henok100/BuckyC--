#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{

    //srand(time(0)); counts the seconds in each second

    for(int x = 0; x < 15; x++)
    {
        cout << rand()%6 + 1 << endl;
    }

}