#include <iostream>

using namespace std;

int main()
{
  int number=0;
  int largest=0;
  int counter=1;
  cout<<"Please enter your grade of sales:";

  while(counter<=10)
  {   cin>>number;
    if (number>=largest)
      largest=number;

      counter++;
  }

  cout<<"The largest is:"<<largest<<endl;

}
