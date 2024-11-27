#include<iostream>
using namespace std;
class person
{
public:
    string name,city,gender;
    int age;
    long long int unique_id;
    void eat(string name)
    {
        cout<<name << " is eating ice cream"<<endl;
    }
    void play(string name)
    {
        cout<<name << " is playing football"<<endl;
    }
};
int main()
{
    person ob1,ob2;
    ob1.unique_id=23222222;
    ob1.name="John";
    ob1.age= 35;
    ob1.city="Delhi";
    ob1.gender="male";
    cout<<"Unique id: "<<ob1.unique_id<<endl<< "Name: "<<ob1.name<<endl<< "Age: "<<ob1.age<<endl<< "City: "<<ob1.city<<endl<<"Gender: "<<ob1.gender<<endl;
    ob1.eat(ob1.name);
    ob1.play(ob1.name);
    cout<<endl<<endl;
    ob2.unique_id=23103333;
    ob2.name="Dessy";
    ob2.age= 20;
    ob2.city="Pune";
    ob2.gender="female";
    cout<<"Unique id: "<<ob2.unique_id<<endl<< "Name: "<<ob2.name<<endl<< "Age: "<<ob2.age<<endl<< "City: "<<ob2.city<<endl<<"Gender: "<<ob2.gender<<endl;
    ob2.eat(ob2.name);
    ob2.play(ob2.name);
    return 0;
}
