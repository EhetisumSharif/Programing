#include<iostream>
using namespace std;
class media
{
protected:
    string title;
    int price;
public:
    media(string t, int p)
    {
        title=t;
        price=p;
    }
    virtual void display()=0;

};
class book : public media
{
    int pgno;
public:
    book(string t,int p,int pn): media(t, p)
    {
        pgno=pn;
    }
    void display()
    {
        cout<< "Book title:"<<title<<endl;
        cout<< "Price:"<<price<<endl;
        cout<< "Number of page:"<<pgno<<endl;
    }
};
class tape : public media
{
    int playt;
public:
    tape(string t,int p,int pt): media(t, p)
    {
        playt=pt;
    }
    void display()
    {
        cout<< "Tape title:"<<title<<endl;
        cout<< "Price:"<<price<<endl;
        cout<< "Playing time:"<<playt<<endl;
    }
};
int main()
{
    book book1("Book",100,75);
    tape tape1("Tape",160,60);
    media *list[2]= {&book1, &tape1};

    for(int i=0; i<2; i++)
    {
        list[i]->display();
    }
    return 0;

}
