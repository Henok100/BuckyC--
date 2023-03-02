#include <iostream>
#include <string>

using namespace std;

template <class henok>    // Template definintion -> generic datatype "henok"

henok sum(henok a, henok b)
{
    return a + b;
}

int main ()
{
    double x = 5.34, y = 9;
    double Sum = sum(x, y);

    cout << Sum << endl;

}