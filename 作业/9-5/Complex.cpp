#include<iostream>
#include"Complex.h"
#include<cmath>

using namespace std;

Complex::Complex(double a,double b)
{
  realPart=a;
  imaginaryPart=b;
}

double Complex::sum(double a,double b,double c,double d)
{
    int sum1=0;int sum2=0;
    sum1=a+c;
    sum2=b+d;
    cout<<"The final Complex is:"<<"("<<sum1<<","<<sum2*(-1)<<")";
    return 0;
}

double Complex::sub(double a,double b,double c,double d)
{
    int sub1=0;int sub2=0;
    sub1=a-c;
    sub2=b-d;
    cout<<"The final Complex is:"<<"("<<sub1<<","<<sub2*(-1)<<")";
    return 0;
}

