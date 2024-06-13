#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter the operator: ";
    cin>>op;
     
     switch (op)
     {
     case '+':
        cout<<"Sum is: "<<a+b;
        break;
     case '-':
        cout<<"subtraction is: "<<a-b;
        break;
     case '*':
        cout<<"Multiplication is: "<<a*b;
        break;
     case '/':
        cout<<"Division is: "<<a/b;
        break;
     
     default: cout<<"Invalid operator";
        break;
     }
    

}