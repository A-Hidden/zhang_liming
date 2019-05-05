#include <iostream>

using namespace std;

int main()
{
    int t[2][3]={{1,2,3},{4,5,6}};
  cout<<"\tcolumn1"<<"\tcolumn2"<<"\tcolumn3";
   for(int i=0;i<2;i++)//i=column;j=row
   {
       cout<<"\nrow"<<i<<"\t";
       for(int j=0;j<3;j++)
       {

           cout<<t[i][j]<<"\t";
       }
   }
}
