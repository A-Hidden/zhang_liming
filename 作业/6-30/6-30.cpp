#include <iostream>
#include<string>
using namespace std;

int main()
{
   int serialize(int);//��������
   int n=0;//��ʼ��

   cout << "enter a number:\n";
   cin>>n;
   cout<<serialize(n);
}

  int serialize(int a)

  {
     int i,m=0;
      while(a/10!=0)
      {
        i=a%10;
        a=a/10;
        m=m*10+i;
      }
      if(a!=0)
      {
          m=m*10+a;
      }
      return m;
  }
