#include <iostream>
#include<array>
using namespace std;

int main()
{
  array<double,99>w={};
  cout<<"Enter 99 numbers";
  double largest=0;
  double lowest=1000000000;
  for(int ws:w)
  {
   if(ws<largest)
    ws=largest;
    if(ws<lowest)
        lowest=ws;
  }

}
