#include<iostream>
using namespace std;
class Rectangle 
{
    double length,breadth;
public:
    Rectangle() {
        length=0;
        breadth=0;
    }
    Rectangle(double l, double b) {
        length=l;
        breadth=b;
    }
    Rectangle(double x) {
        length=x;
        breadth=x;
    }
    double area();
    void display();
};
double Rectangle::area() 
{
    return length*breadth;
}
void Rectangle::display() 
{
    cout<<"Area of a Rectangle is: "<<area()<<endl;
}
int main() 
{
    Rectangle rect1,rect2(5,6),rect3(5);
    cout<<"Rectangle 1: ";
    rect1.display();
    cout<<"Rectangle 2: ";
    rect2.display();
    cout<<"Rectangle 3: ";
    rect3.display();
    return 0;
}




