#include <iostream>
using namespace std;
class getdata
{
private:
    int a;
protected:
    int b;
public:
    void get_a()
    {
        cout << "Enter value for a: ";
        cin >> a;
    }
    void get_b()
    {
        cout << "Enter value for b: ";
        cin >> b;
    }
    void display_a()
    {
        cout << "Value of a: " << a << endl;
    }
};

class add : public getdata
{
private:
    int c;
public:
    void get_c()
    {
        cout << "Enter value for c: ";
        cin >> c;
    }
    void display_b_c()
    {
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
    }
    void addition_display()
    {
        cout << "Addition of b and c: " << b+c << endl;
    }
};

int main()
{
    add obj;
    obj.get_a();
    obj.get_b();
    obj.get_c();

    obj.display_a();
    obj.display_b_c();
    obj.addition_display();

    return 0;
}

