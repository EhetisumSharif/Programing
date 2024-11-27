#include <iostream>
using namespace std;
class prime
{
    public:
    int n,i,f=0;
    void output();
    void getinput()
    {
        cout<< "Enter number: "<<endl;
        cin>> n;
    } 
};
void prime::output()
    { 
       for (i=2;i<=n/2;i++)
       {
          if(n%i==0)
           {
             f++;
             break;
           }
       }
       if(f==0)
       {
          printf("Prime Number");
       }
       else
       { 
          printf("Not Prime Number");
       }
    }
int main()
{
prime a;
a.getinput();
a.output();
return 0;
}