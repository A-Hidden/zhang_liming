#include<string>
using namespace std;
class Employee
{
  public:
      Employee(string,string,int);
      void setFirstname(string);
      string getFirstname();
      void setLastname(string);
      string getLastname();
      void setMonthlysalary(int);
      int getMonthlysalary();
  private:
    string Firstname;
    string Lastname;
    int Monthlysalary;
};
