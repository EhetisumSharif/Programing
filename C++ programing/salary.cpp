#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
    double salary;
    double yearlyIncrement;
public:
    string name;
    int id;
    string position;
    void getInfo(string a, int b, string c, double s, double y)
    {
        name = a;
        id = b;
        position = c;
        salary = s;
        yearlyIncrement = y;
    }
    void Increament(int year )
    {
        salary=salary+salary*(yearlyIncrement/100)*year;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee employee1, employee2, employee3;
    int year;
    employee1.getInfo("Jan", 514, "Junior SQA", 35000, 7);
    employee2.getInfo("Imran", 515, "Senior SQA", 75000, 10);
    employee3.getInfo("Adiba", 516, "Junior Dev", 45000, 9);
    cout<< "Enter No of working years: "<<endl;
    cin>> year;
    employee1.Increament(year);
    employee2.Increament(year);
    employee3.Increament(year);

    cout << "Employee 1 Information: " << endl;
    employee1.display();
    cout << "\nEmployee 2 Information: " << endl;
    employee2.display();
    cout << "\nEmployee 3 Information: " << endl;
    employee3.display();
    return 0;
}
