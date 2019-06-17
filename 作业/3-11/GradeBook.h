#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include<string>

class GradeBook
{
public:
    //explicit ֻ������һ���β�ʱ������
    //std���˫ð�ţ���
    //set�����������޸��βεģ����ܼ�const
    GradeBook(std::string,std::string);//define constructor function

    void setcourseName(std::string cname);//��ͻ�����
    void setteacherName(std::string tname);

    std::string getcourseName()const;//û���β�ֻ��������ݳ�Ա������
    std::string getteacherName()const;

    void displayMessage()const;//�˻���������ӭ��Ϣ

private:
    std::string courseName;
    std::string teacherName;
};

#endif // GRADEBOOK_H
