#include <iostream>

using namespace std;

int main()
{
   int s=1;//as the symbol
   int i=0;//as the counter
   double n=1.0;//as the denominator
   double t=0.0;//as the initial result
   double sum=1.0;
   double PI=0.0;//final result

   cout<<"the\tPI\n";

   for (i=1;i<=1000;i++)
    {
        sum+=t;
        PI=4*sum;
        n+=2.0;
        s= -s;
        t=s/n;

        cout<<i<<"\t";
        cout<<PI<<"\n";

    }
}

