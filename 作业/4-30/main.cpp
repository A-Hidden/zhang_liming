#include <iostream>
#define PI 3.14159
using namespace std;

int main()
{
   double r=0;//�뾶
   double L=0;//ֱ��
   double D=0;//�ܳ�
   double S=0;//���
   cout<<"Please enter the radius:";
   cin>>r;
   L=2*r;
   D=2*PI*r;
   S=PI*r*r;
   cout<<"The diameter is:"<<L;
   cout<<"\nThe perimeter is:"<<D;
   cout<<"\nThe area is:"<<S;
}
