#include <iostream>
using namespace std;
#define factor 0.3048
class DB;
class DM
{
    float m, cm;
public:
    void store()
    {
        cout << "Enter distance in meters: ";
        cin >> m;
        cout << "Enter distance in centimeters: ";
        cin >> cm;
    }
    friend void sum(DM, DB);
    void show();
};

class DB
{
    float feet, inches;

public:
    void store()
    {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter distance in inches: ";
        cin >> inches;
    }
    friend void sum(DM, DB);
    void show();
};

void DM::show()
{
    cout << "\nDistance = " << m << " meters or " << (m * 100 + cm) << " centimeters\n";
}

void DB::show()
{
    cout << "\nDistance = " << feet << " feet or " << (feet * 12 + inches) << " inches\n";
}

void sum(DM m, DB b)
{
    float meters = m.m + (b.feet * 12 + b.inches) * factor;
    float feet = meters / factor;
    DM m1;
    DB b1;
    m1.m = meters;
    b1.feet = feet;

    cout <<endl<< "1. Display result in meters and centimeters" << endl
         << "2. Display result in feet and inches" << endl
         << "What is your option? : " << endl;
    int choice;
    cin >> choice;

    if (choice == 1)
    {
         m1.show();
    }
    else if (choice == 2)
    {
         b1.show();
    }
}

int main()
{
    DM dm;
    DB db;

    dm.store();
    db.store();

    sum(dm, db);

    return 0;
}
