#include<iostream>
using namespace std;
//linear search

int linearSearch(int arr[],int n,int key){
    for(int i=1;i<=n;i++){
        if(arr[i]==key){
         cout<<"index of the key is: " <<i;
         break;
        }
    }
    // cout<<"not found"<<endl;
}
int main(){
    int arr[]={2,4,6,8,10,12,1,14,16,18};
    int n= sizeof(arr)/sizeof(int);
    // int key=12;
   linearSearch(arr,n,10);
 return 0;
}