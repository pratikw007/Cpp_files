// increment Decrement Operator

#include<iostream>
using namespace std;
// 1st priority Arithmatic operator -,+,/,*

int main(){
    int counter = 7;
    // 2nd priority Unary operators
    counter++;
    cout<<counter<<endl;
    counter--;
    cout<<counter<<endl;

    int counter2 = 7;
    cout<<++counter2<<endl;
    cout<<counter2--<<endl;
    cout<<counter2<<endl;


    system("cls");
    // <,>,<=,>=,==,!=  2nd priority relational operator
    int a = 5, b = 15; 
    cout<<(a==b);
    system("pause>0");
     system("cls");
 
     // &&,||,!       3rd priority  logical operator
     cout<<(a==5 || b==10+5);
     system("clr");

     //=,+=,-=,*=,/=,%=
     int x = 5;
     x += 7;
    //  x = x + 7; 
    cout<<x<<endl;
    system("pause>0");

        
}
