#include <iostream>

using namespace std;

 int celsius (int fah)//���������¶�C
{
    int C =0;
    C=5*(fah-32)/9;
    return C;

}
 int fahrenheit (int cel)//���ػ����¶�F
{
    int F=0;
    F=(9*cel)/5+32;
    return F;
}
int main()
{
    int F =0;//���廪���¶ȱ���
    int C =0;//���������¶ȱ���

    cout<<"�����¶�\t"<<"�����¶�\n";
    for (int i=0;i<=100;i++)
    {
        F=fahrenheit(i);
        cout << i << "\t\t";
        cout << F <<"\n";
    }//0~100�����¶ȶ�Ӧ�Ļ����¶�

    cout<<"�����¶�\t"<<"�����¶�\n";
    for (int n=32;n<=212;n++)
    {
        C=celsius(n);
        cout << n<<"\t\t";
        cout << C << "\n";
    }//32~212�����¶ȶ�Ӧ�������¶�

}
