#include <iostream>

using namespace std;

int prime (int n)
{
    for(int i=1;i<=n;i++)
    {
        if (n%i==0);//余数不为零则为素数
        else return n;
            //只要存在一个除一和它本身之外的因数
       //就可以断定这是素数而跳出循环
    }

}

int main()
{    //从2循环到10000
    //素数输出
    int c;
   for(int counter=2;counter<=10000;counter++)
   {
       c=prime(counter);
       cout<<c<<"\n";
   }

}
