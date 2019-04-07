#include <iostream>

using namespace std;

int main()
{
   int i=0;
   int result=1;

   for(i=1;i<=5;i++)
   {
       result*=i;
       cout<<i<<"!\t";
       cout<<result<<"\n";
   }
   //当计算20！时会由于存储空间不足而出现错误
}
