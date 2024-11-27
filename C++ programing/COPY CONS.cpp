#include<iostream>
using namespace std;
class Add {
    int x,y;
public:
    Add(int m,int n)
    {
        x=m;
        y=n;
    }
    Add(const Add &new_obj)
    {
        x=new_obj.x;
        y=new_obj.y;
    }
    void display()
    {
        cout<<"x: "<<x<<", y: "<<y<<endl;
    }
};
int main()
{
    Add s1(20, 50);
    Add s2 = s1;
    Add s3(s1);
    cout<<"s1 values: ";
    s1.display();
    cout<<"s2 values: ";
    s2.display();
    cout <<"s3 values: ";
    s3.display();
    return 0;
}
