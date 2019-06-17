#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include<string>

class GradeBook
{
public:
    //explicit 只能用于一个形参时的声明
    //std后加双冒号：：
    //set函数是用于修改形参的，不能加const
    GradeBook(std::string,std::string);//define constructor function

    void setcourseName(std::string cname);//与客户交互
    void setteacherName(std::string tname);

    std::string getcourseName()const;//没有形参只起调用数据成员的作用
    std::string getteacherName()const;

    void displayMessage()const;//人机交互，欢迎信息

private:
    std::string courseName;
    std::string teacherName;
};

#endif // GRADEBOOK_H
