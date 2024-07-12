#include<iostream>
using namespace std;

    //with extra space;
    // int arr[]={5,4,3,9,2};
    // int n= sizeof(arr)/sizeof(int);

    // int copyArr[n];
    // for(int i=0; i<n; i++){
    //     copyArr[i]=arr[n-i-1];
    //     cout<<copyArr[i]<<" ";
    // }

    void printArr(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
int main(){
    //without extra space;
    int arr[]={5,4,3,9,2};
    int n= sizeof(arr)/sizeof(int);

    int start=0;
    int end=n-1;

    while(start<end){
        // swap(arr[start_indx],arr[end_indx]);
        
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }

    printArr(arr,n);
    
    }