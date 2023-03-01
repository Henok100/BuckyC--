#include <iostream>
#include <string>

using namespace std;

class Bday
{
    public:
        Bday(int m, int d, int y)
        {   
            month = m;
            day = d;
            year= y;
        }
        void printDate()
        {
            cout << month << "/" << day << "/" << year << endl;
        }
    private:
        int month;
        int day;
        int year;
};

class People
{
    public:
        People(string n, Bday bo): name(n), dateofBirth(bo){}
        void printInfo()
        {
            cout << "The birthday of " << name << " is ";
            dateofBirth.printDate();
        }
    private:
        string name;
        Bday dateofBirth; //Passing an object
};

int main ()
{
    Bday henok(9, 23, 1989);
    People Henok("Henok", henok);
    Henok.printInfo();
}