#include<iostream>
using namespace std;
class bankAccount
{
    int ac_no,balance;
public:
    void getinfo();
    void deposit();
    void withdraw();
    void display();
};
void bankAccount::getinfo()
{
    cout<< "Enter your Account number: "<<endl;
    cin>>ac_no;
    balance=500;
}
void bankAccount::deposit()
{
   int amount;
   cout<< "How much your want to deposit: "<<endl;
   cin>>amount;
   balance+= amount;
   cout<< "Deposited "<<amount<< " to your account "<<ac_no<<endl;
}
void bankAccount::withdraw()
{
   int amount;
   cout<< "How much your want to Withdraw: "<<endl;
   cin>>amount;
    if(amount>0 && balance>=amount)
    {
      balance-= amount;
      cout<< "Withdrawn "<<amount<< " to your account "<<ac_no<<endl;
    }
    else
    {
      cout<< "Insufficient Balance!!"<<endl;
    }
}
void bankAccount::display()
{
    cout<< "Your account number is "<<ac_no<<" and your balance is "<<balance<<endl;
}
int main()
{
    bankAccount p1;
    p1.getinfo();
    p1.deposit();
    p1.withdraw();
    p1.display();
    return 0;
}
