#include<string>

 class Account//定义类
{
 public:
    explicit Account(int);//初始数据成员
    void credit(int);//添加数额
    void debit(int);//减少数额
    int getBalance()const;//返回值

 private:
    int banlance;
};


