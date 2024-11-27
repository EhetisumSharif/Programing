#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x,y,sum,sub,multi,div;
    cout << "Enter Two numbers: " <<endl ;
    cin >> x >> y;
    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);
    sum=x+y;
    cout << setw(20) << "Addition: " << sum <<endl;
    sub= x-y;
    cout << setw(20) << "Subtraction: " << sub <<endl;
    cout << noshowpoint;
    multi=x*y;
    cout << setw(20) << "Multiplication: " <<multi <<endl;
    div=x/y;
    cout << setw(20) << "Division : " <<div <<endl;
}

