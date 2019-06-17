#include<string>
#include<iostream>
#include"Emloyment.h"
using namespace std;

Emloyment::Emloyment(string lname,string fname,int salary)
{
    setLastName(lname);
    setFirstName(fname);
    setSalary(salary);
}

void Emloyment::setLastName(string lname)
{
    LastName=lname;
}

void Emloyment::setFirstName(string fname)
{
    FirstName=fname;
}

void Emloyment::setSalary(int salary)
{
    if(salary>=0)
        Salary=salary;
    else Salary=0;
}

string Emloyment::getLastName()const
{
    return LastName;
}

string Emloyment::getFirstName()const
{
    return FirstName;
}

int Emloyment::getSalary()const
{
    return Salary;
}

void Emloyment::displayMessage()const
{
    cout<<"Welcome you "<<getLastName()<<" "<<getFirstName();
    cout<<"\nYour salary is:"<<getSalary()<<"\n";
}
