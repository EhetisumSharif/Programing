#include <iostream>
using namespace std;
class Complex
{
    float real;
    float imag;
public:
    Complex();
    Complex(float r, float i);
    Complex operator+(Complex c);
    Complex operator-(Complex c);
    Complex operator*(Complex c);
    Complex operator/(Complex c);
    friend void display(Complex c);
};
Complex::Complex()
{
    real = 0;
    imag = 0;
}
Complex::Complex(float r, float i)
{
    real = r;
    imag = i;
}
Complex Complex::operator+(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}
Complex Complex::operator-(Complex c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp;
}
Complex Complex::operator*(Complex c)
{
    Complex temp;
    temp.real = (real * c.real) - (imag * c.imag);
    temp.imag = (real * c.imag) + (imag * c.real);
    return temp;
}

Complex Complex::operator/(Complex c)
{
    Complex temp;
    float divisor = (c.real * c.real) + (c.imag * c.imag);
    temp.real = ((real * c.real) + (imag * c.imag)) / divisor ;
    temp.imag = ((imag * c.real) - (real * c.imag)) / divisor;
    return temp;
}
void display(Complex c)
{
    cout << c.real << " + " << c.imag << "i" << endl;
}
int main()
{
    Complex c1(7.4, 6.8), c2(7.8, 2.6), c3, c4, c5, c6;
    cout << "1st Complex Number is: ";
    display(c1);
    cout << "2nd Complex Number is: ";
    display(c2);
    c3 = c1 + c2;
    cout << "Addition Complex Number is: ";
    display(c3);
    c4 = c1 - c2;
    cout << "subtraction of Complex Number is: ";
    display(c4);
    c5 = c1 * c2;
    cout << "Multiplication of  Complex Number is: ";
    display(c5);
    c6 = c1 / c2;
    cout << "Division of Complex Number is: ";
    display(c6);
    return 0;
}
