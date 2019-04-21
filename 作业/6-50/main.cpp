#include <iostream>

using namespace std;

int main()
{
    int tripleByValue(int);
    void tripleByReference(int&);
   int count;
   cout<<"Enter a value for count:";
   cin>>count;
   cout<<"\nValue of count before call to tripleByValue()is:"
   <<count<<"\nValue returned from tripleByValue()is:"<<tripleByValue(count)
   <<"\nValue of count (in main)after tripleCallByValue()is:"<<count;
   tripleByReference(count);
   cout<<"Value of count (in main)after call to"<<"tripleByReference()is:"<<count;

}
int tripleByValue (int value)
{
    return value*3;
}
void tripleByReference(int&valueRef)
{
    valueRef*3;
}
