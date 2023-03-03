#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string s1("Hello henok gashaw how are you?\n");
    cout << s1 << endl;

    //s1.erase(6);
    //s1.replace(6, 5, "suraf");
    s1.insert(4, "Henokkkkkkkk");

    cout << s1 << endl;    
}