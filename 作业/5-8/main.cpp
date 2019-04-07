#include <iostream>

using namespace std;

int main()
{
    int n=0;//the times
    int i=0;//the counter
    int minimum=0;//as the minimum
    int number=0;//as the number's storage

   cout <<"How many times do you want to compared?\n";
   cin>>n;

   cout <<"Please input the numbers to be compared:\n";

   cin >>minimum;//input the first number

   for (i=2;i<=n;i++)//the first i=2
   {
       cin >> number;//input the second number
    if(minimum>=number)//comparison
        minimum=number;

   }

   cout <<"The minimum is:"<< minimum;
}
