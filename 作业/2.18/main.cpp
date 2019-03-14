#include <iostream>

using namespace std;

int main()
{
  int a,b;
  cout<<"please enter two integers"<<endl;
  cout<<"a="<<endl;
  cout<<"b="<<endl;

  cin>>a>>b;

  if(a>b)
    cout<<a<<"is large"<<endl;

  else if(b>a)
    cout<<b<<"is large.\n"<<endl;

  else
    cout<<"a=b="<<a<<"\nThese numbers are equal."<<endl;

}
