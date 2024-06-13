#include<iostream>
using namespace std;


// float multi(float a,float b){
//     float c=a*b;
//     return c;
// }

// char evenOdd(int n){
//     if(n%2==0){
//         return 'E';
//     }
//     else{
//         return 'O';
//     }
// }

int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
//     float a,b;
//     cout<<"enter two numbers: ";
//     cin>>a>>b;
//    cout<< multi(a,b);
//     cout<<endl;
//     int n;
//     cout<<"Enter number to check even or odd: ";
//     cin>>n;
//     cout<<evenOdd(n);
//     cout<<endl;
    //   int x;
    //   cout<<"Enter the number: ";
    //   cin>>x;
     cout<< fact(5);
}