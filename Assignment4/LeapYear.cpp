#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Year: ";
    cin>>a;

    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                cout<<"The year is a Leap Year.";
            }
            else{
                cout<<"The year is not a Leap Year.";
            }
            // cout<<"This year is just a centuary year.";
        }
       cout<<"This year is just a centuary year.";
    }
    else{
        cout<<"This year is not a Leap Year.";
    }
    return 0;
}