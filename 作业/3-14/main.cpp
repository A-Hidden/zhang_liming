#include <iostream>
#include"Emloyment.h"
using namespace std;

int main()
{
   Emloyment emloyee1("Alex","Hidden",100000000);
   Emloyment emloyee2("Somebody","Who",10000);

   emloyee1.displayMessage();
   emloyee2.displayMessage();

   int salary=emloyee1.getSalary();
   salary+=salary*0.1;

   emloyee1.setSalary(salary);
   emloyee1.displayMessage();
}
