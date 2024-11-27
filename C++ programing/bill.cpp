#include<iostream>
using namespace std;
int main ()
{
    float u,bill,t_bill,total;
    string n;
    cout<< "Enter the name: "<<endl;
    cin>> n;
    cout<< "Enter the number of units consumed: "<<endl;
    cin>> u;
    cout<<endl<<n<<endl;
    if(u>0 && u<=100)
    {
        bill=(50+(.60*u));
        cout<< "RS."<<bill;
    }
    else if(u>100 && u<=300)
    {
        bill=(50+(100*.60)+((u-100)*.80));
        cout<< "RS."<< bill;
    }
    else if (u>300)
    {
        bill=(50+(100*.60)+(200*.80)+((u-300)*.90));
        if(bill>300)
        {
          t_bill=(bill*.15);
          total=bill+t_bill;
          cout<< "RS."<<total;
        }
        else
        {
            cout<< "RS."<< bill;
        }
    }
    else
    {
        bill=50;
        cout<< "RS."<<bill;
    }
 return 0;
}


