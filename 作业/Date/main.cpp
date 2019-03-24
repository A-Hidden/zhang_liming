#include <iostream>
#include"Date.h"
using namespace std;

int main()
{
    Date date("1","1","2011");
    cout <<date.getmonth()<<"/"<<date.getday()<<"/"
    <<date.getyear()<<endl;
date.displayDate();
}
