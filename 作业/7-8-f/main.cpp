#include <iostream>
#include<array>
using namespace std;

int main()
{
  array<double,99>w={};
  cout<<"Enter 99 numbers";
  double largest=0;
  for(int ws:w)
  {
   if(ws<largest)
    ws=largest;
  }

}
