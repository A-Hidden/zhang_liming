//6-34������
#include <iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{

   //��Ϸ������ʾ
   int num=0;//�û���������
   int comnum=0;//�����������
   char s=0;

     //ʹ��do-whileʹ��Ϸ��������һ��
    do
   {
       cout << "I have a number between 1 to 1000.\n";
       cout<<"Can you guess my number?\n";
       cout<<"Please type your first number:\n";

      //���������Ҫ����ѭ�����Է���Զ�޷��������
     srand(static_cast<unsigned int>(time(0)));
     comnum=1+rand()%1000;//������1��1000�������������

      for(;num!=comnum;) //����Ҳ²�������ʱѭ��
     {
        cin>>num;//��ȡ�û���������

    //3����Ϸ���
    if (num==comnum)//������
       {
           cout<<"Excellent!You guessed the number.\n";
           cout<<"Would you like to play it again(y or n)?\n";

       }
      else if (num<comnum)
        {
           cout<<"Too low.Try again.\n";
        }
       else if (num>comnum)
          {
           cout<<"Too high.Try again.\n";
          }//end if
     }//end do-while
     cin>>s;

   }
      while(s =='y' || s =='Y');//end do-while
   //���һ��do-whileѭ�������������������

}
