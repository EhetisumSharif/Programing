#include<iostream>
using namespace std;
class Number
{
protected:
    int num, sqr, cube;
public:
    Number (int a)
    {
        num=a;
    }
};
class Square : public Number
{
public:
    Square (int a) : Number (a)
    {
        sqr= num*num;
    }
    void display ()
    {
        cout<< "Square is: "<<sqr<<endl;
    }
};
class Cube : public Number
{
public:
    Cube (int a) : Number (a)
    {
        cube= num*num*num;
    }
    void print ()
    {
        cout<< "Cube is: "<<cube<<endl;
    }
};
int main()
{
    Square obj1(5);
    Cube obj2(3);

    obj1.display();
    obj2.print();
    return 0;
}
