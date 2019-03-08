//2.16
#include <iostream>

using namespace std;

int main()
{
    double a,b,m,n,p,q;//m是和，n是差，p是乘积，q是商
    cout << "请输入a:";
    cin>>a;
    cout<<"请输入b:";
    cin >>b;
    m=a+b;
    cout<<"m="<<m<<endl;

    n=a-b;
    cout<<"n="<<n<<endl;

    p=a*b;
    cout<<"p="<<p<<endl;

    q=a/b;
    cout<<"q="<<q<<endl;
    return 0;
}
