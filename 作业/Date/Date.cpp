#include"Date.h"
#include<iostream>
using namespace std;
Date::Date(int m,int d,int y)
{
    setmonth(m);
    setday(d);
    setyear(y);
}

void Date::setmonth(int m)
{ if(m>0&&m<=12)
    month=m;
    else month=1;
}
int Date::getmonth()
{
    return month;
}

void Date::setday(int d)
{
    day=d;
}
int Date::getday()
{
    return day;
}

void Date::setyear(int y)
{
    year=y;
}
int Date::getyear
{
    return year;
}

void displayDate()
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
