#include<iostream>
using namespace std;
class cart
{
    int  itemCode[100];
    float itemCost[100];
    int Count;
public:
    void initializer();
    void getItem();
    void display_totalValue();
    void deleteItem();
    void display_Allitem();
};
void cart::initializer()
{
    Count=0;
}
void cart::getItem()
{
    if(Count<100)
    {
        cout<<"Enter item code: "<<endl;
        cin>>itemCode[Count];
        cout<<"Enter item cost: "<<endl;
        cin>>itemCost[Count];
        Count++;
    }
}
void cart::display_totalValue()
{
    float sum=0;
    for(int i=0;i<Count;i++)
    {
        sum+=itemCost[i];
    }
    cout<<endl<<"Total Value: "<<sum<<endl;
}
void cart::deleteItem()
{
    int a;
    cout<<"Enter item code: "<<endl;
    cin>>a;
    for(int i=0;i<Count;i++)
    {
        if(itemCode[i]==a)
        {
            itemCost[i]=0;
        }
    }
    cout<<"Successfully deleted your item."<<endl;
}
void cart::display_Allitem()
{
    cout<<endl << "Total item: "<<endl;
    for(int i=0;i<Count;i++)
    {
        cout<<endl<<"Item code: "<<itemCode[i]<<endl;
        cout<<endl<<"Item cost: "<<itemCost[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    cart item;
    int n;
    item.initializer();
    while(n!=5)
    {
        cout<<endl <<"Choose the option below: "<<endl;
        cout<< "1: Add item"<<endl;
        cout<< "2: Display total value"<<endl;
        cout<< "3: Delete item"<<endl;
        cout<< "4: Display all item"<<endl;
        cout<< "5: Quit"<<endl;
        cin>>n;
    switch(n)
    {
    case 1:
        item.getItem();
        break;
    case 2:
        item.display_totalValue();
        break;
    case 3:
        item.deleteItem();
        break;
    case 4:
        item.display_Allitem();
        break;
    case 5:
        break;
    default:
        cout<< "invalid!!"<<endl;
    }
    }
    return 0;
}
