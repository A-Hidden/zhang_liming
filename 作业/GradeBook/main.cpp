#include<iostream>
#include <string>
#include "GradeBook.h"
using namespace std;
int main()
{
  GradeBook gradebook("C++","Mr.Shi");
  std::cout<<"Welcome to the grade book for"<<gradebook.getCourseName()<<"!"<<endl;
  cout<<"\nThis course is presented by:"<<gradebook.getNameofTeacher()<<"!"<<std::endl;
}

