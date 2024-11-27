#include<iostream>
using namespace std;
class bankAccount
{
    string name;
    long long int ac_no;
    string ac_type;
    int balance;
public:
    void assign();
    void deposit();
    void withdraw();
    void display();
};
void bankAccount::assign()
{
    cout<< "Enter your name: "<<endl;
    getline(cin, name);
    cout<< "Enter your Account number: "<<endl;
    cin>>ac_no;
    cout<< "Enter your account type: "<<endl;
    cin>>ac_type;
    balance=500;
    cout<< "initially Your account balance is 500 tk."<<endl;
}
void bankAccount::deposit()
{
   int amount;
   cout<< "How much you want to deposit: "<<endl;
   cin>>amount;
   balance+= amount;
   cout<< "Deposited "<<amount<< " to your account "<<ac_no<<endl;
}
void bankAccount::withdraw()
{
   int amount;
   cout<< "How much you want to Withdraw: "<<endl;
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
    cout<<endl<<"your name is "<<name<<endl<<"Your account number is "<<ac_no<<endl<< "your account type is "<<ac_type<<endl
        <<"And your balance is "<<balance<<endl;
}
int main()
{
    bankAccount p1;
    int n;
    p1.assign();
    cout<< "For deposit press 1 and for withdraw Press 2."<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
       p1.deposit();
       break;
    case 2:
       p1.withdraw();
       break;
    default:
        cout<< "Invalid input!!"<<endl;
    }
    p1.display();
    return 0;
}

