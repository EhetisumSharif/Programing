#include <iostream>
using namespace std;
const int m=50;
class Vector
{
    float A[m];
    int s;
public:
    void create();
    void modify();
    void multiply();
    void display();
};
void Vector::create()
{
    cout<< "Enter the size of the vector: "<<endl;
    cin>>s;
    if(s<=0 || s>m)
    {
        cout<< "Invalid vector size. Please choose a size between 1 and "<<m<<"."<<endl;
    }
    cout<< "Enter " <<s<< " elements: "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>A[i];
    }
}
void Vector::modify()
{
    float value, with;
    int count=0;
    if(s==0)
    {
        cout<< "Vector is empty."<<endl;
    }
    cout<< "Enter the value to be modified: "<<endl;
    cin>>value;
    cout<< "Enter the value with which you want to replace it: "<<endl;
    cin>>with;
    for(int i=0;i<s;i++)
    {
        if(A[i]==value)
        {
            A[i]=with;
            count++;
        }
    }
    if(count==0)
    {
        cout<< "Value not found in the vector."<<endl;
    } else
    {
        cout<< "Modified "<<count<< " occurrences of "<< value<< " with "<< with<< "."<<endl;
    }
}

void Vector::multiply()
{
    float mul;
    if(s==0)
    {
        cout<< "Vector is empty."<<endl;
    }
    cout<< "Enter the value by which you want to multiply: "<<endl;
    cin>>mul;
    for(int i=0;i<s;i++)
    {
        A[i]=A[i]*mul;
    }
    cout<< "Vector multiplied by "<<mul<< "."<<endl;
}

void Vector::display()
{
    if(s==0)
    {
        cout<< "Vector is empty." << endl;
    }
    cout<< "Vector elements: (";
    for (int i=0;i<s;i++)
    {
        cout<< A[i];
        if (i!=s-1)
        {
            cout<< ", ";
        }
    }
    cout<< ")"<<endl;
}

int main()
{
    Vector o1;
    int choice;
    do
    {
        cout<<endl<< "Choice List"<<endl;
        cout<< "1. Create Vector"<<endl;
        cout<< "2. Modify Vector" <<endl;
        cout<< "3. Multiply with Scalar Value"<<endl;
        cout<< "4. Display Vector"<<endl;
        cout<< "5. Exit"<<endl;
        cout<< "Enter your choice: "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                o1.create();
                break;
            case 2:
                o1.modify();
                break;
            case 3:
                o1.multiply();
                break;
            case 4:
                o1.display();
                break;
            case 5:
                cout<< "Exiting the program."<<endl;
                break;
            default:
                cout<< "Invalid choice!!"<< endl;
        }
    }
    while(choice!=5);
    return 0;
}
