#include <iostream>
using namespace std;
class Faculty
{
public:
    int id;
    string name;
    string post;
    string qualification;
    string address;
    void inputDetails();
    void displayDetails();
};
void Faculty::inputDetails()
{
    cout << "Enter Faculty ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Faculty Name: ";
    getline(cin, name);
    cout << "Enter Faculty Post: ";
    getline(cin, post);
    cout << "Enter Faculty Qualification: ";
    getline(cin, qualification);
    cout << "Enter Faculty Address: ";
    getline(cin, address);
}
void Faculty::displayDetails()
{
    cout << "Faculty ID: " << id << endl;
    cout << "Faculty Name: " << name << endl;
    cout << "Faculty Post: " << post << endl;
    cout << "Faculty Qualification: " << qualification << endl;
    cout << "Faculty Address: " << address << endl;
}

int main()
{
    Faculty f1;
    cout << "Enter Faculty Details: "<<endl;
    f1.inputDetails();
    cout << "Faculty Details: "<<endl;
    f1.displayDetails();
    return 0;
}
