#include<iostream>
using namespace std;
//positive, negative, zero;

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if(a>0){
        cout<<"The number is positive";
    }
    else if(a<0){
        cout<<"The number is negative";
    }
    else{
        cout<<"The number is zero";
    }
    return 0;
}