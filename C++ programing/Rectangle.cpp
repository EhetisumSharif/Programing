#include<iostream>
using namespace std;
class Rectangle
{
    int length, width;
public:
    Rectangle (int l, int w)
    {
        length=l;
        width=w;
    }
   friend int area(Rectangle r);
};
int area(Rectangle r)
{
    return (r.length*r.width);
}
int main()
{
    Rectangle obj1(5, 3);
    cout<< "Area is: "<< area(obj1)<<endl;
    return 0;

}
