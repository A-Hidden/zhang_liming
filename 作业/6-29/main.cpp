#include <iostream>

using namespace std;

int prime (int n)
{
    for(int i=1;i<=n;i++)
    {
        if (n%i==0);//������Ϊ����Ϊ����
        else return n;
            //ֻҪ����һ����һ��������֮�������
       //�Ϳ��Զ϶���������������ѭ��
    }

}

int main()
{    //��2ѭ����10000
    //�������
    int c;
   for(int counter=2;counter<=10000;counter++)
   {
       c=prime(counter);
       cout<<c<<"\n";
   }

}
