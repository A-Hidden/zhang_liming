#include <iostream>
#define SIZE 5
using namespace std;

int main()
{
   unsigned int values[SIZE]={};
   for(int i=0;i<SIZE;i++)
   {
       values[i]=2*(i+1);//end a
       cout<<values[i];//end c
   }
   unsigned int *vPtr=values;//end b
   unsigned int *vPtr;
    vPtr=&values;//end d
    for(int i=0;i<SIZE;i++)
    {
        cout<<*(vPtr+i);
    }//end e
    for(int i=0;i<SIZE;i++)
    {
        cout<<*(values+i);
    }//end f
    for(int i=0;i<SIZE;i++)
    {
        cout<<valuesvPtr[i];
    }//end g
   cout<<values[4];
   cout<<*(values+4);
   cout<<valuesvPtr[4];//end h
   cout<<&(vPtr+3)<<*(vPtr+3);//end i
   int *vPtr=values[4];
   cout<<&(vPtr-=4)<<vPtr-=4;//end j
}
