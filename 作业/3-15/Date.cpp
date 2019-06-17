#include<iostream>
#include"Date.h"
using namespace std;

Date::Date(int month,int day,int year)
{
   setMonth(month);
   setDay(day);
   setYear(year);
}

void Date::setMonth(int month)
{
    if(month>=1&&month<=12)
        Month=month;
    else
    {
        Month=1;
        cerr<<"Please enter right time.\n";
    }
}

void Date::setDay(int day)
{
    Day=day;
}

void Date::setYear(int year)
{
    Year=year;
}

int Date::getMonth()const
{return Month;}

int Date::getDay()const
{
    return Day;
}

int Date::getYear()const
{
    return Year;
}

void Date::displayMessage()const
{
    cout<<"It is "<<getMonth()<<" "<<getDay()<<","<<getYear();
    cout<<"\n";
}
