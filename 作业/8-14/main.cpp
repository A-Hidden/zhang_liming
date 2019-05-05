
//8-14用于统计输入字符数
#include <iostream>

using namespace std;


int main()
{
    void mystery2(const char *);//声明函数
  char string1[80];

  cout<<"Enter a string:";
  cin>>string1;//把字符串分解为字符作为string1的数组元素
  cout<<mystery2(string1)<<endl;
}

int mystery2(const char *s)//指向string1
{
    unsigned int x;//作为计数器记录字符串长度
    for(x=0;*s!='\0';++s)
    {
        ++x;
    }    //x自增，直到s指向空格循环停止


     return x;
}
