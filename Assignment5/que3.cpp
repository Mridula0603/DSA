#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum=0;
    for(int i=0;n>0;i++){
        i=n%10;
        cout<<"The cube of the digit "<<i<< " is: "<<i*i*i<<endl;
        sum=sum+ i*i*i;
        n/=10;

    }
    cout<<"\n"<<"Sum of cubes of digits: "<<sum<<endl;
}