#include <iostream>

using namespace std;

int main()
{
    unsigned int n=0;//��Ҫ����
    unsigned int i=1;//������
    double result=1;
    double e=1;//����ʽ���
    cout<<"Please enter what you want to calculate:";//��ʾ
    cin>>n;//���뾫��

    while(i<=n)
       {
        result*=(1.0/i);
        e+=result;
        i++;
       }

    cout<<"e="<<e;

}
