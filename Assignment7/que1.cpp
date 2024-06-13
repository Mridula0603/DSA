//palindrome number 
#include<iostream>
using namespace std;

int reverse(int n){
    int i=0, rev=0;
    while(n>0){
    i=n%10;
    rev=rev*10+i;
    n=n/10;
    }
    return rev;
}
int palinD (int n){
    if(reverse(n)==n){
    cout<<"Number is palindrome"<<endl;
    }
    else {
        cout<<"Number is not palindrome"<<endl;

    }
}
int main(){
    palinD(121);
    palinD(321);
}