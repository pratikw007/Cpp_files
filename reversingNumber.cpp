#include<iostream>
using namespace std;

int main(){

    //Reversing the number
    int number,reversNumber = 0; //0
    cout<<"Number: ";
    cin>>number;

    while (number !=0){
            //  reversNumber  = reversNumber * 10
            reversNumber *= 10;
            // int lastDigit = number % 10;
            reversNumber += number % 10;
            number /= 10;
    }
    cout<<"Reverase:"<<reversNumber;
    system("pause>0");
}