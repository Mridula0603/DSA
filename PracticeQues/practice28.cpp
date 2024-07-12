#include<iostream>
using namespace std;
//selection sort

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i;j<n;j++){
            if(arr[minidx]>arr[j]){
                swap(arr[minidx],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
       int arr[]={5,4,1,34,6,22,66,3,2};
       int n=sizeof(arr)/sizeof(int);
       selectionSort(arr,n);
}