#include<string>

 class Account//������
{
 public:
    explicit Account(int);//��ʼ���ݳ�Ա
    void credit(int);//�������
    void debit(int);//��������
    int getBalance()const;//����ֵ

 private:
    int banlance;
};


