#include <iostream>

using namespace std;

 int celsius (int fah)//返回摄氏温度C
{
    int C =0;
    C=5*(fah-32)/9;
    return C;

}
 int fahrenheit (int cel)//返回华氏温度F
{
    int F=0;
    F=(9*cel)/5+32;
    return F;
}
int main()
{
    int F =0;//定义华氏温度变量
    int C =0;//定义摄氏温度变量

    cout<<"摄氏温度\t"<<"华氏温度\n";
    for (int i=0;i<=100;i++)
    {
        F=fahrenheit(i);
        cout << i << "\t\t";
        cout << F <<"\n";
    }//0~100摄氏温度对应的华氏温度

    cout<<"华氏温度\t"<<"摄氏温度\n";
    for (int n=32;n<=212;n++)
    {
        C=celsius(n);
        cout << n<<"\t\t";
        cout << C << "\n";
    }//32~212华氏温度对应的摄氏温度

}
