#include <iostream>

using namespace std;

int main()
{
    int i=0;//as counter
   int result=1;//the final result

   for(i=1;i<=15;i++)//�ж��Ƿ���1-15
   {
      if(i%2!=0)//�ж��Ƿ�Ϊ����
        result*=i;//���������
         //�����������ж�
   }

    cout<<"The result is:"<<result;
}
