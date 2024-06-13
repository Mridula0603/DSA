#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i;
    int sum=0;
    while(n>0){
        i=n%10;
        // if(i%2!=0){
        //     sum=sum+i;
        // }
       // sum=sum+i;

       int rev=0;
       rev= rev*10+i;
       cout<<rev;
        n=n/10;
    }
   // cout<<sum;
}