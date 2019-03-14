#include <iostream>

using namespace std;

int main()
{
    int a,b,c,t;
    int Sum=0;
    int Average=0;
    int Product=0;
    int Smallest=0;
    int Largest=0;

    cout<<"Input three different integers:";
    cin>>a>>b>>c;

    Sum=a+b+c;
    cout<<"Sum is "<<Sum;

    Average=(a+b+c)/3;
    cout<<"\nAverage is "<<Average;

    Product=a*b*c;
    cout<<"\nProduct is "<<Product;

    if(a>b)
        {t=a;a=b;b=t;Smallest=a;}
    if(a>c)
        {t=a;a=c;c=t;Smallest=a;}
    if(b>c)
        {t=b;b=c;c=t;Largest=c;}
    cout<<"\nSmallest is "<<a;
    cout<<"\nLargest is "<<c;
    return 0;
}
