#include<iostream>
using namespace std;
int main ()
{
    int r,c,n;
    cout<< "Enter how many Row and Column you want:"<<endl;
    cin>> n;
    cout<<endl;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<< r << " ";
        }
        cout<<endl;
    }
    return 0;
}
