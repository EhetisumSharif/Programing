#include <iostream>
using namespace std;
class test
{
    int e, f, g;
public:
    void getdata(int x, int y, int z) {
        e = x;
        f = y;
        g = z;
    }
    void display()
    {
        cout << "s: " << e << " " << f << " " << g << endl;
    }
    void operator-() {
        e = -e;
        f = -f;
        g = -g;
    }
};
int main()
{
    test obj;
    obj.getdata(-50, 88, -19);
    cout << "Before changing the sing." << endl;
    obj.display();
    -obj;
    cout << "After changing the sing." << endl;
    obj.display();
    return 0;
}