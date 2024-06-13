#include<iostream>
using namespace std;

int num(int n){
    int i=0,sum=0;
    while(n>0){
    i=n%10;
    sum+=i;
    n=n/10;
    }
    return sum;
}
int main(){
    cout<<num(12345);
    return 0;
}