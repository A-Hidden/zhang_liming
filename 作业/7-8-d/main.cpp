#include <iostream>
#include<array>
using namespace std;

int main()
{
   array<double,100>temperatures={};
   int sum=0;
   for(int i=0;i<100;i++)
   {
       sum+=temperatures[i];
   }
   cout<<"Sum is"<<sum;
}
