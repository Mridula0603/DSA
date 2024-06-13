#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    bool isPrime=true;
       
     for(i=2;i<=n;i++){
        int j=i;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
            else{
                isPrime=true;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
        // else{
        //     cout<<"Not a prime number"<<endl;
        // }
        
     }
      
     return 0;

}