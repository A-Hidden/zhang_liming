#include<string>
#include<iostream>
#include"GradeBook.h"
using namespace std;

//���ú�������Ҫ�Ӻ����������ģ���

GradeBook::GradeBook(string cname,string tname)//���캯������Ҫ��עexplicit
:courseName(cname),teacherName(tname)//��ʼ���б�
   {};//�պ�����


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
