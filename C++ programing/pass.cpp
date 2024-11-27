#include <iostream>
using namespace std;
class MyClass {
public:
    int value;

    MyClass(int x)
    {
        value = x;
    }
};

void modifyByValue(MyClass &obj) {
    obj.value = 100;
}

int main() {
    MyClass myObject(42);
    modifyByValue(myObject);
    cout << "Original value: " << myObject.value <<endl;
    return 0;
}

