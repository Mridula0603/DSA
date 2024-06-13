#include<iostream>
#include<cmath>
using namespace std;
//prime or not
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    bool isPrime=true;

    for(int i=2;i<=sqrt(n);i++) {
      if(n%i==0){
        isPrime=false;
        break;
      }
    }
      if(isPrime){    
        cout<<"Prime number"<<endl;
      }
      else{
        cout<<"Not a prime number"<<endl;
      }
     return 0;
    }
