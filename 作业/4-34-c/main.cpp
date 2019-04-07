#include <iostream>

using namespace std;

int main()
{
   unsigned int n=0;//the accuracy
   unsigned int i=1;//counter
   double result=1;//the result
   double sum=1;//the final result
   double x=1;
   cout<<"Please enter the accuracy:";
    cin>>n;
   cout<<"\nPlease enter the x:";
    cin>>x;

   while(i<=n)
   {
       result*=(x/i);
       sum+=result;
       i++;
   }

   cout<<"The result is:"<<sum;
}
