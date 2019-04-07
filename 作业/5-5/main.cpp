#include <iostream>

using namespace std;

int main()
{
   int number=0;
   int n=0;//accuracy
   int i=0;//counter
   int sum=0;//the result
   cout<<"Please enter the times of use:";
   cin>>n;
   cout <<"input the numbers to calculate:";
   for(i=1;i<=n;i++)
   {
       cin>>number;
       sum+=number;
   }
   cout<<"The final result is:"<<sum;

}
