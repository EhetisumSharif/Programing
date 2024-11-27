#include<iostream>
#include<string>
using namespace std;
class Account
{
protected:
    string name;
    double ac_number;
    string ac_type;
    double balance;
public:
    void set_data(string n, double an, string act)
    {
        name= n;
        ac_number= an;
        ac_type= act;
        balance= 0.0;
    }
    void deposit(int amount)
    {
        balance+= amount;
    }
    void display()
    {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << ac_number << endl;
        cout << "Account Type: " << ac_type << endl;
        cout << "Balance: " << balance << endl;
    }
};
class cur_acct : public Account
{
    double min_balance;
    int penalty;
public:
    void set_min_balance(double min_bal, int charge)
    {
        min_balance = min_bal;
        penalty = charge;
    }
    void check_min_balance()
    {
        if (balance < min_balance)
        {
            cout << "Service charge imposed due to low balance." << endl;
            balance -= penalty;
            cout << "Service charge: " << penalty << endl;
            cout << "Updated Balance after Service Charge: " << balance << endl;
        }
        else
        {
            cout << "No service charge imposed." << endl;
        }
    }
    void withdrawal(double amount)
    {
        if (balance - amount>= min_balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful" << endl;
        }
        else
        {
            cout << "Insufficient Balance for Withdrawal." << endl;
        }
    }
};
class sav_acct : public Account
{
    double interest_rate;
public:
    void set_interest_rate(double rate)
    {
        interest_rate = rate;
    }
    void cal_interest()
    {
        double interest = balance *(interest_rate/100);
        balance += interest;
        cout << "Interest added. Updated Balance: " << balance << endl;
    }
    void withdrawal(double amount)
    {
        if (balance - amount>= 0)
        {
            balance -= amount;
            cout << "Withdrawal Successful."<< endl;
        }
        else
        {
            cout << "Insufficient Balance for Withdrawal." << endl;
        }
    }
};
int main()
{
    cur_acct c;
    c.set_data("Ovi", 23103, "Current");
    c.set_min_balance(500, 20);
    sav_acct s;
    s.set_data("Ovi", 10009, "Savings");
    s.set_interest_rate(6);

    c.deposit(3000);
    c.display();
    c.withdrawal(900);
    c.check_min_balance();
    c.display();
    cout<<endl;
    s.deposit(6000);
    s.cal_interest();
    s.display();
    s.withdrawal(1000);
    s.display();

    return 0;
}
