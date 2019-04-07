#include <iostream>

using namespace std;

int main()
{
  int number=0;
  int largest=0;
  int second=0;
  int counter=1;
  cout<<"Please enter the numbers:";

  while (counter<=10)
  {
      cin>> number;

      if(number>largest)
        {second=largest;
        largest=number;}

        counter++;
  }
  cout<<"The largest number is:"<<largest;
  cout<<"\nThe second number is:"<<second;
}
