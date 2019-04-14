#include <iostream>
#include<cmath>

using namespace std;

int main()
{
   double hypotenuse(double,double);//声明函数
   double a=0.0;
   double b=0.0;//定义变量
   cout <<"Please enter the length of sides:";//提示
   cin>>a>>b;//读取
   cout <<"The hypotenuse is:"<<hypotenuse(a,b);//输出
}

 double hypotenuse(double a,double b)
{
    double c=0.0;
    double result=0.0;
    c = a*a + b*b;
    result=sqrt(c);
    return result;
}
