#include <iostream>

using namespace std;

double mini (double a,double b)
{
    int minimum=a;//�ٶ���һ��Ϊ��Сֵ
    if (minimum>=b)
      minimum=b;
    return minimum;

}

int main()
{
    double a,b,c;
    double minimum=0;

    cout <<"enter three numbers:";
    cin >>a>>b>>c;

    minimum=mini(a,b);
    minimum=mini(minimum,c);
    cout << "The minimum is:"<<minimum;

}
