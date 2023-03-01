#include <iostream>
#include <cmath>

using namespace std;

class Sally
{
    public:
        
        void prints()
        {
            cout << "sfaed" << endl;
        }
        void printt() const
        {
            cout << "I am constant" << endl;
        }
};

int main ()
{
    // const int x = 3;
    // //x = 5;
    // cout << x << endl;

    const Sally constoj;
    constoj.printt();
    
}