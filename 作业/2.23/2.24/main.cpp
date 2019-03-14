#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Please enter an integer:" << endl;
    cin>>a;

    if(a%2==0)
        cout<<"这是偶数";

    else cout<<"这是奇数";

    return 0;
}
