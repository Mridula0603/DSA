#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
     return true;
}
void allPrime (int n){
    for(int i=2;i<=n;i++){
     if(isPrime(i)){
        cout<<i<<" ";
    }
    }
    
}
int main(){
   allPrime(10);
    return 0;
}