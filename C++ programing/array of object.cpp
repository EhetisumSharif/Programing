#include<iostream>
using namespace std;
class sample
{
    int x;
public:
    void get_val(int a)
    {
        x=a;
    }
    void show_val()
    {
        cout<<x<<endl;
    }
};
int main()
{
    sample obj[3];
    for(int i=0; i<3; i++)
    {
        int j=10+i;
        obj[i].get_val(j);
        obj[i].show_val();

    }
    return 0;
}
