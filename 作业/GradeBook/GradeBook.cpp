#include<iostream>
#include"GradeBook.h"

 using namespace std;

 GradeBook::GradeBook(string name1,string name2)

 {setCourseName(name1);
 setNameofTeacher(name2);}//���캯������
 void GradeBook::setCourseName(string name1)
 {
     CourseName=name1;
 }
//set ��������
  string GradeBook::getCourseName()const
 {return CourseName;}
   //get��������
void GradeBook::setNameofTeacher(string name2)
 {
    NameofTeacher=name2;
 }

 string GradeBook::getNameofTeacher()const
 {return NameofTeacher;}

 void GradeBook::displaymessage()const
 {
     cout<<"Welcome to the grade book for "<<"!"
     <<getCourseName()
     <<"\nThis course is presented by "<<getNameofTeacher();//��ʾ���
 }


