#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string henok;
    getline(cin, henok);

    cout << henok << endl;

    string s2, s3;

    s2 = henok;
    s3.assign(s2);

    cout << s2 << "\n" << s3 << endl;
}