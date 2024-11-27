#include <iostream>
using namespace std;
class MyClass {
private:
    int privateMember;
    friend class FriendClass;

public:
    MyClass(int value)
    {
       privateMember= value;
    }
};

class FriendClass {
public:
    void accessPrivateMember(MyClass obj)
    {
        cout << "Friend class accessing private member: " << obj.privateMember << endl;
    }
};
int main() {
    MyClass myObject(42);
    FriendClass friendObj;
    friendObj.accessPrivateMember(myObject);
    return 0;
}
