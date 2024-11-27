#include<iostream>
using namespace std;
class abc;
class xyz
{
    int x;
public:
    xyz( int a)
    {
        x=a;
    }
    friend void max(xyz a, abc b);
};
class abc
{
    int y;
public:
    abc( int a)
    {
        y=a;
    }
    friend void max(xyz a, abc b);
};
void max(xyz a, abc b)
{
    if (a.x>b.y)
    {
        cout<<"maximum:"<<a.x<<endl;
    }
    else
     {
        cout<<"maximum:"<<b.y<<endl;
    }
}
int main()
{
    abc o1(20);
    xyz o2(30);
    max(o2, o1);
    return 0;
}

