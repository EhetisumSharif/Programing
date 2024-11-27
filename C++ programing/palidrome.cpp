#include <iostream>
using namespace std;
class number
{
    public:
    int x,p,rev=0,a;
    void output();
    void getinput()
    {
        cout<< "Enter number: "<<endl;
        cin>> x;
        a=x;
    }
    void palin ()
    {
        while (x!=0)
       {
          p=x%10;
          rev=rev*10+p;
          x/=10;
       }
    }
   
};
void number::output()
    {
        palin();
        if(a==rev)
       {
          cout<< "Palindrome number."<<endl;
       }
       else
       {
          cout<<"is Not a Palindrome number."<<endl;
       }
    }

int main()
{
number a;
a.getinput();
a.output();
return 0;
}