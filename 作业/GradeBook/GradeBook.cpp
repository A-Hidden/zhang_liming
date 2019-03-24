#include<iostream>
#include"GradeBook.h"

 using namespace std;

 GradeBook::GradeBook(string name1,string name2)

 {setCourseName(name1);
 setNameofTeacher(name2);}//构造函数主体
 void GradeBook::setCourseName(string name1)
 {
     CourseName=name1;
 }
//set 函数主体
  string GradeBook::getCourseName()const
 {return CourseName;}
   //get函数主体
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
     <<"\nThis course is presented by "<<getNameofTeacher();//显示语句
 }


