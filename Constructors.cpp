#include <iostream>
#include <string>
using namespace std;

// Class declaration
class HenokClass
{
    private:
        string name;

    public:
        HenokClass(string z) // For initialization
        {
            setName(z);
            cout << "Constructor created\n";
        }
        void setName(string Name)
        {
            name = Name;
        }

        string getName()
        {
            return name;
        }
};

int main ()
{
    HenokClass hen("Henok Gashaw");
    cout << hen.getName() << endl;

    

    return 0;
}