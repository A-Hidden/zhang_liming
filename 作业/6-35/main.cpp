//6-35猜数字2.0
#include <iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{

   //游戏操作提示
   int num=0;//用户猜想数字
   int comnum=0;//电脑随机数字
   char s=0;
   int counter=0;//猜想次数计数器

     //使用do-while使游戏至少运行一次
    do
   {
       cout << "I have a number between 1 to 1000.\n";
       cout<<"Can you guess my number?\n";
       cout<<"Please type your first number:\n";

      //电脑随机数要放在循环外以防永远无法产生结果
     srand(static_cast<unsigned int>(time(0)));
     comnum=1+rand()%1000;//电脑在1到1000内随机生成数字

      for(;num!=comnum;) //当玩家猜不到数字时循环
     {
        cin>>num;//读取用户猜想数字
        ++counter;//输入一次数字计数器加一

    //3种游戏结果
    if (num==comnum)//若猜中
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
     cin>>s;//读取玩家意愿

   }
     while(s =='y' || s =='Y');//end do-while
   //外加一个do-while循环可以允许再玩任意次

}
