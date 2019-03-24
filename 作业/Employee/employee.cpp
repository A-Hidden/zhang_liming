#include"Employee.h"
#include<string>
#include<iostream>
using namespace std;
Employee::Employee(string first,string last,int salary)
{
    setFirstname(first);
    setLastname(last);
    setMonthlysalary(salary);
}
void Employee::setFirstname(string name)
{
    Firstname=name;
}

string Employee::getFirstname()
{
    return Firstname;
}

void Employee::setLastname(string name)
{
    Lastname=name;
}

string Employee::getLastname()
{
    return Lastname;
}

void Employee::setMonthlysalary(int salary)
{
    if(salary>0)
        Monthlysalary=salary;
    else Monthlysalary=0;
}
int Employee::getMonthlysalary()
{
    return Monthlysalary;
}

