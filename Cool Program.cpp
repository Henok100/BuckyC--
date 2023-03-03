#include <iostream>
#include <fstream>

using namespace std;

int getWhatTheyWant();
void displayItems(int Choice);

// main function
int main ()
{
    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while (whatTheyWant != 4)
    {
        switch (whatTheyWant)
        {
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
        }
        whatTheyWant = getWhatTheyWant();
    }
}

//GetWhattheywant function
int getWhatTheyWant()
{
    int choice;

    cout << "\n1 - just plain items\n";
    cout << "2 - helpful items\n";
    cout << "3 - harmful items\n";
    cout << "4 - quit program\n";

    cin >> choice;
    
    return choice;
}

//DisplayItemsFunction
void displayItems(int Choice)
{
    ifstream objectsFile("objects.txt");
    string name;
    double power;

    if(Choice == 1)
    {
        while(objectsFile  >> name >> power)
        {
            if (power == 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }
    if(Choice == 2)
    {
        while(objectsFile  >> name >> power)
        {
            if (power > 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }
    if(Choice == 3)
    {
        while(objectsFile  >> name >> power)
        {
            if (power < 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }
}