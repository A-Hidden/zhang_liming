#include <iostream>

using namespace std;

int main()
{
    unsigned int n=0;//需要精度
    unsigned int i=1;//计数器
    double result=1;
    double e=1;//分数式表达
    cout<<"Please enter what you want to calculate:";//提示
    cin>>n;//输入精度

    while(i<=n)
       {
        result*=(1.0/i);
        e+=result;
        i++;
       }

    cout<<"e="<<e;

}
