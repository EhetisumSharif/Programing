#include<iostream>
using namespace std;
class dog
{
public:
    string Breed,Size,Age,Color;
    void eat(string Breed)
    {
        cout<<Breed << " is eating dog food."<<endl;
    }
    void sleep(string Breed)
    {
        cout<<Breed << " is always sleeping."<<endl;
    }
    void sit(string Breed)
    {
        cout<<Breed << " is sit on the bed."<<endl;
    }
     void run(string Breed)
    {
        cout<<Breed << " is runing beside me."<<endl;
    }
};
int main()
{
    dog ob1,ob2,ob3;
    ob1.Breed="Neapolitan mastiff";
    ob1.Size="Large";
    ob1.Age="5 years";
    ob1.Color="Black";
    cout<<"Breed: "<<ob1.Breed<<endl<<"Size: "<<ob1.Size<<endl<<"Age: "<<ob1.Age<<endl<<"Color: "<<ob1.Color<<endl;
    ob1.eat(ob1.Breed);
    ob1.sleep(ob1.Breed);
    ob1.sit(ob1.Breed);
    ob1.run(ob1.Breed);
    cout<<endl;
    ob2.Breed="Maltese";
    ob2.Size="Small";
    ob2.Age="2 years";
    ob2.Color="White";
    cout<<"Breed: "<<ob2.Breed<<endl<<"Size: "<<ob2.Size<<endl<<"Age: "<<ob2.Age<<endl<<"Color: "<<ob2.Color<<endl;
    ob2.eat(ob2.Breed);
    ob2.sleep(ob2.Breed);
    ob2.sit(ob2.Breed);
    ob2.run(ob2.Breed);
    cout<<endl;
    ob3.Breed="Chow Chow";
    ob3.Size="Midium";
    ob3.Age="3 years";
    ob3.Color="Brown";
    cout<<"Breed: "<<ob3.Breed<<endl<<"Size: "<<ob3.Size<<endl<<"Age: "<<ob3.Age<<endl<<"Color: "<<ob3.Color<<endl;
    ob3.eat(ob3.Breed);
    ob3.sleep(ob3.Breed);
    ob3.sit(ob3.Breed);
    ob3.run(ob3.Breed);
    return 0;
}

