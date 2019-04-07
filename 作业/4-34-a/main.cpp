#include <iostream>

using namespace std;

int main()
{
    unsigned int n=0;
    unsigned int i=1;
    unsigned int result=1;
    cout<<"Please enter what you want to calculate:";
    cin>>n;
    while (i<=n)
    {
        result*=i;
        i++;
    }

    cout<<"The result is:"<<result;
}
