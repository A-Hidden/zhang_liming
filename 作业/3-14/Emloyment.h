#ifndef EMLOYMENT_H
#define EMLOYMENT_H
#include<string>

class Emloyment
{
public:

    Emloyment(std::string,std::string,int);

    void setLastName(std::string lname);
    void setFirstName(std::string fname);
    void setSalary(int salary);

    std::string getLastName()const;
    std::string getFirstName()const;
    int getSalary()const;

    void displayMessage()const;

private:
    std::string LastName;
    std::string FirstName;
    int Salary;
};

#endif // EMLOYMENT_H
