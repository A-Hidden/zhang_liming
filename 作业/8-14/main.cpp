
//8-14����ͳ�������ַ���
#include <iostream>

using namespace std;


int main()
{
    void mystery2(const char *);//��������
  char string1[80];

  cout<<"Enter a string:";
  cin>>string1;//���ַ����ֽ�Ϊ�ַ���Ϊstring1������Ԫ��
  cout<<mystery2(string1)<<endl;
}

int mystery2(const char *s)//ָ��string1
{
    unsigned int x;//��Ϊ��������¼�ַ�������
    for(x=0;*s!='\0';++s)
    {
        ++x;
    }    //x������ֱ��sָ��ո�ѭ��ֹͣ


     return x;
}
