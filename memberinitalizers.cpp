#include <iostream>
#include <cmath>

using namespace std;

class Sally
{
    public:
        Sally(int a, int b): x(a), constt(b){} 
        void print()
        {
            cout << x << " " << constt << endl;
        }
    private:
        int x;
        const int constt;
};

int main ()
{
    Sally intt(5, 7);
    intt.print();
    
}