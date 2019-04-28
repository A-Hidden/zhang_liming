#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<double,11>a={};
    array<double,34>b={};
    int i=0;
    int j=0;
    for(j=0;j<34;j++)
    {
        for(i=0;i<11;i++)
          {
             b[j]=a{i};
          }
          cout<<a[i];
          cout<<b[j];
    }
}
