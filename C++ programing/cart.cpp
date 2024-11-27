#include<iostream>
#include<string>
using namespace std;
class Cart
{
    string productNames[2];
    int productQuantities[2];
    int pricePerUnit[2];
    string customerName;
    double total;
public:
    void getInfo();
    void TotalAmount();
    void display();
};
void Cart::getInfo()
{
    cout<< "Enter Customer Name: ";
    cin>>customerName;
    for (int i=0;i<2;i++)
    {
        cout<< "Enter Product Name for item "<<i+1<< ": ";
        cin>>productNames[i];
        cout<< "Enter Product Quantity for item "<<i+1<< ": ";
        cin>>productQuantities[i];
        cout<< "Enter Price Per Unit for item "<<i+1<< ": ";
        cin>>pricePerUnit[i];
    }
}
void Cart::TotalAmount()
{
    total= 0.0;
    for (int i=0;i<2;i++)
    {
           total+= productQuantities[i]*pricePerUnit[i];
    }
    display();
}
void Cart::display()
{
    cout<< "Customer Name: "<<customerName<<endl;
    for (int i=0;i<2;i++)
    {
        cout<< "Product Name: "<< productNames[i]<<endl;
        cout<< "Product Quantity: "<< productQuantities[i]<<endl;
        cout<< "Price Per Unit: "<<pricePerUnit[i]<<endl;
    }

    cout<< "Total Amount to Pay: "<<total<< endl;
}
int main()
{
    Cart cart1,cart2;
    cout<< "Enter Cart 1 Information:"<<endl;
    cart1.getInfo();
    cout<< "Enter Cart 2 Information:"<<endl;
    cart2.getInfo();
    cout<< "Cart 1 Bill:"<<endl;
    cart1.TotalAmount();
    cout<< "Cart 2 Bill:"<<endl;
    cart2.TotalAmount();
    return 0;
}
