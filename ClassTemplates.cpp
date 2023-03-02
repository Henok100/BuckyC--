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

template <class T>

T henok<T>::bigger()
{
    return (first > second? first:second);
}

int main ()
{
    

}