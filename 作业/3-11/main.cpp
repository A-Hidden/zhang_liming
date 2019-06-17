#include <iostream>
#include<string>
#include"GradeBook.h"
using namespace std;

//使用string时绝对不能少了“”或者''

int main()
{
    GradeBook myGradeBook("C++","Shi Bo");//""不能少;
    cout<<"Initial:";
    myGradeBook.displayMessage();

    myGradeBook.setcourseName("Chinese");
    myGradeBook.setteacherName("She");
    cout<<"After:";
    myGradeBook.displayMessage();

}
