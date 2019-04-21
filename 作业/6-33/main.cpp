//6-33模拟抛硬币
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

unsigned int flip()//无形参
{
  srand (static_cast<unsigned int>(time(0)));//读取系统时间
  unsigned int num=(rand()%2);//0和1随机生成
  //0是背面Tail
  return num;//返回随机数
}
int main()
{
    unsigned int flip();//函数声明
    unsigned int Hnum=0;//Head出现次数
    unsigned int Tnum=0;//Tail出现次数
    unsigned int counter=1;
    for(;counter<=100;counter++)//若运行无数多次就可达到1：1的情形
    {
        if(flip())//若函数返回1为真
           {cout<<"Head\n";
            Hnum++;
            }
         else//若返回0
           {cout<<"Tail\n";
            Tnum++;}

    }
    cout<<"The times of head is:"<<Hnum<<"\nThe times of tail is:"<<Tnum;//输出出现次数
}
