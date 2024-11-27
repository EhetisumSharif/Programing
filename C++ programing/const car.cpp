#include <iostream>
#include <string>
using namespace std;
class Car
{
    string make;
    string model;
    int year;
public:
    Car(string m, string ml, int y) {
        make = m;
        model = ml;
        year = y;
        cout << "A new car object is created!" <<endl;
    }
    ~Car()
    {
        cout << "The car object is destroyed!" << endl;
    }
};

int main() {

    Car myCar("Toyota", "Camry", 2022);
    return 0;
}

