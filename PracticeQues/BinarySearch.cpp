#include<iostream>
using namespace std;

void printArr(int arr[],int n, int key){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int BinarySearch(int arr[],int n, int key){
    int st=0,end=n-1;
    int mid=(st+end)/2;
    while(st<=end){
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            st= mid+1;
            mid=(st+end)/2;
        }
        else{
            end=mid-1;
            mid=(st+end)/2;
        }
    }
    return -1;
}
    
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n= sizeof(arr)/sizeof(int);
    int key;
    printArr(arr,n,key);
    
    cout<<"Enter the Key = ";
    cin>>key;
   
    cout<<BinarySearch(arr,n,key);

}