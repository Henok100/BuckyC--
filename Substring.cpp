#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string s1("Henok Gashaw");
    string s2 = "Gashaw Henok";
    cout << s1.substr(2, 9) << endl;

    s1.swap(s2);

    cout << s1 << " " << s2 << endl;

    cout << s1.find("h") << endl;
    cout << s1.rfind("k") << endl;
}