#include <iostream>
using namespace std;
class employee
{
    public:
        double totalSalary;
        double salary_per_hour;
        int number_of_working_hour;
        void getInfo(int salary,int hour)
        {
          salary_per_hour= salary;
          number_of_working_hour= hour;
        }
        void bonus()
        {
            if(totalSalary>500)
            {
                 totalSalary+= 50;
            }
       }
       void addSal()
       {
            totalSalary= salary_per_hour*number_of_working_hour;
            bonus();
       }

        void display()
       {
           addSal();
           cout<< "Final salary is: $"<<totalSalary<<endl;
      }
};
int main()
{
    employee e1;
    e1.getInfo(10,12);
    e1.display();
    return 0;
}

