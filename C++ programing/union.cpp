#include<iostream>
using namespace std;
union person
{
  int id;
  char name;
  int age;
};

int main()
{
  person p;
  p.id = 231;
  p.name = 'A';
  p.age = 80;

  cout << p.id << " " << p.name << " " << p.age;
  return 0;
}

