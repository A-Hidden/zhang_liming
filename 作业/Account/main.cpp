#include<iostream>
#include"Account.h"
#include<string>
using namespace std;

int main()
{  int credit,debit;
   Account account;
   cout<<"enter your credit:";
   cin>>credit>>account.credit();
   cout<<"enter your debit:";
   cin>>debit>>account.debit();
   cout<<"your balance is"<<account.getBalance();
}
