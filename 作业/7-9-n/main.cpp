#include <iostream>

using namespace std;

int main()
{
  int t[2][3]={1,2,3,4,5,6};
  int sum=0;
  for(int i=0;i<3;i++)
  {
      sum+=t[1][i];
  }
  cout<<sum;
}
