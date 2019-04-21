#include <iostream>

using namespace std;

int qualityPoint(int n)
{
    int m=0;
    m=static_cast<int>(n/10);

    switch(m)
       {case 10:return 4;
       case 9:return 4; break;
       case 8:return 3; break;
       case 7:return 2; break;
       case 6:return 1; break;
       default:return 0;}

}

int main()
{
    int grade=0;
    int result=0;
    cout << "Enter the grade of student:\n";
    cin >> grade;
    result=qualityPoint(grade);
    cout<<result;
}
