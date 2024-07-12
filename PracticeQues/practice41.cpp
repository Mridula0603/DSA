#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void oddOrEven(int n){
    if(n&1){
        cout<<"odd\n";
    }
    else{
        cout<<"even\n";
    }
}
void getithBit(int n,int i){
    int bitmask= 1<<i;
    if(!(n& bitmask)){
         cout<<"0\n";
    }
    else{
        cout<<"1\n";
    }
    }
void SetithBit(int num,int i){
    int bitmask= 1<<i;
    cout<< (num|bitmask);
}
void clearithBit(int n, int i){
    int bitmask= ~(1<<i);
    n= n&bitmask;
    cout<<n;
}
bool isPowerof2(int num){
    if(!(num&(num-1))){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    oddOrEven(6);
    oddOrEven(7);

    getithBit(6,2);
    getithBit(6,3);

    SetithBit(6,3);
    cout<<endl;
    SetithBit(6,4);
    cout<<endl;

    clearithBit(6,1);
    cout<<endl;
    clearithBit(6,2);
    cout<<endl;

    cout<<isPowerof2(16)<<endl;
    cout<<isPowerof2(25);
return 0;
}