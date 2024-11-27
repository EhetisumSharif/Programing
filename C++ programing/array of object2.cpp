#include<iostream>
#include<string>
using namespace std;
class employee
{
    int id;
    string name;
public:
    set_val()
    {
       cout<< "Enter ID: ";
       cin>>id;
       cout<< "Enter Name: ";
       cin>> name;
    }
    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<< "Name: "<<name<<endl;
        cout<<endl;
    }
};
int main ()
{
     employee e[10];
     for(int i=0; i<10;i++)
     {
         e[i].set_val();
         e[i].display();
     }
     return 0;
}
