//6-49计算圆的面积
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double circleArea(double);
    double R=0;//半径
    cout<<"输入半径：\n";
    cin>>R;
    cout<<"The area is:"<< circleArea( R );
}
 inline double circleArea(double R)
{
    double S=0;
    S=M_PI*R*R;
    return S;
}
