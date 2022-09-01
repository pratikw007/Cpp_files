#include<iostream>
using namespace std;

int main(){
    //The factorial of a Number 
    // 6! = 1*2*3*4*5*6   
    int number;
    cout<<"Number:- ";
    cin>>number; //3

    int factorial = 1;

    for(int i = number; i>=1; i--){
        factorial = factorial * i;
    }

    cout<<number<<"!=" <<factorial;
}