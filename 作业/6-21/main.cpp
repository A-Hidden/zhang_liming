#include <iostream>

using namespace std;

int iseven(int a)
{
    if (a%2==0)
        cout << "true\t";
    else cout << "false\t";
    return 0;
}

int main()
{
    int a=0;
    int n=0;
    cout << "Enter the number of numbers:\n";
    cin >> n;
    cout << "Please enter the integer numbers:\n";

    for (int i=1;i<=n;i++)
    {
        cin >> a;
        iseven(a);
    }

}
