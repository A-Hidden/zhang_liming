#include <iostream>

using namespace std;

int main()
{
   int integerPower(int,unsigned int);//声明函数
    int base=0;
    unsigned int exponent=0;//定义变量
    cout<<"Please enter numbers what you want to calculate";//提示
    cin >> base ;
    cin >> exponent;//读取
    cout<<"integerPower("<<base<<","<<exponent<<")="<<integerPower(base,exponent);
}

 int integerPower(int base,unsigned int exponent)
{
    int result=1;
    for( int i=1;i<=exponent;i++)
    {
       result*=base;
    }//end the "for"loop
 return result;
}//end the function
