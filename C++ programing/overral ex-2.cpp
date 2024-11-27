#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    int mileage, price;

public:
    Vehicle(int m, int p) : mileage(m), price(p) {}
};

class Car : public Vehicle {
protected:
    int ownership_cost;
    int warranty;
    int seating_cap;
    string fuel_type;

public:
    Car(int m, int p, int c, int w, int s, string f) : Vehicle(m, p), ownership_cost(c), warranty(w), seating_cap(s), fuel_type(f) {}
};

class Bike : public Vehicle {
protected:
    int cylinders;
    int gears;
    string cooling_type;
    string wheel_type;
    int tank_size;

public:
    Bike(int m, int p, int c, int g, string ct, string wt, int t) : Vehicle(m, p), cylinders(c), gears(g), cooling_type(ct), wheel_type(wt), tank_size(t) {}
};

class Audi : public Car {
private:
    string model_type;

public:
    Audi(int m, int p, int c, int w, int s, string f, string mt) : Car(m, p, c, w, s, f), model_type(mt) {}

    void display() {
        cout << "Audi Model: " << model_type << endl;
        cout << "Ownership Cost: " << ownership_cost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seating_cap << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Ford : public Car {
private:
    string model_type;

public:
    Ford(int m, int p, int c, int w, int s, string f, string mt) : Car(m, p, c, w, s, f), model_type(mt) {}

    void display() {
        cout << "Ford Model: " << model_type << endl;
        cout << "Ownership Cost: " << ownership_cost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seating_cap << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Bajaj : public Bike {
private:
    string make_type;

public:
    Bajaj(int m, int p, int c, int g, string ct, string wt, int t, string mt) : Bike(m, p, c, g, ct, wt, t), make_type(mt) {}

    void display() {
        cout << "Bajaj Make: " << make_type << endl;
        cout << "Number of Cylinders: " << cylinders << endl;
        cout << "Number of Gears: " << gears << endl;
        cout << "Cooling Type: " << cooling_type << endl;
        cout << "Wheel Type: " << wheel_type << endl;
        cout << "Fuel Tank Size: " << tank_size << " inches" << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class TVS : public Bike {
private:
    string make_type;

public:
    TVS(int m, int p, int c, int g, string ct, string wt, int t, string mt) : Bike(m, p, c, g, ct, wt, t), make_type(mt) {}

    void display() {
        cout << "TVS Make: " << make_type << endl;
        cout << "Number of Cylinders: " << cylinders << endl;
        cout << "Number of Gears: " << gears << endl;
        cout << "Cooling Type: " << cooling_type << endl;
        cout << "Wheel Type: " << wheel_type << endl;
        cout << "Fuel Tank Size: " << tank_size << " inches" << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    Audi audiCar(45, 70000, 50000, 5, 5, "Petrol", "Audi A4");
    Ford fordCar(30, 75000, 30000, 4, 6, "Diesel", "Ford M2");
    Bajaj bajajBike(40, 4000, 3, 6, "oil", "Spokes", 15, "Pulsar");
    TVS tvsBike(45, 3000, 2, 6, "Liquid", "Alloys", 18, "Apache");

    audiCar.display();
    cout<<endl;
    fordCar.display();
    cout<<endl;
    bajajBike.display();
    cout<<endl;
    tvsBike.display();
    return 0;
}

