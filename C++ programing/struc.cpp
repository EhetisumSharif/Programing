#include<iostream>
using namespace std;
struct Employee
{
  int id;
  int age;
  double salary;
};
int main()
{
  Employee e;
  e.id = 2310;
  e.age = 27;
  e.salary = 6000;

  cout << "Employee :" << endl;
  cout << "ID: " << e.id << endl;
  cout << "Age: " << e.age << endl;
  cout << "Salary: BDT" << e.salary << endl;

  return 0;
}

