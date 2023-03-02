#include <iostream>
#include <string>

using namespace std;

template <class T>

class henok
{
    public:
        henok(T x)
        {
            cout << x << " is not character!\n";
        }
};

template <>     //Specialization for char
class henok<char>
{
    public:
        henok(char x)
        {
            cout << x << " is a Character!\n";
        }
};

int main ()
{
    henok <int> obj1(34);
    henok <int> obj2(53);
    henok <double> obj4(34.2323);
    henok <char> obj5('h');
}