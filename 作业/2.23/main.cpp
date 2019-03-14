#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,t,largest,smallest;
     cout<<"Please enter 5 integers:";
     cin>>a>>b>>c>>d>>e;
   if(a>b)
        {t=a;a=b;b=t;}
     if(a>c)
        {t=a;a=c;c=t;}
     if(a>d)
        {t=a;a=d;d=t;}
     if(a>e)
        {t=a;a=e;e=t;smallest=a;}
    if(b>e)
        {t=b;b=e;e=t;}
    if(c>e)
         {t=c;c=e;e=t;}
    if(d>e)
         {t=d;d=e;e=t;largest=e;}
    cout<<"The smallest is "<<a;
    cout<<"\nThe largest is "<<e;

}
