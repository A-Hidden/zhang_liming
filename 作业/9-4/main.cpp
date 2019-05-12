#include <iostream>
#include<stdexcept>
#include"Time.h"

using namespace std;

int main()
{
  Time t;
  cout<<"\nThe initial standard time is ";
  t.printStandard();

  t.setTime(13,27,6);

  cout<<"\n\nUniversal time after setTime is";
  t.printUniversal();
  cout<<"\nStandard time after setTime is";
  t.printStandard();

  try
  {
      t.setTime (99,99,99);
  }
      catch (invalid_argument &e)
      {
          cout<<"Expectation:"<<e.what()<<endl;
      }
  cout<<"\nAfter attempting invalid settings:"
  <<"\nUniversal time:";
  t.printUniversal();
  cout<<"\nStandard time:";
  cout<<endl;
}
