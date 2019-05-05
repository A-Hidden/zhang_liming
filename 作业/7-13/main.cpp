#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int,20>a={};
    cout<<"Enter numbers";

    for(int j=0;j<20;j++)//j是计数器，只能读入20个数
    {
        int i=0;
         int storage=0;
        cin>>storage;
        if(storage>=10&&storage<=100)
           {
               if(storage!=a[i])
                {
                  a[i]=storage;
                  cout<<a[i]<<"\t";
                  i++;
                }
            }
    }
}
