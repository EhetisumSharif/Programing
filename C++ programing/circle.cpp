#include<iostream>
using namespace std;
class circle
{
    float radius;
    float center_x, center_y;
public:
    circle(float r, float x, float y)
    {
        radius = r;
        center_x = x;
        center_y = y;
    }
    friend float circumference(circle obj);
};
float circumference(circle obj)
{
    return (2 * 3.1416 * obj.radius);
}
int main()
{
    circle ob1(5, 2, 3);
    cout << "Circumference is: " << circumference(ob1) << endl;
    return 0;
}
