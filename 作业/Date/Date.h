#include<iostream>
using namespace std;
class Date
{
public:
    Date(int,int,int);
    void setmonth(int);
    int getmonth();

    void setday(int);
    int getday();

    void setyear(int);
    int getyear();

    void displayDate()const;
private:
    int month;
    int day;
    int year;

};
