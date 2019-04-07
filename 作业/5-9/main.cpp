#include <iostream>

using namespace std;

int main()
{
    int i=0;//as counter
   int result=1;//the final result

   for(i=1;i<=15;i++)//判断是否在1-15
   {
      if(i%2!=0)//判定是否为奇数
        result*=i;//若是则相乘
         //若否则跳出判断
   }

    cout<<"The result is:"<<result;
}
