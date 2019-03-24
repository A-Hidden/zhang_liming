#include<string>

class GradeBook
{
public:
    explicit GradeBook(std::string name1,std::string name2);
    void setCourseName(std::string name1);
    std::string getCourseName() const;
    void setNameofTeacher(std::string name2);
    std::string getNameofTeacher()const;
    void displaymessage() const;

private:
    std::string CourseName;
    std::string NameofTeacher;
};
