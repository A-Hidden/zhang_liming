#include <iostream>

using namespace std;

int main()
{
 int multiple(int,int);
  int a=0;
  int b=0;
  cout << "enter two integer numbers:";
  cin >>a>>b;
}
   int multiple(int a,int b)
   {
     if(b%a==0)
       cout<<"true";
     else
       cout<<"false";
     return;
   }

