#include<iostream>
using namespace std;

int main(){
    
     
     do{
        int n;
    cout<<"Enter the number: ";
    cin>>n;
        
        if(n%10==0){
            break;
        }
        cout<<n<<endl;
     }while(true);
    
}