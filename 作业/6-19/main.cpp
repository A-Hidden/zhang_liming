#include <iostream>
#include<cmath>

using namespace std;

int main()
{
   double hypotenuse(double,double);//��������
   double a=0.0;
   double b=0.0;//�������
   cout <<"Please enter the length of sides:";//��ʾ
   cin>>a>>b;//��ȡ
   cout <<"The hypotenuse is:"<<hypotenuse(a,b);//���
}

 double hypotenuse(double a,double b)
{
    double c=0.0;
    double result=0.0;
    c = a*a + b*b;
    result=sqrt(c);
    return result;
}
