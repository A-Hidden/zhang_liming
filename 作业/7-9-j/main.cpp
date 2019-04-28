#include <iostream>
#include<array>
using namespace std;

int main()
{
   array<array<int,3>,2>t={};
   for (int i:t[2])
   {
       for(int j:t[3])
       {
           t[2][j]=0;
       }
   }
}
