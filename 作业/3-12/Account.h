#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>

class Account
{
public:
    //���ճ�ʼ����ʼ�����ݳ�Ա
    //��֤������Ч��
    Account(int balance);

   void setBalance(int balance);//��֤��Ч��,����֤>=0

   void credit(int increase);//�����������,��Ǯ

   void debit(int decrease);//��֤ȡ����Ǯ���������,ȡǮ

   int getBalance()const;//������ʾ

   void displayMessage()const;

private:
    int Balance;//���
};

#endif // ACCOUNT_H
