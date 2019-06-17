#include<string>
#include<iostream>
#include"GradeBook.h"
using namespace std;

//调用函数必须要加函数名和其后的（）

GradeBook::GradeBook(string cname,string tname)//构造函数不需要标注explicit
:courseName(cname),teacherName(tname)//初始化列表
   {};//空函数体


void GradeBook::setcourseName(string cname)
{
    courseName=cname;
}

void GradeBook::setteacherName(string tname)
{
    teacherName=tname;
}


string GradeBook::getcourseName()const
{
    return courseName;
}

string GradeBook::getteacherName()const
{
    return teacherName;
}


void GradeBook::displayMessage()const
{
    cout<<"Welcome to the"<<getcourseName();
    cout<<"\nIt is presented by"<<getteacherName()<<"\n";
}
