//6-33ģ����Ӳ��
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

unsigned int flip()//���β�
{
  srand (static_cast<unsigned int>(time(0)));//��ȡϵͳʱ��
  unsigned int num=(rand()%2);//0��1�������
  //0�Ǳ���Tail
  return num;//���������
}
int main()
{
    unsigned int flip();//��������
    unsigned int Hnum=0;//Head���ִ���
    unsigned int Tnum=0;//Tail���ִ���
    unsigned int counter=1;
    for(;counter<=100;counter++)//������������ξͿɴﵽ1��1������
    {
        if(flip())//����������1Ϊ��
           {cout<<"Head\n";
            Hnum++;
            }
         else//������0
           {cout<<"Tail\n";
            Tnum++;}

    }
    cout<<"The times of head is:"<<Hnum<<"\nThe times of tail is:"<<Tnum;//������ִ���
}
