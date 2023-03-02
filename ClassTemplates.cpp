#include <iostream>
#include <string>

using namespace std;

template < class T>

class henok
{
    T first, second;
    public:    
        Henok(T a, T b)
        {
            first = a;
            second = b;
        }
        T bigger();
};

template <class T> //Always first
T henok<T>::bigger()
{
    return (first > second? first:second);
}

int main ()
{
    henok <int> hen(5, 7);
    cout << hen.bigger();

}