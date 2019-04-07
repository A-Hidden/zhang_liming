#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    double a=0;
    double b=0;
    double c=0;

    cout<<"Please enter three numbers of edges:";
    cin>>a>>b>>c;

    if(a+b>c&&fabs(a-b)<c)
        cout<<"It is a triangle.";
    else cout <<"It is not a triangle.";
}
