//6-49����Բ�����
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double circleArea(double);
    double R=0;//�뾶
    cout<<"����뾶��\n";
    cin>>R;
    cout<<"The area is:"<< circleArea( R );
}
 inline double circleArea(double R)
{
    double S=0;
    S=M_PI*R*R;
    return S;
}
