#include<iostream>
using namespace std;

int main(){
     float Num1,Num2;
     char operation;
     cout<<"***CodePratik Calculator***"<<endl;
     cin>>Num1>>operation>>Num2;

     switch (operation)
     {
       case '-':cout<<Num1<<operation<<Num2<<"="<<Num1 - Num2;break;
       case '+':cout<<Num1<<operation<<Num2<<"="<<Num1 + Num2;break;
       case '/':cout<<Num1<<operation<<Num2<<"="<<Num1 / Num2;break;
       case '*':cout<<Num1<<operation<<Num2<<"="<<Num1 * Num2;break;     
       case '%':
       bool isnum1Int, isnum2Int;
      isnum1Int=((int)Num1 == Num1);//5=5.0
      isnum2Int=((int)Num2 == Num2);
 
      if(isnum1Int && isnum2Int)
        cout<<Num1<<operation<<Num2<<"="<<(int)Num1 % (int)Num2;
      else
      cout<<"Not valid!";
      break;
      default:cout<<"Not Valid Operation!!"<<endl;
     }
    
     system("pause>0");

}