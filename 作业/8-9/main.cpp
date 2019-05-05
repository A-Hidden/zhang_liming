#include <iostream>

using namespace std;

int main()
{
  long int value1=200000;
  long int value2;
  long int *longPtr;//end a
  longPtr=&value1;//end b
  cout<<*longPtr<<"\n";//end c
  value2=*longPtr;//end d
  cout<<value2<<"\n";//end e
  cout<<&value1<<"\n";//end f
  cout<<longPtr<<"\n";//end h
}
