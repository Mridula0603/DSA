#include<iostream>
using namespace std;

int property(int a, int b){
    int result=a^2+b^2+2*a*b;
    cout<<"result= "<<result<<endl;
     return result;
    }
   int write(int a,int b){
    cout<<"a^2 + b^2 + 2*a*b = "<<a<<"^"<<2<<" + "<<b<<"^"<<2<<" + "<<2<<"*"<<a<<"*"<<b<<endl;
   }
int main(){
    cout<<"Enter two numbers: ";
    int a,b;
    cin>>a>>b;
    write(a,b);
    property(a,b);
   
    return 0;
}