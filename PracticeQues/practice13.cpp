#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //stars
        for(int k=1;k<=(2*i-1);k++){
            cout<<"* ";
        } 
        cout<<endl; 
          }
    //    for(int i=1;i<=n;i++){
    //     //spaces
    //     for(int j=0;j<i-1;j++){
    //         cout<<"  ";
    //     }
    //     //stars
    //     for(int k=1;k<=((2*n)-(2*i)+1);k++) {
    //         cout<<"* ";
    //     }   
    //     cout<<endl;
    //        }

          for(int i=n;i>=1;i--){
            //spaces
            for(int j=1;j<=n-i;j++){
                cout<<"  ";
            }
            //stars
            for(int k=1;k<=2*i-1;k++){
                cout<<"* ";
            }
            cout<<endl;
          }

}