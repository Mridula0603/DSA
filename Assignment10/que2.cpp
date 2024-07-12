#include<iostream>
using namespace std;
//rewriting the array from given index.

int rewriting(int arr[],int n,int target){
    if(target>=n){
        cout<<"invalid index";
    }
    int temp=target;
    int nums[n];
    for(int i=0;i<n;i++){
        while(target<n){
            nums[i]=arr[target];
            target++;
            cout<<nums[i]<<" ";
        }
    }
   for(int i=0;i<temp;i++){
    nums[i]=arr[i];
    cout<<nums[i]<<" ";
   }
}
int writeindexnumber(int arr[],int n,int target){
    if(target>=n){
        cout<<"invalid index";
    }
     int val;
     for(int i=0;i<n;i++){
        val=arr[target];
     }
     cout<<val;
}
int writearrayelement(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            cout<<i;
            return i;
        } 
    } 
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    // int target;
    // cout<<"Enter the the value of index: ";
    // cin>>target;

    int element;
    cout<<"Enter the the value of element you want to find: ";
    cin>>element;
    // rewriting(arr,n,target);
    // writeindexnumber(arr,n,target);
    writearrayelement(arr,n,element);
}