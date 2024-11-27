#include <iostream>
using namespace std;
class factorial
{
    public:
    int fact(int n);

};
int factorial::fact (int n)
{
   if (n == 0)
    {
      return 1;
    }
 return n*fact(n - 1);
}
int main()
{
factorial a;
cout << "Factorial : " <<a.fact(5) << endl;
return 0;
}