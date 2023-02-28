#include <iostream>
#include <string>
using namespace std;

// Class declaration
class HenokClass
{
    private:
        string name;

    public:
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
    HenokClass hen;
    hen.setName("Henok");

    cout << "The name is " << hen.getName() << endl;
    

    return 0;
}