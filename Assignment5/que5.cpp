#include<iostream>
using namespace std;

int main(){
    int n,first=0,second=1;
    cout<<"Enter the number: ";
    cin>>n;

    int sum=0;
    for(int i=2; i<=n;i++){
        sum= first + second;
        cout<<sum<<endl;
        first=second;
        second=sum;
    }
}