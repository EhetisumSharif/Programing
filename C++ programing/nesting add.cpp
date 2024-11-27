#include<iostream>
using namespace std;
class addnumber
{
   int a,b;
   public:
       void inputnumber()
{
    cout<< "Enter two numbers: "<<endl;
    cin>>a>>b;
}
int add()
{
    int x;
    x=a+b;
    return x;
}
void show()
{
    int y;
    y=add();
    cout<< "Addition: "<<y <<endl;
}
};

int main()
{
    addnumber obj;
    obj.inputnumber();
    obj.show();
    return 0;
}
