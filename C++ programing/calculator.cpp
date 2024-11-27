#include<iostream>
using namespace std;
int main ()
{
    char op;
    int x,y;
    cout << "Enter operator: \n";
    cin >>op;
    cout << "Enter two number: \n";
    cin>> x >>y;
    switch(op)
    {
    case '+':
        cout << "Addition: " << x+y;
        break;
    case '-':
        cout << "subtraction: " << x-y;
        break;
    case '*':
        cout << "Multipicaton: " << x*y;
        break;
    case '/':
        cout << "Division: " << x/y;
        break;
    default:
        cout << "Invalid operator!!";
    }
}
