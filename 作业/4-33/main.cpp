#include <iostream>

using namespace std;

int main()
{
   double a=0;
   double b=0;
   double c=0;
   double t=0;
   cout<<"Please enter three numbers of edges:";
   cin>>a>>b>>c;
   if (a>b)
      {t=a;a=b;b=t;}
   if(b>c)
       {t=b;b=c;c=t;}

    if(a*a+b*b==c*c)
    cout<<"It is aright-angled triangle.";
    else cout<<"It is not aright-angled triangle.";

    }
