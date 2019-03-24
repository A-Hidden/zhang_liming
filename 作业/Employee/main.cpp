#include <iostream>
#include"Employee.h"
using namespace std;

int main()
{
   Employee employee1("Lisa","Roberts",4500);
   Employee employee2("Mark","Stein",4000);
   cout<<"Employee's yearly salaries:"<<endl;
   int monthlysalary1=employee1.getMonthlysalary();
   cout<<employee1.getFirstname()<<" "<<employee1.getLastname()
   <<":$"<<monthlysalary1*12<<endl;

   int monthlysalary2=employee2.getMonthlysalary();
   cout<<employee2.getFirstname()<<" "<<employee2.getLastname()
   <<":$"<<monthlysalary2*12<<endl;

}
