#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<array<int,3>,2>t;
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<2;i++)
        t[i][j]=0;
    }

}
