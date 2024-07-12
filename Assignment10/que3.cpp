#include<iostream>
using namespace std;

 int maxproduct(int arr[],int n){
    int maxproduct=INT32_MIN;
    for(int start=0;start<n;start++){
        int currproduct=1;
        for(int end=start;end<n;end++){
            currproduct*=arr[end];
            maxproduct=max(maxproduct,currproduct);
        }
    } 
    cout<<"Maximum product of the given subarray is: "<<maxproduct;
    cout<<endl;
    return maxproduct;
 }
 int main(){
    int arr[]={2,3,-2,5,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<"The given array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    maxproduct(arr,n);
 }