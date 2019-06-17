#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>

class Account
{
public:
    //接收初始余额并初始化数据成员
    //保证余额的有效性
    Account(int balance);

   void setBalance(int balance);//保证有效性,即保证>=0

   void credit(int increase);//将金额加入余额,存钱

   void debit(int decrease);//保证取出的钱不超过余额,取钱

   int getBalance()const;//交互显示

   void displayMessage()const;

private:
    int Balance;//余额
};

#endif // ACCOUNT_H
