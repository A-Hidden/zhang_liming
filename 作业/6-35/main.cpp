//6-35������2.0
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
   int counter=0;//�������������

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
        ++counter;//����һ�����ּ�������һ

    //3����Ϸ���
    if (num==comnum)//������
       {
           cout<<"Excellent!You guessed the number.\n";
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

     if(10==counter)
      {
         cout<<"Aha!You know the secret!";
       }
      else if (counter<=10)
        {
           cout<<"Either you know the secret or you got lucky! ";
        }
       else if (counter>=10)
         {
            cout<<"You should be able to be better!";
         }//end if

     cout<<"\nWould you like to play it again(y or n)?\n";
     cin>>s;//��ȡ�����Ը

   }
     while(s =='y' || s =='Y');//end do-while
   //���һ��do-whileѭ�������������������

}
