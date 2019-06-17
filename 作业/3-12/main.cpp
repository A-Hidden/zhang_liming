#include <iostream>
#include"Account.h"
using namespace std;

int main()
{
    Account account1(200);
    Account account2(500);

    cout<<"Initial:";
    account1.displayMessage();
    cout<<"Initial:";
    account2.displayMessage();

    account1.credit(20);
    account2.debit(20);

    cout<<"Now:";
    account1.displayMessage();
    cout<<"Now:";
    account2.displayMessage();

}
