#include <iostream>
#include<string>
#include"GradeBook.h"
using namespace std;

//ʹ��stringʱ���Բ������ˡ�������''

int main()
{
    GradeBook myGradeBook("C++","Shi Bo");//""������;
    cout<<"Initial:";
    myGradeBook.displayMessage();

    myGradeBook.setcourseName("Chinese");
    myGradeBook.setteacherName("She");
    cout<<"After:";
    myGradeBook.displayMessage();

}
