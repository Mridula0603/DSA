#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"The number of times for which you want to print the number: ";
    cin>>n;
    int sum=0;

    for(int i=0; i<=n; i++){
        sum=sum+i;
        
    }
    cout<<sum<<" "<<endl;
    
    return 0;
}