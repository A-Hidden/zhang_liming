#include<iostream>
#include"Account.h"
using namespace std;

Account::Account(int balance)
{
    setBalance(balance);
}

//保证数据有效性
void Account::setBalance(int balance)
{
    if(balance>=0)
        Balance=balance;
    else
      {
        Balance=0;
        cerr<<"The balance is false.\n";
      }

}

void Account::credit(int increase)
{
    Balance+=increase;
}

void Account::debit(int decrease)
{
    if(decrease<=Balance)
        Balance-=decrease;
    else
        cerr<<"Debit amount exceeded account balance.\n";
}

int Account::getBalance()const
{
    return Balance;
}

void Account::displayMessage()const
{
    cout<<"Your balance is:"<<getBalance()<<"\n";
}
