#include<iostream>
using namespace std;
class complex
{
    float real , imag;
public:
    complex(float r, float i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<< real << "+" <<imag <<"i"<<endl;
    }
    friend complex add(complex ob1, complex ob2);
};
complex add(complex ob1, complex ob2)
{
    float sum_real= ob1.real + ob2.real;
    float sum_imag= ob1.imag + ob2.imag;
    return complex (sum_real, sum_imag);
}
int main()
{
    complex obj1(5, 2), obj2(6, 3);
    complex sum= add(obj1, obj2);
    cout<< "Sum of Two complex number is: ";
    sum.display();
    return 0;
}
