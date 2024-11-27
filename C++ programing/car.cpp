#include<iostream>
using namespace std;
class car
{
    public:
    string company;
    int speed;
    void getspeed(string company,int speed)
    {
        cout<<company<<" car's speed is "<<speed<< " km/hr"<<endl;
    }
};
int main()
{
    car car1,car2,car3;
    car1.company="Honda";
    car1.speed=100;
    cout<< "Company= "<<car1.company<<endl<< "Speed= "<<car1.speed<<endl;
    car1.getspeed(car1.company,car1.speed);
    cout<<endl;
    car2.company="Jeep";
    car2.speed=500;
    cout<< "Company= "<<car2.company<<endl<< "Speed= "<<car2.speed<<endl;
    car2.getspeed(car2.company,car2.speed);
    cout<<endl;
    car3.company="BMW";
    car3.speed=800;
    cout<< "Company= "<<car3.company<<endl<< "Speed= "<<car3.speed<<endl;
    car3.getspeed(car3.company,car3.speed);
    return 0;
}