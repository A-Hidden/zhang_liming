#include <iostream>

using namespace std;

int main()
{
    int number=0;
    int i=0;//as counter to calculate the average
    double sum=0;//sum result
    double aver=0;//as average

    cout<<"Prompt:9999 is the terminator.";
    cout<<"\nPlease enter the numbers to calculate:";

    for(i=0,number=0;number<9999;i++)
    {
        sum=sum+number;
        aver=sum/i;
        cin>>number;
    }

   cout<<"The average is :"<<aver;
}
