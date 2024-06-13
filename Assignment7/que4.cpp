#include<iostream>
using namespace std;


int large(int a, int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    cout<<large(20,60,40);
    return 0;
}