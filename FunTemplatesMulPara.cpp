#include <iostream>
#include <string>

using namespace std;

template <class First, class Second>    // Template definintion -> generic datatype "henok"

First smaller(First a, Second b)
{
    return (a < b? a:b);
}

int main ()
{
    double x = 5.34;
    int y = 9;
    

    cout << smaller(x, y) << endl;

}