#include<iostream>
using namespace std;
class add
{
    int x,y;
public:
    add(int m, int n)
    {
        x=m;
        y=n;
    }
    add(add &a)
    {
        x= a.x;
        y= a.y;
    }
    void display()
    {
        cout<<x<< "\t"<<y<<endl;
    }
};
int main()
{
    add s1(20,50);
    add s2=s1;
    s1.display();
    cout<< "After using copy constructor: "<<endl;
    s2.display();
    return 0;
}
