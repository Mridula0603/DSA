#include<iostream>
using namespace std;
//sum of three numbers with 18% tax.
int main(){
    float a,b,c;
    cout<<"Price of pencil: ";
    cin>>a;
    cout<<"Price of pen: ";
    cin>>b;
    cout<<"Price of eraser: ";
    cin>>c;
    float sum=a+b+c;
    float tax=sum*0.18;
    cout<<"Your bill is: "<<sum+ tax<<"\n";
    cout<<"The tax added: "<<tax;


    return 0;

}