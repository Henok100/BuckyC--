#include <iostream>

using namespace std;

int addNumbers(int x, int y, int a, int b)
{
    int answer = x + y + a + b;

    return answer;
}

int main ()
{
    cout << addNumbers(4, 5, 10, 11) << endl;

    return 0;
}