#include"Account.h"
#include<iostream>
using namespace std;
int balance,initialbalance;
 Account::Account(int)
{
  if(initialbalance>=0)
    balance=initialbalance;//����ֵ����balance
  else
  {balance=0;
  cout<<"Error";}

}//���캯����ʼ��,��������Ӧ����

void Account::credit(int ad)
{
    balance=balance+ad;
}
void Account::debit(int reduce)
{
    if(reduce>balance)
    {
        balance=initialbalance;
        cout<<"Debit amount exceeded account balance"<<endl;
    }
    else balance=balance-reduce;
}
//����ֵ����
int Account::getBalance()const
{
    return balance;
}
