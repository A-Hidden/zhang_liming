#include"Account.h"
#include<iostream>
using namespace std;
int balance,initialbalance;
 Account::Account(int)
{
  if(initialbalance>=0)
    balance=initialbalance;//将出值赋予balance
  else
  {balance=0;
  cout<<"Error";}

}//构造函数初始化,并设置相应规则

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
//返回值函数
int Account::getBalance()const
{
    return balance;
}
